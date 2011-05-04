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
	T next_float(T const & x);

#if(GLM_COMPILER & GLM_COMPILER_VC)
#	include <cfloat>
#   define GLM_NEXT_AFTER _nextafterf
#else
#	include <cmath>
#   define GLM_NEXT_AFTER nextafterf
#endif

	GLM_FUNC_QUALIFIER float next_float(float const & x)
	{
		return GLM_NEXT_AFTER(x, std::numeric_limits<float>::max());
	}

	GLM_FUNC_QUALIFIER double next_float(double const & x)
	{
		return GLM_NEXT_AFTER(x, std::numeric_limits<double>::max());
	}
    
	GLM_FUNC_QUALIFIER float prev_float(float const & x)
	{
		return GLM_NEXT_AFTER(x, std::numeric_limits<float>::min());
	}
    
	GLM_FUNC_QUALIFIER double prev_float(double const & x)
	{
		return GLM_NEXT_AFTER(x, std::numeric_limits<double>::min());
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T next_float(T const & x, std::size_t const & ulps)
	{
		T temp = x;
		for(std::size_t i = 0; i < ulps; ++i)
			temp = next_float(temp);
		return temp;
	}

	template <typename T>
	GLM_FUNC_QUALIFIER T prev_float(T const & x, std::size_t const & ulps)
	{
		T temp = x;
		for(std::size_t i = 0; i < ulps; ++i)
			temp = prev_float(temp);
		return temp;
	}
    
	template <typename T>
	GLM_FUNC_QUALIFIER std::size_t float_distance(T const & x, T const & y)
	{
        std::size_t ulp = 0;
        
        if(x < y)
        {
            T temp = x;
            while(temp != y && ulp < std::numeric_limits<std::size_t>::max())
            {
                ++ulp;
                temp = next_float(temp);
            }
        }
        else if(y < x)
        {
            T temp = y;
            while(temp != x && ulp < std::numeric_limits<std::size_t>::max())
            {
                ++ulp;
                temp = next_float(temp);
            }
        }
        else // ==
        {
            
        }
            
		return ulp;
	}
}//namespace

int test_ulp_float()
{
	std::cout.precision(std::numeric_limits<double>::digits10 + 1);

	float W = 1.0f;
    float X = next_float(W);
    
	double Y = 1.0;
    double Z = next_float(Y);
    
	bool TestX = W != X;
	bool TestZ = Y != Z;    
    
	std::cout << "1.0f, Next: " << float_distance(W, X)<< std::endl;
	std::cout << "1.0f, Next(1000): " << float_distance(W, next_float(W, 1000)) << std::endl;
    
	std::cout << "1.0f, Next: " << float_distance(X, W)<< std::endl;
	std::cout << "1.0f, Next(1000): " << float_distance(next_float(W, 1000), W) << std::endl;
    
	std::cout << "1.0, Next: " << float_distance(Y, Z) << std::endl;
	std::cout << "1.0, Next(1000): " << float_distance(next_float(Y, 1000), Y) << std::endl;



    std::cout << Z << " 0.01, 0.011" << std::endl;
	std::cout << " 1.0, Next(1000000): " << next_float(Y, 1000000)<< std::endl;
    
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


