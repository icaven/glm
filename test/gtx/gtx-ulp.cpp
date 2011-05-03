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

namespace
{
	template <typename T>
	T next(T const & x);

#if(GLM_COMPILER & GLM_COMPILER_VC)
#	include <cfloat>
	GLM_FUNC_QUALIFIER float next(float const & x)
	{
		return _nextafterf(x, std::numeric_limits<float>::max());
	}

	GLM_FUNC_QUALIFIER double next(double const & x)
	{
		return _nextafter(x, std::numeric_limits<double>::max());
	}
#else
#	include <cmath>
	GLM_FUNC_QUALIFIER float next(float const & x)
	{
		return nextafterf(x, std::numeric_limits<float>::max());
	}

	GLM_FUNC_QUALIFIER double next(double const & x)
	{
		return nextafter(x, std::numeric_limits<double>::max());
	}
#endif

	template <typename T>
	GLM_FUNC_QUALIFIER T next(T const & x, std::size_t const & Steps)
	{
		T temp = x;
		for(std::size_t i = 0; i < Steps; ++i)
			temp = next(temp);
		return temp;
	}

	template <typename T>
	GLM_FUNC_QUALIFIER std::size_t ulp_distance(T const & x, T const & y)
	{
		std::size_t ulp = 0;
		T temp = x;

		while(temp != y)
		{
			++ulp;
			temp = next(temp);
		}

		return ulp;
	}
}//namespace

int test_ulp_float()
{
	std::cout.precision(std::numeric_limits<double>::digits10 + 1);

	float W = 1.0f;
    float X = next(W);
	bool TestX = W != X;
	std::cout << " 1.0f, Next: " << ulp_distance(W, X)<< std::endl;
	std::cout << " 1.0f, Nextt(1000): " << next(W, 1000)<< std::endl;
	//std::cout << " 0.01, 0.011: " << ulp_distance(0.00000000001f, 0.000000000011f) << std::endl;
	//std::cout << " 0.01, 0.011: " << ulp_distance(0.00000000001, 0.000000000011) << std::endl;

	double Y = 1.0;
    double Z = next(Y);
	bool TestZ = Y != Z;
    std::cout << Z << " 0.01, 0.011" << std::endl;
	std::cout << " 1.0, Next(1000000): " << next(Y, 1000000)<< std::endl;
    
	std::size_t A = glm::ulp(0.01, 0.02);
	std::size_t B = glm::ulp(glm::vec2(0.01), glm::vec2(0.02));
	std::size_t C = glm::ulp(glm::vec3(0.01), glm::vec3(0.02));
	std::size_t D = glm::ulp(glm::vec4(0.01), glm::vec4(0.02));
	std::cout << "glm::ulp test: " << A << std::endl;
	std::cout << "glm::ulp test: " << B << std::endl;
	std::cout << "glm::ulp test: " << C << std::endl;
	std::cout << "glm::ulp test: " << D << std::endl;
	return 0;
}

int main()
{
    std::cout << "Test 76" << std::endl;
	test_ulp_float();
}


