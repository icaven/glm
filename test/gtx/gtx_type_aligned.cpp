///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2014-11-23
// Updated : 2014-11-23
// Licence : This source is under MIT licence
// File    : test/gtc/type_aligned.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/gtx/type_aligned.hpp>
#include <cstdio>

int test_decl()
{
	int Error(0);

	{
		struct S1
		{
			glm::aligned_vec4 B;
		};

		struct S2
		{
			glm::vec4 B;
		};

		printf("vec4 - Aligned: %d, unaligned: %d\n", sizeof(S1), sizeof(S2));

		Error += sizeof(S1) >= sizeof(S2) ? 0 : 1;
	}

	{
		struct S1
		{
			bool A;
			glm::vec3 B;
		};

		struct S2
		{
			bool A;
			glm::aligned_vec3 B;
		};

		printf("vec3: %d, aligned: %d\n", sizeof(S1), sizeof(S2));

		Error += sizeof(S1) <= sizeof(S2) ? 0 : 1;
	}

	{
		struct S1
		{
			bool A;
			glm::aligned_vec4 B;
		};

		struct S2
		{
			bool A;
			glm::vec4 B;
		};

		printf("vec4 - Aligned: %d, unaligned: %d\n", sizeof(S1), sizeof(S2));

		Error += sizeof(S1) >= sizeof(S2) ? 0 : 1;
	}

	{
		struct S1
		{
			bool A;
			glm::aligned_dvec4 B;
		};

		struct S2
		{
			bool A;
			glm::dvec4 B;
		};

		printf("dvec4 - Aligned: %d, unaligned: %d\n", sizeof(S1), sizeof(S2));

		Error += sizeof(S1) >= sizeof(S2) ? 0 : 1;
	}

	return Error;
}

int main()
{
	int Error(0);

	Error += test_decl();

	return Error;
}
