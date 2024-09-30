cmake_minimum_required(VERSION 3.20)
project(Lec9a)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

set(SOURCE_FILES
    print_me.h
    print_me.cpp
    main.cpp
)
add_executable(Lec9a-Print ${SOURCE_FILES})
