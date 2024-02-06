option(GLM_QUIET "No CMake Message" OFF)

option(GLM_TEST_ENABLE "Build unit tests" ON)
option(GLM_PERF_TEST_ENABLE "Build perf tests" OFF)

# Compiler and default options

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	if(NOT GLM_QUIET)
		message("GLM: Clang - ${CMAKE_CXX_COMPILER_ID} compiler")
	endif()

	if(NOT GLM_DISABLE_AUTO_DETECTION)
		add_compile_options(-Werror -Weverything)
	endif()

elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
	if(NOT GLM_QUIET)
		message("GLM: GCC - ${CMAKE_CXX_COMPILER_ID} compiler")
	endif()

	if(NOT GLM_DISABLE_AUTO_DETECTION)
		add_compile_options(-Werror)
#		add_compile_options(-Wpedantic)
#		add_compile_options(-Wall)
#		add_compile_options(-Wextra)
	endif()
	add_compile_options(-O2)
	#add_compile_options(-Wno-long-long)
elseif(CMAKE_CXX_COMPILER_ID MATCHES "Intel")
	if(NOT GLM_QUIET)
		message("GLM: Intel - ${CMAKE_CXX_COMPILER_ID} compiler")
	endif()

elseif(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	if(NOT GLM_QUIET)
		message("GLM: Visual C++ - ${CMAKE_CXX_COMPILER_ID} compiler")
	endif()

	if(NOT GLM_DISABLE_AUTO_DETECTION)
		add_compile_options(/W4 /WX)
	endif()
#	add_compile_options(/wd4309 /wd4324 /wd4389 /wd4127 /wd4267 /wd4146 /wd4201 /wd4464 /wd4514 /wd4701 /wd4820 /wd4365)
	add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

function(glmCreateTestGTC NAME)
	set(SAMPLE_NAME test-${NAME})
	add_executable(${SAMPLE_NAME} ${NAME}.cpp)

	add_test(
		NAME ${SAMPLE_NAME}
		COMMAND $<TARGET_FILE:${SAMPLE_NAME}> )
	target_link_libraries(${SAMPLE_NAME} PRIVATE glm::glm)
endfunction()

if(GLM_TEST_ENABLE)
	add_subdirectory(bug)
	add_subdirectory(core)
	add_subdirectory(ext)
	add_subdirectory(gtc)
	add_subdirectory(gtx)
endif()
if(GLM_PERF_TEST_ENABLE)
	add_subdirectory(perf)
endif()

