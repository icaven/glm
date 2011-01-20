///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-01-20
// Updated : 2011-01-20
// Licence : This source is under MIT License
// File    : glm/gtc/matrix_integer.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtc_matrix_integer
#define glm_gtc_matrix_integer

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTC_matrix_integer extension included")
#endif

namespace glm
{
	namespace test{
		bool main_gtc_matrix_integer();
	}//namespace test

	namespace gtc{
	//! GLM_GTC_matrix_integer extension: Add integer matrices
	namespace matrix_integer
	{
		typedef detail::tmat2x2<highp_int>				highp_imat2;	//!< \brief High-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x3<highp_int>				highp_imat3;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x4<highp_int>				highp_imat4;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)

		typedef detail::tmat2x2<highp_int>				highp_imat2x2; //!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat2x3<highp_int>				highp_imat2x3; //!< \brief Single-precision floating-point 2x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat2x4<highp_int>				highp_imat2x4; //!< \brief Single-precision floating-point 2x4 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x2<highp_int>				highp_imat3x2; //!< \brief Single-precision floating-point 3x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x3<highp_int>				highp_imat3x3; //!< \brief Single-precision floating-point 3x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x4<highp_int>				highp_imat3x4; //!< \brief Single-precision floating-point 3x4 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x2<highp_int>				highp_imat4x2; //!< \brief Single-precision floating-point 4x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x3<highp_int>				highp_imat4x3; //!< \brief Single-precision floating-point 4x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x4<highp_int>				highp_imat4x4; //!< \brief Single-precision floating-point 4x4 matrix. (from GLM_GTC_matrix_integer extension)

		typedef detail::tmat2x2<mediump_int>			mediump_imat2;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x3<mediump_int>			mediump_imat3;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x4<mediump_int>			mediump_imat4;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)

		typedef detail::tmat2x2<mediump_int>			mediump_imat2x2; //!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat2x3<mediump_int>			mediump_imat2x3; //!< \brief Single-precision floating-point 2x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat2x4<mediump_int>			mediump_imat2x4; //!< \brief Single-precision floating-point 2x4 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x2<mediump_int>			mediump_imat3x2; //!< \brief Single-precision floating-point 3x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x3<mediump_int>			mediump_imat3x3; //!< \brief Single-precision floating-point 3x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x4<mediump_int>			mediump_imat3x4; //!< \brief Single-precision floating-point 3x4 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x2<mediump_int>			mediump_imat4x2; //!< \brief Single-precision floating-point 4x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x3<mediump_int>			mediump_imat4x3; //!< \brief Single-precision floating-point 4x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x4<mediump_int>			mediump_imat4x4; //!< \brief Single-precision floating-point 4x4 matrix. (from GLM_GTC_matrix_integer extension)

		typedef detail::tmat2x2<lowp_int>				lowp_imat2;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x3<lowp_int>				lowp_imat3;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x4<lowp_int>				lowp_imat4;	//!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)

		typedef detail::tmat2x2<lowp_int>				lowp_imat2x2; //!< \brief Single-precision floating-point 2x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat2x3<lowp_int>				lowp_imat2x3; //!< \brief Single-precision floating-point 2x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat2x4<lowp_int>				lowp_imat2x4; //!< \brief Single-precision floating-point 2x4 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x2<lowp_int>				lowp_imat3x2; //!< \brief Single-precision floating-point 3x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x3<lowp_int>				lowp_imat3x3; //!< \brief Single-precision floating-point 3x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat3x4<lowp_int>				lowp_imat3x4; //!< \brief Single-precision floating-point 3x4 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x2<lowp_int>				lowp_imat4x2; //!< \brief Single-precision floating-point 4x2 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x3<lowp_int>				lowp_imat4x3; //!< \brief Single-precision floating-point 4x3 matrix. (from GLM_GTC_matrix_integer extension)
		typedef detail::tmat4x4<lowp_int>				lowp_imat4x4; //!< \brief Single-precision floating-point 4x4 matrix. (from GLM_GTC_type_precision extension)

	}//namespace matrix_integer
	}//namespace gtc
}//namespace glm

namespace glm{using namespace gtc::matrix_integer;}

#endif//glm_gtc_matrix_integer
