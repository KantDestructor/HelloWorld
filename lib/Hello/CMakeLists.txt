cmake_minimum_required(VERSION 3.0)

project(HelloLib)

add_library(${PROJECT_NAME} src/hello.cpp include/hello.hpp)

target_include_directories(${PROJECT_NAME} PUBLIC include)
