///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/func_geometric.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../precompiled.hpp"
#include <glm/core/func_geometric.hpp>

namespace glm{
namespace test{

bool test_length_1()
{
    float f1 = 0.0f;
    float len1 = length(f1);
    float f2 = 1.0f;
    float len2 = length(f2);

    if (len1 == 0.0f && len2 == 1.0f)
        return true;
    return false;
}

bool test_length_2()
{
    vec2 v1 = vec2(0, 0);
    float len1 = length(v1);
    vec2 v2 = vec2 (1, 1);
    float len2 = length(v2);

    if (len1 == 0.0f && len2 > 1.41f && len2 < 1.42f)
        return true;
    return false;
}

bool test_length_3()
{
    vec3 v1 = vec3(0, 0, 0);
    float len1 = length(v1);
    vec3 v2 = vec3 (1, 1, 1);
    float len2 = length(v2);

    if (len1 == 0.0f && len2 > 1.73f && len2 < 1.74f)
        return true;
    return false;
}

bool test_length_4()
{
    vec4 v1 = vec4(0, 0, 0, 0);
    float len1 = length(v1);
    vec4 v2 = vec4(1, 1, 1, 1);
    float len2 = length(v2);

    if (len1 == 0.0f && len2 == 2.f)
        return true;
    return false;
}

bool test_distance_1()
{
    float p0 = 2.f;
    float p1 = -2.f;
    float dist = distance(p0, p1);

    if (dist == 4.0f)
        return true;
    return false;
}

bool test_distance_2()
{
    vec2 p0 = vec2(0.f, 2.f);
    vec2 p1 = vec2(0.f,-2.f);
    float dist = distance(p0, p1);

    if (dist == 4.0f)
        return true;
    return false;
}

bool test_distance_3()
{
    vec3 p0 = vec3(0.f, 0.f, 2.f);
    vec3 p1 = vec3(0.f, 0.f,-2.f);
    float dist = distance(p0, p1);

    if (dist == 4.0f)
        return true;
    return false;
}

bool test_distance_4()
{
    vec4 p0 = vec4(0.f, 0.f, 2.f, 0.f);
    vec4 p1 = vec4(0.f, 0.f,-2.f, 0.f);
    float dist = distance(p0, p1);

    if (dist == 4.0f)
        return true;
    return false;
}

bool test_dot_1()
{
    float v1 = 1.0f;
    float v2 = 0.0f;
    float dot1 = dot (v1, v1);
    float dot2 = dot (v1, v2);

    if (dot1 == 1.0f && dot2 == 0.0f)
        return true;
    return false;
}

bool test_dot_2()
{
    vec2 v1 = vec2 (1, 0);
    vec2 v2 = vec2 (0, 1);
    float dot1 = dot (v1, v1);
    float dot2 = dot (v1, v2);

    if (dot1 == 1.0f && dot2 == 0.0f)
        return true;
    return false;
}

bool test_dot_3()
{
    vec3 v1 = vec3 (1, 0, 0);
    vec3 v2 = vec3 (0, 1, 0);
    float dot1 = dot (v1, v1);
    float dot2 = dot (v1, v2);

    if (dot1 == 1.0f && dot2 == 0.0f)
        return true;
    return false;
}

bool test_dot_4()
{
    vec4 v1 = vec4 (1, 0, 0, 0);
    vec4 v2 = vec4 (0, 1, 0, 0);
    float dot1 = dot (v1, v1);
    float dot2 = dot (v1, v2);

    if (dot1 == 1.0f && dot2 == 0.0f)
        return true;
    return false;
}

bool test_cross_vec3 ()
{
    vec3 v1 = vec3(1.0f, 0.0f, 0.0f);
    vec3 v2 = vec3(0.0f, 1.0f, 0.0f);
    vec3 v3 = cross(v1, v2);
    vec3 v4 = vec3(0.0f, 0.0f, 1.0f);

    if (v3.x == v4.x && v3.y == v4.y && v3.z == v4.z)
        return true;
    return false;
}

bool test_normalize_1()
{
    float f1 = 0.0f;
    f1 = normalize(f1);
    float f2 = 1.0f;
    f2 = normalize(f2);

    if (f1 == 1.0f && f2 == 1.0f)
        return true;
    return false;
}

bool test_normalize_2()
{
    vec2 v1 = vec2(0, 0);
    v1 = normalize(v1);
    vec2 v2 = vec2 (1, 1);
    v2 = normalize(v2);

    if (length (v2) > 0.99f && length (v2) < 1.01f)
        return true;
    return false;
}

bool test_normalize_3()
{
    vec3 v1 = vec3(0, 0, 0);
    v1 = normalize(v1);
    vec3 v2 = vec3(1, 1, 1);
    v2 = normalize(v2);

    if (length (v2) > 0.99f && length (v2) < 1.01f)
        return true;
    return false;
}

bool test_normalize_4()
{
    vec4 v1 = vec4(0, 0, 0, 0);
    v1 = normalize(v1);
    vec4 v2 = vec4(1, 1, 1, 1);
    v2 = normalize(v2);

    if (length (v2) > 0.99f && length (v2) < 1.01f)
        return true;
    return false;
}

bool test_faceforward_1()
{
    float N = 1.0f;
    float I = 1.0f;
    float Nref = 1.0f;
    N = faceforward(N, I, Nref);

    if (N == -1)
        return true;
    return false;
}

bool test_faceforward_2()
{
    vec2 N = vec2(1, 1);
    vec2 I = vec2(1, 0);
    vec2 Nref = vec2(0, 0);
    N = faceforward(N, I, Nref);

    if (N.x == -1 && N.y == -1)
        return true;
    return false;
}

bool test_faceforward_3()
{
    vec3 N = vec3(1, 1, 1);
    vec3 I = vec3(1, 0, 0);
    vec3 Nref = vec3(0, 0, 0);
    N = faceforward(N, I, Nref);

    if (N.x == -1 && N.y == -1 && N.z == -1)
        return true;
    return false;
}

bool test_faceforward_4()
{
    vec4 N = vec4(1, 1, 1, 1);
    vec4 I = vec4(1, 0, 0, 0);
    vec4 Nref = vec4(0, 0, 0, 0);
    N = faceforward(N, I, Nref);

    if (N.x == -1 && N.y == -1 && N.z == -1 && N.w == -1)
        return true;
    return false;
}

bool test_reflect_2()
{
    vec2 N = vec2( 1, 0);
    vec2 I = vec2(-1, 0);
    vec2 result = reflect(I, N);

    if (result.x != 1.0f || result.y != 0.f)
        return false;
    return true;
}

bool test_reflect_3()
{
    vec3 N = vec3( 1, 0, 0);
    vec3 I = vec3(-1, 0, 0);
    vec3 result = reflect(I, N);

    if (result.x != 1.0f || result.y != 0.f || result.z != 0.f)
        return false;
    return true;
}

bool test_reflect_4()
{
    vec4 N = vec4( 1, 0, 0, 0);
    vec4 I = vec4(-1, 0, 0, 0);
    vec4 result = reflect(I, N);

    if (result.x != 1.0f || result.y != 0.f || result.z != 0.f || result.w != 0.f)
        return false;
    return true;
}

bool test_refract_2()
{
    glm::vec2 N = glm::vec2( 1, 0);
    glm::vec2 I = glm::vec2(-1, 0);
    glm::vec2 result = glm::refract(I, N, 1.0f);

    if (result.x != -1.f || result.y != 0.f)
        return false;
    return true;
}

bool test_refract_3()
{
    glm::vec3 N = glm::vec3( 1, 0, 0);
    glm::vec3 I = glm::vec3(-1, 0, 0);
    glm::vec3 result = glm::refract(I, N, 1.0f);

    if (result.x != -1.f || result.y != 0.f || result.z != 0.f)
        return false;
    return true;
}

bool test_refract_4()
{
    glm::vec4 N = glm::vec4( 1, 0, 0, 0);
    glm::vec4 I = glm::vec4(-1, 0, 0, 0);
    glm::vec4 result = glm::refract(I, N, 1.0f);

   if (result.x != -1.f || result.y != 0.f || result.z != 0.f || result.w != 0.f)
        return false;
    return true;
}


void main_core_func_geometric()
{
	assert(test_length_1());
	assert(test_length_2());
	assert(test_length_3());
	assert(test_length_4());

	assert(test_distance_1());
	assert(test_distance_2());
	assert(test_distance_3());
	assert(test_distance_4());

	assert(test_dot_1());
	assert(test_dot_2());
	assert(test_dot_3());
	assert(test_dot_4());

	assert(test_cross_vec3());

	assert(test_normalize_1());
	assert(test_normalize_2());
	assert(test_normalize_3());
	assert(test_normalize_4());

	assert(test_faceforward_1());
	assert(test_faceforward_2());
	assert(test_faceforward_3());
	assert(test_faceforward_4());
	
	assert(test_reflect_2());
	assert(test_reflect_3());
	assert(test_reflect_4());

	assert(test_refract_2());
	assert(test_refract_3());
	assert(test_refract_4());
}

}//namespace test
}//namespace glm
