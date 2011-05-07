///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2011-05-07
// Licence : This source is under MIT licence
// File    : test/gtc/matrix_access.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/matrix_access.hpp>

int test_mat4x4_row_get()
{
    int Error = 0;
    
    glm::imat4 m(1);
    
    glm::ivec4 A = glm::row(m, 0);
    Error += A == glm::ivec4(1, 0, 0, 0) ? 0 : 1;
    glm::ivec4 B = glm::row(m, 0);
    Error += B == glm::ivec4(0, 1, 0, 0) ? 0 : 1;
    glm::ivec4 C = glm::row(m, 0);
    Error += C == glm::ivec4(0, 0, 1, 0) ? 0 : 1;
    glm::ivec4 D = glm::row(m, 0);
    Error += D == glm::ivec4(0, 0, 0, 1) ? 0 : 1;

    return Error;
}

int test_mat4x4_col_get()
{
    int Error = 0;
    
    glm::imat4 m(1);
    
    glm::ivec4 A = glm::column(m, 0);
    Error += A == glm::ivec4(1, 0, 0, 0) ? 0 : 1;
    glm::ivec4 B = glm::column(m, 0);
    Error += B == glm::ivec4(0, 1, 0, 0) ? 0 : 1;
    glm::ivec4 C = glm::column(m, 0);
    Error += C == glm::ivec4(0, 0, 1, 0) ? 0 : 1;
    glm::ivec4 D = glm::column(m, 0);
    Error += D == glm::ivec4(0, 0, 0, 1) ? 0 : 1;
    
    return Error;    
}

int test_mat4x4_row_set()
{
    
}

int test_mat4x4_col_set()
{
    
}

int main()
{
	int Error = 0;

    Error += test_mat4x4_row_get();
    Error += test_mat4x4_col_set();
    Error += test_mat4x4_row_set();
    Error += test_mat4x4_col_set();
    
	return Error;
}
