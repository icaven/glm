cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
cmake_policy(VERSION 2.6)

project(glm)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)
#add_definitions(-S)
add_definitions(-msse2)
add_definitions(-O3)

include_directories(".")

add_subdirectory(glm)
add_subdirectory(test)
add_subdirectory(doc)



