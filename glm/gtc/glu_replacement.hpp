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

#ifndef glm_glu_replacement
#define glm_glu_replacement

// Dependency:
#include "../glm.hpp"
#include "../gtc/gl_replacement.hpp"

namespace glm
{
	namespace test{
		bool main_gtc_gl_replacement();
	}//namespace test

	namespace gtc{
	//! GLM_GTC_glu_replacement extension: GLM replacement functions for GLU
	namespace glu_replacement
	{
		using namespace gtc::gl_replacement;

		//! Creates a matrix for projecting two-dimensional coordinates onto the screen.
		//! From GLM_GTC_glu_replacement extension.
        template <typename T> 
		detail::tmat4x4<T> ortho(
			T const & left, 
			T const & right, 
			T const & bottom, 
			T const & top);

		//! Creates a matrix for a symetric perspective-view frustum.
		//! From GLM_GTC_glu_replacement extension.
		template <typename T> 
		detail::tmat4x4<T> perspective(
			T const & fovy, 
			T const & aspect, 
			T const & zNear, 
			T const & zFar);

		//! Map the specified object coordinates (obj.x, obj.y, obj.z) into window coordinates.
		//! From GLM_GTC_glu_replacement extension.
		template <typename T, typename U> 
		detail::tvec3<T> project(
			detail::tvec3<T> const & obj, 
			detail::tmat4x4<T> const & model, 
			detail::tmat4x4<T> const & proj, 
			detail::tvec4<U> const & viewport);

		//! Map the specified window coordinates (win.x, win.y, win.z) into object coordinates.
		//! From GLM_GTC_glu_replacement extension.
		template <typename T, typename U> 
		detail::tvec3<T> unProject(
			detail::tvec3<T> const & win, 
			detail::tmat4x4<T> const & model, 
			detail::tmat4x4<T> const & proj, 
			detail::tvec4<U> const & viewport);

		//! Build a look at view matrix.
		//! From GLM_GTC_glu_replacement extension.
		template <typename T> 
		detail::tmat4x4<T> lookAt(
			detail::tvec3<T> const & eye, 
			detail::tvec3<T> const & center, 
			detail::tvec3<T> const & up);

	}//namespace glu_replacement
	}//namespace gtc
}//namespace glm

#include "glu_replacement.inl"

namespace glm{using namespace gtc::glu_replacement;}

#endif//glm_glu_replacement
