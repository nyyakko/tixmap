set(!PROJECT_TEMPLATE!_SourceFiles "")
set(!PROJECT_TEMPLATE!_HeaderFiles "")

add_subdirectory(source)

add_executable(${PROJECT_NAME} ${!PROJECT_TEMPLATE!_SourceFiles} ${!PROJECT_TEMPLATE!_HeaderFiles})

add_clang_tidy(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} 
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" 
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include/!PROJECT_TEMPLATE!"
)

set_target_properties(${PROJECT_NAME} PROPERTIES !PROJECT_LANGUAGE!_STANDARD !PROJECT_LVERSION!)
target_compile_options(${PROJECT_NAME} PRIVATE -Werror -Wall -Wextra)
target_link_libraries(${PROJECT_NAME} PRIVATE ${!PROJECT_TEMPLATE!_ExternalLibraries})