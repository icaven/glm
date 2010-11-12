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
#include "../gtc/matrix_transform.hpp"
#include "../gtc/matrix_projection.hpp"

namespace glm
{
	namespace test{
		bool main_gtc_gl_replacement();
	}//namespace test

	namespace gtc{
	//! GLM_GTC_gl_replacement extension: GLM replacement functions for OpenGL compatibility function
	namespace gl_replacement
	{

	}//namespace gl_replacement
	}//namespace gtc
}//namespace glm

#include "gl_replacement.inl"

namespace glm{using namespace gtc::gl_replacement;}

#endif//glm_gl_replacement
