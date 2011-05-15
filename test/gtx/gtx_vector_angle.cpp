///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-15
// Updated : 2011-05-15
// Licence : This source is under MIT licence
// File    : test/gtx/vector_angle.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <iostream>
#include <limits>

int test_vector_angle_calls()
{
	int Error = 0;

	float AngleA = glm::angle(glm::vec3(1, 0, 0), glm::vec3(0, 1, 0));
	float AngleB = glm::orientedAngle(glm::vec2(1, 0), glm::normalize(glm::vec2(1, 1)));
	float AngleC = glm::orientedAngle(glm::vec2(0, 1), glm::normalize(glm::vec2(1, 1)));
	float AngleD = glm::orientedAngleFromRef(glm::vec3(1, 0, 0), glm::vec3(0, 1, 0), glm::vec3(0, 0, 1));

	return Error;
}

int main()
{
	int Error = 0;
	Error += test_vector_angle_calls();

	return Error;
}


