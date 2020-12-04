cmake_minimum_required(VERSION 3.10)

project(TemplateSearch VERSION 0.1)
list(APPEND INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/src")

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)

# config file to put version number in
configure_file(src/${CMAKE_PROJECT_NAME}.h.in ${CMAKE_PROJECT_NAME}.h)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC ${INCLUDE_DIRS})

# using standard 20, blazing edge baby
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Need following to export compile flags to YouCompleteMe
SET( CMAKE_EXPORT_COMPILE_COMMANDS ON )
IF( EXISTS "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json" )
  EXECUTE_PROCESS( COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json
    ${CMAKE_CURRENT_SOURCE_DIR}/compile_commands.json
  )
ENDIF()
