///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-01-15
// Updated : 2011-01-15
// Licence : This source is under MIT licence
// File    : test/gtx/simd-mat4.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>

int test_mix()
{
	int Error = 0;

	{
		float A = glm::mix(0.f, 1.f, true);
		Error += A == 1.f ? 0 : 1;
		float B = glm::mix(0.f, 1.f, false);
		Error += B == 0.f ? 0 : 1;
	}

	{
		float A = glm::mix(0.f, 1.f, 1.f);
		Error += A == 1.f ? 0 : 1;
		float B = glm::mix(0.f, 1.f, 0.f);
		Error += B == 0.f ? 0 : 1;
	}

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_mix();

	return Error;
}

