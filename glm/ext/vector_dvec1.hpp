/// @ref ext_vector_dvec1
/// @file glm/ext/vector_dvec1.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_vector_dvec1 GLM_EXT_vector_dvec1
/// @ingroup ext
///
/// Include <glm/ext/vector_dvec1.hpp> to use the features of this extension.
///
/// Expose dvec1 vector type.

#pragma once

#include "../detail/type_vec1.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_vector_dvec1 extension included")
#endif

namespace glm
{
	/// @addtogroup ext_vector_dvec1
	/// @{

#	if GLM_CONFIG_PRECISION_DOUBLE == GLM_LOWP
		typedef vec<1, double, lowp>		dvec1;
#	elif GLM_CONFIG_PRECISION_DOUBLE == GLM_MEDIUMP
		typedef vec<1, double, mediump>		dvec1;
#	else
		/// 1 components vector of double-precision floating-point numbers.
		///
		/// @see ext_vector_dvec1 extension.
		typedef vec<1, double, highp>		dvec1;
#	endif

	/// @}
}//namespace glm
