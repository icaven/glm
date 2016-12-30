/// @ref gtx_associated_min_max
/// @file glm/gtx/associated_min_max.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_associated_min_max GLM_GTX_associated_min_max
/// @ingroup gtx
/// 
/// @brief Min and max functions that return associated values not the compared onces.
/// <glm/gtx/associated_min_max.hpp> need to be included to use these functionalities.

#pragma once

// Dependency:
#include "../glm.hpp"

#ifndef GLM_ENABLE_EXPERIMENTAL
#	error "GLM: GTX_associated_min_max is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it."
#endif

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_associated_min_max extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_associated_min_max
	/// @{

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, precision P>
	GLM_FUNC_DECL U associatedMin(T x, U a, T y, U b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vec<2, U, P> associatedMin(
		vecType<D, T, P> const & x, vecType<D, U, P> const & a,
		vecType<D, T, P> const & y, vecType<D, U, P> const & b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMin(
		T x, const vecType<D, U, P>& a,
		T y, const vecType<D, U, P>& b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMin(
		vecType<D, T, P> const & x, U a,
		vecType<D, T, P> const & y, U b);

	/// Minimum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMin(
		T x, U a,
		T y, U b,
		T z, U c);

	/// Minimum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMin(
		vecType<D, T, P> const & x, vecType<D, U, P> const & a,
		vecType<D, T, P> const & y, vecType<D, U, P> const & b,
		vecType<D, T, P> const & z, vecType<D, U, P> const & c);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMin(
		T x, U a,
		T y, U b,
		T z, U c,
		T w, U d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMin(
		vecType<D, T, P> const & x, vecType<D, U, P> const & a,
		vecType<D, T, P> const & y, vecType<D, U, P> const & b,
		vecType<D, T, P> const & z, vecType<D, U, P> const & c,
		vecType<D, T, P> const & w, vecType<D, U, P> const & d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMin(
		T x, vecType<D, U, P> const & a,
		T y, vecType<D, U, P> const & b,
		T z, vecType<D, U, P> const & c,
		T w, vecType<D, U, P> const & d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMin(
		vecType<D, T, P> const & x, U a,
		vecType<D, T, P> const & y, U b,
		vecType<D, T, P> const & z, U c,
		vecType<D, T, P> const & w, U d);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(T x, U a, T y, U b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vec<2, U, P> associatedMax(
		vecType<D, T, P> const & x, vecType<D, U, P> const & a,
		vecType<D, T, P> const & y, vecType<D, U, P> const & b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> associatedMax(
		T x, vecType<D, U, P> const & a,
		T y, vecType<D, U, P> const & b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMax(
		vecType<D, T, P> const & x, U a,
		vecType<D, T, P> const & y, U b);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(
		T x, U a,
		T y, U b,
		T z, U c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMax(
		vecType<D, T, P> const & x, vecType<D, U, P> const & a,
		vecType<D, T, P> const & y, vecType<D, U, P> const & b,
		vecType<D, T, P> const & z, vecType<D, U, P> const & c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, T, P> associatedMax(
		T x, vecType<D, U, P> const & a,
		T y, vecType<D, U, P> const & b,
		T z, vecType<D, U, P> const & c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMax(
		vecType<D, T, P> const & x, U a,
		vecType<D, T, P> const & y, U b,
		vecType<D, T, P> const & z, U c);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(
		T x, U a,
		T y, U b,
		T z, U c,
		T w, U d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMax(
		vecType<D, T, P> const & x, vecType<D, U, P> const & a,
		vecType<D, T, P> const & y, vecType<D, U, P> const & b,
		vecType<D, T, P> const & z, vecType<D, U, P> const & c,
		vecType<D, T, P> const & w, vecType<D, U, P> const & d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMax(
		T x, vecType<D, U, P> const & a,
		T y, vecType<D, U, P> const & b,
		T z, vecType<D, U, P> const & c,
		T w, vecType<D, U, P> const & d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<int D, typename T, typename U, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, U, P> associatedMax(
		vecType<D, T, P> const & x, U a,
		vecType<D, T, P> const & y, U b,
		vecType<D, T, P> const & z, U c,
		vecType<D, T, P> const & w, U d);

	/// @}
} //namespace glm

#include "associated_min_max.inl"
