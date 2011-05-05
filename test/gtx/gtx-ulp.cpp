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
#include <limits>

int test_ulp_float()
{
	std::cout.precision(std::numeric_limits<double>::digits10 + 1);

	float W = 1.0f;
    float X = glm::next_float(W);
    
	double Y = 1.0;
    double Z = glm::next_float(Y);
    
	bool TestX = W != X;
	bool TestZ = Y != Z;    
    
	std::cout << "1.0f, Next: " << glm::float_distance(W, X)<< std::endl;
	std::cout << "1.0f, Next(1000): " << glm::float_distance(W, glm::next_float(W, 1000)) << std::endl;
    
	std::cout << "1.0f, Next: " << glm::float_distance(X, W)<< std::endl;
	std::cout << "1.0f, Next(1000): " << glm::float_distance(glm::next_float(W, 1000), W) << std::endl;
    
	std::cout << "1.0, Next: " << glm::float_distance(Y, Z) << std::endl;
	std::cout << "1.0, Next(1000): " << glm::float_distance(glm::next_float(Y, 1000), Y) << std::endl;



    std::cout << Z << " 0.01, 0.011" << std::endl;
	std::cout << " 1.0, Next(1000000): " << glm::next_float(Y, 1000000)<< std::endl;
    
	//std::size_t A = glm::ulp(0.01, 0.02);
	//std::size_t B = glm::ulp(glm::vec2(0.01), glm::vec2(0.02));
	//std::size_t C = glm::ulp(glm::vec3(0.01), glm::vec3(0.02));
	//std::size_t D = glm::ulp(glm::vec4(0.01), glm::vec4(0.02));
	//std::cout << "glm::ulp test: " << A << std::endl;
	//std::cout << "glm::ulp test: " << B << std::endl;
	//std::cout << "glm::ulp test: " << C << std::endl;
	//std::cout << "glm::ulp test: " << D << std::endl;
	return 0;
}

int main()
{
    std::cout << "Test 76" << std::endl;
	test_ulp_float();
}


