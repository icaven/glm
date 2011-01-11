///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2010-09-16
// Licence : This source is under MIT licence
// File    : test/gtx/simd-mat4.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/simd_mat4.hpp>
#include <iostream>

int main(int argc, void* argv[])
{
	// shuffle test
	glm::simd_vec4 A(1.0f, 2.0f, 3.0f, 4.0f);
	glm::simd_vec4 B(5.0f, 6.0f, 7.0f, 8.0f);
	__m128 C = _mm_shuffle_ps(A.Data, B.Data, _MM_SHUFFLE(1, 0, 1, 0));

	glm::mat4 IdentityA(
		glm::vec4(4.0f, 0.7f, 0.1f, 0.01f),
		glm::vec4(0.5f, 3.0f, 0.6f, 0.02f),
		glm::vec4(0.2f, 0.4f, 2.0f, 0.03f),
		glm::vec4(4.0f, 3.0f, 2.0f, 1.00f));
	float DetA = glm::determinant(IdentityA);

	glm::simd_mat4 IdentityB(
		glm::simd_vec4(4.0f, 0.7f, 0.1f, 0.01f),
		glm::simd_vec4(0.5f, 3.0f, 0.6f, 0.02f),
		glm::simd_vec4(0.2f, 0.4f, 2.0f, 0.03f),
		glm::simd_vec4(4.0f, 3.0f, 2.0f, 1.00f));
	__m128 DetB = glm::detail::sse_slow_det_ps(&IdentityB.Data[0].Data); 
	__m128 DetC = glm::detail::sse_det_ps(&IdentityB.Data[0].Data);

	return 0;
}
