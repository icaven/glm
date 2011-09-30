///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2011-09-19
// Licence : This source is under MIT License
// File    : test/core/type_vec3.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <vector>

int test_vec3_ctor()
{
	int Error = 0;
	
	{
		glm::vec3 A(1);
		glm::vec3 B(1, 1, 1);
		
		Error += A == B ? 0 : 1;
	}
	
	{
		std::vector<glm::vec3> Tests;
		Tests.push_back(glm::vec3(glm::vec2(1, 2), 3));
		Tests.push_back(glm::vec3(1, glm::vec2(2, 3)));
		Tests.push_back(glm::vec3(1, 2, 3));
		Tests.push_back(glm::vec3(glm::vec4(1, 2, 3, 4)));

		for(std::size_t i = 0; i < Tests.size(); ++i)
			Error += Tests[i] == glm::vec3(1, 2, 3) ? 0 : 1;
	}
		
	return Error;
}

int test_vec3_operators()
{
	int Error = 0;
	
	{
		glm::vec3 A(1.0f);
		glm::vec3 B(1.0f);
		bool R = A != B;
		bool S = A == B;

		Error += (S && !R) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		glm::vec3 C = A + B;
		Error += C == glm::vec3(5, 7, 9) ? 0 : 1;

		glm::vec3 D = B - A;
		Error += D == glm::vec3(3, 3, 3) ? 0 : 1;

		glm::vec3 E = A * B;
		Error += E == glm::vec3(4, 10, 18) ? 0 : 1;

		glm::vec3 F = B / A;
		Error += F == glm::vec3(4, 2.5, 2) ? 0 : 1;

		glm::vec3 G = A + 1.0f;
		Error += G == glm::vec3(2, 3, 4) ? 0 : 1;

		glm::vec3 H = B - 1.0f;
		Error += H == glm::vec3(3, 4, 5) ? 0 : 1;

		glm::vec3 I = A * 2.0f;
		Error += I == glm::vec3(2, 4, 6) ? 0 : 1;

		glm::vec3 J = B / 2.0f;
		Error += J == glm::vec3(2, 2.5, 3) ? 0 : 1;

		glm::vec3 K = 1.0f + A;
		Error += K == glm::vec3(2, 3, 4) ? 0 : 1;

		glm::vec3 L = 1.0f - B;
		Error += L == glm::vec3(-3, -4, -5) ? 0 : 1;

		glm::vec3 M = 2.0f * A;
		Error += M == glm::vec3(2, 4, 6) ? 0 : 1;

		glm::vec3 N = 2.0f / B;
		Error += N == glm::vec3(0.5, 2.0 / 5.0, 2.0 / 6.0) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		A += B;
		Error += A == glm::vec3(5, 7, 9) ? 0 : 1;

		A += 1.0f;
		Error += A == glm::vec3(6, 8, 10) ? 0 : 1;
	}
	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		B -= A;
		Error += B == glm::vec3(3, 3, 3) ? 0 : 1;

		B -= 1.0f;
		Error += B == glm::vec3(2, 2, 2) ? 0 : 1;
	}
	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		A *= B;
		Error += A == glm::vec3(4, 10, 18) ? 0 : 1;

		A *= 2.0f;
		Error += A == glm::vec3(8, 20, 36) ? 0 : 1;
	}
	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B(4.0f, 5.0f, 6.0f);

		B /= A;
		Error += B == glm::vec3(4, 2.5, 2) ? 0 : 1;

		B /= 2.0f;
		Error += B == glm::vec3(2, 1.25, 1) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = -A;
		Error += B == glm::vec3(-1.0f, -2.0f, -3.0f) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = --A;
		Error += B == glm::vec3(0.0f, 1.0f, 2.0f) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = A--;
		Error += B == glm::vec3(0.0f, 1.0f, 2.0f) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = ++A;
		Error += B == glm::vec3(2.0f, 3.0f, 4.0f) ? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::vec3 B = A++;
		Error += B == glm::vec3(2.0f, 3.0f, 4.0f) ? 0 : 1;
	}

	return Error;
}

int test_vec3_size()
{
	int Error = 0;
	
	Error += sizeof(glm::vec3) == sizeof(glm::mediump_vec3) ? 0 : 1;
	Error += 12 == sizeof(glm::mediump_vec3) ? 0 : 1;
	Error += sizeof(glm::dvec3) == sizeof(glm::highp_vec3) ? 0 : 1;
	Error += 24 == sizeof(glm::highp_vec3) ? 0 : 1;
	Error += glm::vec3().length() == 3 ? 0 : 1;
	Error += glm::dvec3().length() == 3 ? 0 : 1;
	
	return Error;
}

int main()
{
	int Error = 0;

	Error += test_vec3_ctor();
	Error += test_vec3_operators();
	Error += test_vec3_size();
	
	return Error;
}
