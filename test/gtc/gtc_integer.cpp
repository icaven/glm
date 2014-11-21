///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2014-11-17
// Updated : 2014-11-17
// Licence : This source is under MIT licence
// File    : test/gtc/integer.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/gtc/integer.hpp>
#include <glm/gtc/type_precision.hpp>
#include <glm/gtc/vec1.hpp>
#include <glm/vector_relational.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <ctime>
#include <cstdio>
#include <vector>

namespace log2_
{
	int test()
	{
		int Error = 0;

		int A0(glm::log2(10.f));
		glm::ivec1 B0(glm::log2(glm::vec1(10.f)));
		glm::ivec2 C0(glm::log2(glm::vec2(10.f)));
		glm::ivec3 D0(glm::log2(glm::vec3(10.f)));
		glm::ivec4 E0(glm::log2(glm::vec4(10.f)));

		int A1 = glm::log2(int(10.f));
		glm::ivec1 B1 = glm::log2(glm::ivec1(10.f));
		glm::ivec2 C1 = glm::log2(glm::ivec2(10.f));
		glm::ivec3 D1 = glm::log2(glm::ivec3(10.f));
		glm::ivec4 E1 = glm::log2(glm::ivec4(10.f));

		Error += A0 == A1 ? 0 : 1;
		Error += glm::all(glm::equal(B0, B1)) ? 0 : 1;
		Error += glm::all(glm::equal(C0, C1)) ? 0 : 1;
		Error += glm::all(glm::equal(D0, D1)) ? 0 : 1;
		Error += glm::all(glm::equal(E0, E1)) ? 0 : 1;

		return Error;
	}

	int perf()
	{
		int Error = 0;

		return Error;
	}
}//namespace log2_


int main()
{
	int Error(0);

	Error += ::log2_::test();

#	ifdef GLM_TEST_ENABLE_PERF
		Error += ::log2_::perf();
#	endif

	return Error;
}
