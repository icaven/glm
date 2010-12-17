///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-08-31
// Updated : 2008-08-31
// Licence : This source is under MIT License
// File    : test/core/type_vec4.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <xmmintrin.h>
#include <emmintrin.h>

template <int Value>
struct mask
{
	enum{value = Value};
};

enum comp
{
	X,
	Y,
	Z,
	W
};

template<comp X, comp Y, comp Z, comp W>
__m128 swizzle(glm::vec4 const & v)
{
	__m128 Src = _mm_set_ps(v.w, v.z, v.y, v.x);
	return _mm_shuffle_ps(Src, Src, mask<(int(W) << 6) | (int(Z) << 4) | (int(Y) << 2) | (int(X) << 0)>::value);
}

int main()
{
	__m128 DataA = swizzle<X, Y, Z, W>(glm::vec4(1.0f, 2.0f, 3.0f, 4.0f));
	__m128 DataB = swizzle<W, Z, Y, X>(glm::vec4(1.0f, 2.0f, 3.0f, 4.0f));

	return 0;
}

