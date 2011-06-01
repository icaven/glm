///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-31
// Updated : 2011-05-31
// Licence : This source is under MIT licence
// File    : test/gtx/random.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/random.hpp>
#include <glm/gtx/epsilon.hpp>
#include <iostream>

int test_signedRand1()
{
	int Error = 0;

	{
		float ResultFloat = 0.0f;
		double ResultDouble = 0.0f;
		for(std::size_t i = 0; i < 100000; ++i)
		{
			ResultFloat += glm::signedRand1<float>();
			ResultDouble += glm::signedRand1<double>();
		}

		Error += glm::equalEpsilon(ResultFloat, 0.0f, 0.0001f);
		Error += glm::equalEpsilon(ResultDouble, 0.0, 0.0001);
	}

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_signedRand1();

	return Error;
}
