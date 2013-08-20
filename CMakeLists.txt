cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
cmake_policy(VERSION 2.6)

project(glm)
enable_testing()

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

option(GLM_TEST_ENABLE "GLM test" OFF)
if(NOT GLM_TEST_ENABLE)
	message(FATAL_ERROR "GLM is a header only library, no need to build it. Set the option GLM_TEST_ENABLE with ON to build and run the test bench")
endif()

if(("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang") OR ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU") OR (("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel") AND UNIX))
	option(GLM_TEST_ENABLE_CXX_98 "Enable C++ 98" OFF)
	option(GLM_TEST_ENABLE_CXX_0X "Enable C++ 0x" OFF)
	option(GLM_TEST_ENABLE_CXX_11 "Enable C++ 11" OFF)
	option(GLM_TEST_ENABLE_CXX_1Y "Enable C++ 1y" OFF)
	option(GLM_TEST_ENABLE_CXX_PEDANTIC "Pedantic" ON)

	if(GLM_TEST_ENABLE_CXX_PEDANTIC)
		add_definitions(-pedantic)
	endif()

	if(GLM_TEST_ENABLE_CXX_1Y)
		add_definitions(-std=c++1y)
	elseif(GLM_TEST_ENABLE_CXX_11)
		add_definitions(-std=c++11)
	elseif(GLM_TEST_ENABLE_CXX_0X)
		add_definitions(-std=c++0x)
	elseif(GLM_TEST_ENABLE_CXX_98)
		add_definitions(-std=c++98)
	endif()
endif()

if(("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC") OR (("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel") AND WIN32))
	option(GLM_TEST_ENABLE_MS_EXTENSIONS "Enable MS extensions" OFF)

	if(NOT GLM_TEST_ENABLE_MS_EXTENSIONS)
		add_definitions(/Za)
	endif()
endif()

#set(GLM_SIMD_INSTRUCTION_SET "" CACHE STRING "Instruction set. Possible values are SSE1, SSE2")

option(GLM_TEST_ENABLE_SIMD "Enable SIMD optimizations" OFF)
if(GLM_TEST_ENABLE_SIMD)
	if(CMAKE_COMPILER_IS_GNUCXX)
		add_definitions(-msse2)
	elseif(MSVC10)
		add_definitions(/arch:AVX)	
	elseif(MSVC)
		add_definitions(/arch:SSE2)	
	endif()
elseif(NOT GLM_TEST_ENABLE_SIMD)
	
	add_definitions(-DGLM_FORCE_PURE)

	if(CMAKE_COMPILER_IS_GNUCXX)
		add_definitions(-mfpmath=387)
	endif()
endif()

option(GLM_TEST_ENABLE_FAST_MATH "Enable fast math optimizations" OFF)
if(GLM_TEST_ENABLE_FAST_MATH)
	if(CMAKE_COMPILER_IS_GNUCXX)
		add_definitions(-ffast-math)
	endif()

	if(MSVC)
		add_definitions(/fp:fast)	
	endif()
elseif(NOT GLM_TEST_ENABLE_FAST_MATH)
	if(MSVC)
		add_definitions(/fp:precise)	
	endif()
endif()

if(CMAKE_COMPILER_IS_GNUCXX)
	#add_definitions(-S)
	#add_definitions(-s)
	#add_definitions(-m32)
	#add_definitions(-O3)

	#add_definitions(-fprofile-arcs -ftest-coverage) gcov
	#ctest_enable_coverage()
endif()

include_directories(".")
include_directories("./test/external")

add_subdirectory(glm)
add_subdirectory(test)

install(DIRECTORY glm DESTINATION include)
