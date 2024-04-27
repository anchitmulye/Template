cmake_minimum_required(VERSION 3.22.1)

project(Template VERSION 1.1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "-Wall -std=c++23")

add_subdirectory(App)
add_subdirectory(Engine)