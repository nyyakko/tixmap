cmake_minimum_required(VERSION 3.1)
project(tixmap LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

include(clang_tidy)

add_subdirectory(tixmap)