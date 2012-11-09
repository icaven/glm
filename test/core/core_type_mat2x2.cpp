///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2012 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/type_mat2x2.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/epsilon.hpp>

int test_operators()
{
	glm::mat2x2 l(1.0f);
	glm::mat2x2 m(1.0f);
	glm::vec2 u(1.0f);
	glm::vec2 v(1.0f);
	float x = 1.0f;
	glm::vec2 a = m * u;
	glm::vec2 b = v * m;
	glm::mat2x2 n = x / m;
	glm::mat2x2 o = m / x;
	glm::mat2x2 p = x * m;
	glm::mat2x2 q = m * x;
	bool R = m != q;
	bool S = m == l;

	return (S && !R) ? 0 : 1;
}

int test_inverse()
{
	int Error(0);

	{
		glm::mat2 Matrix(1, 2, 3, 4);
		glm::mat2 Inverse = glm::inverse(Matrix);
		glm::mat2 Identity = Matrix * Inverse;

		Error += glm::epsilonEqual(Identity[0][0], 1.0f, 0.01f) ? 0 : 1;
		Error += glm::epsilonEqual(Identity[0][1], 0.0f, 0.01f) ? 0 : 1;
		Error += glm::epsilonEqual(Identity[1][0], 0.0f, 0.01f) ? 0 : 1;
		Error += glm::epsilonEqual(Identity[1][1], 1.0f, 0.01f) ? 0 : 1;
	}

	{
		glm::mat2 Matrix(1, 2, 3, 4);
		glm::mat2 Identity = Matrix / Matrix;

		Error += glm::epsilonEqual(Identity[0][0], 1.0f, 0.01f) ? 0 : 1;
		Error += glm::epsilonEqual(Identity[0][1], 0.0f, 0.01f) ? 0 : 1;
		Error += glm::epsilonEqual(Identity[1][0], 0.0f, 0.01f) ? 0 : 1;
		Error += glm::epsilonEqual(Identity[1][1], 1.0f, 0.01f) ? 0 : 1;
	}

	return Error;
}

int main()
{
	int Error(0);

	Error += test_operators();
	Error += test_inverse();

	return Error;
}
