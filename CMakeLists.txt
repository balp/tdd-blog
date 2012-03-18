cmake_minimum_required(VERSION 2.8)
project(BlogExamples)
enable_testing()

add_subdirectory(googletest)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/googletest/include)
add_executable(testprogram tests.cpp)
target_link_libraries(testprogram gtest_main )
add_test(NAME test COMMAND $<TARGET_FILE:testprogram> )

include(CTest)

