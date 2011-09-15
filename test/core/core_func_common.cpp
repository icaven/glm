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
		float C = glm::intBitsToFloat(B);
		int D = *(int*)&A;
		Error += B == D ? 0 : 1;
		Error += A == C ? 0 : 1;
	}

	{
		glm::vec2 A(1.0f, 2.0f);
		glm::ivec2 B = glm::floatBitsToInt(A);
		glm::vec2 C = glm::intBitsToFloat(B);
		Error += B.x == *(int*)&(A.x) ? 0 : 1;
		Error += B.y == *(int*)&(A.y) ? 0 : 1;
		Error += A == C? 0 : 1;
	}

	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::ivec3 B = glm::floatBitsToInt(A);
		glm::vec3 C = glm::intBitsToFloat(B);
		Error += B.x == *(int*)&(A.x) ? 0 : 1;
		Error += B.y == *(int*)&(A.y) ? 0 : 1;
		Error += B.z == *(int*)&(A.z) ? 0 : 1;
		Error += A == C? 0 : 1;
	}
	
	{
		glm::vec4 A(1.0f, 2.0f, 3.0f, 4.0f);
		glm::ivec4 B = glm::floatBitsToInt(A);
		glm::vec4 C = glm::intBitsToFloat(B);
		Error += B.x == *(int*)&(A.x) ? 0 : 1;
		Error += B.y == *(int*)&(A.y) ? 0 : 1;
		Error += B.z == *(int*)&(A.z) ? 0 : 1;
		Error += B.w == *(int*)&(A.w) ? 0 : 1;
		Error += A == C? 0 : 1;
	}
	
	return Error;
}

int test_floatBitsToUint()
{
	int Error = 0;
	
	{
		float A = 1.0f;
		glm::uint B = glm::floatBitsToUint(A);
		float C = glm::intBitsToFloat(B);
		Error += B == *(glm::uint*)&A ? 0 : 1;
		Error += A == C? 0 : 1;
	}
	
	{
		glm::vec2 A(1.0f, 2.0f);
		glm::uvec2 B = glm::floatBitsToUint(A);
		glm::vec2 C = glm::uintBitsToFloat(B);
		Error += B.x == *(glm::uint*)&(A.x) ? 0 : 1;
		Error += B.y == *(glm::uint*)&(A.y) ? 0 : 1;
		Error += A == C ? 0 : 1;
	}
	
	{
		glm::vec3 A(1.0f, 2.0f, 3.0f);
		glm::uvec3 B = glm::floatBitsToUint(A);
		glm::vec3 C = glm::uintBitsToFloat(B);
		Error += B.x == *(glm::uint*)&(A.x) ? 0 : 1;
		Error += B.y == *(glm::uint*)&(A.y) ? 0 : 1;
		Error += B.z == *(glm::uint*)&(A.z) ? 0 : 1;
		Error += A == C? 0 : 1;
	}
	
	{
		glm::vec4 A(1.0f, 2.0f, 3.0f, 4.0f);
		glm::uvec4 B = glm::floatBitsToUint(A);
		glm::vec4 C = glm::uintBitsToFloat(B);
		Error += B.x == *(glm::uint*)&(A.x) ? 0 : 1;
		Error += B.y == *(glm::uint*)&(A.y) ? 0 : 1;
		Error += B.z == *(glm::uint*)&(A.z) ? 0 : 1;
		Error += B.w == *(glm::uint*)&(A.w) ? 0 : 1;
		Error += A == C? 0 : 1;
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

int test_round()
{
	int Error = 0;
	
	{
		float A = glm::round(0.0f);
		Error += A == 0.0f ? 0 : 1;
		float B = glm::round(0.5f);
		Error += B == 1.0f ? 0 : 1;
		float C = glm::round(1.0f);
		Error += C == 1.0f ? 0 : 1;
		float D = glm::round(0.1f);
		Error += D == 0.0f ? 0 : 1;
		float E = glm::round(0.9f);
		Error += E == 1.0f ? 0 : 1;
		float F = glm::round(1.9f);
		Error += F == 2.0f ? 0 : 1;
	}
	
	{
		float A = glm::round(-0.0f);
		Error += A == 0.0f ? 0 : 1;
		float B = glm::round(-0.5f);
		Error += B == -1.0f ? 0 : 1;
		float C = glm::round(-1.0f);
		Error += C == -1.0f ? 0 : 1;
		float D = glm::round(-0.1f);
		Error += D == 0.0f ? 0 : 1;
		float E = glm::round(-0.9f);
		Error += E == -1.0f ? 0 : 1;
		float F = glm::round(-1.9f);
		Error += F == -2.0f ? 0 : 1;
	}
	
	return Error;
}

int main()
{
	int Error = 0;

	Error += test_floatBitsToInt();
	Error += test_floatBitsToUint();
	Error += test_mix();
	Error += test_round();

	return Error;
}

