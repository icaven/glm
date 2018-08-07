/// @ref ext_quaternion_float
/// @file glm/ext/quaternion_float.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_quaternion_float GLM_EXT_quaternion_float
/// @ingroup ext
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

	/// Quaternion of single-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @see ext_quaternion_float
	typedef qua<float, lowp>		lowp_quat;

	/// Quaternion of single-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @see ext_quaternion_float
	typedef qua<float, mediump>	mediump_quat;

	/// Quaternion of single-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @see ext_quaternion_float
	typedef qua<float, highp>		highp_quat;

	/// @}
} //namespace glm

