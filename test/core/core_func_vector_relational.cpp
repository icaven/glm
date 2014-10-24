///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-01-15
// Updated : 2011-09-13
// Licence : This source is under MIT licence
// File    : test/core/vector_relational.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/vector_relational.hpp>
#include <glm/gtc/vec1.hpp>

int test_not()
{
	int Error(0);

	{
		glm::bvec1 v(false);
		Error += glm::all(glm::not_(v)) ? 0 : 1;
	}

	{
		glm::bvec2 v(false);
		Error += glm::all(glm::not_(v)) ? 0 : 1;
	}

	{
		glm::bvec3 v(false);
		Error += glm::all(glm::not_(v)) ? 0 : 1;
	}
	
	{
		glm::bvec4 v(false);
		Error += glm::all(glm::not_(v)) ? 0 : 1;
	}

	return Error;
}

int main()
{
	int Error(0);

	Error += test_not();

	return Error;
}

