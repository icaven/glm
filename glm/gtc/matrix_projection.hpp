///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2009-04-29
// Updated : 2010-02-07
// Licence : This source is under MIT License
// File    : glm/gtc/matrix_projection.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTC_matrix_operation
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtc_matrix_projection
#define glm_gtc_matrix_projection

// Dependency:
#include "../glm.hpp"
#include "../gtc/glu_replacement.hpp"

namespace glm
{
   	namespace test{
		bool main_gtc_matrix_projection();
	}//namespace test

    namespace gtc{
	//! GLM_GTC_matrix_projection: Varius ways to build and operate on projection matrices
    namespace matrix_projection
    {
		using namespace gtc::glu_replacement;

    }//namespace matrix_projection
    }//namespace gtc
}//namespace glm

#include "matrix_projection.inl"

namespace glm{using namespace gtc::matrix_projection;}

#endif//glm_gtc_matrix_projection
