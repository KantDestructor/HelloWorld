cmake_minimum_required(VERSION 3.0)

project(HelloWorld)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(lib)
