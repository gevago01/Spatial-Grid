cmake_minimum_required(VERSION 3.6)
project(SpatialGrid)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SOURCE_FILES main.cpp Grid.cpp Grid.h Point.h Point.cpp)
add_executable(SpatialGrid ${SOURCE_FILES})