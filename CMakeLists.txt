cmake_minimum_required(VERSION 3.0)

project(HelloWorld)

add_executable(${PROJECT_NAME}
                src/main.cpp
                src/Shell/Shell.cpp
                include/Shell/Shell.hpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} HelloLib)

add_subdirectory(lib)
