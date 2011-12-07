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
/// @ref gtc_half_float
/// @file glm/gtc/half_float.hpp
/// @date 2009-04-29 / 2011-06-05
/// @author Christophe Riccio
///
/// @see core (dependence)
///
/// @defgroup gtc_half_float GLM_GTC_half_float: Half-precision floating-point based types and functions
/// @ingroup gtc
/// 
/// Defines the half-precision floating-point type, along with various typedefs for vectors and matrices.
/// <glm/gtc/half_float.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#ifndef GLM_GTC_half_float
#define GLM_GTC_half_float GLM_VERSION

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTC_half_float extension included")
#endif

namespace glm{
namespace detail
{
#if(!GLM_SUPPORT_ANONYMOUS_UNION_OF_STRUCTURE())
	template <>
	struct tvec2<thalf>
	{
		enum ctor{null};
		typedef thalf value_type;
		typedef std::size_t size_type;

        GLM_FUNC_DECL size_type length() const;
		static GLM_FUNC_DECL size_type value_size();

		typedef tvec2<thalf> type;
		typedef tvec2<bool> bool_type;

		//////////////////////////////////////
		// Data

		thalf x, y;

		//////////////////////////////////////
		// Accesses

		thalf & operator[](size_type i);
		thalf const & operator[](size_type i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		tvec2();
		tvec2(tvec2<thalf> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		explicit tvec2(ctor);
		explicit tvec2(
			thalf const & s);
		explicit tvec2(
			thalf const & s1, 
			thalf const & s2);

		//////////////////////////////////////
		// Swizzle constructors

		tvec2(tref2<thalf> const & r);

		//////////////////////////////////////
		// Convertion scalar constructors

		//! Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec2(U const & x);
		//! Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, typename V> 
		explicit tvec2(U const & x, V const & y);			

		//////////////////////////////////////
		// Convertion vector constructors

		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec2(tvec2<U> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec2(tvec3<U> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec2(tvec4<U> const & v);

		//////////////////////////////////////
		// Unary arithmetic operators

		tvec2<thalf>& operator= (tvec2<thalf> const & v);

		tvec2<thalf>& operator+=(thalf const & s);
		tvec2<thalf>& operator+=(tvec2<thalf> const & v);
		tvec2<thalf>& operator-=(thalf const & s);
		tvec2<thalf>& operator-=(tvec2<thalf> const & v);
		tvec2<thalf>& operator*=(thalf const & s);
		tvec2<thalf>& operator*=(tvec2<thalf> const & v);
		tvec2<thalf>& operator/=(thalf const & s);
		tvec2<thalf>& operator/=(tvec2<thalf> const & v);
		tvec2<thalf>& operator++();
		tvec2<thalf>& operator--();

		//////////////////////////////////////
		// Swizzle operators

		thalf swizzle(comp X) const;
		tvec2<thalf> swizzle(comp X, comp Y) const;
		tvec3<thalf> swizzle(comp X, comp Y, comp Z) const;
		tvec4<thalf> swizzle(comp X, comp Y, comp Z, comp W) const;
		tref2<thalf> swizzle(comp X, comp Y);
	};

	template <>
	struct tvec3<thalf>
	{
		enum ctor{null};
		typedef thalf value_type;
		typedef std::size_t size_type;
        GLM_FUNC_DECL size_type length() const;
		static GLM_FUNC_DECL size_type value_size();

		typedef tvec3<thalf> type;
		typedef tvec3<bool> bool_type;

		//////////////////////////////////////
		// Data

		thalf x, y, z;

		//////////////////////////////////////
		// Accesses

		thalf & operator[](size_type i);
		thalf const & operator[](size_type i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		tvec3();
		tvec3(tvec3<thalf> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		explicit tvec3(ctor);
		explicit tvec3(
			thalf const & s);
		explicit tvec3(
			thalf const & s1, 
			thalf const & s2, 
			thalf const & s3);

		//////////////////////////////////////
		// Swizzle constructors

		tvec3(tref3<thalf> const & r);

		//////////////////////////////////////
		// Convertion scalar constructors

		//! Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec3(U const & x);
		//! Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, typename V, typename W> 
		explicit tvec3(U const & x, V const & y, W const & z);			

		//////////////////////////////////////
		// Convertion vector constructors

		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec3(tvec2<A> const & v, B const & s);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec3(A const & s, tvec2<B> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec3(tvec3<U> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec3(tvec4<U> const & v);

		//////////////////////////////////////
		// Unary arithmetic operators

		tvec3<thalf>& operator= (tvec3<thalf> const & v);

		tvec3<thalf>& operator+=(thalf const & s);
		tvec3<thalf>& operator+=(tvec3<thalf> const & v);
		tvec3<thalf>& operator-=(thalf const & s);
		tvec3<thalf>& operator-=(tvec3<thalf> const & v);
		tvec3<thalf>& operator*=(thalf const & s);
		tvec3<thalf>& operator*=(tvec3<thalf> const & v);
		tvec3<thalf>& operator/=(thalf const & s);
		tvec3<thalf>& operator/=(tvec3<thalf> const & v);
		tvec3<thalf>& operator++();
		tvec3<thalf>& operator--();

		//////////////////////////////////////
		// Swizzle operators

		thalf swizzle(comp X) const;
		tvec2<thalf> swizzle(comp X, comp Y) const;
		tvec3<thalf> swizzle(comp X, comp Y, comp Z) const;
		tvec4<thalf> swizzle(comp X, comp Y, comp Z, comp W) const;
		tref3<thalf> swizzle(comp X, comp Y, comp Z);
	};

	template <>
	struct tvec4<thalf>
	{
		enum ctor{null};
		typedef thalf value_type;
		typedef std::size_t size_type;
        GLM_FUNC_DECL size_type length() const;
		static GLM_FUNC_DECL size_type value_size();

		typedef tvec4<thalf> type;
		typedef tvec4<bool> bool_type;

		//////////////////////////////////////
		// Data

		thalf x, y, z, w;

		//////////////////////////////////////
		// Accesses

		thalf & operator[](size_type i);
		thalf const & operator[](size_type i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		tvec4();
		tvec4(tvec4<thalf> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		explicit tvec4(ctor);
		explicit tvec4(
			thalf const & s);
		explicit tvec4(
			thalf const & s0, 
			thalf const & s1, 
			thalf const & s2, 
			thalf const & s3);

		//////////////////////////////////////
		// Swizzle constructors

		tvec4(tref4<thalf> const & r);

		//////////////////////////////////////
		// Convertion scalar constructors

		//! Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec4(U const & x);
		//! Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C, typename D> 
		explicit tvec4(A const & x, B const & y, C const & z, D const & w);			

		//////////////////////////////////////
		// Convertion vector constructors

		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C> 
		explicit tvec4(tvec2<A> const & v, B const & s1, C const & s2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C> 
		explicit tvec4(A const & s1, tvec2<B> const & v, C const & s2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C> 
		explicit tvec4(A const & s1, B const & s2, tvec2<C> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec4(tvec3<A> const & v, B const & s);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec4(A const & s, tvec3<B> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec4(tvec2<A> const & v1, tvec2<B> const & v2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec4(tvec4<U> const & v);

		//////////////////////////////////////
		// Unary arithmetic operators

		tvec4<thalf>& operator= (tvec4<thalf> const & v);

		tvec4<thalf>& operator+=(thalf const & s);
		tvec4<thalf>& operator+=(tvec4<thalf> const & v);
		tvec4<thalf>& operator-=(thalf const & s);
		tvec4<thalf>& operator-=(tvec4<thalf> const & v);
		tvec4<thalf>& operator*=(thalf const & s);
		tvec4<thalf>& operator*=(tvec4<thalf> const & v);
		tvec4<thalf>& operator/=(thalf const & s);
		tvec4<thalf>& operator/=(tvec4<thalf> const & v);
		tvec4<thalf>& operator++();
		tvec4<thalf>& operator--();

		//////////////////////////////////////
		// Swizzle operators

		thalf swizzle(comp X) const;
		tvec2<thalf> swizzle(comp X, comp Y) const;
		tvec3<thalf> swizzle(comp X, comp Y, comp Z) const;
		tvec4<thalf> swizzle(comp X, comp Y, comp Z, comp W) const;
		tref4<thalf> swizzle(comp X, comp Y, comp Z, comp W);
	};
#endif//(!GLM_SUPPORT_ANONYMOUS_UNION_OF_STRUCTURE())
}
//namespace detail

	/// @addtogroup gtc_half_float
	/// @{

	/// Type for half-precision floating-point numbers. 
	/// @see gtc_half_float
	typedef detail::thalf					half;

	/// Vector of 2 half-precision floating-point numbers. 
	/// @see gtc_half_float
	typedef detail::tvec2<detail::thalf>	hvec2;

	/// Vector of 3 half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec3<detail::thalf>	hvec3;

	/// Vector of 4 half-precision floating-point numbers. 
	/// @see gtc_half_float
	typedef detail::tvec4<detail::thalf>	hvec4;

	/// 2 * 2 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x2<detail::thalf>	hmat2;
    
	/// 3 * 3 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x3<detail::thalf>	hmat3;

	/// 4 * 4 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x4<detail::thalf>	hmat4;

	/// 2 * 2 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x2<detail::thalf>	hmat2x2;
    
	/// 2 * 3 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x3<detail::thalf>	hmat2x3;
    
	/// 2 * 4 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x4<detail::thalf>	hmat2x4;

	/// 3 * 2 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x2<detail::thalf>	hmat3x2;
    
	/// 3 * 3 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x3<detail::thalf>	hmat3x3;
    
	/// 3 * 4 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x4<detail::thalf>	hmat3x4;

	/// 4 * 2 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x2<detail::thalf>	hmat4x2;    

	/// 4 * 3 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x3<detail::thalf>	hmat4x3;
    
	/// 4 * 4 matrix of half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x4<detail::thalf>	hmat4x4;
    
	/// @}
}// namespace glm

#include "half_float.inl"

#endif//GLM_GTC_half_float
