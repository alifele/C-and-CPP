cmake_minimum_required(VERSION 3.5 FATAL_ERROR)



project(ObjShareStat LANGUAGES CXX)

add_library(message-obj
    OBJECT
      Message.cpp
      Message.hpp
    )


set_target_properties(message-obj
    PROPERTIES
      POSITION_INDEPENDENT_CODE 1
    )


add_library(message-static
STATIC
  $<TARGET_OBJECTS:message-obj>
)

add_library(message-shared
  SHARED
    $<TARGET_OBJECTS:message-obj>

)


add_executable(hello hello_world.cpp)

target_link_libraries(hello message-static)
