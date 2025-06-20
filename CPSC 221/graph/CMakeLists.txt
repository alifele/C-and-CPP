cmake_minimum_required(VERSION 3.10.0)
project(graph VERSION 0.1.0 LANGUAGES C CXX)


file(GLOB SOURCES "src/*.cpp")


include_directories(include)
add_executable(graph ${SOURCES})

target_link_libraries(graph SDL2)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
