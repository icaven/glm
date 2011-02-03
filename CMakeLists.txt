cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
cmake_policy(VERSION 2.6)

project(glm)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

add_subdirectory(glm)
add_subdirectory(doc)

option(GLM_DEVELOPMENT_MODE "GLM development" OFF)
if(NOT GLM_DEVELOPMENT_MODE)
	message(FATAL_ERROR "GLM is a header only library, no need to build it")
endif()


