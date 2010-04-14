///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/func_common.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../precompiled.hpp"
#include <glm/core/func_common.hpp>

namespace glm{
namespace test{

static const float epsilon = 0.00001f;

bool test_abs_type1()
{
    float absolute1 = glm::abs(( 76.f));
    float absolute2 = glm::abs((-76.f));

    if(absolute1 != (76.f) ||
       absolute2 != (76.f))
        return false;
    return true;
}

bool test_abs_type2()
{
    glm::vec2 absolute1 = glm::abs(glm::vec2( 76.f, 76.f));
    glm::vec2 absolute2 = glm::abs(glm::vec2(-76.f,-76.f));

    if(absolute1.x != 76.f || absolute1.y != 76.f ||
       absolute2.x != 76.f || absolute2.y != 76.f)
        return false;
    return true;
}

bool test_abs_type3()
{
    glm::vec3 absolute1 = glm::abs(glm::vec3( 76.f, 76.f, 76.f));
    glm::vec3 absolute2 = glm::abs(glm::vec3(-76.f,-76.f,-76.f));

    if(absolute1.x != 76.f || absolute1.y != 76.f || absolute1.z != 76.f ||
       absolute2.x != 76.f || absolute2.y != 76.f || absolute2.z != 76.f)
        return false;
    return true;
}

bool test_abs_type4()
{
    glm::vec4 absolute1 = glm::abs(glm::vec4( 76.f, 76.f, 76.f, 76.f));
    glm::vec4 absolute2 = glm::abs(glm::vec4(-76.f,-76.f,-76.f,-76.f));

    if(absolute1.x != 76.f || absolute1.y != 76.f || absolute1.z != 76.f || absolute1.w != 76.f ||
       absolute2.x != 76.f || absolute2.y != 76.f || absolute2.z != 76.f || absolute2.w != 76.f)
        return false;
    return true;
}

bool test_sign_type1()
{
    float vec_sign1 = sign( 76.f);
    float vec_sign2 = sign(  0.f);
    float vec_sign3 = sign(-76.f);

    if(vec_sign1 !=  1.0f ||
       vec_sign2 !=  0.0f ||
       vec_sign3 != -1.0f)
        return false;
    return true;
}

bool test_sign_type2()
{
    vec2 vec_sign1 = sign(vec2( 76.f, 76.f));
    vec2 vec_sign2 = sign(vec2(  0.f,  0.f));
    vec2 vec_sign3 = sign(vec2(-76.f,-76.f));

    if(vec_sign1.x != 1.0f || 
       vec_sign1.y != 1.0f)
        return false;
    if(vec_sign2.x != 0.0f || 
       vec_sign2.y != 0.0f)
        return false;
    if(vec_sign3.x != -1.0f || 
       vec_sign3.y != -1.0f)
        return false;
    return true;
}

bool test_sign_type3()
{
    vec3 vec_sign1 = sign(vec3( 76.f, 76.f, 76.f));
    vec3 vec_sign2 = sign(vec3(  0.f,  0.f,  0.f));
    vec3 vec_sign3 = sign(vec3(-76.f,-76.f,-76.f));

    if(vec_sign1.x != 1.0f || 
       vec_sign1.y != 1.0f ||
       vec_sign1.z != 1.0f)
        return false;
    if(vec_sign2.x != 0.0f || 
       vec_sign2.y != 0.0f ||
       vec_sign2.z != 0.0f)
        return false;
    if(vec_sign3.x != -1.0f || 
       vec_sign3.y != -1.0f ||
       vec_sign3.z != -1.0f)
        return false;
    return true;
}

bool test_sign_type4()
{
    vec4 vec_sign1 = sign(vec4( 76.f, 76.f, 76.f, 76.f));
    vec4 vec_sign2 = sign(vec4(  0.f,  0.f,  0.f,  0.f));
    vec4 vec_sign3 = sign(vec4(-76.f,-76.f,-76.f,-76.f));

    if(vec_sign1.x != 1.0f || 
       vec_sign1.y != 1.0f ||
       vec_sign1.z != 1.0f ||
       vec_sign1.w != 1.0f)
        return false;
    if(vec_sign2.x != 0.0f || 
       vec_sign2.y != 0.0f ||
       vec_sign2.z != 0.0f ||
       vec_sign2.w != 0.0f)
        return false;
    if(vec_sign3.x != -1.0f || 
       vec_sign3.y != -1.0f ||
       vec_sign3.z != -1.0f ||
       vec_sign3.w != -1.0f)
        return false;
    return true;
}

bool test_floor_type1()
{
    float val_floor = glm::floor(float(0.5f));

    if(val_floor != 0)
        return false;
    return true;
}

bool test_floor_type2()
{
    glm::vec2 vec_floor = glm::floor(glm::vec2(0.5f, 0.5f));

    if(vec_floor.x != 0 || 
       vec_floor.y != 0)
        return false;
    return true;
}

bool test_floor_type3()
{
    glm::vec3 vec_floor = glm::floor(glm::vec3(0.5f, 0.5f, 0.5f));

    if(vec_floor.x != 0 || 
       vec_floor.y != 0 || 
       vec_floor.z != 0)
        return false;
    return true;
}

bool test_floor_type4()
{
    glm::vec4 vec_floor = glm::floor(glm::vec4(0.5f, 0.5f, 0.5f, 0.5f));

    if(vec_floor.x != 0 || 
       vec_floor.y != 0 || 
       vec_floor.z != 0 || 
       vec_floor.w != 0)
        return false;
    return true;
}

bool test_trunc_type1()
{
    return true;
}

bool test_trunc_type2()
{
    return true;
}

bool test_trunc_type3()
{
    return true;
}

bool test_trunc_type4()
{
    return true;
}

bool test_round_type1()
{
    return true;
}

bool test_round_type2()
{
    return true;
}

bool test_round_type3()
{
    return true;
}

bool test_round_type4()
{
    return true;
}

bool test_roundEven_type1()
{
	float a = glm::roundEven(3.5f);
	float b = glm::roundEven(4.5f);
	float c = glm::roundEven(5.5f);

	float d = glm::roundEven(3.4f);
	float e = glm::roundEven(4.4f);
	float f = glm::roundEven(5.4f);

	float g = glm::roundEven(3.6f);
	float h = glm::roundEven(4.6f);
	float i = glm::roundEven(5.6f);

	float end = 0.0f;

	return true;
}

bool test_roundEven_type2()
{
	return true;
}

bool test_roundEven_type3()
{
	return true;
}

bool test_roundEven_type4()
{
	return true;
}

bool test_ceil_1()
{
    float val_ceil = glm::ceil(float(0.5f));

    if(val_ceil != 1)
        return false;
    return true;
}

bool test_ceil_2()
{
    glm::vec2 vec_ceil = glm::ceil(glm::vec2(0.5f, 0.5f));

    if(vec_ceil.x != 1 || 
       vec_ceil.y != 1)
        return false;
    return true;
}

bool test_ceil_3()
{
    glm::vec3 vec_ceil = glm::ceil(glm::vec3(0.5f, 0.5f, 0.5f));

    if(vec_ceil.x != 1 || 
       vec_ceil.y != 1 || 
       vec_ceil.z != 1)
        return false;
    return true;
}

bool test_ceil_4()
{
    glm::vec4 vec_ceil = glm::ceil(glm::vec4(0.5f, 0.5f, 0.5f, 0.5f));

    if(vec_ceil.x != 1 || 
       vec_ceil.y != 1 || 
       vec_ceil.z != 1 || 
       vec_ceil.w != 1)
        return false;
    return true;
}

bool test_fract_1()
{
    float val_fract = fract(float(0.5f));

    if(val_fract != 0.5f)
        return false;
    return true;
}

bool test_fract_2()
{
    vec2 vec_fract = fract(vec2(0.5f, 0.5f));

    if(vec_fract.x != 0.5f ||
       vec_fract.y != 0.5f)
        return false;
    return true;
}

bool test_fract_3()
{
    vec3 vec_fract = fract(vec3(0.5f, 0.5f, 0.5f));

    if(vec_fract.x != 0.5f || 
       vec_fract.y != 0.5f || 
       vec_fract.z != 0.5f)
        return false;
    return true;
}

bool test_fract_4()
{
    vec4 vec_fract = fract(vec4(0.5f, 0.5f, 0.5f, 0.5f));

    if(vec_fract.x != 0.5f || 
       vec_fract.y != 0.5f || 
       vec_fract.z != 0.5f || 
       vec_fract.w != 0.5f)
        return false;
    return true;
}

bool test_mod_1()
{
    float val_mod = glm::mod(float(4.0f), float(2.0f));

    if(val_mod != 0.0f)
        return false;
    return true;
}

bool test_mod_2()
{
    glm::vec2 vec_mod1 = glm::mod(glm::vec2(4.0f, 4.0f), glm::vec2(2.0f, 2.0f));
    glm::vec2 vec_mod2 = glm::mod(glm::vec2(4.0f, 4.0f), float(2.0f));

    if(vec_mod1.x != 0.0f || 
       vec_mod1.y != 0.0f)
        return false;
    if(vec_mod2.x != 0.0f || 
       vec_mod2.y != 0.0f)
        return false;
    return true;
}

bool test_mod_3()
{
    glm::vec3 vec_mod1 = glm::mod(glm::vec3(4.0f, 4.0f, 4.0f), glm::vec3(2.0f, 2.0f, 2.0f));
    glm::vec3 vec_mod2 = glm::mod(glm::vec3(4.0f, 4.0f, 4.0f), float(2.0f));

    if(vec_mod1.x != 0.0f || 
       vec_mod1.y != 0.0f ||
       vec_mod1.z != 0.0f)
        return false;
    if(vec_mod2.x != 0.0f || 
       vec_mod2.y != 0.0f ||
       vec_mod2.z != 0.0f)
        return false;
    return true;
}

bool test_mod_4()
{
    glm::vec4 vec_mod1 = glm::mod(glm::vec4(4.0f, 4.0f, 4.0f, 4.0f), glm::vec4(2.0f, 2.0f, 2.0f, 2.0f));
    glm::vec4 vec_mod2 = glm::mod(glm::vec4(4.0f, 4.0f, 4.0f, 4.0f), float(2.0f));

    if(vec_mod1.x != 0.0f || 
       vec_mod1.y != 0.0f ||
       vec_mod1.z != 0.0f ||
       vec_mod1.w != 0.0f)
        return false;
    if(vec_mod2.x != 0.0f || 
       vec_mod2.y != 0.0f ||
       vec_mod2.z != 0.0f ||
       vec_mod2.w != 0.0f)
        return false;
    return true;
}

bool test_modf()
{
	return true;
}

bool test_min_1()
{
    float val_min = glm::min(float(0.0f), float(1.0f));

    if(val_min > 0.0f)
        return false;
    return true;
}

bool test_min_2()
{
    glm::vec2 val_min1 = glm::min(glm::vec2(0.0f, 0.0f), glm::vec2(1.0f, 1.0f));
    glm::vec2 val_min2 = glm::min(glm::vec2(0.0f, 0.0f), float(1.0f));

    if(val_min1.x > 0.0f || 
       val_min1.y > 0.0f)
        return false;
    if(val_min2.x > 0.0f || 
       val_min2.y > 0.0f)
        return false;
    return true;
}

bool test_min_3()
{
    glm::vec3 val_min1 = glm::min(glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f));
    glm::vec3 val_min2 = glm::min(glm::vec3(0.0f, 0.0f, 0.0f), float(1.0f));

