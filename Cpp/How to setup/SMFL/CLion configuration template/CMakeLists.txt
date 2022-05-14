cmake_minimum_required(VERSION 3.20)
project(newTest)

set(CMAKE_CXX_STANDARD 14)

#INCLUDE_DIRECTORIES(libs)
#LINK_DIRECTORIES(libs)


add_executable(newTest main.cpp)

find_package (SFML REQUIRED system window graphics network audio)
target_link_libraries(newTest sfml-audio sfml-graphics sfml-network sfml-system)




#include_directories(include)
#add_subdirectory(libs)
#target_link_libraries(newTest LINK_PUBLIC libs)


