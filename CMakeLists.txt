cmake_minimum_required(VERSION 3.6)
project(multi_Inheritance)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Desktop.cpp Desktop.h Processor.cpp Processor.h Memory.cpp Memory.h)
add_executable(multi_Inheritance ${SOURCE_FILES})