    if(val_min1.x > 0.0f || 
       val_min1.y > 0.0f ||
       val_min1.z > 0.0f)
        return false;
    if(val_min2.x > 0.0f || 
       val_min2.y > 0.0f ||
       val_min2.z > 0.0f)
        return false;
    return true;
}

bool test_min_4()
{
    glm::vec4 val_min1 = glm::min(glm::vec4(0.0f, 0.0f, 0.0f, 0.0f), glm::vec4(1.0f, 1.0f, 1.0f, 1.0f));
    glm::vec4 val_min2 = glm::min(glm::vec4(0.0f, 0.0f, 0.0f, 0.0f), float(1.0f));

    if(val_min1.x > 0.0f || 
       val_min1.y > 0.0f ||
       val_min1.z > 0.0f ||
       val_min1.w > 0.0f)
        return false;
    if(val_min2.x > 0.0f || 
       val_min2.y > 0.0f ||
       val_min2.z > 0.0f ||
       val_min2.w > 0.0f)
        return false;
    return true;
}

bool test_max_1()
{
    float val_max = glm::max(float(0.0f), float(1.0f));

    if(val_max < 1.0f)
        return false;
    return true;
}

bool test_max_2()
{
    glm::vec2 val_max1 = glm::max(glm::vec2(0.0f, 0.0f), glm::vec2(1.0f, 1.0f));
    glm::vec2 val_max2 = glm::max(glm::vec2(0.0f, 0.0f), float(1.0f));

    if(val_max1.x < 1.0f || 
       val_max1.y < 1.0f)
        return false;
    if(val_max2.x < 1.0f || 
       val_max2.y < 1.0f)
        return false;
    return true;
}

bool test_max_3()
{
    glm::vec3 val_max1 = glm::max(glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f));
    glm::vec3 val_max2 = glm::max(glm::vec3(0.0f, 0.0f, 0.0f), float(1.0f));

