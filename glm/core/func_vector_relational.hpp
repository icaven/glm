///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref core
/// @file glm/core/func_vector_relational.hpp
/// @date 2008-08-03 / 2011-06-15
/// @author Christophe Riccio
///
/// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.10.6.pdf">GLSL 4.10.6 specification, section 8.7</a>
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
///////////////////////////////////////////////////////////////////////////////////

#ifndef GLM_CORE_func_vector_relational
#define GLM_CORE_func_vector_relational GLM_VERSION

#include "_detail.hpp"

namespace glm
{
	/// @addtogroup core_func_vector_relational
	/// @{

	//! Returns the component-wise comparison result of x < y.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/lessThan.xml">GLSL lessThan man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
    //template <typename T, template <typename> class vecType> 
	//GLM_FUNC_QUALIFIER typename vecType<T>::bool_type lessThan(vecType<T> const & x, vecType<T> const & y);

	//! Returns the component-wise comparison of result x <= y.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/lessThanEqual.xml">GLSL lessThanEqual man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
	template <typename T, template <typename> class vecType> 
	GLM_FUNC_QUALIFIER typename vecType<T>::bool_type lessThanEqual(vecType<T> const & x, vecType<T> const & y);

	//! Returns the component-wise comparison of result x > y.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/greaterThan.xml">GLSL greaterThan man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
	template <typename T, template <typename> class vecType> 
	GLM_FUNC_QUALIFIER typename vecType<T>::bool_type greaterThan(vecType<T> const & x, vecType<T> const & y);

	//! Returns the component-wise comparison of result x >= y.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/greaterThanEqual.xml">GLSL greaterThanEqual man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
	template <typename T, template <typename> class vecType> 
	typename vecType<T>::bool_type greaterThanEqual(vecType<T> const & x, vecType<T> const & y);

	//! Returns the component-wise comparison of result x == y.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/equal.xml">GLSL equal man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
	//template <typename T, template <typename> class vecType> 
	//GLM_FUNC_QUALIFIER typename vecType<T>::bool_type equal(vecType<T> const & x, vecType<T> const & y);

	//! Returns the component-wise comparison of result x != y.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/notEqual.xml">GLSL notEqual man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
	template <typename T, template <typename> class vecType> 
	typename vecType<T>::bool_type notEqual(vecType<T> const & x, vecType<T> const & y);

	//! Returns true if any component of x is true.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/any.xml">GLSL any man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
	template <template <typename> class vecType> 
	bool any(vecType<bool> const & v);

	//! Returns true if all components of x are true.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/all.xml">GLSL all man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
	template <template <typename> class vecType> 
	bool all(vecType<bool> const & v);

	//! Returns the component-wise logical complement of x.
    //! /!\ Because of language incompatibilities between C++ and GLSL, GLM defines the function not but not_ instead.
    //!
    /// @see - <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/not.xml">GLSL not man page</a>
    /// @see - <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7</a>
	template <template <typename> class vecType> 
	vecType<bool> not_(vecType<bool> const & v);

	/// @}
}//namespace glm

#include "func_vector_relational.inl"

#endif//GLM_CORE_func_vector_relational
