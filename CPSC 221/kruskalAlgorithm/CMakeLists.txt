cmake_minimum_required(VERSION 3.10.0)
project(kruskal VERSION 0.1.0 LANGUAGES C CXX)


include_directories(inc)
file(GLOB SRC_FILES "src/*.cpp")
add_executable(kruskal ${SRC_FILES})

