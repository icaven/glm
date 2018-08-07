/// @ref ext_vector_ivec1
/// @file glm/ext/vector_ivec1.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_vector_ivec1 GLM_EXT_vector_ivec1
/// @ingroup ext
///
/// Include <glm/ext/vector_ivec1.hpp> to use the features of this extension.
///
/// Exposes ivec1 vector type.

#pragma once

#include "../detail/type_vec1.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_vector_ivec1 extension included")
#endif

namespace glm
{
	/// @addtogroup ext_vector_ivec1
	/// @{

#	if GLM_CONFIG_PRECISION_INT == GLM_LOWP
		typedef vec<1, int, lowp>			ivec1;
#	elif GLM_CONFIG_PRECISION_INT == GLM_MEDIUMP
		typedef vec<1, int, mediump>		ivec1;
#	else
		/// 1 component vector of signed integer numbers.
		///
		/// @see ext_vector_ivec1 extension.
		typedef vec<1, int, highp>			ivec1;
#	endif

	/// @}
}//namespace glm

