cmake_minimum_required(VERSION 3.20)
project(newTest)

set(CMAKE_CXX_STANDARD 14)

#INCLUDE_DIRECTORIES(libs)
#LINK_DIRECTORIES(libs)


add_executable(newTest main.cpp libs/Sketch.cpp libs/Sketch.h libs/Ball.cpp libs/Ball.h libs/Physics.cpp libs/Physics.h libs/PlayGround.cpp libs/PlayGround.h)

find_package (SFML REQUIRED system window graphics network audio)
target_link_libraries(newTest sfml-audio sfml-graphics sfml-network sfml-system)

#
find_package (Eigen3 REQUIRED NO_MODULE)
target_link_libraries (newTest Eigen3::Eigen)

#include_directories(include)
#add_subdirectory(libs)
#target_link_libraries(newTest LINK_PUBLIC libs)


