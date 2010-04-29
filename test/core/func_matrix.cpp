///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/func_matrix.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../precompiled.hpp"
#include <glm/core/func_matrix.hpp>

namespace glm{
namespace test{

bool test_matrixcompmult_2x2()
{
    mat2 x = mat2(vec2(0, 1), vec2(2, 3));
    mat2 result = matrixCompMult(x, x);

    if(result[0][0] != 0 || result[0][1] != 1 || 
       result[1][0] != 4 || result[1][1] != 9)
        return false;
    return true;
}

bool test_matrixcompmult_3x3()
{
    mat3 x = mat3(vec3(0, 0, 0), 
                  vec3(1, 1, 1),
                  vec3(2, 2, 2));
    mat3 result = matrixCompMult(x, x);

    if(result[0][0] != 0 || result[0][1] != 0 || result[0][2] != 0 || 
       result[1][0] != 1 || result[1][1] != 1 || result[1][2] != 1 || 
       result[2][0] != 4 || result[2][1] != 4 || result[2][2] != 4)
        return false;
    return true;
}

bool test_matrixcompmult_4x4()
{
    mat4 x = mat4(vec4(0, 0, 0, 0), 
                  vec4(1, 1, 1, 1),
                  vec4(2, 2, 2, 2),
                  vec4(3, 3, 3, 3));
    mat4 result = matrixCompMult(x, x);

    if(result[0][0] != 0 || result[0][1] != 0 || result[0][2] != 0 || result[0][3] != 0 || 
       result[1][0] != 1 || result[1][1] != 1 || result[1][2] != 1 || result[1][3] != 1 || 
       result[2][0] != 4 || result[2][1] != 4 || result[2][2] != 4 || result[2][3] != 4 ||
       result[3][0] != 9 || result[3][1] != 9 || result[3][2] != 9 || result[3][3] != 9)
        return false;
    return true;
}

bool test_outerProduct()
{
    mat2x2 m0 = glm::outerProduct(vec2(1.f), vec2(1.f));

	return true;
}

bool test_transpose()
{
	return true;
}

void main_core_func_matrix()
{
	assert(test_matrixcompmult_2x2());
	assert(test_matrixcompmult_3x3());
	assert(test_matrixcompmult_4x4());

	assert(test_outerProduct());

	assert(test_transpose());
}

}//namespace test
}//namespace glm
