/// @ref quaternion_float
/// @file glm/ext/quaternion_float.hpp
///
/// @see core (dependence)
///
/// @defgroup gtc_quaternion GLM_EXT_quaternion_float
/// @ingroup gtc
///
/// Include <glm/ext/quaternion_float.hpp> to use the features of this extension.
///
/// Defines a templated quaternion type and several quaternion operations.

#pragma once

// Dependency:
#include "../detail/type_quat.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_quaternion_float extension included")
#endif

namespace glm
{
	/// @addtogroup ext_quaternion_float
	/// @{

#if GLM_CONFIG_PRECISION_FLOAT == GLM_HIGHP
	typedef qua<float, highp>		quat;
#elif GLM_CONFIG_PRECISION_FLOAT == GLM_MEDIUMP
	typedef qua<float, mediump>		quat;
#else
	typedef qua<float, lowp>		quat;
#endif

	/// @}
} //namespace glm

