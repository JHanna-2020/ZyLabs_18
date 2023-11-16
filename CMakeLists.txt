cmake_minimum_required(VERSION 3.26)
project(Labs)

set(CMAKE_CXX_STANDARD 23)

add_executable(Labs main.cpp
        include/reverseList.h
        src/reverseList.cpp)
