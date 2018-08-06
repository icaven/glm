/// @ref ext_vector_vec1
/// @file glm/ext/vector_vec1.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_vector_vec1 GLM_EXT_vector_vec1
/// @ingroup ext
///
/// Include <glm/ext/vector_vec1.hpp> to use the features of this extension.
///
/// Exposes vec1 vector type.

#pragma once

#include "../detail/type_vec1.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_vector_vec1 extension included")
#endif

namespace glm
{
	/// @addtogroup ext_vector_vec1
	/// @{

#	if GLM_CONFIG_PRECISION_FLOAT == GLM_LOWP
		typedef vec<1, float, lowp>			vec1;
#	elif GLM_CONFIG_PRECISION_FLOAT == GLM_MEDIUMP
		typedef vec<1, float, mediump>		vec1;
#	else
		/// 1 components vector of single-precision floating-point numbers.
		///
		/// @see ext_vector_vec1 extension.
		typedef vec<1, float, highp>		vec1;
#	endif

	/// @}
}//namespace glm
