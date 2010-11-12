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

	}//namespace glu_replacement
	}//namespace gtc
}//namespace glm

#include "glu_replacement.inl"

namespace glm{using namespace gtc::glu_replacement;}

#endif//glm_glu_replacement
