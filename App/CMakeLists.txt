cmake_minimum_required(VERSION 3.22.1)

project(Template VERSION 1.1.0)

include_directories(${CMAKE_SOURCE_DIR}/Engine/Engine/)

add_executable(App App/Main.cpp)

target_link_libraries(App Engine)