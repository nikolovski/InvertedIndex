cmake_minimum_required(VERSION 3.5)
project(InvertedIndex)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp InvertedIndex.h InvertedIndex.cpp)
add_executable(InvertedIndex ${SOURCE_FILES})