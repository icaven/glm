///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/func_exponential.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../precompiled.hpp"
#include <glm/core/func_exponential.hpp>

namespace glm{
namespace test{

static const float epsilon = 0.00001f;

bool test_pow_1()
{
    float power = glm::pow(2.f, 2.f);

    if(power <= 4.f + epsilon && power >= 4.f - epsilon)
        return true;
    return false;
}

bool test_pow_2()
{
    glm::vec2 power = glm::pow(glm::vec2(2.f, 2.f), glm::vec2(2.f, 2.f));

    if(power.x <= 4.f + epsilon && power.x >= 4.f - epsilon &&
       power.y <= 4.f + epsilon && power.y >= 4.f - epsilon)
        return true;
    return false;
}

bool test_pow_3()
{
    glm::vec3 power = glm::pow(glm::vec3(2.f, 2.f, 2.f), glm::vec3(2.f, 2.f, 2.f));

    if(power.x <= 4.f + epsilon && power.x >= 4.f - epsilon &&
       power.y <= 4.f + epsilon && power.y >= 4.f - epsilon &&
       power.z <= 4.f + epsilon && power.z >= 4.f - epsilon)
        return true;
    return false;
}

bool test_pow_4()
{
    glm::vec4 power = glm::pow(glm::vec4(2.f, 2.f, 2.f, 2.f), glm::vec4(2.f, 2.f, 2.f, 2.f));

    if(power.x <= 4.f + epsilon && power.x >= 4.f - epsilon &&
       power.y <= 4.f + epsilon && power.y >= 4.f - epsilon &&
       power.z <= 4.f + epsilon && power.z >= 4.f - epsilon &&
       power.w <= 4.f + epsilon && power.w >= 4.f - epsilon)
        return true;
    return false;
}

bool test_exp_1()
{
    float result = glm::exp(0.f);

    if(result > 1.f + epsilon || result < 1.f - epsilon)
        return false;
    return true;
}

bool test_exp_2()
{
    glm::vec2 result = glm::exp(glm::vec2(0.f, 0.f));

    if(result.x > 1.f + epsilon || result.x < 1.f - epsilon ||
       result.y > 1.f + epsilon || result.y < 1.f - epsilon)
        return false;
    return true;
}

bool test_exp_3()
{
    glm::vec3 result = glm::exp(glm::vec3(0.f, 0.f, 0.f));

    if(result.x > 1.f + epsilon || result.x < 1.f - epsilon ||
       result.y > 1.f + epsilon || result.y < 1.f - epsilon ||
       result.z > 1.f + epsilon || result.z < 1.f - epsilon)
        return false;
    return true;
}

bool test_exp_4()
{
    glm::vec4 result = glm::exp(glm::vec4(0.f, 0.f, 0.f, 0.f));

    if(result.x > 1.f + epsilon || result.x < 1.f - epsilon ||
       result.y > 1.f + epsilon || result.y < 1.f - epsilon ||
       result.z > 1.f + epsilon || result.z < 1.f - epsilon ||
       result.w > 1.f + epsilon || result.w < 1.f - epsilon)
        return false;
    return true;
}

bool test_log_1()
{
    float result = glm::log(1.f);

    if(result > epsilon || result < -epsilon)
        return false;
    return true;
}

bool test_log_2()
{
    glm::vec2 result = glm::log(glm::vec2(1.f, 1.f));

    if(result.x > epsilon || result.x < -epsilon ||
       result.y > epsilon || result.y < -epsilon)
        return false;
    return true;
}

bool test_log_3()
{
    glm::vec3 result = glm::log(glm::vec3(1.f, 1.f, 1.f));

    if(result.x > epsilon || result.x < -epsilon ||
       result.y > epsilon || result.y < -epsilon ||
       result.z > epsilon || result.z < -epsilon)
        return false;
    return true;
}

bool test_log_4()
{
    glm::vec4 result = glm::log(glm::vec4(1.f, 1.f, 1.f, 1.f));

    if(result.x > epsilon || result.x < -epsilon ||
       result.y > epsilon || result.y < -epsilon ||
       result.z > epsilon || result.z < -epsilon ||
       result.w > epsilon || result.w < -epsilon)
        return false;
    return true;
}

bool test_exp2_1()
{
    float result = glm::exp2(2.f);

    if(result > 4.f + epsilon || result < 4.f - epsilon)
        return false;
    return true;
}

bool test_exp2_2()
{
    glm::vec2 result = glm::exp2(glm::vec2(2.f, 2.f));

    if(result.x > 4.f + epsilon || result.x < 4.f - epsilon ||
       result.y > 4.f + epsilon || result.y < 4.f - epsilon)
        return false;
    return true;
}

bool test_exp2_3()
{
    glm::vec3 result = glm::exp2(glm::vec3(2.f, 2.f, 2.f));

    if(result.x > 4.f + epsilon || result.x < 4.f - epsilon ||
       result.y > 4.f + epsilon || result.y < 4.f - epsilon ||
       result.z > 4.f + epsilon || result.z < 4.f - epsilon)
        return false;
    return true;
}

bool test_exp2_4()
{
    glm::vec4 result = glm::exp2(glm::vec4(2.f, 2.f, 2.f, 2.f));

    if(result.x > 4.f + epsilon || result.x < 4.f - epsilon ||
       result.y > 4.f + epsilon || result.y < 4.f - epsilon ||
       result.z > 4.f + epsilon || result.z < 4.f - epsilon ||
       result.w > 4.f + epsilon || result.w < 4.f - epsilon)
        return false;
    return true;
}

bool test_log2_1()
{
    float result = glm::log2(2.f);

    if(result > 1.f + epsilon || result < 1.f - epsilon)
        return false;
    return true;
}

bool test_log2_2()
{
    glm::vec2 result = glm::log2(glm::vec2(2.f, 4.f));

    if(result.x > 1.f + epsilon || result.x < 1.f - epsilon ||
       result.y > 2.f + epsilon || result.y < 2.f - epsilon)
        return false;
    return true;
}

bool test_log2_3()
{
    glm::vec3 result = glm::log2(glm::vec3(2.f, 4.f, 8.f));

    if(result.x > 1.f + epsilon || result.x < 1.f - epsilon ||
       result.y > 2.f + epsilon || result.y < 2.f - epsilon ||
       result.z > 3.f + epsilon || result.z < 3.f - epsilon)
        return false;
    return true;
}

bool test_log2_4()
{
    glm::vec4 result = glm::log2(glm::vec4(2.f, 4.f, 8.f, 16.f));

    if(result.x > 1.f + epsilon || result.x < 1.f - epsilon ||
       result.y > 2.f + epsilon || result.y < 2.f - epsilon ||
       result.z > 3.f + epsilon || result.z < 3.f - epsilon ||
       result.w > 4.f + epsilon || result.w < 4.f - epsilon)
        return false;
    return true;
}

bool test_sqrt_1()
{
    float result = glm::sqrt(4.f);

    if(result < 2.f - epsilon && result > 2.f + epsilon)
        return false;
    return true;
}

bool test_sqrt_2()
{
    glm::vec2 result = glm::sqrt(glm::vec2(4.f, 4.f));

    if(result.x < 2.f - epsilon && result.x > 2.f + epsilon &&
       result.y < 2.f - epsilon && result.y > 2.f + epsilon)
        return false;
    return true;
}

bool test_sqrt_3()
{
    glm::vec3 result = glm::sqrt(glm::vec3(4.f, 4.f, 4.f));

    if(result.x < 2.f - epsilon && result.x > 2.f + epsilon &&
       result.y < 2.f - epsilon && result.y > 2.f + epsilon &&
       result.z < 2.f - epsilon && result.z > 2.f + epsilon)
        return false;
    return true;
}

bool test_sqrt_4()
{
    glm::vec4 result = glm::sqrt(glm::vec4(4.f, 4.f, 4.f, 4.f));

    if(result.x < 2.f - epsilon && result.x > 2.f + epsilon &&
       result.y < 2.f - epsilon && result.y > 2.f + epsilon &&
       result.z < 2.f - epsilon && result.z > 2.f + epsilon &&
       result.w < 2.f - epsilon && result.w > 2.f + epsilon)
        return false;
    return true;
}

bool test_inversesqrt_1()
{
    float result = glm::inversesqrt(4.f);

    if(result < 0.5f - epsilon && result > 0.5f + epsilon)
        return false;
    return true;
}

bool test_inversesqrt_2()
{
    glm::vec2 result = glm::inversesqrt(glm::vec2(4.f, 4.f));

    if(result.x < 0.5f - epsilon && result.x > 0.5f + epsilon &&
       result.y < 0.5f - epsilon && result.y > 0.5f + epsilon)
        return false;
    return true;
}

bool test_inversesqrt_3()
{
    glm::vec3 result = glm::inversesqrt(glm::vec3(4.f, 4.f, 4.f));

    if(result.x < 0.5f - epsilon && result.x > 0.5f + epsilon &&
       result.y < 0.5f - epsilon && result.y > 0.5f + epsilon &&
       result.z < 0.5f - epsilon && result.z > 0.5f + epsilon)
        return false;
    return true;
}

bool test_inversesqrt_4()
{
    glm::vec4 result = glm::inversesqrt(glm::vec4(4.f, 4.f, 4.f, 4.f));

    if(result.x < 0.5f - epsilon && result.x > 0.5f + epsilon &&
       result.y < 0.5f - epsilon && result.y > 0.5f + epsilon &&
       result.z < 0.5f - epsilon && result.z > 0.5f + epsilon &&
       result.w < 0.5f - epsilon && result.w > 0.5f + epsilon)
        return false;
    return true;
}

void main_core_func_exponential()
{
	assert(test_pow_1());
	assert(test_pow_2());
	assert(test_pow_3());
	assert(test_pow_4());

	assert(test_exp_1());
	assert(test_exp_2());
	assert(test_exp_3());
	assert(test_exp_4());

	assert(test_log_1());
	assert(test_log_2());
	assert(test_log_3());
	assert(test_log_4());

	assert(test_exp2_1());
	assert(test_exp2_2());
	assert(test_exp2_3());
	assert(test_exp2_4());

	assert(test_log2_1());
	assert(test_log2_2());
	assert(test_log2_3());
	assert(test_log2_4());
	
	assert(test_sqrt_1());
	assert(test_sqrt_2());
	assert(test_sqrt_3());
	assert(test_sqrt_4());
	
	assert(test_inversesqrt_1());
	assert(test_inversesqrt_2());
	assert(test_inversesqrt_3());
	assert(test_inversesqrt_4());
}

}//namespace test
}//namespace glm
