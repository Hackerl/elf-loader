cmake_minimum_required(VERSION 3.17)
project(elf_loader C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

add_library(
        elf_loader
        STATIC
        src/loader.c
)

target_include_directories(elf_loader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)