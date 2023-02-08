cmake_minimum_required(VERSION 3.24)
project(fractal_explorer)

set(CMAKE_CXX_STANDARD 17)

add_executable(fractal_explorer main.cpp)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)
set(SDL2_PATH "SDL2/x86_64-w64-mingw32")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})
