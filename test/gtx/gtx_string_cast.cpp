///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-09-01
// Updated : 2011-09-01
// Licence : This source is under MIT licence
// File    : test/gtx/string_cast.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>
#include <iostream>
#include <limits>

int test_string_cast_vec()
{
	int Error = 0;
	
	glm::vec2 A1(1, 2);
	
	std::string A2 = glm::to_string(A1);
	
	Error += A2 != std::string("fvec2(1.000000, 2.000000)") ? 1 : 0;
	
	return Error;
}

int test_string_cast_mat()
{
	int Error = 0;
	
	return Error;
}

int main()
{
	int Error = 0;
	Error += test_string_cast_vec();
	Error += test_string_cast_mat();
	return Error;
}