    if(val_max1.x < 1.0f || 
       val_max1.y < 1.0f ||
       val_max1.z < 1.0f)
        return false;
    if(val_max2.x < 1.0f || 
       val_max2.y < 1.0f ||
       val_max2.z < 1.0f)
        return false;
    return true;
}

bool test_max_4()
{
    glm::vec4 val_max1 = glm::max(glm::vec4(0.0f, 0.0f, 0.0f, 0.0f), glm::vec4(1.0f, 1.0f, 1.0f, 1.0f));
    glm::vec4 val_max2 = glm::max(glm::vec4(0.0f, 0.0f, 0.0f, 0.0f), float(1.0f));

    if(val_max1.x < 1.0f || 
       val_max1.y < 1.0f ||
       val_max1.z < 1.0f ||
       val_max1.w < 1.0f)
        return false;
    if(val_max2.x < 1.0f || 
       val_max2.y < 1.0f ||
       val_max2.z < 1.0f ||
       val_max2.w < 1.0f)
        return false;
    return true;
}

bool test_clamp_1()
{
    float clamp1 = glm::clamp(float( 4.0f), float(0.0f), float(1.0f));
    float clamp2 = glm::clamp(float(-4.0f), float(0.0f), float(1.0f));

    if(clamp1 != 1.0f || 
       clamp2 != 0.0f)
        return false;
    return true;
}

