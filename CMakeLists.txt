cmake_minimum_required(VERSION 3.0)

project(HelloWorld)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} HelloLib)

add_subdirectory(lib)
