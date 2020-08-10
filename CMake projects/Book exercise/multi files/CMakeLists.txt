cmake_minimum_required(VERSION 3.5 FATAL_ERROR)



project(MultiCode LANGUAGES CXX)

add_library(message
    SHARED
    Message.hpp
    Message.cpp
    )

add_library(messageshare
    SHARED
    Message.hpp
    Message.cpp
    )

add_executable(hello hello_world.cpp)


target_link_libraries(hello message)
