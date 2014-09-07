///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2014-09-08
// Updated : 2014-09-08
// Licence : This source is under MIT licence
// File    : test/gtx/common.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/gtx/common.hpp>
#include <glm/gtx/vec1.hpp>

int test_isdenormal()
{
	int Error(0);

	bool A = glm::isdenormal(1.0f);
	glm::bvec1 B = glm::isdenormal(glm::vec1(1.0f));
	glm::bvec2 C = glm::isdenormal(glm::vec2(1.0f));
	glm::bvec3 D = glm::isdenormal(glm::vec3(1.0f));
	glm::bvec4 E = glm::isdenormal(glm::vec4(1.0f));

	return Error;
}

int main()
{
	int Error(0);

	Error += test_isdenormal();

	return Error;
}
