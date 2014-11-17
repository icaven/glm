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
#include <glm/vector_relational.hpp>
#include <ctime>
#include <cstdio>
#include <vector>

namespace log2_
{
	int test()
	{
		int Error = 0;

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
