///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-05-25
// Updated : 2011-05-25
// Licence : This source is under MIT licence
// File    : test/gtx/quaternion.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtx/epsilon.hpp>

int test_quat_angle()
{
    int Error = 0;
    
    {
        glm::quat Q(45.0f, glm::vec3(0, 0, 1));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += L == 1.0f ? 0 : 1;
        float A = glm::angle(N);
        Error += glm::equalEpsilon(A, 45.0f, 0.01f) ? 0 : 1;
    }
    {
        glm::quat Q(45.0f, glm::vec3(0, 0, 2));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += L == 1.0f ? 0 : 1;
        float A = glm::angle(N);
        Error += glm::equalEpsilon(A, 45.0f, 0.01f) ? 0 : 1;
    }
    {
        glm::quat Q(45.0f, glm::vec3(1, 2, 3));
        glm::quat N = glm::normalize(Q);
        float L = glm::length(N);
        Error += L == 1.0f ? 0 : 1;
        float A = glm::angle(N);
        Error += glm::equalEpsilon(A, 45.0f, 0.01f) ? 0 : 1;
    }
    
    return Error;
}

int main()
{
	int Error = 0;
    
    Error += test_quat_angle();

	return Error;
}
