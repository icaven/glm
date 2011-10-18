///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-10-16
// Updated : 2011-10-16
// Licence : This source is under MIT License
// File    : test/core/core_func_swizzle.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_FORCE_CXX98
#include <glm/glm.hpp>

int test_vec4_swizzle()
{
	int Error = 0;

    glm::ivec4 A(1, 2, 3, 4);
	glm::ivec4 B = A.xyzw();

	Error += A == B ? 0 : 1;

	return Error;
}

int main()
{
    int Error = 0;
    
    Error += test_vec4_swizzle();
        
	return Error;
}



