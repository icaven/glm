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
/// @file glm/core/func_matrix.hpp
/// @date 2008-08-03 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#ifndef glm_core_func_matrix
#define glm_core_func_matrix

namespace glm
{
	/// @addtogroup core_funcs
	/// @{

	//! Multiply matrix x by matrix y component-wise, i.e., 
	//! result[i][j] is the scalar product of x[i][j] and y[i][j].
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/matrixCompMult.xml">GLSL matrixCompMult man page</a>
    //! \li GLSL 1.30.08 specification, section 8.5
	template <typename matType> 
	matType matrixCompMult(
		matType const & x, 
		matType const & y);

	//! Treats the first parameter c as a column vector 
	//! and the second parameter r as a row vector
	//! and does a linear algebraic matrix multiply c * r.
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/outerProduct.xml">GLSL outerProduct man page</a>
    //! \li GLSL 1.30.08 specification, section 8.5	
    template <typename vecType, typename matType> 
	matType outerProduct(
		vecType const & c, 
		vecType const & r);

	//! Returns the transposed matrix of x
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/transpose.xml">GLSL transpose man page</a>
    //! \li GLSL 1.30.08 specification, section 8.5	
    template <typename matType> 
	typename matType::transpose_type transpose(
		matType const & x);
	
	//! Return the determinant of a mat2 matrix. 
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/determinant.xml">GLSL determinant man page</a>
    //! \li GLSL 1.30.08 specification, section 8.5	
	template <typename T> 
	typename detail::tmat2x2<T>::value_type determinant(
		detail::tmat2x2<T> const & m);

	//! Return the determinant of a mat3 matrix. 
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/determinant.xml">GLSL determinant man page</a>
    //! \li GLSL 1.30.08 specification, section 8.5	
	template <typename T> 
	typename detail::tmat3x3<T>::value_type determinant(
		detail::tmat3x3<T> const & m);

	//! Return the determinant of a mat4 matrix. 
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/determinant.xml">GLSL determinant man page</a>
    //! \li GLSL 1.30.08 specification, section 8.5		
    template <typename T> 
	typename detail::tmat4x4<T>::value_type determinant(
		detail::tmat4x4<T> const & m);

	//! Return the inverse of a mat2 matrix. 
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/inverse.xml">GLSL inverse man page</a>
    //! \li GLSL 1.40.07 specification, section 8.5	 
	template <typename T> 
	detail::tmat2x2<T> inverse(
		detail::tmat2x2<T> const & m);

	//! Return the inverse of a mat3 matrix. 
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/inverse.xml">GLSL inverse man page</a>
    //! \li GLSL 1.40.07 specification, section 8.5 
	template <typename T> 
	detail::tmat3x3<T> inverse(
		detail::tmat3x3<T> const & m);

	//! Return the inverse of a mat4 matrix. 
    //!
    //! \li <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/inverse.xml">GLSL inverse man page</a>
    //! \li GLSL 1.40.07 specification, section 8.5
	template <typename T> 
	detail::tmat4x4<T> inverse(
		detail::tmat4x4<T> const & m);

	/// @}
}//namespace glm

#include "func_matrix.inl"

#endif//glm_core_func_matrix
