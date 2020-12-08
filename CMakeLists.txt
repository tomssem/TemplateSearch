# A small project to show how templates can be used to dispatch different sorting implementations

cmake_minimum_required(VERSION 3.19)

project(TemplateSearch VERSION 0.1.0
                       DESCRIPTION "Dispatching sort implementations using templates"
                       LANGUAGES CXX)

add_executable(run src/main.cpp)

add_library(
    TemplateSearch
    src/SearchAlgos.hpp
    src/SearchAlgos.cpp
    )

target_link_libraries(run PRIVATE TemplateSearch)

# config file to put version number in
configure_file(src/TemplateSearch.h.in src/TemplateSearch.h)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/src)

# using standard 20, blazing edge baby
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

# Need following to export compile flags to YouCompleteMe
SET( CMAKE_EXPORT_COMPILE_COMMANDS ON )
if( EXISTS "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json" )
  EXECUTE_PROCESS( COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json
    ${CMAKE_CURRENT_SOURCE_DIR}/compile_commands.json
  )
endif()


# get testing set-up
add_subdirectory(tests)
enable_testing()
