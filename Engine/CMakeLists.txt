cmake_minimum_required(VERSION 3.22.1)

project(Template VERSION 1.2.0)

include_directories(${PROJECT_SOURCE_DIR}/External/gtest/googletest/include) #testing

include_directories(${PROJECT_SOURCE_DIR}/Engine/)

file(GLOB_RECURSE ENGINE_SOURCES "Engine/*.cpp")

file(GLOB_RECURSE ENGINE_TEST_SOURCES "Engine/*Test.cpp")
list(REMOVE_ITEM ENGINE_SOURCES ${ENGINE_TEST_SOURCES})

add_library(Engine SHARED ${ENGINE_SOURCES})

if(TP_TESTING)

    add_subdirectory(${PROJECT_SOURCE_DIR}/External/gtest)

    file(GLOB_RECURSE ENGINE_TEST_SOURCES "Engine/*Test.cpp")

    add_executable(EngineTest ${ENGINE_TEST_SOURCES})

    target_link_libraries(Engine gtest_main gtest)
    target_link_libraries(EngineTest gtest_main Engine)

endif()