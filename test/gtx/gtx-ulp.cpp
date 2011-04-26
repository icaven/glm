///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-04-26
// Updated : 2011-04-26
// Licence : This source is under MIT licence
// File    : test/gtx/ulp.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/ulp.hpp>
#include <iostream>

int test_ulp_float()
{
	std::size_t A = ulp(0.01, 0.02);
	std::size_t B = ulp(glm::vec2(0.01), glm::vec2(0.02));
	std::size_t C = ulp(glm::vec3(0.01), glm::vec3(0.02));
	std::size_t D = ulp(glm::vec4(0.01), glm::vec4(0.02));
	std::cout << "glm::ulp test: " << A << std::endl;
	std::cout << "glm::ulp test: " << B << std::endl;
	std::cout << "glm::ulp test: " << C << std::endl;
	std::cout << "glm::ulp test: " << D << std::endl;
	return 0;
}

int main()
{
	test_ulp_float();
}


