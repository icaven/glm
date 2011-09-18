///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2011-05-31
// Licence : This source is under MIT License
// File    : test/core/type_vec2.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>

int test_vec2_operators()
{
    int Error = 0;
    
    {
        glm::vec2 A(1.0f);
        glm::vec2 B(1.0f);
        Error += A != B ? 1 : 0;
        Error += A == B ? 0 : 1;
    }
    
    {
        glm::vec2 A(1.0f);
        glm::vec2 C = A + 1.0f;
        A += 1.0f;
        Error += A.x == 2.0f && A.y == 2.0f ? 0 : 1;
        Error += A.x == C.x && A.y == C.y ? 0 : 1;
    }
    
    {
        glm::vec2 A(1.0f);
        glm::vec2 B(2.0f,-1.0f);
        glm::vec2 C = A + B;
        A += B;
        Error += A.x == 3.0f && A.y == 0.0f ? 0 : 1;
        Error += A.x == C.x && A.y == C.y ? 0 : 1;
    }
    
    {
        glm::vec2 A(1.0f);
        glm::vec2 C = A - 1.0f;
        A -= 1.0f;
        Error += A.x == 0.0f && A.y == 0.0f ? 0 : 1;
        Error += A.x == C.x && A.y == C.y ? 0 : 1;
    }
    
    {
        glm::vec2 A(1.0f);
        glm::vec2 B(2.0f,-1.0f);
        glm::vec2 C = A - B;
        A -= B;
        Error += A.x == -1.0f && A.y == 2.0f ? 0 : 1;
        Error += A.x == C.x && A.y == C.y ? 0 : 1;
    }
  
    {
        glm::vec2 A(1.0f);
        glm::vec2 C = A * 2.0f;
        A *= 2.0f;
        Error += A.x == 2.0f && A.y == 2.0f ? 0 : 1;
        Error += A.x == C.x && A.y == C.y ? 0 : 1;
    }
    
    {
        glm::vec2 A(2.0f);
        glm::vec2 B(2.0f);
        glm::vec2 C = A / B;
        A /= B;
        Error += A.x == 1.0f && A.y == 1.0f ? 0 : 1;
        Error += A.x == C.x && A.y == C.y ? 0 : 1;
    }    
    
	return Error;
}

int test_vec2_ctor()
{
    int Error = 0;
    
    {
        glm::vec2 A = glm::vec2(2.0f);
        glm::vec2 B = glm::vec2(2.0f, 3.0f);
        glm::vec2 C = glm::vec2(2.0f, 3.0);
        //glm::vec2 D = glm::dvec2(2.0); // Build error TODO: What does the specification says?
        glm::vec2 E(glm::dvec2(2.0));
        glm::vec2 F(glm::ivec2(2));
        
    }
    
	return Error;
}   

int test_vec2_size()
{
	int Error = 0;
	
	Error += sizeof(glm::vec2) == sizeof(glm::mediump_vec2) ? 0 : 1;
	Error += 8 == sizeof(glm::mediump_vec2) ? 0 : 1;
	Error += sizeof(glm::dvec2) == sizeof(glm::highp_vec2) ? 0 : 1;
	Error += 16 == sizeof(glm::highp_vec2) ? 0 : 1;
	Error += glm::vec2().length() == 2 ? 0 : 1;
	Error += glm::dvec2().length() == 2 ? 0 : 1;
	
	return Error;
}

int main()
{
	int Error = 0;

	Error += test_vec2_size();
    Error += test_vec2_ctor();
	Error += test_vec2_operators();

	return Error;
}
