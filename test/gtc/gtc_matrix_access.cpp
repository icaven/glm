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
    
    glm::mat4 m(1);
    
    glm::vec4 A = glm::row(m, 0);
    Error += A == glm::vec4(1, 0, 0, 0) ? 0 : 1;
    glm::vec4 B = glm::row(m, 0);
    Error += B == glm::vec4(0, 1, 0, 0) ? 0 : 1;
    glm::vec4 C = glm::row(m, 0);
    Error += C == glm::vec4(0, 0, 1, 0) ? 0 : 1;
    glm::vec4 D = glm::row(m, 0);
    Error += D == glm::vec4(0, 0, 0, 1) ? 0 : 1;

    return Error;
}

int test_mat4x4_col_get()
{
    int Error = 0;
    
    glm::mat4 m(1);
    
    glm::vec4 A = glm::column(m, 0);
    Error += A == glm::vec4(1, 0, 0, 0) ? 0 : 1;
    glm::vec4 B = glm::column(m, 0);
    Error += B == glm::vec4(0, 1, 0, 0) ? 0 : 1;
    glm::vec4 C = glm::column(m, 0);
    Error += C == glm::vec4(0, 0, 1, 0) ? 0 : 1;
    glm::vec4 D = glm::column(m, 0);
    Error += D == glm::vec4(0, 0, 0, 1) ? 0 : 1;
    
    return Error;    
}

int test_mat4x4_row_set()
{
    int Error = 0;
    
    glm::mat4 m(1);
    
	glm::row(m, 0, glm::vec4( 0,  1,  2,  3));
	glm::row(m, 1, glm::vec4( 4,  5,  6,  7));
	glm::row(m, 2, glm::vec4( 8,  9, 10, 11));
	glm::row(m, 3, glm::vec4(12, 13, 14, 15));

    Error += glm::row(m, 0) == glm::vec4( 0,  1,  2,  3) ? 0 : 1;
    Error += glm::row(m, 0) == glm::vec4( 4,  5,  6,  7) ? 0 : 1;
    Error += glm::row(m, 0) == glm::vec4( 8,  9, 10, 11) ? 0 : 1;
    Error += glm::row(m, 0) == glm::vec4(12, 13, 14, 15) ? 0 : 1;

    return Error;
}

int test_mat4x4_col_set()
{
    int Error = 0;
    
    glm::mat4 m(1);
    
	glm::column(m, 0, glm::vec4( 0,  1,  2,  3));
	glm::column(m, 1, glm::vec4( 4,  5,  6,  7));
	glm::column(m, 2, glm::vec4( 8,  9, 10, 11));
	glm::column(m, 3, glm::vec4(12, 13, 14, 15));

    Error += glm::column(m, 0) == glm::vec4( 0,  1,  2,  3) ? 0 : 1;
    Error += glm::column(m, 0) == glm::vec4( 4,  5,  6,  7) ? 0 : 1;
    Error += glm::column(m, 0) == glm::vec4( 8,  9, 10, 11) ? 0 : 1;
    Error += glm::column(m, 0) == glm::vec4(12, 13, 14, 15) ? 0 : 1;

    return Error;
}

int main()
{
	int Error = 0;

    Error += test_mat4x4_row_get();
    Error += test_mat4x4_col_get();
    Error += test_mat4x4_row_set();
    Error += test_mat4x4_col_set();
    
	return Error;
}
