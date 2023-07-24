cmake_minimum_required(VERSION 3.25)
project(pathfinder)

set(CMAKE_CXX_STANDARD 20)

if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set(CMAKE_CXX_FLAGS_RELEASE "/O3")
endif()

FILE(GLOB_RECURSE SRCS src src/*.cpp)
add_executable(pathfinder ${SRCS})

target_include_directories(pathfinder PUBLIC "include")
