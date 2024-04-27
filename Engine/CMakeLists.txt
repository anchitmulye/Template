cmake_minimum_required(VERSION 3.22.1)

project(Template VERSION 1.0.0)

include_directories(${PROJECT_SOURCE_DIR}/External/spdlog/include) #logging

include_directories(${PROJECT_SOURCE_DIR}/Engine/)

file(GLOB SOURCES "Engine/*/*.cpp")

add_library(Engine SHARED ${SOURCES})
