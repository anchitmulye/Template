cmake_minimum_required(VERSION 3.22.1)

project(Template VERSION 1.2.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "-Wall -std=c++23") #"-Weffc++"
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Build/Bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Build/Lib)

set(TP_TESTING ON) # custom testing flag

add_subdirectory(App)
add_subdirectory(Engine)