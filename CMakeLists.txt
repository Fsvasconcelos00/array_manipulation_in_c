cmake_minimum_required(VERSION 3.10)
project(MyCProgram C)

set(CMAKE_C_STANDARD 23)

add_executable(array_manipulator
               Source/main.c
               Source/bubble_sort.c
               Source/selection_sort.c)

# Add include directory *only for this target*
target_include_directories(array_manipulator PRIVATE Headers)