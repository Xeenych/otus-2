cmake_minimum_required(VERSION 3.12)

project(otus_homework_1)

add_executable(otus_homework_1_cli src/main.cpp)

configure_file(src/config.hpp.in config.hpp)

target_include_directories(otus_homework_1_cli PUBLIC "${PROJECT_BINARY_DIR}")
set(CMAKE_CXX_STANDARD 11)
