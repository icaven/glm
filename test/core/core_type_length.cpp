///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-25
// Updated : 2011-05-25
// Licence : This source is under MIT License
// File    : test/core/type_length.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>

int test_length_mat_non_squared()
{
	int Error = 0;
	
	Error += glm::mat2x3().length() == 6 ? 0 : 1;
	Error += glm::mat2x4().length() == 8 ? 0 : 1;
	Error += glm::mat3x2().length() == 6 ? 0 : 1;
	Error += glm::mat3x4().length() == 12 ? 0 : 1;
	Error += glm::mat4x2().length() == 8 ? 0 : 1;
	Error += glm::mat4x3().length() == 12 ? 0 : 1;
	
	return Error;
}

int test_length_mat()
{
	int Error = 0;
	
	Error += glm::mat2().length() == 4 ? 0 : 1;
	Error += glm::mat3().length() == 9 ? 0 : 1;
	Error += glm::mat4().length() == 16 ? 0 : 1;
	Error += glm::mat2x2().length() == 4 ? 0 : 1;
	Error += glm::mat3x3().length() == 9 ? 0 : 1;
	Error += glm::mat4x4().length() == 16 ? 0 : 1;
	
	return Error;
}

int test_length_vec()
{

	int Error = 0;
	
	Error += glm::vec2().length() == 2 ? 0 : 1;
	Error += glm::vec3().length() == 3 ? 0 : 1;
	Error += glm::vec4().length() == 4 ? 0 : 1;
	
	return Error;
}

int main()
{
	int Error = 0;
	
	Error += test_length_vec();
	Error += test_length_mat();
	Error += test_length_mat_non_squared();
	
	return Error;
}

