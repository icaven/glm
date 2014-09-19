///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2014-09-19
// Updated : 2014-09-19
// Licence : This source is under MIT licence
// File    : test/gtx/gtx_range.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/gtx/range.hpp>

int testVec(){
	int Error(0);
	glm::vec3 v(1, 2, 3);

	int count = 0;
	for(float x : v){ count++; }
	Error += count == 3 ? 0 : 1;

	for(float& x : v){ x = 0; }
	Error += glm::all(glm::equal(v, glm::vec3(0, 0, 0))) ? 0 : 1;
	return Error;
}

int testMat(){
	int Error(0);
	glm::mat4x3 m(1);

	int count = 0;
	for(float x : m){ count++; }
	Error += count == 12 ? 0 : 1;

	for(float& x : m){ x = 0; }
	glm::vec4 v(1, 1, 1, 1);
	Error += glm::all(glm::equal(m*v, glm::vec3(0, 0, 0))) ? 0 : 1;
	return Error;
}

int main(){
	int Error(0);
	Error += testVec();
	Error += testMat();
	return Error;
}