bool test_clamp_2()
{
    glm::vec2 clamp1 = glm::clamp(
        glm::vec2( 4.0f, 4.0f), 
        glm::vec2( 0.0f, 0.0f),
        glm::vec2( 1.0f, 1.0f));
    glm::vec2 clamp2 = glm::clamp(
        glm::vec2(-4.0f,-4.0f), 
        glm::vec2( 0.0f, 0.0f),
        glm::vec2( 1.0f, 1.0f));
    glm::vec2 clamp3 = glm::clamp(
        glm::vec2( 4.0f, 4.0f),
        float(0.0f), float(1.0f));
    glm::vec2 clamp4 = glm::clamp(
        glm::vec2(-4.0f,-4.0f),
        float(0.0f), float(1.0f));

    if(clamp1.x != 1.0f || 
       clamp1.y != 1.0f)
        return false;
    if(clamp2.x != 0.0f || 
       clamp2.y != 0.0f)
        return false;
    if(clamp3.x != 1.0f || 
       clamp3.y != 1.0f)
        return false;
    if(clamp4.x != 0.0f || 
       clamp4.y != 0.0f)
        return false;
    return true;
}

bool test_clamp_3()
{
    glm::vec3 clamp1 = glm::clamp(
        glm::vec3( 4.0f, 4.0f, 4.0f), 
        glm::vec3( 0.0f, 0.0f, 0.0f),
        glm::vec3( 1.0f, 1.0f, 1.0f));
    glm::vec3 clamp2 = glm::clamp(
        glm::vec3(-4.0f,-4.0f,-4.0f), 
        glm::vec3( 0.0f, 0.0f, 0.0f),
        glm::vec3( 1.0f, 1.0f, 1.0f));
    glm::vec3 clamp3 = glm::clamp(
        glm::vec3( 4.0f, 4.0f, 4.0f),
        float(0.0f), float(1.0f));
    glm::vec3 clamp4 = glm::clamp(
        glm::vec3(-4.0f,-4.0f,-4.0f),
        float(0.0f), float(1.0f));

    if(clamp1.x != 1.0f || 
       clamp1.y != 1.0f || 
       clamp1.z != 1.0f)
        return false;
    if(clamp2.x != 0.0f || 
       clamp2.y != 0.0f ||
       clamp2.z != 0.0f)
        return false;
    if(clamp3.x != 1.0f || 
       clamp3.y != 1.0f ||
       clamp3.z != 1.0f)
        return false;
    if(clamp4.x != 0.0f || 
       clamp4.y != 0.0f ||
       clamp4.z != 0.0f)
        return false;
    return true;
}

