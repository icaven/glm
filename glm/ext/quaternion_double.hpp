/// @ref ext_quaternion_double
/// @file glm/ext/quaternion_double.hpp
///
/// @defgroup ext_quaternion_double GLM_EXT_quaternion_double
/// @ingroup ext
///
/// Defines a templated quaternion type and several quaternion operations.
///
/// Include <glm/ext/quaternion_double.hpp> to use the features of this extension.
///
/// @see ext_quaternion_float
/// @see ext_quaternion_double_precision

#pragma once

// Dependency:
#include "../detail/type_quat.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_quaternion_double extension included")
#endif

namespace glm
{
	/// @addtogroup ext_quaternion_double
	/// @{

	/// Quaternion of double-precision floating-point numbers.
	typedef qua<double, defaultp>		dquat;

	/// @}
} //namespace glm

