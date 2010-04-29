///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/func_trigonometric.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../precompiled.hpp"
#include <glm/core/func_trigonometric.hpp>

namespace glm{
namespace test{

static const float epsilon = 0.00001f;
static const float pi = 3.14159265358979323846f;

bool test_radians_1()
{
    float angle = radians(360.f);

    if(angle < 2.0f * pi + epsilon && angle > 2.0f * pi - epsilon)
        return true;
    return false;
}

bool test_radians_2()
{
    vec2 angle = radians(vec2(360.f, 180.f));

    if(angle.x < 2.0f * pi + epsilon && angle.x > 2.0f * pi - epsilon &&
       angle.y < pi + epsilon && angle.y > pi - epsilon)
        return true;
    return false;
}

bool test_radians_3()
{
    vec3 angle = radians(vec3(360.f, 180.f, 0.f));

    if(angle.x < 2.0f * pi + epsilon && angle.x > 2.0f * pi - epsilon &&
       angle.y < pi + epsilon && angle.y > pi - epsilon &&
       angle.z == 0.f)
        return true;
    return false;
}

bool test_radians_4()
{
    vec4 angle = radians(vec4 (360.f, 180.f, 0.f, -180.f));

    if(angle.x < 2.0f * pi + epsilon && angle.x > 2.0f * pi - epsilon &&
       angle.y < pi + epsilon && angle.y > pi - epsilon &&
       angle.z == 0.f &&
       angle.w > -(pi + epsilon) && angle.w < -(pi - epsilon))
        return true;
    return false;
}

bool test_degrees_1()
{
    float angle1 = degrees(pi * 2.f);
    float angle2 = degrees(0.f);

    if(angle1 < 360.1f && angle1 > 359.9f && angle2 == 0.0f)
        return true;
    return false;
}

bool test_degrees_2()
{
    vec2 angle = degrees(vec2 (pi * 2.f, pi));

    if(angle.x < 360.1f && angle.x > 359.9f &&
       angle.y < 180.1f && angle.y > 179.9f)
        return true;
    return false;
}

bool test_degrees_3()
{
    vec3 angle = degrees(vec3 (pi * 2.f, pi, 0.f));

    if(angle.x < 360.1f && angle.x > 359.9f &&
       angle.y < 180.1f && angle.y > 179.9f &&
       angle.z == 0.f)
        return true;
    return false;
}

bool test_degrees_4()
{
    vec4 angle = degrees(vec4 (pi * 2.f, pi, 0.f, -pi));

    if(angle.x < 360.1f && angle.x > 359.9f &&
       angle.y < 180.1f && angle.y > 179.9f &&
       angle.z == 0.f &&
       angle.w > -180.1f && angle.w < -179.9f)
        return true;
    return false;
}

bool test_sin_1()
{
    float sinus = glm::sin(0.f);

    if(sinus <= epsilon && sinus >= -epsilon)
        return true;
    return false;
}

bool test_sin_2()
{
    glm::vec2 sinus = glm::sin(glm::vec2(0.f, 0.f));

    if(sinus.x <= epsilon && sinus.x >= -epsilon &&
       sinus.y <= epsilon && sinus.y >= -epsilon)
        return true;
    return false;
}

bool test_sin_3()
{
    glm::vec3 sinus = glm::sin(glm::vec3(0.f, 0.f, 0.f));

    if(sinus.x <= epsilon && sinus.x >= -epsilon &&
       sinus.y <= epsilon && sinus.y >= -epsilon &&
       sinus.z <= epsilon && sinus.z >= -epsilon)
        return true;
    return false;
}

bool test_sin_4()
{
    glm::vec4 sinus = glm::sin(glm::vec4(0.f, 0.f, 0.f, 0.f));

    if(sinus.x <= epsilon && sinus.x >= -epsilon &&
       sinus.y <= epsilon && sinus.y >= -epsilon &&
       sinus.z <= epsilon && sinus.z >= -epsilon &&
       sinus.w <= epsilon && sinus.w >= -epsilon)
        return true;
    return false;
}

bool test_cos_1()
{
    float cosinus = glm::cos(0.f);

    if(cosinus <= 1.0f + epsilon && cosinus >= 1.0f - epsilon)
        return true;
    return false;
}

bool test_cos_2()
{
    glm::vec2 cosinus = glm::cos(glm::vec2(0.f, 0.f));

    if(cosinus.x <= 1.0f + epsilon && cosinus.x >= 1.0f - epsilon &&
       cosinus.y <= 1.0f + epsilon && cosinus.y >= 1.0f - epsilon)
        return true;
    return false;
}

bool test_cos_3()
{
    glm::vec3 cosinus = glm::cos(glm::vec3(0.f, 0.f, 0.f));

    if(cosinus.x <= 1.0f + epsilon && cosinus.x >= 1.0f - epsilon &&
       cosinus.y <= 1.0f + epsilon && cosinus.y >= 1.0f - epsilon &&
       cosinus.z <= 1.0f + epsilon && cosinus.z >= 1.0f - epsilon)
        return true;
    return false;
}

bool test_cos_4()
{
    glm::vec4 cosinus = glm::cos(glm::vec4(0.f, 0.f, 0.f, 0.f));

    if(cosinus.x <= 1.0f + epsilon && cosinus.x >= 1.0f - epsilon &&
       cosinus.y <= 1.0f + epsilon && cosinus.y >= 1.0f - epsilon &&
       cosinus.z <= 1.0f + epsilon && cosinus.z >= 1.0f - epsilon &&
       cosinus.w <= 1.0f + epsilon && cosinus.w >= 1.0f - epsilon)
        return true;
    return false;
}

bool test_tan_1()
{
    float tangent = glm::tan(0.f);

    if(tangent <= epsilon && tangent >= -epsilon)
        return true;
    return false;
}

bool test_tan_2()
{
    glm::vec2 tangent = glm::tan(glm::vec2(0.f, 0.f));

    if(tangent.x <= epsilon && tangent.x >= -epsilon &&
       tangent.y <= epsilon && tangent.y >= -epsilon)
        return true;
    return false;
}

bool test_tan_3()
{
	glm::vec3 tangent = glm::tan(glm::vec3(0.f, 0.f, 0.f));

    if(tangent.x <= epsilon && tangent.x >= -epsilon &&
       tangent.y <= epsilon && tangent.y >= -epsilon &&
       tangent.z <= epsilon && tangent.z >= -epsilon)
        return true;
    return false;
}

bool test_tan_4()
{
	glm::vec4 tangent = glm::tan(glm::vec4(0.f, 0.f, 0.f, 0.f));

    if(tangent.x <= epsilon && tangent.x >= -epsilon &&
       tangent.y <= epsilon && tangent.y >= -epsilon &&
       tangent.z <= epsilon && tangent.z >= -epsilon &&
       tangent.w <= epsilon && tangent.w >= -epsilon)
        return true;
    return false;
}

bool test_asin_1()
{
    float arc_sinus = glm::asin(0.f);

    if(arc_sinus <= epsilon && arc_sinus >= -epsilon)
        return true;
    return false;
}

bool test_asin_2()
{
    glm::vec2 arc_sinus = glm::asin(glm::vec2(0.f, 0.f));

    if(arc_sinus.x <= epsilon && arc_sinus.x >= -epsilon &&
       arc_sinus.y <= epsilon && arc_sinus.y >= -epsilon)
        return true;
    return false;
}

bool test_asin_3()
{
    glm::vec3 arc_sinus = glm::asin(glm::vec3(0.f, 0.f, 0.f));

    if(arc_sinus.x <= epsilon && arc_sinus.x >= -epsilon &&
       arc_sinus.y <= epsilon && arc_sinus.y >= -epsilon &&
       arc_sinus.z <= epsilon && arc_sinus.z >= -epsilon)
        return true;
    return false;
}

bool test_asin_4()
{
    glm::vec4 arc_sinus = glm::sin(glm::vec4(0.f, 0.f, 0.f, 0.f));

    if(arc_sinus.x <= epsilon && arc_sinus.x >= -epsilon &&
       arc_sinus.y <= epsilon && arc_sinus.y >= -epsilon &&
       arc_sinus.z <= epsilon && arc_sinus.z >= -epsilon &&
       arc_sinus.w <= epsilon && arc_sinus.w >= -epsilon)
        return true;
    return false;
}

bool test_acos_1()
{
    float arc_cosinus = glm::acos(1.f);

    if(arc_cosinus <= epsilon && arc_cosinus >= -epsilon)
        return true;
    return false;
}

bool test_acos_2()
{
    glm::vec2 arc_cosinus = glm::acos(glm::vec2(1.f, 1.f));

    if(arc_cosinus.x <= epsilon && arc_cosinus.x >= -epsilon &&
       arc_cosinus.y <= epsilon && arc_cosinus.y >= -epsilon)
        return true;
    return false;
}

bool test_acos_3()
{
    glm::vec3 arc_cosinus = glm::acos(glm::vec3(1.f, 1.f, 1.f));

    if(arc_cosinus.x <= epsilon && arc_cosinus.x >= -epsilon &&
       arc_cosinus.y <= epsilon && arc_cosinus.y >= -epsilon &&
       arc_cosinus.z <= epsilon && arc_cosinus.z >= -epsilon)
        return true;
    return false;
}

bool test_acos_4()
{
    glm::vec4 arc_cosinus = glm::acos(glm::vec4(1.f, 1.f, 1.f, 1.f));

    if(arc_cosinus.x <= epsilon && arc_cosinus.x >= -epsilon &&
       arc_cosinus.y <= epsilon && arc_cosinus.y >= -epsilon &&
       arc_cosinus.z <= epsilon && arc_cosinus.z >= -epsilon &&
       arc_cosinus.w <= epsilon && arc_cosinus.w >= -epsilon)
        return true;
    return false;
}

bool test_atan_1()
{
    float tangent = glm::atan(0.f);

    if(tangent <= epsilon && tangent >= -epsilon)
        return true;
    return false;
}

bool test_atan_2()
{
    glm::vec2 tangent = glm::atan(glm::vec2(0.f, 0.f));

    if(tangent.x <= epsilon && tangent.x >= -epsilon &&
       tangent.y <= epsilon && tangent.y >= -epsilon)
        return true;
    return false;
}

bool test_atan_3()
{
    glm::vec3 tangent = glm::atan(glm::vec3(0.f, 0.f, 0.f));

    if(tangent.x <= epsilon && tangent.x >= -epsilon &&
       tangent.y <= epsilon && tangent.y >= -epsilon &&
       tangent.z <= epsilon && tangent.z >= -epsilon)
        return true;
    return false;
}

bool test_atan_4()
{
    glm::vec4 tangent = glm::atan(glm::vec4(0.f, 0.f, 0.f, 0.f));

    if(tangent.x <= epsilon && tangent.x >= -epsilon &&
       tangent.y <= epsilon && tangent.y >= -epsilon &&
       tangent.z <= epsilon && tangent.z >= -epsilon &&
       tangent.w <= epsilon && tangent.w >= -epsilon)
        return true;
    return false;
}

void main_core_func_trigonometric()
{
	assert(test_radians_1());
	assert(test_radians_2());
	assert(test_radians_3());
	assert(test_radians_4());

	assert(test_degrees_1());
	assert(test_degrees_2());
	assert(test_degrees_3());
	assert(test_degrees_4());

	assert(test_sin_1());
	assert(test_sin_2());
	assert(test_sin_3());
	assert(test_sin_4());

	assert(test_cos_1());
	assert(test_cos_2());
	assert(test_cos_3());
	assert(test_cos_4());

	assert(test_tan_1());
	assert(test_tan_2());
	assert(test_tan_3());
	assert(test_tan_4());

	assert(test_asin_1());
	assert(test_asin_2());
	assert(test_asin_3());
	assert(test_asin_4());

	assert(test_acos_1());
	assert(test_acos_2());
	assert(test_acos_3());
	assert(test_acos_4());

	assert(test_atan_1());
	assert(test_atan_2());
	assert(test_atan_3());
	assert(test_atan_4());
}

}//namespace test
}//namespace glm
