function(glmCreateTestGTC NAME)
	set(SAMPLE_NAME test-${NAME})

	add_executable(${SAMPLE_NAME} ${NAME}.cpp ../test.hpp ../test.cpp)
endfunction(glmCreateTestGTC)

add_subdirectory(bug)
add_subdirectory(core)
add_subdirectory(gtc)
add_subdirectory(gtx)


