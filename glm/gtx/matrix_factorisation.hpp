/// @ref gtx_matrix_factorisation
/// @file glm/gtx/matrix_factorisation.hpp
///
/// @see core (dependence)
///
/// @defgroup gtx_matrix_factorisation GLM_GTX_matrix_factorisation
/// @ingroup gtx
///
/// @brief Functions to factor matrices in various forms
///
/// <glm/gtx/matrix_factorisation.hpp> need to be included to use these functionalities.

#pragma once

// Dependency:
#include <algorithm>
#include "../glm.hpp"

#ifndef GLM_ENABLE_EXPERIMENTAL
#	error "GLM: GLM_GTX_matrix_factorisation is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it."
#endif

#if GLM_MESSAGES == GLM_MESSAGES_ENABLED && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTX_matrix_factorisation extension included")
#endif

/*
Suggestions:
 - Move helper functions flipud and flip lr to another file: They may be helpful in more general circumstances.
 - When rq_decompose is fed a matrix that has more rows than columns, the resulting r matrix is NOT upper triangular. Is that a bug?
 - Implement other types of matrix factorisation, such as: QL and LQ, L(D)U, eigendecompositions, etc...
*/

namespace glm{
	/// @addtogroup gtx_matrix_factorisation
	/// @{

	/// Flips the matrix rows up and down.
	/// From GLM_GTX_matrix_factorisation extension.
	template <length_t C, length_t R, typename T, precision P, template<length_t, length_t, typename, precision> class matType>
	GLM_FUNC_DECL matType<C, R, T, P> flipud(const matType<C, R, T, P>& in);

	/// Flips the matrix columns right and left.
	/// From GLM_GTX_matrix_factorisation extension.
	template <length_t C, length_t R, typename T, precision P, template<length_t, length_t, typename, precision> class matType>
	GLM_FUNC_DECL matType<C, R, T, P> fliplr(const matType<C, R, T, P>& in);

	/// Performs QR factorisation of a matrix.
	/// Returns 2 matrices, q and r, such that q columns are orthonormal, r is an upper triangular matrix, and q*r=in.
	/// r is a square matrix whose dimensions are the same than the width of the input matrix, and q has the same dimensions than the input matrix.
	/// From GLM_GTX_matrix_factorisation extension.
	template <length_t C, length_t R, typename T, precision P, template<length_t, length_t, typename, precision> class matType>
	GLM_FUNC_DECL void qr_decompose(matType<std::min(C, R), R, T, P>& q, matType<C, std::min(C, R), T, P>& r, const matType<C, R, T, P>& in);

	/// Performs RQ factorisation of a matrix.
	/// Returns 2 matrices, r and q, such that r is an upper triangular matrix, q rows are orthonormal, and r*q=in.
	/// q has the same dimensions than the input matrix, and r is a square matrix whose dimensions are the same than the height of the input matrix.
	/// From GLM_GTX_matrix_factorisation extension.
	template <length_t C, length_t R, typename T, precision P, template<length_t, length_t, typename, precision> class matType>
	GLM_FUNC_DECL void rq_decompose(matType<std::min(C, R), R, T, P>& r, matType<C, std::min(C, R), T, P>& q, const matType<C, R, T, P>& in);

	/// @}
}

#include "matrix_factorisation.inl"
