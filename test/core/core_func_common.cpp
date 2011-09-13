///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-01-15
// Updated : 2011-09-13
// Licence : This source is under MIT licence
// File    : test/core/func_common.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>

int test_floatBitsToInt()
{
	int Error = 0;
	
	{
		float A = 1.0f;
		int B = glm::floatBitsToInt(A);
		Error += B == *(float*)&A ? 0 : 1;
	}

	{
		glm::vec2 A(1.0f, 2.0f);
		glm::ivec2 B = glm::floatBitsToInt(A);
		Error += B.x == *(float*)&(A.x) ? 0 : 1;
		Error += B.y == *(float*)&(A.y) ? 0 : 1;
	}
	
	return Error;
}

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

	Error += test_floatBitsToInt();
	Error += test_mix();

	return Error;
}

