///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2011-05-25
// Licence : This source is under MIT licence
// File    : test/gtc/quaternion.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/epsilon.hpp>

int test_quat_type()
{
    glm::quat A;
    glm::dquat B;
    
    return 0;
}

int test_quat_slerp()
{
    int Error = 0;
    
    glm::quat A(glm::vec3(0, 0, 1));
    glm::quat B(glm::vec3(0, 1, 0));
    glm::quat C = glm::mix(A, B, 0.5f);
    glm::quat D(glm::normalize(glm::vec3(0, 1, 1)));

    Error += C == D ? 0 : 1;

    return Error;
}

int test_quat_length()
{
    int Error = 0;

    float A = glm::length(glm::quat(45.0f, glm::vec3(0, 0, 1)));
    Error += A == 1.0f ? 0 : 1;
    float B = glm::length(glm::quat(90.0f, glm::vec3(0, 0, 2)));
    Error += B == 2.0f ? 0 : 1;

    return Error;
}

int test_quat_normalize()
{
    int Error = 0;
 
    {
        glm::quat Q(45.0f, glm::vec3(0, 0, 1));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += L == 1.0f ? 0 : 1;
    }
    {
        glm::quat Q(45.0f, glm::vec3(0, 0, 2));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += L == 1.0f ? 0 : 1;
    }
    {
        glm::quat Q(45.0f, glm::vec3(1, 2, 3));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += L == 1.0f ? 0 : 1;
    }

    return Error;
}

int main()
{
	int Error = 0;
    
    Error += test_quat_type();
    Error += test_quat_slerp();
    Error += test_quat_length();
    Error += test_quat_normalize();

	return Error;
}
