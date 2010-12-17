function(glmCreateTestGTC NAME)
	set(SAMPLE_NAME test-${NAME})

	add_executable(${SAMPLE_NAME} ${NAME}.cpp)
endfunction(glmCreateTestGTC)

add_subdirectory(bug)
add_subdirectory(core)
add_subdirectory(gtc)
add_subdirectory(gtx)
add_subdirectory(img)

