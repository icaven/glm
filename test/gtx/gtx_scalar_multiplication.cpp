///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2014-09-22
// Updated : 2014-09-22
// Licence : This source is under MIT licence
// File    : test/gtx/gtx_scalar_multiplication.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/scalar_multiplication.hpp>

int main()
{
	int Error(0);
	glm::vec3 v(0.5, 3.1, -9.1);

	Error += glm::all(glm::equal(v, 1.0 * v)) ? 0 : 1;
	Error += glm::all(glm::equal(v, 1 * v)) ? 0 : 1;
	Error += glm::all(glm::equal(v, 1u * v)) ? 0 : 1;

	glm::mat3 m(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::vec3 w = 0.5f * m * v;

	Error += glm::all(glm::equal((m*v)/2, w)) ? 0 : 1;
	Error += glm::all(glm::equal(m*(v/2), w)) ? 0 : 1;
	Error += glm::all(glm::equal((m/2)*v, w)) ? 0 : 1;
	Error += glm::all(glm::equal((0.5*m)*v, w)) ? 0 : 1;
	Error += glm::all(glm::equal(0.5*(m*v), w)) ? 0 : 1;

	return Error;
}
