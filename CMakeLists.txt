cmake_minimum_required(VERSION 4.0)

# MUST be before project()
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")
set(CMAKE_CXX_MODULE_STD ON)

project(mad VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(MAD_BUILD_EXAMPLES "Build example programs" OFF)
if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# OpenGL loader into a C++20 Module
add_library(mad)
add_library(mad::mad ALIAS mad)
target_sources(mad PUBLIC FILE_SET CXX_MODULES FILES
        src/gl.cppm
)


# OpenGL bindings with typesafe handles and enums
add_library(angry)
add_library(angry::angry ALIAS angry)
target_link_libraries(angry PUBLIC mad::mad)
target_sources(angry PUBLIC FILE_SET CXX_MODULES FILES
        src/gm.cppm
)

# OpenGL bindings with typesafe handles and enums and return types instead of out params
add_library(livid)
add_library(livid::livid ALIAS livid)
target_link_libraries(livid PUBLIC angry::angry)
target_sources(livid PUBLIC FILE_SET CXX_MODULES FILES
        src/gn.cppm
)
set_target_properties(livid PROPERTIES CXX_MODULE_STD ON)
