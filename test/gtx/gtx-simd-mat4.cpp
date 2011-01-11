///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2010-09-16
// Licence : This source is under MIT licence
// File    : test/gtx/simd-mat4.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_INSTRUCTION_SET GLM_PLATFORM_SSE3
#include <glm/glm.hpp>
#include <glm/gtx/simd_mat4.hpp>
#include <iostream>
#include <ctime>
#include <vector>

void test_detA()
{
	glm::mat4 Identity(
		glm::vec4(4.0f, 0.7f, 0.1f, 0.01f),
		glm::vec4(0.5f, 3.0f, 0.6f, 0.02f),
		glm::vec4(0.2f, 0.4f, 2.0f, 0.03f),
		glm::vec4(4.0f, 3.0f, 2.0f, 1.00f));

	std::vector<float> Test(10000000);

	std::clock_t TimeStart = clock();

	for(std::size_t i = 0; i < Test.size(); ++i)
		Test[i] = glm::determinant(Identity);

	std::clock_t TimeEnd = clock();
	printf("Det A: %d\n", TimeEnd - TimeStart);
}

void test_detB()
{
	glm::simd_mat4 IdentityB(
		glm::simd_vec4(4.0f, 0.7f, 0.1f, 0.01f),
		glm::simd_vec4(0.5f, 3.0f, 0.6f, 0.02f),
		glm::simd_vec4(0.2f, 0.4f, 2.0f, 0.03f),
		glm::simd_vec4(4.0f, 3.0f, 2.0f, 1.00f));

	std::vector<__m128> Test(10000000);

	std::clock_t TimeStart = clock();

	for(std::size_t i = 0; i < Test.size(); ++i)
		Test[i] = glm::detail::sse_slow_det_ps(&IdentityB.Data[0].Data); 

	std::clock_t TimeEnd = clock();
	printf("Det B: %d\n", TimeEnd - TimeStart);
}

void test_detC()
{
	glm::simd_mat4 IdentityB(
		glm::simd_vec4(4.0f, 0.7f, 0.1f, 0.01f),
		glm::simd_vec4(0.5f, 3.0f, 0.6f, 0.02f),
		glm::simd_vec4(0.2f, 0.4f, 2.0f, 0.03f),
		glm::simd_vec4(4.0f, 3.0f, 2.0f, 1.00f));

	std::vector<__m128> Test(10000000);

	std::clock_t TimeStart = clock();

	for(std::size_t i = 0; i < Test.size(); ++i)
		Test[i] = glm::detail::sse_det_ps(&IdentityB.Data[0].Data); 

	std::clock_t TimeEnd = clock();
	printf("Det C: %d\n", TimeEnd - TimeStart);
}

int main(int argc, void* argv[])
{
	test_detA();
	test_detB();
	test_detC();

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

	std::vector<float> TestA(100000);


	std::vector<__m128> TestB(100000);
	std::vector<__m128> TestC(100000);

	return 0;
}
