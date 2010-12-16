///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2009-05-07
// Updated : 2009-05-07
// Licence : This source is under MIT License
// File    : glm/gtx/simd_vec4.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - intrinsic
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtx_simd_vec4
#define glm_gtx_simd_vec4

// Dependency:
#include "../glm.hpp"
#include "../core/intrinsic_common.hpp"

namespace glm
{
	namespace detail
	{
		GLM_ALIGNED(union, 4) fvec4SIMD
		{
			enum ctor{null};
			typedef float value_type;
			typedef std::size_t size_type;
			static size_type value_size();

			typedef fvec4SIMD type;
			typedef tvec4<bool> bool_type;

			__m128 Data;
			float Array[4];
			struct{float x, y, z, w;};
			struct{float r, g, b, a;};
			struct{float s, t, q, p;};

			//////////////////////////////////////
			// Implicit basic constructors

			fvec4SIMD();
			fvec4SIMD(__m128 const & Data);
			fvec4SIMD(fvec4SIMD const & v);
			fvec4SIMD(tvec4<float> const & v);

			//////////////////////////////////////
			// Explicit basic constructors

			explicit fvec4SIMD(
				ctor);
			explicit fvec4SIMD(
				float const & s);
			explicit fvec4SIMD(
				float const & x, 
				float const & y, 
				float const & z, 
				float const & w);

			////////////////////////////////////////
			//// Convertion vector constructors

			fvec4SIMD(vec2 const & v, float const & s1, float const & s2);
			fvec4SIMD(float const & s1, vec2 const & v, float const & s2);
			fvec4SIMD(float const & s1, float const & s2, vec2 const & v);
			fvec4SIMD(vec3 const & v, float const & s);
			fvec4SIMD(float const & s, vec3 const & v);
			fvec4SIMD(vec2 const & v1, vec2 const & v2);
			//fvec4SIMD(ivec4SIMD const & v);

			//////////////////////////////////////
			// Unary arithmetic operators

			fvec4SIMD& operator= (fvec4SIMD const & v);
			fvec4SIMD& operator+=(fvec4SIMD const & v);
			fvec4SIMD& operator-=(fvec4SIMD const & v);
			fvec4SIMD& operator*=(fvec4SIMD const & v);
			fvec4SIMD& operator/=(fvec4SIMD const & v);

			fvec4SIMD& operator+=(float const & s);
			fvec4SIMD& operator-=(float const & s);
			fvec4SIMD& operator*=(float const & s);
			fvec4SIMD& operator/=(float const & s);

			fvec4SIMD& operator++();
			fvec4SIMD& operator--();

			//////////////////////////////////////
			// Swizzle operators

			template <comp A, comp B, comp C, comp D>
			fvec4SIMD& swizzle();
			template <comp A, comp B, comp C, comp D>
			fvec4SIMD swizzle() const;
			template <comp A, comp B, comp C>
			fvec4SIMD swizzle() const;
			template <comp A, comp B>
			fvec4SIMD swizzle() const;
			template <comp A>
			fvec4SIMD swizzle() const;
		};

	}//namespace detail

	namespace gtx{
	//! GLM_GTX_simd_vec4 extension: SIMD implementation of vec4 type.
	namespace simd_vec4
	{
		typedef detail::fvec4SIMD simd_vec4;

	}//namespace simd_vec4
	}//namespace gtx
}//namespace glm

#include "simd_vec4.inl"

namespace glm{using namespace gtx::simd_vec4;}

#endif//glm_gtx_simd_vec4
