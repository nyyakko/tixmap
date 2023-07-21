cmake_minimum_required(VERSION 3.1)
project(!PROJECT_TEMPLATE! LANGUAGES !PROJECT_LANGUAGE!)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

include(clang_tidy)

#
# find_package(package CONFIG REQUIRED)
# . . .
#
# set(!PROJECT_TEMPLATE!_ExternalLibraries)
#

add_subdirectory(!PROJECT_TEMPLATE!)