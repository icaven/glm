///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2009-04-29
// Updated : 2009-04-29
// Licence : This source is under MIT License
// File    : glm/gtc/matrix_transform.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTC_matrix_operation
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtc_matrix_transform
#define glm_gtc_matrix_transform

// Dependency:
#include "../glm.hpp"
#include "../gtc/gl_replacement.hpp"

namespace glm
{
	namespace test{
		bool main_gtc_matrix_transform();
	}//namespace test

	namespace gtc{
	//! GLM_GTC_matrix_transform extension: Add transformation matrices
	namespace matrix_transform
	{
		using namespace gtc::gl_replacement;

	}//namespace matrix_transform
	}//namespace gtc
}//namespace glm

#include "matrix_transform.inl"

namespace glm{using namespace gtc::matrix_transform;}

#endif//glm_gtc_matrix_transform
