///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2010-09-16
// Licence : This source is under MIT licence
// File    : test/gtx/simd-mat4.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_INSTRUCTION_SET GLM_PLATFORM_SSE3 | GLM_PLATFORM_SSE2
#include <glm/glm.hpp>
#include <glm/gtc/swizzle.hpp>

int test_swizzle_vec4_dynamic()
{
	glm::ivec4 A(0, 1, 2, 3);
	glm::ivec4 B = glm::swizzle(A, glm::B, glm::G, glm::R, glm::A);
	glm::ivec3 C = glm::swizzle(A, glm::W, glm::Y, glm::Z);
	glm::ivec2 D = glm::swizzle(A, glm::W, glm::X);
	assert(D.x == A.w && D.y == A.x);
	int E = glm::swizzle(A, glm::Q);
	assert(E == A.q);

	return 0;
}

int test_swizzle_vec4_static()
{
	glm::ivec4 A(0, 1, 2, 3);
	glm::ivec4 B = glm::swizzle<glm::B, glm::G, glm::R, glm::A>(A);
	glm::ivec3 C = glm::swizzle<glm::W, glm::Y, glm::Z>(A);
	glm::ivec2 D = glm::swizzle<glm::W, glm::X>(A);
	int E = glm::swizzle<glm::Q>(A);
	assert(E == A.q);

	return 0;
}

int main(int argc, void* argv[])
{
	int Failed = 0;
	Failed += test_swizzle_vec4_dynamic();
	Failed += test_swizzle_vec4_static();

	return Failed;
}
