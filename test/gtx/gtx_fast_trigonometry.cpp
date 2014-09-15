///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2013-10-25
// Updated : 2013-10-25
// Licence : This source is under MIT licence
// File    : test/gtx/fast_trigonometry.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/gtc/type_precision.hpp>
#include <glm/gtx/fast_trigonometry.hpp>
#include <glm/gtc/constants.hpp>

int test_fastSin()
{
	int Error(0);

	float DiffMax = 0.0f;
	for(std::size_t i = 0; i < 10000; ++i)
	{
		float angle = glm::pi<float>() * 2.0f / static_cast<float>(i + 1);
		float A = glm::sin(angle);
		float B = glm::fastSin(angle);
		DiffMax = glm::max(DiffMax, glm::abs(B - A));
	}

	return Error;
}

int main()
{
	int Error(0);

	Error += test_fastSin();

	return Error;
}
