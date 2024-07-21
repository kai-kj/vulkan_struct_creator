from pathlib import Path
import requests
from lxml import etree

out_path = Path("vulkan_struct_creator.h")
out_path.touch(exist_ok=True)

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
header_text += "#define VSC_GET_INSTANCE_PROC_ADDR(instance, name) ((PFN_##name)vkGetInstanceProcAddr(instance, #name))\n\n"

source_text = ""
source_text += "#ifdef VULKAN_STRUCT_CREATOR_IMPLEMENTATION\n\n"

for typedef in xml_data.getroot().find("./types"):
    if not "name" in typedef.keys(): continue
    if not typedef.get("category") == "struct": continue

    type_name = typedef.get('name')

    if not type_name.startswith("Vk"): continue
    if not "Info" in type_name: continue
    if type_name not in vk_header_text: continue

    if "alias" in typedef.keys():
        header_text += f"#define {type_name.replace('Vk', 'vsc')} {typedef.get('alias').replace('Vk', 'vsc')}\n\n"
        continue

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

    has_sType = bool([m for m in members if m["name"] == "sType"])
    members = [m for m in members if m["name"] != "sType"]
    
    has_pNext = bool([m for m in members if m["name"] == "pNext"])
    members = [m for m in members if m["name"] != "pNext"]

    declaration = f"{type_name} {type_name.replace('Vk', 'vsc')}(\n"
    declaration += ",\n".join([f"    {member['type']} {member['name']}" for member in members])
    declaration += "\n)"

    header_text += f"{declaration};\n\n"

    source_text += f"{declaration} {{\n"
    source_text += f"    return ({type_name}){{\n"
    if has_sType: source_text += f"        .sType = {sType},\n"
    if has_pNext: source_text += f"        .pNext = NULL,\n"
    source_text += "".join([f"        .{member['name']} = {member['name']},\n" for member in members])
    source_text += "    };\n"
    source_text += "}\n\n"

header_text += "#endif\n\n"
source_text += "#endif\n"

out_path.write_text(header_text + source_text)