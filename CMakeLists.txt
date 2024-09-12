cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(otus_2)

add_executable(otus_2 src/main.cpp)

configure_file(src/config.hpp.in config.hpp)

target_include_directories(otus_2 PUBLIC "${PROJECT_BINARY_DIR}")

