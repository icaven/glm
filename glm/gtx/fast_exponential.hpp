/// @ref gtx_fast_exponential
/// @file glm/gtx/fast_exponential.hpp
///
/// @see core (dependence)
/// @see gtx_half_float (dependence)
///
/// @defgroup gtx_fast_exponential GLM_GTX_fast_exponential
/// @ingroup gtx
///
/// @brief Fast but less accurate implementations of exponential based functions.
///
/// <glm/gtx/fast_exponential.hpp> need to be included to use these functionalities.

#pragma once

// Dependency:
#include "../glm.hpp"

#ifndef GLM_ENABLE_EXPERIMENTAL
#	error "GLM: GLM_GTX_fast_exponential is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it."
#endif

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_fast_exponential extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_fast_exponential
	/// @{

	/// Faster than the common pow function but less accurate.
	/// @see gtx_fast_exponential
	template<typename genType>
	GLM_FUNC_DECL genType fastPow(genType x, genType y);

	/// Faster than the common pow function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename T, qualifier P>
	GLM_FUNC_DECL vec<L, T, P> fastPow(vec<L, T, P> const & x, vec<L, T, P> const & y);

	/// Faster than the common pow function but less accurate.
	/// @see gtx_fast_exponential
	template<typename genTypeT, typename genTypeU>
	GLM_FUNC_DECL genTypeT fastPow(genTypeT x, genTypeU y);

	/// Faster than the common pow function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename T, qualifier P>
	GLM_FUNC_DECL vec<L, T, P> fastPow(vec<L, T, P> const & x);

	/// Faster than the common exp function but less accurate.
	/// @see gtx_fast_exponential
	template<typename T>
	GLM_FUNC_DECL T fastExp(T x);

	/// Faster than the common exp function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename T, qualifier P>
	GLM_FUNC_DECL vec<L, T, P> fastExp(vec<L, T, P> const & x);

	/// Faster than the common log function but less accurate.
	/// @see gtx_fast_exponential
	template<typename T>
	GLM_FUNC_DECL T fastLog(T x);

	/// Faster than the common exp2 function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename T, qualifier P>
	GLM_FUNC_DECL vec<L, T, P> fastLog(vec<L, T, P> const & x);

	/// Faster than the common exp2 function but less accurate.
	/// @see gtx_fast_exponential
	template<typename T>
	GLM_FUNC_DECL T fastExp2(T x);

	/// Faster than the common exp2 function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename T, qualifier P>
	GLM_FUNC_DECL vec<L, T, P> fastExp2(vec<L, T, P> const & x);

	/// Faster than the common log2 function but less accurate.
	/// @see gtx_fast_exponential
	template<typename T>
	GLM_FUNC_DECL T fastLog2(T x);

	/// Faster than the common log2 function but less accurate.
	/// @see gtx_fast_exponential
	template<length_t L, typename T, qualifier P>
	GLM_FUNC_DECL vec<L, T, P> fastLog2(vec<L, T, P> const & x);

	/// @}
}//namespace glm

#include "fast_exponential.inl"
