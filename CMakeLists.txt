cmake_minimum_required(VERSION 3.5)
project(vulkan_struct_creator C)

set(CMAKE_C_STANDARD 99)

find_package(Vulkan REQUIRED)

add_library(vulkan_struct_creator src/vulkan_struct_creator.c)

target_include_directories(vulkan_struct_creator PUBLIC include/)

target_link_libraries(vulkan_struct_creator PRIVATE Vulkan::Vulkan)