bool test_clamp_4()
{
    glm::vec4 clamp1 = glm::clamp(
        glm::vec4( 4.0f, 4.0f, 4.0f, 4.0f), 
        glm::vec4( 0.0f, 0.0f, 0.0f, 0.0f),
        glm::vec4( 1.0f, 1.0f, 1.0f, 1.0f));
    glm::vec4 clamp2 = glm::clamp(
        glm::vec4(-4.0f,-4.0f,-4.0f,-4.0f), 
        glm::vec4( 0.0f, 0.0f, 0.0f, 0.0f),
        glm::vec4( 1.0f, 1.0f, 1.0f, 1.0f));
    glm::vec4 clamp3 = glm::clamp(
        glm::vec4( 4.0f, 4.0f, 4.0f, 4.0f),
        float(0.0f), float(1.0f));
    glm::vec4 clamp4 = glm::clamp(
        glm::vec4(-4.0f,-4.0f,-4.0f,-4.0f),
        float(0.0f), float(1.0f));

    if(clamp1.x != 1.0f || 
       clamp1.y != 1.0f ||
       clamp1.z != 1.0f || 
       clamp1.w != 1.0f)
        return false;
    if(clamp2.x != 0.0f || 
       clamp2.y != 0.0f ||
       clamp2.z != 0.0f ||
       clamp2.w != 0.0f)
        return false;
    if(clamp3.x != 1.0f || 
       clamp3.y != 1.0f ||
       clamp3.z != 1.0f ||
       clamp3.w != 1.0f)
        return false;
    if(clamp4.x != 0.0f || 
       clamp4.y != 0.0f ||
       clamp4.z != 0.0f ||
       clamp4.w != 0.0f)
        return false;
    return true;
}

bool test_mix_1()
{
    float val_mix = glm::mix(float(1.0f), float(1.0f), float(1.0f));

    if(val_mix != 1.0f)
        return false;
    return true;
}

bool test_mix_2()
{
    glm::vec2 val_mix1 = glm::mix(glm::vec2(1.0f, 1.0f), glm::vec2(1.0f, 1.0f), glm::vec2(1.0f, 1.0f));
    glm::vec2 val_mix2 = glm::mix(glm::vec2(1.0f, 1.0f), glm::vec2(1.0f, 1.0f), float(1.0f));

    if(val_mix1.x != 1.0f || val_mix1.y != 1.0f ||
       val_mix2.x != 1.0f || val_mix2.y != 1.0f)
        return false;
    return true;
}

bool test_mix_3()
{
    glm::vec3 val_mix1 = glm::mix(glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f));
    glm::vec3 val_mix2 = glm::mix(glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), float(1.0f));

    if(val_mix1.x != 1.0f || val_mix1.y != 1.0f || val_mix1.z != 1.0f ||
       val_mix2.x != 1.0f || val_mix2.y != 1.0f || val_mix2.z != 1.0f)
        return false;
    return true;
}

bool test_mix_4()
{
    glm::vec4 val_mix1 = glm::mix(glm::vec4(1.0f, 1.0f, 1.0f, 1.0f), glm::vec4(1.0f, 1.0f, 1.0f, 1.0f), glm::vec4(1.0f, 1.0f, 1.0f, 1.0f));
    glm::vec4 val_mix2 = glm::mix(glm::vec4(1.0f, 1.0f, 1.0f, 1.0f), glm::vec4(1.0f, 1.0f, 1.0f, 1.0f), float(1.0f));

    if(val_mix1.x != 1.0f || val_mix1.y != 1.0f || val_mix1.z != 1.0f || val_mix1.w != 1.0f ||
       val_mix2.x != 1.0f || val_mix2.y != 1.0f || val_mix2.z != 1.0f || val_mix2.w != 1.0f)
        return false;
    return true;
}

