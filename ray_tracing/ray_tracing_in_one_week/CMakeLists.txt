cmake_minimum_required(VERSION 3.16)
project(src/hello LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(first_graph src/first_graph.cpp)