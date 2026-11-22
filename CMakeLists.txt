cmake_minimum_required(VERSION 3.16)

# ---------------------------------------------------------------------------
# Pokemon HeartGold / SoulSilver - CMake entry point
#
#   PHG_TARGET=PC      (default) native PC port: SDL2 + OpenGL, x86_64
#                      Windows (MinGW-w64 / MSVC), Linux, macOS.
#   PHG_TARGET=DS_IDE  legacy ARM9 project, for IDE indexing only.
#
# The matching Nintendo DS ROM is NOT built by CMake: keep using `make`
# exactly as described in INSTALL.md. Nothing in the PC port changes the
# Makefile build.
# ---------------------------------------------------------------------------

set(PHG_TARGET "PC" CACHE STRING "Build target: PC (native port) or DS_IDE (legacy ARM9 IDE project)")
set_property(CACHE PHG_TARGET PROPERTY STRINGS PC DS_IDE)

if(PHG_TARGET STREQUAL "DS_IDE")
    include(${CMAKE_CURRENT_LIST_DIR}/cmake/ds_ide.cmake)
    return()
elseif(NOT PHG_TARGET STREQUAL "PC")
    message(FATAL_ERROR "Unknown PHG_TARGET='${PHG_TARGET}' (expected PC or DS_IDE)")
endif()

project(PokeHeartGoldPC
    VERSION 0.1.0
    DESCRIPTION "Native PC port of the pokeheartgold decompilation"
    LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Build type" FORCE)
endif()

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(WARNING "PC port is developed for 64-bit hosts; a 32-bit build is untested.")
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
include(PhgSDL2)
include(PhgGame)

enable_testing()

find_package(OpenGL REQUIRED)

add_subdirectory(src/platform_pc)
