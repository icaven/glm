///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-03-14
// Updated : 2008-03-14
// Licence : This source is under MIT License
// File    : test/core/ctor/mat.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../../precompiled.hpp"
#include <glm/glm.hpp>

using namespace glm;

bool test_core_cast_mat()
{
	{
		mat2x3 m01(1.0f);
		mat2x4 m02(1.0f);
		mat3x2 m03(1.0f);
		mat3x4 m04(1.0f);
		mat4x2 m05(1.0f);
		mat4x3 m06(1.0f);
	}

	{
		mat2x3 m01(mat2(1.0f));
		mat2x3 m02(mat3(1.0f));
		mat2x3 m03(mat4(1.0f));
		mat2x3 m04(mat2x3(1.0f));
		mat2x3 m05(mat2x4(1.0f));
		mat2x3 m06(mat3x2(1.0f));
		mat2x3 m07(mat3x4(1.0f));
		mat2x3 m08(mat4x2(1.0f));
		mat2x3 m09(mat4x3(1.0f));
	}

	{
		mat2x4 m01(mat2(1.0f));
		mat2x4 m02(mat3(1.0f));
		mat2x4 m03(mat4(1.0f));
		mat2x4 m04(mat2x3(1.0f));
		mat2x4 m05(mat2x4(1.0f));
		mat2x4 m06(mat3x2(1.0f));
		mat2x4 m07(mat3x4(1.0f));
		mat2x4 m08(mat4x2(1.0f));
		mat2x4 m09(mat4x3(1.0f));
	}

	{
		mat3x2 m01(mat2(1.0f));
		mat3x2 m02(mat3(1.0f));
		mat3x2 m03(mat4(1.0f));
		mat3x2 m04(mat2x3(1.0f));
		mat3x2 m05(mat2x4(1.0f));
		mat3x2 m06(mat3x2(1.0f));
		mat3x2 m07(mat3x4(1.0f));
		mat3x2 m08(mat4x2(1.0f));
		mat3x2 m09(mat4x3(1.0f));
	}

	{
		mat3x4 m01(mat2(1.0f));
		mat3x4 m02(mat3(1.0f));
		mat3x4 m03(mat4(1.0f));
		mat3x4 m04(mat2x3(1.0f));
		mat3x4 m05(mat2x4(1.0f));
		mat3x4 m06(mat3x2(1.0f));
		mat3x4 m07(mat3x4(1.0f));
		mat3x4 m08(mat4x2(1.0f));
		mat3x4 m09(mat4x3(1.0f));
	}

	{
		mat4x2 m01(mat2(1.0f));
		mat4x2 m02(mat3(1.0f));
		mat4x2 m03(mat4(1.0f));
		mat4x2 m04(mat2x3(1.0f));
		mat4x2 m05(mat2x4(1.0f));
		mat4x2 m06(mat3x2(1.0f));
		mat4x2 m07(mat3x4(1.0f));
		mat4x2 m08(mat4x2(1.0f));
		mat4x2 m09(mat4x3(1.0f));
	}

	{
		mat4x3 m01(mat2(1.0f));
		mat4x3 m02(mat3(1.0f));
		mat4x3 m03(mat4(1.0f));
		mat4x3 m04(mat2x3(1.0f));
		mat4x3 m05(mat2x4(1.0f));
		mat4x3 m06(mat3x2(1.0f));
		mat4x3 m07(mat3x4(1.0f));
		mat4x3 m08(mat4x2(1.0f));
		mat4x3 m09(mat4x3(1.0f));
	}

	{
		mat2 m01(mat2x3(1.0f));
		mat2 m02(mat2x4(1.0f));
		mat2 m03(mat3x2(1.0f));
		mat2 m04(mat3x4(1.0f));
		mat2 m05(mat4x2(1.0f));
		mat2 m06(mat4x3(1.0f));
		mat2 m07(mat4(1.0f));
		mat2 m08(mat3(1.0f));
	}
	{
		mat3 m01(mat2x3(1.0f));
		mat3 m02(mat2x4(1.0f));
		mat3 m03(mat3x2(1.0f));
		mat3 m04(mat3x4(1.0f));
		mat3 m05(mat4x2(1.0f));
		mat3 m06(mat4x3(1.0f));
		mat3 m07(mat4(1.0f));
		mat3 m08(mat2(1.0f));
	}
	{
		mat4 m01(mat2x3(1.0f));
		mat4 m02(mat2x4(1.0f));
		mat4 m03(mat3x2(1.0f));
		mat4 m04(mat3x4(1.0f));
		mat4 m05(mat4x2(1.0f));
		mat4 m06(mat4x3(1.0f));
		mat4 m07(mat2(1.0f));
		mat4 m08(mat3(1.0f));
	}

	return true;
}
