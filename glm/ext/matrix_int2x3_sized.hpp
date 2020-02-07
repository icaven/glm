/// @ref ext_matrix_int2x3
/// @file glm/ext/matrix_int2x3.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_int2x3 GLM_EXT_matrix_int2x3
/// @ingroup ext
///
/// Include <glm/ext/matrix_int2x3.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat2x3.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_int2x3 extension included")
#endif

namespace glm
{
	/// @addtogroup ext_matrix_int2x2
	/// @{

	/// Signed integer 2x2 matrix.
	///
	/// @see gtc_matrix_integer
	typedef mat<2, 2, int, highp>				imat2;

	/// Signed integer 2x2 matrix.
	///
	/// @see gtc_matrix_integer
	typedef mat<2, 2, int, highp>				imat2x2;

	/// @}
}//namespace glm
