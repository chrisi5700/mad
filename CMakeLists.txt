cmake_minimum_required(VERSION 3.28)
project(mad VERSION 0.1.0 LANGUAGES CXX)

option(MAD_BUILD_EXAMPLES "Build example programs" OFF)

add_library(mad)
add_library(mad::mad ALIAS mad)

target_sources(mad PUBLIC FILE_SET CXX_MODULES FILES
        src/gl.cppm
)

target_compile_features(mad PUBLIC cxx_std_23)

if(MAD_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()