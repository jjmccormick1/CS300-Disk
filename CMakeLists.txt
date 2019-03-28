cmake_minimum_required(VERSION 3.13)
project(disk C)

set(CMAKE_C_STANDARD 11)

add_executable(disk disk.c disk.h)
add_executable(gen gen.c)
