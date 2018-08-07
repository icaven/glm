/// @ref gtc_quaternion
/// @file glm/gtc/quaternion.hpp
///
/// @see core (dependence)
/// @see gtc_constants (dependence)
///
/// @defgroup gtc_quaternion GLM_GTC_quaternion
/// @ingroup gtc
///
/// Include <glm/gtc/quaternion.hpp> to use the features of this extension.
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
#include "../detail/type_mat3x3.hpp"
#include "../detail/type_mat4x4.hpp"
#include "../detail/type_vec3.hpp"
#include "../detail/type_vec4.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTC_quaternion extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_quaternion
	/// @{

	// -- Boolean operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR bool operator==(qua<T, Q> const& q1, qua<T, Q> const& q2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR bool operator!=(qua<T, Q> const& q1, qua<T, Q> const& q2);

	/// Builds an identity quaternion.
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR genType identity();

	/// Returns the length of the quaternion.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T length(qua<T, Q> const& q);

	/// Returns the normalized quaternion.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> normalize(qua<T, Q> const& q);

	/// Returns dot product of q1 and q2, i.e., q1[0] * q2[0] + q1[1] * q2[1] + ...
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T dot(qua<T, Q> const& x, qua<T, Q> const& y);

	/// Spherical linear interpolation of two quaternions.
	/// The interpolation is oriented and the rotation is performed at constant speed.
	/// For short path spherical linear interpolation, use the slerp function.
	///
	/// @param x A quaternion
	/// @param y A quaternion
	/// @param a Interpolation factor. The interpolation is defined beyond the range [0, 1].
	/// @tparam T Floating-point scalar types.
	///
	/// @see - slerp(qua<T, Q> const& x, qua<T, Q> const& y, T const& a)
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> mix(qua<T, Q> const& x, qua<T, Q> const& y, T a);

	/// Linear interpolation of two quaternions.
	/// The interpolation is oriented.
	///
	/// @param x A quaternion
	/// @param y A quaternion
	/// @param a Interpolation factor. The interpolation is defined in the range [0, 1].
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> lerp(qua<T, Q> const& x, qua<T, Q> const& y, T a);

	/// Spherical linear interpolation of two quaternions.
	/// The interpolation always take the short path and the rotation is performed at constant speed.
	///
	/// @param x A quaternion
	/// @param y A quaternion
	/// @param a Interpolation factor. The interpolation is defined beyond the range [0, 1].
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> slerp(qua<T, Q> const& x, qua<T, Q> const& y, T a);

	/// Returns the q conjugate.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> conjugate(qua<T, Q> const& q);

	/// Returns the q inverse.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> inverse(qua<T, Q> const& q);

	/// Rotates a quaternion from a vector of 3 components axis and an angle.
	///
	/// @param q Source orientation
	/// @param angle Angle expressed in radians.
	/// @param axis Axis of the rotation
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> rotate(qua<T, Q> const& q, T const& angle, vec<3, T, Q> const& axis);

	/// Returns euler angles, pitch as x, yaw as y, roll as z.
	/// The result is expressed in radians.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> eulerAngles(qua<T, Q> const& x);

	/// Returns roll value of euler angles expressed in radians.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T roll(qua<T, Q> const& x);

	/// Returns pitch value of euler angles expressed in radians.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T pitch(qua<T, Q> const& x);

	/// Returns yaw value of euler angles expressed in radians.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T yaw(qua<T, Q> const& x);

	/// Converts a quaternion to a 3 * 3 matrix.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 3, T, Q> mat3_cast(qua<T, Q> const& x);

	/// Converts a quaternion to a 4 * 4 matrix.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 4, T, Q> mat4_cast(qua<T, Q> const& x);

	/// Converts a pure rotation 3 * 3 matrix to a quaternion.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> quat_cast(mat<3, 3, T, Q> const& x);

	/// Converts a pure rotation 4 * 4 matrix to a quaternion.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> quat_cast(mat<4, 4, T, Q> const& x);

	/// Returns the quaternion rotation angle.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL T angle(qua<T, Q> const& x);

	/// Returns the q rotation axis.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<3, T, Q> axis(qua<T, Q> const& x);

	/// Build a quaternion from an angle and a normalized axis.
	///
	/// @param angle Angle expressed in radians.
	/// @param axis Axis of the quaternion, must be normalized.
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL qua<T, Q> angleAxis(T const& angle, vec<3, T, Q> const& axis);

	/// Returns the component-wise comparison result of x < y.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> lessThan(qua<T, Q> const& x, qua<T, Q> const& y);

	/// Returns the component-wise comparison of result x <= y.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> lessThanEqual(qua<T, Q> const& x, qua<T, Q> const& y);

	/// Returns the component-wise comparison of result x > y.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> greaterThan(qua<T, Q> const& x, qua<T, Q> const& y);

	/// Returns the component-wise comparison of result x >= y.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> greaterThanEqual(qua<T, Q> const& x, qua<T, Q> const& y);

	/// Returns the component-wise comparison of result x == y.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> equal(qua<T, Q> const& x, qua<T, Q> const& y);

	/// Returns the component-wise comparison of |x - y| < epsilon.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> equal(qua<T, Q> const& x, qua<T, Q> const& y, T epsilon);

	/// Returns the component-wise comparison of result x != y.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> notEqual(qua<T, Q> const& x, qua<T, Q> const& y);

	/// Returns the component-wise comparison of |x - y| >= epsilon.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> notEqual(qua<T, Q> const& x, qua<T, Q> const& y, T epsilon);


	/// Returns true if x holds a NaN (not a number)
	/// representation in the underlying implementation's set of
	/// floating point representations. Returns false otherwise,
	/// including for implementations with no NaN
	/// representations.
	///
	/// /!\ When using compiler fast math, this function may fail.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> isnan(qua<T, Q> const& x);

	/// Returns true if x holds a positive infinity or negative
	/// infinity representation in the underlying implementation's
	/// set of floating point representations. Returns false
	/// otherwise, including for implementations with no infinity
	/// representations.
	///
	/// @tparam T Floating-point scalar types.
	///
	/// @see gtc_quaternion
	template<typename T, qualifier Q>
	GLM_FUNC_DECL vec<4, bool, Q> isinf(qua<T, Q> const& x);

	/// @}
} //namespace glm

#include "quaternion.inl"
