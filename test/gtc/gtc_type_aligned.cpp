///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2014-11-23
// Updated : 2014-11-23
// Licence : This source is under MIT licence
// File    : test/gtc/type_aligned.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/gtc/type_aligned.hpp>

#define GLM_ALIGNED_TYPEDEF(type, name, alignment) typedef type name

GLM_ALIGNED_TYPEDEF(glm::lowp_vec4, aligned_lowp_vec4, 16);

int test_decl()
{
	

	return 0;
}

int main()
{
	int Error(0);

	Error += test_decl();

	return Error;
}
