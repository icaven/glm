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
#include <ctime>
#include <cstdio>

namespace fastCos{
	int perf()
	{
		const float begin = -glm::pi<float>();
		const float end = glm::pi<float>();
		float result = 0.f;
		const std::clock_t timestamp1 = std::clock();
		for(float i=begin; i<end; i = nextafterf(i, end))
			result = glm::fastCos(i);
		const std::clock_t timestamp2 = std::clock();
		for(float i=begin; i<end; i = nextafterf(i, end))
			result = glm::cos(i);
		const std::clock_t timestamp3 = std::clock();
		const std::clock_t time_fastCos = timestamp2 - timestamp1;
		const std::clock_t time_cos = timestamp3 - timestamp2;
		std::printf("fastCos Time %d clocks\n", static_cast<unsigned int>(time_fastCos));
		std::printf("cos Time %d clocks\n", static_cast<unsigned int>(time_cos));
		return time_fastCos < time_cos ? 0 : 1;
	}
}


int main()
{
	int Error(0);

	Error += ::fastCos::perf();

	return Error;
}
