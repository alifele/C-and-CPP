cmake_minimum_required(VERSION 3.20)
project(Oscillator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Oscillator main.cpp libs/Sketch.cpp libs/Sketch.h libs/Ball.cpp libs/Ball.h libs/Physics.cpp libs/Physics.h)

find_package (SFML REQUIRED system window graphics network audio)
target_link_libraries(Oscillator sfml-audio sfml-graphics sfml-network sfml-system)

find_package (Eigen3 REQUIRED NO_MODULE)
target_link_libraries (Oscillator Eigen3::Eigen)