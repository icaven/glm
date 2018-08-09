/// @ref ext_quaternion_geometric
/// @file glm/ext/quaternion_geometric.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_quaternion_geometric GLM_EXT_quaternion_geometric
/// @ingroup gtx
///
/// Include <glm/ext/quaternion_geometric.hpp> to use the features of this extension.
///
/// Defines a templated quaternion type and several quaternion operations.

#pragma once

// Dependency:
#include "../gtc/constants.hpp"
#include "../gtc/matrix_transform.hpp"
#include "../ext/vector_relational.hpp"
#include "../ext/quaternion_float.hpp"
#include "../ext/quaternion_float_precision.hpp"
#include "../ext/quaternion_double.hpp"
#include "../ext/quaternion_double_precision.hpp"
#include "../ext/quaternion_relational.hpp"
#include "../detail/type_mat3x3.hpp"
#include "../detail/type_mat4x4.hpp"
#include "../detail/type_vec3.hpp"
#include "../detail/type_vec4.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTC_quaternion extension included")
#endif

namespace glm
{
	/// @addtogroup ext_quaternion_geometric
	/// @{

	/// Returns the norm of a quaternions
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see ext_quaternion_geometric
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T length(qua<T, Q> const& q);

	/// Returns the normalized quaternion.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see ext_quaternion_geometric
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> normalize(qua<T, Q> const& q);

	/// Returns dot product of q1 and q2, i.e., q1[0] * q2[0] + q1[1] * q2[1] + ...
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see ext_quaternion_geometric
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T dot(qua<T, Q> const& x, qua<T, Q> const& y);

	/// Compute a cross product between a quaternion and a vector.
	///
	/// @see ext_quaternion_geometric
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER qua<T, Q> cross(qua<T, Q> const& q1, qua<T, Q> const& q2);

	/// @}
} //namespace glm

#include "quaternion_geometric.inl"
