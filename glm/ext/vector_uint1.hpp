/// @ref ext_vector_uint1
/// @file glm/ext/vector_uint1.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_vector_uvec1 GLM_EXT_vector_uint1
/// @ingroup ext
///
/// Include <glm/ext/vector_uvec1.hpp> to use the features of this extension.
///
/// Exposes uvec1 vector type.

#pragma once

#include "../detail/type_vec1.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_vector_uint1 extension included")
#endif

namespace glm
{
	/// @addtogroup ext_vector_uint1
	/// @{

#	if GLM_CONFIG_PRECISION_UINT == GLM_LOWP
		typedef vec<1, unsigned int, lowp>			uvec1;
#	elif GLM_CONFIG_PRECISION_UINT == GLM_MEDIUMP
		typedef vec<1, unsigned int, mediump>		uvec1;
#	elif GLM_CONFIG_PRECISION_UINT == GLM_HIGHP
		/// 1 component vector of unsigned integer numbers.
		///
		/// @see ext_vector_uint1 extension.
		typedef vec<1, unsigned int, highp>			uvec1;
#	endif

	/// @}
}//namespace glm

