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
