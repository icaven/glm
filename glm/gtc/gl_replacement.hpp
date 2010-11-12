///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-11-12
// Updated : 2010-11-12
// Licence : This source is under MIT License
// File    : glm/gtc/gl_replacement.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gl_replacement
#define glm_gl_replacement

// Dependency:
#include "../glm.hpp"
#include "../gtc/gl_replacement.hpp"

namespace glm
{
	namespace test{
		bool main_gtc_gl_replacement();
	}//namespace test

	namespace gtc{
	//! GLM_GTC_gl_replacement extension: GLM replacement functions for OpenGL compatibility function
	namespace gl_replacement
	{
		//! Builds a translation 4 * 4 matrix created from a vector of 3 components.
		//! From GLM_GTC_gl_replacement extension.
		template <typename T> 
		detail::tmat4x4<T> translate(
			detail::tmat4x4<T> const & m,
			detail::tvec3<T> const & v);
		
		//! Builds a rotation 4 * 4 matrix created from an axis vector and an angle expressed in degrees. 
		//! From GLM_GTC_gl_replacement extension.
		template <typename T> 
		detail::tmat4x4<T> rotate(
			detail::tmat4x4<T> const & m,
			T const & angle, 
			detail::tvec3<T> const & v);

		//! Builds a scale 4 * 4 matrix created from 3 scalars. 
		//! From GLM_GTC_gl_replacement extension.
		template <typename T> 
		detail::tmat4x4<T> scale(
			detail::tmat4x4<T> const & m,
			detail::tvec3<T> const & v);

		//! Creates a matrix for an orthographic parallel viewing volume.
		//! From GLM_GTC_matrix_projection extension.
		template <typename T> 
		detail::tmat4x4<T> ortho(
			T const & left, 
			T const & right, 
			T const & bottom, 
			T const & top, 
			T const & zNear, 
			T const & zFar);

		//! Creates a frustum matrix.
		//! From GLM_GTC_matrix_projection extension.
		template <typename T> 
		detail::tmat4x4<T> frustum(
			T const & left, 
			T const & right, 
			T const & bottom, 
			T const & top, 
			T const & nearVal, 
			T const & farVal);

	}//namespace gl_replacement
	}//namespace gtc
}//namespace glm

#include "gl_replacement.inl"

namespace glm{using namespace gtc::gl_replacement;}

#endif//glm_gl_replacement
