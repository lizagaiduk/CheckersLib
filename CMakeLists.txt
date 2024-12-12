cmake_minimum_required(VERSION 3.27)
project(ProjectLibrary)

set(CMAKE_CXX_STANDARD 20)

add_library(ProjectLibrary SHARED library.cpp
        Checkers_Board.cpp
)
target_link_options(ProjectLibrary PRIVATE "-static")

target_include_directories(ProjectLibrary PRIVATE "C:/Users/Admin/.jdks/openjdk-23.0.1/include")
target_include_directories(ProjectLibrary PRIVATE "C:/Users/Admin/.jdks/openjdk-23.0.1/include/win32")
