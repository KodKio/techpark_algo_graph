cmake_minimum_required(VERSION 3.21)
project(technopakr_algo)

set(CMAKE_CXX_STANDARD 20)

include_directories(graphs)

add_executable(graphs main.cpp algorithms.cpp graphs/listGraph.cpp
        graphs/matrixGraph.cpp graphs/arcGraph.cpp graphs/setGraph.cpp)
