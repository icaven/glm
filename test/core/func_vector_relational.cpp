///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/func_vector_relational.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../precompiled.hpp"
#include <glm/core/func_vector_relational.hpp>

namespace glm{
namespace test{

bool test_lessthan_2()
{
    bvec2 lessThan1 = lessThan(vec2(0.f, 1.f), vec2(1.f, 0.f));
    bvec2 lessThan2 = lessThan(ivec2(0, 1), ivec2(1, 0));

    if(!lessThan1.x || lessThan1.y)
        return false;
    if(!lessThan2.x || lessThan2.y)
        return false;
    return true;
}

bool test_lessthan_3()
{
    bvec3 lessThan1 = lessThan(vec3(0.f, 1.f, 1.f), vec3(1.f, 0.f, 1.f));
    bvec3 lessThan2 = lessThan(ivec3(0, 1, 1), ivec3(1, 0, 1));

    if(!lessThan1.x || lessThan1.y || lessThan1.z)
        return false;
    if(!lessThan2.x || lessThan2.y || lessThan2.z)
        return false;
    return true;
}

bool test_lessthan_4()
{
    bvec4 lessThan1 = lessThan(vec4(0.f, 1.f, 1.f, 0.f), vec4(1.f, 0.f, 1.f, 0.f));
    bvec4 lessThan2 = lessThan(ivec4(0, 1, 1, 0), ivec4(1, 0, 1, 0));

    if(!lessThan1.x || lessThan1.y || lessThan1.z || lessThan1.w)
        return false;
    if(!lessThan2.x || lessThan2.y || lessThan2.z || lessThan2.w)
        return false;
    return true;
}

bool test_lessthanequal_2()
{
    bvec2 result1 = lessThanEqual(vec2(0.f, 1.f), vec2(1.f, 0.f));
    bvec2 result2 = lessThanEqual(ivec2(0, 1), ivec2(1, 0));

    if(!result1.x || result1.y)
        return false;
    if(!result2.x || result2.y)
        return false;
    return true;
}

bool test_lessthanequal_3()
{
    bvec3 result1 = lessThanEqual(vec3(0.f, 1.f, 1.f), vec3(1.f, 0.f, 1.f));
    bvec3 result2 = lessThanEqual(ivec3(0, 1, 1), ivec3(1, 0, 1));

    if(!result1.x || result1.y || !result1.z)
        return false;
    if(!result2.x || result2.y || !result2.z)
        return false;
    return true;
}

bool test_lessthanequal_4()
{
    bvec4 result1 = lessThanEqual(vec4(0.f, 1.f, 1.f, 0.f), vec4(1.f, 0.f, 1.f, 0.f));
    bvec4 result2 = lessThanEqual(ivec4(0, 1, 1, 0), ivec4(1, 0, 1, 0));

    if(!result1.x || result1.y || !result1.z || !result1.w)
        return false;
    if(!result2.x || result2.y || !result2.z || !result2.w)
        return false;
    return true;
}

bool test_all_2()
{
    bool result1 = all(bvec2(true, true));
    bool result2 = all(bvec2(true, false));
    bool result3 = all(bvec2(false, false));

    if(!result1 || result2 || result3)
        return false;
    return true;
}

bool test_all_3()
{
    bool result1 = all(bvec3(true, true, true));
    bool result2 = all(bvec3(true, false, true));
    bool result3 = all(bvec3(false, false, false));

    if(!result1 || result2 || result3)
        return false;
    return true;
}

bool test_all_4()
{
    bool result1 = all(bvec4(true, true, true, true));
    bool result2 = all(bvec4(true, false, true, false));
    bool result3 = all(bvec4(false, false, false, false));

    if(!result1 || result2 || result3)
        return false;
    return true;
}

bool test_greaterthan_2()
{
    bvec2 result1 = greaterThan(vec2(0.f, 1.f), vec2(1.f, 0.f));
    bvec2 result2 = greaterThan(ivec2(0, 1), ivec2(1, 0));

    if(result1.x || !result1.y)
        return false;
    if(result2.x || !result2.y)
        return false;
    return true;
}

bool test_greaterthan_3()
{
    bvec3 result1 = greaterThan(vec3(0.f, 1.f, 1.f), vec3(1.f, 0.f, 1.f));
    bvec3 result2 = greaterThan(ivec3(0, 1, 1), ivec3(1, 0, 1));

    if(result1.x || !result1.y || result1.z)
        return false;
    if(result2.x || !result2.y || result2.z)
        return false;
    return true;
}

bool test_greaterthan_4()
{
    bvec4 result1 = greaterThan(vec4(0.f, 1.f, 1.f, 0.f), vec4(1.f, 0.f, 1.f, 0.f));
    bvec4 result2 = greaterThan(ivec4(0, 1, 1, 0), ivec4(1, 0, 1, 0));

    if(result1.x || !result1.y || result1.z || result1.w)
        return false;
    if(result2.x || !result2.y || result2.z || result2.w)
        return false;
    return true;
}

bool test_greaterthanequal_2()
{
    bvec2 result1 = greaterThanEqual(vec2(0.f, 1.f), vec2(1.f, 0.f));
    bvec2 result2 = greaterThanEqual(ivec2(0, 1), ivec2(1, 0));

    if(result1.x || !result1.y)
        return false;
    if(result2.x || !result2.y)
        return false;
    return true;
}

bool test_greaterthanequal_3()
{
    bvec3 result1 = greaterThanEqual(vec3(0.f, 1.f, 1.f), vec3(1.f, 0.f, 1.f));
    bvec3 result2 = greaterThanEqual(ivec3(0, 1, 1), ivec3(1, 0, 1));

    if(result1.x || !result1.y || !result1.z)
        return false;
    if(result2.x || !result2.y || !result2.z)
        return false;
    return true;
}

bool test_greaterthanequal_4()
{
    bvec4 result1 = greaterThanEqual(vec4(0.f, 1.f, 1.f, 0.f), vec4(1.f, 0.f, 1.f, 0.f));
    bvec4 result2 = greaterThanEqual(ivec4(0, 1, 1, 0), ivec4(1, 0, 1, 0));

    if(result1.x || !result1.y || !result1.z || !result1.w)
        return false;
    if(result2.x || !result2.y || !result2.z || !result2.w)
        return false;
    return true;
}

bool test_equal_2()
{
    bvec2 result1 = equal(vec2(76.f, 0.f), vec2(76.f, 76.f));
    bvec2 result2 = equal(ivec2(76, 0), ivec2(76, 76));
    bvec2 result3 = equal(bvec2(true, false), bvec2(true, true));

    if(!result1.x || result1.y)
        return false;
    if(!result2.x || result2.y)
        return false;
    if(!result3.x || result3.y)
        return false;
    return true;
}

bool test_equal_3()
{
    bvec3 result1 = equal(vec3(76.f, 0.f, 76.f), vec3(76.f, 76.f, 76.f));
    bvec3 result2 = equal(ivec3(76, 0, 76), ivec3(76, 76, 76));
    bvec3 result3 = equal(bvec3(true, false, true), bvec3(true, true, true));

    if(!result1.x || result1.y || !result1.z)
        return false;
    if(!result2.x || result2.y || !result2.z)
        return false;
    if(!result3.x || result3.y || !result3.z)
        return false;
    return true;
}

bool test_equal_4()
{
    bvec4 result1 = equal(vec4(76.f, 0.f, 76.f, 0.f), vec4(76.f, 76.f, 76.f, 76.f));
    bvec4 result2 = equal(ivec4(76, 0, 76, 0), ivec4(76, 76, 76, 76));
    bvec4 result3 = equal(bvec4(true, false, true, false), bvec4(true, true, true, true));

    if(!result1.x || result1.y || !result1.z || result1.w)
        return false;
    if(!result2.x || result2.y || !result2.z || result2.w)
        return false;
    if(!result3.x || result3.y || !result3.z || result3.w)
        return false;
    return true;
}

bool test_notequal_2()
{
    bvec2 result1 = notEqual(vec2(76.f, 0.f), vec2(76.f, 76.f));
    bvec2 result2 = notEqual(ivec2(76, 0), ivec2(76, 76));
    bvec2 result3 = notEqual(bvec2(true, false), bvec2(true, true));

    if(result1.x || !result1.y)
        return false;
    if(result2.x || !result2.y)
        return false;
    if(result3.x || !result3.y)
        return false;
    return true;
}

bool test_notequal_3()
{
    bvec3 result1 = notEqual(vec3(76.f, 0.f, 76.f), vec3(76.f, 76.f, 76.f));
    bvec3 result2 = notEqual(ivec3(76, 0, 76), ivec3(76, 76, 76));
    bvec3 result3 = notEqual(bvec3(true, false, true), bvec3(true, true, true));

    if(result1.x || !result1.y || result1.z)
        return false;
    if(result2.x || !result2.y || result2.z)
        return false;
    if(result3.x || !result3.y || result3.z)
        return false;
    return true;
}

bool test_notequal_4()
{
    bvec4 result1 = notEqual(vec4(76.f, 0.f, 76.f, 0.f), vec4(76.f, 76.f, 76.f, 76.f));
    bvec4 result2 = notEqual(ivec4(76, 0, 76, 0), ivec4(76, 76, 76, 76));
    bvec4 result3 = notEqual(bvec4(true, false, true, false), bvec4(true, true, true, true));

    if(result1.x || !result1.y || result1.z || !result1.w)
        return false;
    if(result2.x || !result2.y || result2.z || !result2.w)
        return false;
    if(result3.x || !result3.y || result3.z || !result3.w)
        return false;
    return true;
}

bool test_any_2()
{
    bool result1 = any(bvec2(true, true));
    bool result2 = any(bvec2(true, false));
    bool result3 = any(bvec2(false, false));

    if(!result1 || !result2 || result3)
        return false;
    return true;
}

bool test_any_3()
{
    bool result1 = any(bvec3(true, true, true));
    bool result2 = any(bvec3(true, false, true));
    bool result3 = any(bvec3(false, false, false));

    if(!result1 || !result2 || result3)
        return false;
    return true;
}

bool test_any_4()
{
    bool result1 = any(bvec4(true, true, true, true));
    bool result2 = any(bvec4(true, false, true, false));
    bool result3 = any(bvec4(false, false, false, false));

    if(!result1 || !result2 || result3)
        return false;
    return true;
}

bool test_not_2()
{
	bvec2 result = not_(bvec2(true, false));

    if(result.x || !result.y)
        return false;
    return true;
}

bool test_not_3()
{
    bvec3 result = not_(bvec3(true, false, true));

    if(result.x || !result.y || result.z)
        return false;
    return true;
}

bool test_not_4()
{
    bvec4 result = not_(bvec4(true, false, true, false));

    if(result.x || !result.y || result.z || !result.w)
        return false;
    return true;
}

void main_core_func_vector_relational()
{
	assert(test_lessthan_2());
	assert(test_lessthan_3());
	assert(test_lessthan_4());

	assert(test_lessthanequal_2());
	assert(test_lessthanequal_3());
	assert(test_lessthanequal_4());

	assert(test_greaterthan_2());
	assert(test_greaterthan_3());
	assert(test_greaterthan_4());

	assert(test_greaterthanequal_2());
	assert(test_greaterthanequal_3());
	assert(test_greaterthanequal_4());

	assert(test_greaterthanequal_2());
	assert(test_greaterthanequal_3());
	assert(test_greaterthanequal_4());

	assert(test_equal_2());
	assert(test_equal_3());
	assert(test_equal_4());
	
	assert(test_notequal_2());
	assert(test_notequal_3());
	assert(test_notequal_4());

	assert(test_any_2());
	assert(test_any_3());
	assert(test_any_4());

	assert(test_all_2());
	assert(test_all_3());
	assert(test_all_4());
}

}//namespace test
}//namespace glm