bool test_step_1()
{
    float vec_step1 = step(1.f, 76.f);

    if(vec_step1 !=  1.0f)
        return false;
    return true;
}

bool test_step_2()
{
    vec2 vec_step1 = step(1.f, vec2(76.f, 1.f));
    vec2 vec_step2 = step(vec2(1.f, 1.f), vec2(76.f, 1.f));

    if(vec_step1.x != 1.0f || vec_step1.y != 0.0f ||
       vec_step2.x != 1.0f || vec_step2.y != 0.0f)
        return false;
    return true;
}

bool test_step_3()
{
    vec3 vec_step1 = step(1.f, vec3(76.f, 1.f, 0.f));
    vec3 vec_step2 = step(vec3(1.f, 1.f, 1.f), vec3(76.f, 1.f, 0.f));

    if(vec_step1.x != 1.0f || vec_step1.y != 0.0f || vec_step1.z != 0.0f ||
       vec_step2.x != 1.0f || vec_step2.y != 0.0f || vec_step2.z != 0.0f)
        return false;
    return true;
}

bool test_step_4()
{
    vec4 vec_step1 = step(1.f, vec4(76.f, 1.f, 0.f, 0.f));
    vec4 vec_step2 = step(vec4(1.f, 1.f, 1.f, 1.f), vec4(76.f, 1.f, 0.f, 0.f));

    if(vec_step1.x != 1.0f || vec_step1.y != 0.0f || vec_step1.z != 0.0f || vec_step1.w != 0.0f ||
       vec_step2.x != 1.0f || vec_step2.y != 0.0f || vec_step2.z != 0.0f || vec_step2.w != 0.0f)
        return false;
    return true;
}

bool test_smoothstep_1()
{
    float vec_smoothstep1 = smoothstep(0.f, 100.f, 50.f);

    bool Result = (vec_smoothstep1 <  0.5f - epsilon || vec_smoothstep1 >  0.5f + epsilon);
	assert(!Result);

	float A = smoothstep(0.2f, 0.8f, 0.5f);
	float B = smoothstep(0.2f, 0.8f, 0.7f);
	float C = smoothstep(0.2f, 0.8f, 0.3f);
	float D = smoothstep(0.2f, 0.8f, 1.2f);
	float E = smoothstep(0.2f, 0.8f,-0.2f);

	if(Result)
        return false;
    return true;
}

bool test_smoothstep_2()
{
    vec2 vec_smoothstep1 = smoothstep(0.f, 100.f, vec2(50.f, 100.f));
    vec2 vec_smoothstep2 = smoothstep(vec2(0.f, 0.f), vec2(100.f, 100.f), vec2(50.f, 100.f));

    if(vec_smoothstep1.x < 0.50f - epsilon || vec_smoothstep1.x > 0.50f + epsilon ||
       vec_smoothstep1.y < 1.00f - epsilon || vec_smoothstep1.y > 1.00f + epsilon)
        return false;
    if(vec_smoothstep2.x < 0.50f - epsilon || vec_smoothstep2.x > 0.50f + epsilon ||
       vec_smoothstep2.y < 1.00f - epsilon || vec_smoothstep2.y > 1.00f + epsilon)
        return false;
    return true;
}

bool test_smoothstep_3()
{
    vec3 vec_smoothstep1 = smoothstep(0.f, 100.f, vec3(50.f, 100.f, 0.f));
    vec3 vec_smoothstep2 = smoothstep(vec3(0.f, 0.f, 0.f), vec3(100.f, 100.f, 100.f), vec3(50.f, 100.f, 0.f));

    if(vec_smoothstep1.x <  0.50f - epsilon || vec_smoothstep1.x > 0.50f + epsilon ||
       vec_smoothstep1.y <  1.00f - epsilon || vec_smoothstep1.y > 1.00f + epsilon ||
       vec_smoothstep1.z <  0.00f - epsilon || vec_smoothstep1.z > 0.00f + epsilon)
        return false;
    if(vec_smoothstep2.x <  0.50f - epsilon || vec_smoothstep2.x > 0.50f + epsilon ||
       vec_smoothstep2.y <  1.00f - epsilon || vec_smoothstep2.y > 1.00f + epsilon ||
       vec_smoothstep2.z <  0.00f - epsilon || vec_smoothstep2.z > 0.00f + epsilon)
        return false;
    return true;
}

