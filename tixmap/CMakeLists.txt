set(tixmap_SourceFiles "")
set(tixmap_HeaderFiles "")

add_subdirectory(source)

add_executable(${PROJECT_NAME} ${tixmap_SourceFiles} ${tixmap_HeaderFiles})

add_clang_tidy(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} 
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" 
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include/tixmap"
)

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 23)
target_compile_options(${PROJECT_NAME} PRIVATE -Werror -Wall -Wextra)
target_link_libraries(${PROJECT_NAME} PRIVATE ${tixmap_ExternalLibraries})