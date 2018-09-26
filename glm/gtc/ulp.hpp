/// @ref gtc_ulp
/// @file glm/gtc/ulp.hpp
///
/// @see core (dependence)
///
/// @defgroup gtc_ulp GLM_GTC_ulp
/// @ingroup gtc
///
/// Include <glm/gtc/ulp.hpp> to use the features of this extension.
///
/// Allow the measurement of the accuracy of a function against a reference
/// implementation. This extension works on floating-point data and provide results
/// in ULP.

#pragma once

// Dependencies
#include "../gtc/constants.hpp"
#include "../ext/vector_relational.hpp"
#include "../ext/scalar_int_sized.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTC_ulp extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_ulp
	/// @{

	/// Return the next ULP value(s) after the input value(s).
	/// @see gtc_ulp
	template<typename genType>
	GLM_FUNC_DECL genType next_float(genType const& x);

	/// Return the previous ULP value(s) before the input value(s).
	/// @see gtc_ulp
	template<typename genType>
	GLM_FUNC_DECL genType prev_float(genType const& x);

	/// Return the value(s) ULP distance after the input value(s).
	/// @see gtc_ulp
	template<typename genType>
	GLM_FUNC_DECL genType next_float(genType const& x, int DistanceULPs);

	/// Return the value(s) ULP distance before the input value(s).
	/// @see gtc_ulp
	template<typename genType>
	GLM_FUNC_DECL genType prev_float(genType const& x, int DistanceULPs);

	/// Return the distance in the number of ULP between 2 single-precision floating-point scalars.
	/// @see gtc_ulp
	template<typename T>
	GLM_FUNC_DECL int float_distance(float x, float y);

	/// Return the distance in the number of ULP between 2 double-precision floating-point scalars.
	/// @see gtc_ulp
	template<typename T>
	GLM_FUNC_DECL int64 float_distance(double x, double y);

	/// Return the distance in the number of ULP between single-precision floating-point 2 vectors.
	/// @see gtc_ulp
	template<length_t L, qualifier Q>
	GLM_FUNC_DECL vec<L, int, Q> float_distance(vec<L, float, Q> const& x, vec<L, float, Q> const& y);

	/// Return the distance in the number of ULP between double-precision floating-point 2 vectors.
	/// @see gtc_ulp
	template<length_t L, qualifier Q>
	GLM_FUNC_DECL vec<L, int64, Q> float_distance(vec<L, double, Q> const& x, vec<L, double, Q> const& y);

	/// @}
}// namespace glm

#include "ulp.inl"
