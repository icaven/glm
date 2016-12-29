/// @ref core
/// @file glm/detail/func_vector_relational.hpp
///
/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
/// 
/// @defgroup core_func_vector_relational Vector Relational Functions
/// @ingroup core
/// 
/// Relational and equality operators (<, <=, >, >=, ==, !=) are defined to 
/// operate on scalars and produce scalar Boolean results. For vector results, 
/// use the following built-in functions. 
/// 
/// In all cases, the sizes of all the input and return vectors for any particular 
/// call must match.

#pragma once

#include "precision.hpp"
#include "setup.hpp"

namespace glm
{
	/// @addtogroup core_func_vector_relational
	/// @{

	/// Returns the component-wise comparison result of x < y.
	/// 
	/// @tparam vecType Floating-point or integer vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/lessThan.xml">GLSL lessThan man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, bool, P> lessThan(vecType<D, T, P> const & x, vecType<D, T, P> const & y);

	/// Returns the component-wise comparison of result x <= y.
	///
	/// @tparam vecType Floating-point or integer vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/lessThanEqual.xml">GLSL lessThanEqual man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, bool, P> lessThanEqual(vecType<D, T, P> const & x, vecType<D, T, P> const & y);

	/// Returns the component-wise comparison of result x > y.
	///
	/// @tparam vecType Floating-point or integer vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/greaterThan.xml">GLSL greaterThan man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, bool, P> greaterThan(vecType<D, T, P> const & x, vecType<D, T, P> const & y);

	/// Returns the component-wise comparison of result x >= y.
	///
	/// @tparam vecType Floating-point or integer vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/greaterThanEqual.xml">GLSL greaterThanEqual man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, bool, P> greaterThanEqual(vecType<D, T, P> const & x, vecType<D, T, P> const & y);

	/// Returns the component-wise comparison of result x == y.
	///
	/// @tparam vecType Floating-point, integer or boolean vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/equal.xml">GLSL equal man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, bool, P> equal(vecType<D, T, P> const & x, vecType<D, T, P> const & y);

	/// Returns the component-wise comparison of result x != y.
	/// 
	/// @tparam vecType Floating-point, integer or boolean vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/notEqual.xml">GLSL notEqual man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, bool, P> notEqual(vecType<D, T, P> const & x, vecType<D, T, P> const & y);

	/// Returns true if any component of x is true.
	///
	/// @tparam vecType Boolean vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/any.xml">GLSL any man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL bool any(vecType<D, bool, P> const & v);

	/// Returns true if all components of x are true.
	///
	/// @tparam vecType Boolean vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/all.xml">GLSL all man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL bool all(vecType<D, bool, P> const & v);

	/// Returns the component-wise logical complement of x.
	/// /!\ Because of language incompatibilities between C++ and GLSL, GLM defines the function not but not_ instead.
	///
	/// @tparam vecType Boolean vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/not.xml">GLSL not man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <int D, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_DECL vecType<D, bool, P> not_(vecType<D, bool, P> const & v);

	/// @}
}//namespace glm

#include "func_vector_relational.inl"
