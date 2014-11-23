///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2014-11-23
// Updated : 2014-11-23
// Licence : This source is under MIT licence
// File    : test/gtc/type_aligned.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/gtc/type_aligned.hpp>
#include <cstdio>

typedef __declspec(align(1)) glm::vec3 unaligned_vec3;

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

		struct S3
		{
			bool A;
			unaligned_vec3 B;
		};

		struct S4
		{
			short B;
			bool A;
		};

		struct S5
		{
			bool A;
			float B[3];
		};

		printf("vec3: %d, aligned: %d, unaligned: %d, bool: %d, array: %d\n", sizeof(S1), sizeof(S2), sizeof(S3), sizeof(S4), sizeof(S5));

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
