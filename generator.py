from pathlib import Path
import requests
from lxml import etree

header_path = Path("include/vulkan_struct_creator.h")
header_path.touch(exist_ok=True)

source_path = Path("src/vulkan_struct_creator.c")
source_path.touch(exist_ok=True)

tmp_path = Path("tmp")
tmp_path.mkdir(parents=True, exist_ok=True)

xml_path = tmp_path / Path("vk.xml")

if not xml_path.is_file():
    request = requests.get("https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/main/xml/vk.xml")
    xml_path.write_text(request.text)

xml_data: etree.ElementTree = etree.parse(xml_path)

vk_header_path = Path("/usr/include/vulkan/vulkan_core.h")
vk_header_text = vk_header_path.read_text()

header_text = ""
header_text += "#ifndef VULKAN_STRUCT_CREATOR_H\n"
header_text += "#define VULKAN_STRUCT_CREATOR_H\n\n"
header_text += "#include <vulkan/vk_platform.h>\n"
header_text += "#include <vulkan/vulkan.h>\n\n"

source_text = ""
source_text += "#include \"vulkan_struct_creator.h\"\n\n"

for typedef in xml_data.getroot().find("./types"):
    if not "name" in typedef.keys(): continue

    type_name = typedef.get('name')

    if not type_name.startswith("Vk"): continue
    if not type_name.endswith("CreateInfo"): continue
    if type_name not in vk_header_text: continue

    sType = ""
    members = []
    for member in typedef:
        comment = member.find("./comment")
        if comment is not None: member.remove(comment)

        if not sType: sType = member.get("values")

        member = "".join(member.itertext()).strip()
        member = {"type": " ".join(member.split()[:-1]), "name":  member.split()[-1]}
        
        if not [m for m in members if m["name"] ==  member["name"]]: members.append(member)

    if [m for m in members if "[" in m["name"]]: continue

    declaration = f"{type_name} {type_name.replace('Vk', 'vsc')}(\n"
    declaration += ",\n".join([f"    {member['type']} {member['name']}" for member in members[2:]])
    declaration += "\n)"

    header_text += f"{declaration};\n\n"

    source_text += f"{declaration} {{\n"
    source_text += f"    return ({type_name}){{\n"
    source_text += f"        .sType = {sType},\n"
    source_text += f"        .pNext = NULL,\n"
    source_text += "".join([
        f"        .{member['name']} = {member['name']},\n"
        for member in members[2:]
    ])
    source_text += "    };\n"
    source_text += "}\n\n"

header_text += "#endif"

header_path.write_text(header_text)
source_path.write_text(source_text)

# print(xml_data.getroot().find("types"))