///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2010-09-16
// Licence : This source is under MIT licence
// File    : test/gtc/type_ptr.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#define GLM_MESSAGES
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

bool test_make_pointer()
{
    float ArrayA[] = {1, 2, 3, 4};
    glm::vec4 Vec4A = glm::make_vec4(ArrayA);
}

int main()
{
	int Failed = 0;
    
    Failed += test_make_pointer() ? 0 : 1;

	return Failed;
}
