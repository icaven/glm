///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-25
// Updated : 2011-05-25
// Licence : This source is under MIT License
// File    : test/core/type_length.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_FORCE_SIZE_FUNC
#include <glm/glm.hpp>
#include <glm/gtc/vec1.hpp>

int test_length_mat_non_squared()
{
	int Error = 0;

	Error += glm::mat2x3().size() == 2 ? 0 : 1;
	Error += glm::mat2x4().size() == 2 ? 0 : 1;
	Error += glm::mat3x2().size() == 3 ? 0 : 1;
	Error += glm::mat3x4().size() == 3 ? 0 : 1;
	Error += glm::mat4x2().size() == 4 ? 0 : 1;
	Error += glm::mat4x3().size() == 4 ? 0 : 1;
	
	Error += glm::dmat2x3().size() == 2 ? 0 : 1;
	Error += glm::dmat2x4().size() == 2 ? 0 : 1;
	Error += glm::dmat3x2().size() == 3 ? 0 : 1;
	Error += glm::dmat3x4().size() == 3 ? 0 : 1;
	Error += glm::dmat4x2().size() == 4 ? 0 : 1;
	Error += glm::dmat4x3().size() == 4 ? 0 : 1;
	
	return Error;
}

int test_length_mat()
{
	int Error = 0;
	
	Error += glm::mat2().size() == 2 ? 0 : 1;
	Error += glm::mat3().size() == 3 ? 0 : 1;
	Error += glm::mat4().size() == 4 ? 0 : 1;
	Error += glm::mat2x2().size() == 2 ? 0 : 1;
	Error += glm::mat3x3().size() == 3 ? 0 : 1;
	Error += glm::mat4x4().size() == 4 ? 0 : 1;

	Error += glm::dmat2().size() == 2 ? 0 : 1;
	Error += glm::dmat3().size() == 3 ? 0 : 1;
	Error += glm::dmat4().size() == 4 ? 0 : 1;
	Error += glm::dmat2x2().size() == 2 ? 0 : 1;
	Error += glm::dmat3x3().size() == 3 ? 0 : 1;
	Error += glm::dmat4x4().size() == 4 ? 0 : 1;
	
	return Error;
}

int test_length_vec()
{

	int Error = 0;

	Error += glm::vec1().size() == 1 ? 0 : 1;
	Error += glm::vec2().size() == 2 ? 0 : 1;
	Error += glm::vec3().size() == 3 ? 0 : 1;
	Error += glm::vec4().size() == 4 ? 0 : 1;

	Error += glm::ivec1().size() == 1 ? 0 : 1;
	Error += glm::ivec2().size() == 2 ? 0 : 1;
	Error += glm::ivec3().size() == 3 ? 0 : 1;
	Error += glm::ivec4().size() == 4 ? 0 : 1;

	Error += glm::uvec1().size() == 1 ? 0 : 1;
	Error += glm::uvec2().size() == 2 ? 0 : 1;
	Error += glm::uvec3().size() == 3 ? 0 : 1;
	Error += glm::uvec4().size() == 4 ? 0 : 1;

	Error += glm::dvec1().size() == 1 ? 0 : 1;
	Error += glm::dvec2().size() == 2 ? 0 : 1;
	Error += glm::dvec3().size() == 3 ? 0 : 1;
	Error += glm::dvec4().size() == 4 ? 0 : 1;
	
	return Error;
}

int main()
{
	int Error = 0;
	
	Error += test_length_vec();
	Error += test_length_mat();
	Error += test_length_mat_non_squared();
	
	return Error;
}

