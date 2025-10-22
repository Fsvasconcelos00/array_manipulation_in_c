cmake_minimum_required(VERSION 3.10)
project(MyCProgram C)

set(CMAKE_C_STANDARD 23)

add_executable(array_manipulator
               main.c
               bubble_sort.c)