bool test_smoothstep_4()
{
    vec4 vec_smoothstep1 = smoothstep(0.f, 100.f, vec4(50.f, 100.f, 0.f, 0.f));
    vec4 vec_smoothstep2 = smoothstep(vec4(0.f, 0.f, 0.f, 0.f), vec4(100.f, 100.f, 100.f, 100.f), vec4(50.f, 100.f, 0.f, 0.f));

    if(vec_smoothstep1.x < 0.50f - epsilon || vec_smoothstep1.x > 0.50f + epsilon ||
       vec_smoothstep1.y < 1.00f - epsilon || vec_smoothstep1.y > 1.00f + epsilon || 
       vec_smoothstep1.z < 0.00f - epsilon || vec_smoothstep1.z > 0.00f + epsilon ||
       vec_smoothstep1.w < 0.00f - epsilon || vec_smoothstep1.w > 0.00f + epsilon)
        return false;
    if(vec_smoothstep2.x < 0.50f - epsilon || vec_smoothstep2.x > 0.50f + epsilon ||
       vec_smoothstep2.y < 1.00f - epsilon || vec_smoothstep2.y > 1.00f + epsilon ||
       vec_smoothstep2.z < 0.00f - epsilon || vec_smoothstep2.z > 0.00f + epsilon ||
       vec_smoothstep2.w < 0.00f - epsilon || vec_smoothstep2.w > 0.00f + epsilon)
        return false;
    return true;
}

bool test_isnan()
{
	return true;
}

bool test_isinf()
{
	return true;
}

void main_core_func_common()
{
	assert(test_abs_type1());
	assert(test_abs_type2());
	assert(test_abs_type3());
	assert(test_abs_type4());

	assert(test_sign_type1());
	assert(test_sign_type2());
	assert(test_sign_type3());
	assert(test_sign_type4());

	assert(test_floor_type1());
	assert(test_floor_type2());
	assert(test_floor_type3());
	assert(test_floor_type4());

	assert(test_trunc_type1());
	assert(test_trunc_type2());
	assert(test_trunc_type3());
	assert(test_trunc_type4());

	assert(test_round_type1());
	assert(test_round_type2());
	assert(test_round_type3());
	assert(test_round_type4());

	assert(test_roundEven_type1());
	assert(test_roundEven_type2());
	assert(test_roundEven_type3());
	assert(test_roundEven_type4());

	assert(test_ceil_1());
	assert(test_ceil_2());
	assert(test_ceil_3());
	assert(test_ceil_4());

	assert(test_fract_1());
	assert(test_fract_2());
	assert(test_fract_3());
	assert(test_fract_4());

	assert(test_mod_1());
	assert(test_mod_2());
	assert(test_mod_3());
	assert(test_mod_4());

	assert(test_mod_1());
	assert(test_mod_2());
	assert(test_mod_3());
	assert(test_mod_4());

	assert(test_modf());

	assert(test_min_1());
	assert(test_min_2());
	assert(test_min_3());
	assert(test_min_4());

	assert(test_max_1());
	assert(test_max_2());
	assert(test_max_3());
	assert(test_max_4());

	assert(test_clamp_1());
	assert(test_clamp_2());
	assert(test_clamp_3());
	assert(test_clamp_4());

	assert(test_mix_1());
	assert(test_mix_2());
	assert(test_mix_3());
	assert(test_mix_4());

	assert(test_step_1());
	assert(test_step_2());
	assert(test_step_3());
	assert(test_step_4());

	assert(test_smoothstep_1());
	assert(test_smoothstep_2());
	assert(test_smoothstep_3());
	assert(test_smoothstep_4());

	assert(test_isnan());
	assert(test_isinf());
}

}//namespace test
}//namespace glm
