cmake_minimum_required(VERSION 3.23)
project(Algorithms_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Algorithms_cpp
        Algorithms.cpp
        Sort_Algorithms.cpp
        Sort_Algorithms.h)
