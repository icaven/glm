///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
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
/// @date 2009-04-29 / 2012-11-06
/// @author Christophe Riccio
///
/// @see core (dependence)
///
/// @defgroup gtc_half_float GLM_GTC_half_float
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
#if(GLM_COMPONENT == GLM_COMPONENT_CXX98)
	template <>
	struct tvec2<half, defaultp>
	{
		enum ctor{null};
		typedef half value_type;
		typedef std::size_t size_type;

		GLM_FUNC_DECL size_type length() const;
		static GLM_FUNC_DECL size_type value_size();

		typedef tvec2<half, defaultp> type;
		typedef tvec2<bool, defaultp> bool_type;

		//////////////////////////////////////
		// Data

		half x, y;

		//////////////////////////////////////
		// Accesses

		half & operator[](size_type i);
		half const & operator[](size_type i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		tvec2();
		tvec2(tvec2<half, defaultp> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		explicit tvec2(ctor);
		explicit tvec2(
			half const & s);
		explicit tvec2(
			half const & s1,
			half const & s2);

		//////////////////////////////////////
		// Swizzle constructors

		tvec2(tref2<half, defaultp> const & r);

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
		explicit tvec2(tvec2<U, defaultp> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec2(tvec3<U, defaultp> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec2(tvec4<U, defaultp> const & v);

		//////////////////////////////////////
		// Unary arithmetic operators

		tvec2<half, defaultp>& operator= (tvec2<half, defaultp> const & v);

		tvec2<half, defaultp>& operator+=(half const & s);
		tvec2<half, defaultp>& operator+=(tvec2<half, defaultp> const & v);
		tvec2<half, defaultp>& operator-=(half const & s);
		tvec2<half, defaultp>& operator-=(tvec2<half, defaultp> const & v);
		tvec2<half, defaultp>& operator*=(half const & s);
		tvec2<half, defaultp>& operator*=(tvec2<half, defaultp> const & v);
		tvec2<half, defaultp>& operator/=(half const & s);
		tvec2<half, defaultp>& operator/=(tvec2<half, defaultp> const & v);
		tvec2<half, defaultp>& operator++();
		tvec2<half, defaultp>& operator--();

		//////////////////////////////////////
		// Swizzle operators

		half swizzle(comp X) const;
		tvec2<half, defaultp> swizzle(comp X, comp Y) const;
		tvec3<half, defaultp> swizzle(comp X, comp Y, comp Z) const;
		tvec4<half, defaultp> swizzle(comp X, comp Y, comp Z, comp W) const;
		tref2<half, defaultp> swizzle(comp X, comp Y);
	};

	template <>
	struct tvec3<half, defaultp>
	{
		enum ctor{null};
		typedef half value_type;
		typedef std::size_t size_type;
		GLM_FUNC_DECL size_type length() const;
		static GLM_FUNC_DECL size_type value_size();

		typedef tvec3<half, defaultp> type;
		typedef tvec3<bool, defaultp> bool_type;

		//////////////////////////////////////
		// Data

		half x, y, z;

		//////////////////////////////////////
		// Accesses

		half & operator[](size_type i);
		half const & operator[](size_type i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		tvec3();
		tvec3(tvec3<half, defaultp> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		explicit tvec3(ctor);
		explicit tvec3(
			half const & s);
		explicit tvec3(
			half const & s1,
			half const & s2,
			half const & s3);

		//////////////////////////////////////
		// Swizzle constructors

		tvec3(tref3<half, defaultp> const & r);

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
		explicit tvec3(tvec2<A, defaultp> const & v, B const & s);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec3(A const & s, tvec2<B, defaultp> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec3(tvec3<U, defaultp> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec3(tvec4<U, defaultp> const & v);

		//////////////////////////////////////
		// Unary arithmetic operators

		tvec3<half, defaultp>& operator= (tvec3<half, defaultp> const & v);

		tvec3<half, defaultp>& operator+=(half const & s);
		tvec3<half, defaultp>& operator+=(tvec3<half, defaultp> const & v);
		tvec3<half, defaultp>& operator-=(half const & s);
		tvec3<half, defaultp>& operator-=(tvec3<half, defaultp> const & v);
		tvec3<half, defaultp>& operator*=(half const & s);
		tvec3<half, defaultp>& operator*=(tvec3<half, defaultp> const & v);
		tvec3<half, defaultp>& operator/=(half const & s);
		tvec3<half, defaultp>& operator/=(tvec3<half, defaultp> const & v);
		tvec3<half, defaultp>& operator++();
		tvec3<half, defaultp>& operator--();

		//////////////////////////////////////
		// Swizzle operators

		half swizzle(comp X) const;
		tvec2<half, defaultp> swizzle(comp X, comp Y) const;
		tvec3<half, defaultp> swizzle(comp X, comp Y, comp Z) const;
		tvec4<half, defaultp> swizzle(comp X, comp Y, comp Z, comp W) const;
		tref3<half, defaultp> swizzle(comp X, comp Y, comp Z);
	};

	template <>
	struct tvec4<half, defaultp>
	{
		enum ctor{null};
		typedef half value_type;
		typedef std::size_t size_type;
		GLM_FUNC_DECL size_type length() const;
		static GLM_FUNC_DECL size_type value_size();

		typedef tvec4<half, defaultp> type;
		typedef tvec4<bool, defaultp> bool_type;

		//////////////////////////////////////
		// Data

		half x, y, z, w;

		//////////////////////////////////////
		// Accesses

		half & operator[](size_type i);
		half const & operator[](size_type i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		tvec4();
		tvec4(tvec4<half, defaultp> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		explicit tvec4(ctor);
		explicit tvec4(
			half const & s);
		explicit tvec4(
			half const & s0,
			half const & s1,
			half const & s2,
			half const & s3);

		//////////////////////////////////////
		// Swizzle constructors

		tvec4(tref4<half, defaultp> const & r);

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
		explicit tvec4(tvec2<A, defaultp> const & v, B const & s1, C const & s2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C> 
		explicit tvec4(A const & s1, tvec2<B, defaultp> const & v, C const & s2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C> 
		explicit tvec4(A const & s1, B const & s2, tvec2<C, defaultp> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec4(tvec3<A, defaultp> const & v, B const & s);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec4(A const & s, tvec3<B, defaultp> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		explicit tvec4(tvec2<A, defaultp> const & v1, tvec2<B, defaultp> const & v2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U> 
		explicit tvec4(tvec4<U, defaultp> const & v);

		//////////////////////////////////////
		// Unary arithmetic operators

		tvec4<half, defaultp>& operator= (tvec4<half, defaultp> const & v);

		tvec4<half, defaultp>& operator+=(half const & s);
		tvec4<half, defaultp>& operator+=(tvec4<half, defaultp> const & v);
		tvec4<half, defaultp>& operator-=(half const & s);
		tvec4<half, defaultp>& operator-=(tvec4<half, defaultp> const & v);
		tvec4<half, defaultp>& operator*=(half const & s);
		tvec4<half, defaultp>& operator*=(tvec4<half, defaultp> const & v);
		tvec4<half, defaultp>& operator/=(half const & s);
		tvec4<half, defaultp>& operator/=(tvec4<half, defaultp> const & v);
		tvec4<half, defaultp>& operator++();
		tvec4<half, defaultp>& operator--();

		//////////////////////////////////////
		// Swizzle operators

		half swizzle(comp X) const;
		tvec2<half, defaultp> swizzle(comp X, comp Y) const;
		tvec3<half, defaultp> swizzle(comp X, comp Y, comp Z) const;
		tvec4<half, defaultp> swizzle(comp X, comp Y, comp Z, comp W) const;
		tref4<half, defaultp> swizzle(comp X, comp Y, comp Z, comp W);
	};
#endif//(GLM_COMPONENT == GLM_COMPONENT_CXX98)
}
//namespace detail

	/// @addtogroup gtc_half_float
	/// @{
	
	//////////////////////////////////////////////
	// High half precision floating-point numbers.
	
	/// Vector of 2 high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec2<half_t, highp>		highp_hvec2;
	
	/// Vector of 3 high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec3<half_t, highp>		highp_hvec3;
	
	/// Vector of 4 high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec4<half_t, highp>		highp_hvec4;
	
	/// 2 * 2 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x2<half_t, highp>		highp_hmat2;
	
	/// 3 * 3 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x3<half_t, highp>		highp_hmat3;
	
	/// 4 * 4 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x4<half_t, highp>		highp_hmat4;
	
	/// 2 * 2 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x2<half_t, highp>		highp_hmat2x2;
	
	/// 2 * 3 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x3<half_t, highp>		highp_hmat2x3;
	
	/// 2 * 4 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x4<half_t, highp>		highp_hmat2x4;
	
	/// 3 * 2 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x2<half_t, highp>		highp_hmat3x2;
	
	/// 3 * 3 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x3<half_t, highp>		highp_hmat3x3;
	
	/// 3 * 4 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x4<half_t, highp>		highp_hmat3x4;
	
	/// 4 * 2 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x2<half_t, highp>		highp_hmat4x2;
	
	/// 4 * 3 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x3<half_t, highp>		highp_hmat4x3;
	
	/// 4 * 4 matrix of high half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x4<half_t, highp>		highp_hmat4x4;
	
	//////////////////////////////////////////////
	// Medium half precision floating-point numbers.
	
	/// Vector of 2 medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec2<half_t, mediump>		mediump_hvec2;
	
	/// Vector of 3 medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec3<half_t, mediump>		mediump_hvec3;
	
	/// Vector of 4 medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec4<half_t, mediump>		mediump_hvec4;
	
	/// 2 * 2 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x2<half_t, mediump>	mediump_hmat2;
	
	/// 3 * 3 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x3<half_t, mediump>	mediump_hmat3;
	
	/// 4 * 4 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x4<half_t, mediump>	mediump_hmat4;
	
	/// 2 * 2 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x2<half_t, mediump>	mediump_hmat2x2;
	
	/// 2 * 3 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x3<half_t, mediump>	mediump_hmat2x3;
	
	/// 2 * 4 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x4<half_t, mediump>	mediump_hmat2x4;
	
	/// 3 * 2 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x2<half_t, mediump>	mediump_hmat3x2;
	
	/// 3 * 3 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x3<half_t, mediump>	mediump_hmat3x3;
	
	/// 3 * 4 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x4<half_t, mediump>	mediump_hmat3x4;
	
	/// 4 * 2 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x2<half_t, mediump>	mediump_hmat4x2;
	
	/// 4 * 3 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x3<half_t, mediump>	mediump_hmat4x3;
	
	/// 4 * 4 matrix of medium half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x4<half_t, mediump>	mediump_hmat4x4;
	
	
	//////////////////////////////////////////////
	// Low half precision floating-point numbers.
	
	/// Vector of 2 low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec2<half_t, lowp>		lowp_hvec2;
	
	/// Vector of 3 low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec3<half_t, lowp>		lowp_hvec3;
	
	/// Vector of 4 low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tvec4<half_t, lowp>		lowp_hvec4;
	
	/// 2 * 2 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x2<half_t, lowp>	lowp_hmat2;
	
	/// 3 * 3 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x3<half_t, lowp>	lowp_hmat3;
	
	/// 4 * 4 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x4<half_t, lowp>	lowp_hmat4;
	
	/// 2 * 2 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x2<half_t, lowp>	lowp_hmat2x2;
	
	/// 2 * 3 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x3<half_t, lowp>	lowp_hmat2x3;
	
	/// 2 * 4 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat2x4<half_t, lowp>	lowp_hmat2x4;
	
	/// 3 * 2 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x2<half_t, lowp>	lowp_hmat3x2;
	
	/// 3 * 3 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x3<half_t, lowp>	lowp_hmat3x3;
	
	/// 3 * 4 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat3x4<half_t, lowp>	lowp_hmat3x4;
	
	/// 4 * 2 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x2<half_t, lowp>	lowp_hmat4x2;
	
	/// 4 * 3 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x3<half_t, lowp>	lowp_hmat4x3;
	
	/// 4 * 4 matrix of low half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef detail::tmat4x4<half_t, lowp>	lowp_hmat4x4;
	
	
	//////////////////////////////////////////////
	// Default half precision floating-point numbers.
	
	/// Type for default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef half_t					half;
	
#if(!defined(GLM_PRECISION_HIGHP_HALF) && !defined(GLM_PRECISION_MEDIUMP_HALF) && !defined(GLM_PRECISION_LOWP_HALF))
	//////////////////////////////////////////////
	// Default half precision floating-point numbers.
	
	/// Vector of 2 default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hvec2		hvec2;
	
	/// Vector of 3 default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hvec3		hvec3;
	
	/// Vector of 4 default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hvec4		hvec4;
	
	/// 2 * 2 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat2x2		hmat2;
	
	/// 3 * 3 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat3x3		hmat3;
	
	/// 4 * 4 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat4x4		hmat4;
	
	/// 2 * 2 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat2x2		hmat2x2;
	
	/// 2 * 3 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat2x3		hmat2x3;
	
	/// 2 * 4 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat2x4		hmat2x4;
	
	/// 3 * 2 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat3x2		hmat3x2;
	
	/// 3 * 3 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat3x3		hmat3x3;
	
	/// 3 * 4 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat3x4		hmat3x4;
	
	/// 4 * 2 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat4x2		hmat4x2;
	
	/// 4 * 3 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat4x3		hmat4x3;
	
	/// 4 * 4 matrix of default half-precision floating-point numbers.
	/// @see gtc_half_float
	typedef mediump_hmat4x4		hmat4x4;
	
#elif(defined(GLM_PRECISION_HIGHP_HALF) && !defined(GLM_PRECISION_MEDIUMP_HALF) && !defined(GLM_PRECISION_LOWP_HALF))
	typedef detail::tvec2<half_t, highp>		hvec2;
	typedef detail::tvec3<half_t, highp>		hvec3;
	typedef detail::tvec4<half_t, highp>		hvec4;
	typedef detail::tmat2x2<half_t, highp>		hmat2;
	typedef detail::tmat3x3<half_t, highp>		hmat3;
	typedef detail::tmat4x4<half_t, highp>		hmat4;
	typedef detail::tmat2x2<half_t, highp>		hmat2x2;
	typedef detail::tmat2x3<half_t, highp>		hmat2x3;
	typedef detail::tmat2x4<half_t, highp>		hmat2x4;
	typedef detail::tmat3x2<half_t, highp>		hmat3x2;
	typedef detail::tmat3x3<half_t, highp>		hmat3x3;
	typedef detail::tmat3x4<half_t, highp>		hmat3x4;
	typedef detail::tmat4x2<half_t, highp>		hmat4x2;
	typedef detail::tmat4x3<half_t, highp>		hmat4x3;
	typedef detail::tmat4x4<half_t, highp>		hmat4x4;
	
#elif(!defined(GLM_PRECISION_HIGHP_HALF) && defined(GLM_PRECISION_MEDIUMP_HALF) && !defined(GLM_PRECISION_LOWP_HALF))
	typedef detail::tvec2<half_t, mediump>		hvec2;
	typedef detail::tvec3<half_t, mediump>		hvec3;
	typedef detail::tvec4<half_t, mediump>		hvec4;
	typedef detail::tmat2x2<half_t, mediump>	hmat2;
	typedef detail::tmat3x3<half_t, mediump>	hmat3;
	typedef detail::tmat4x4<half_t, mediump>	hmat4;
	typedef detail::tmat2x2<half_t, mediump>	hmat2x2;
	typedef detail::tmat2x3<half_t, mediump>	hmat2x3;
	typedef detail::tmat2x4<half_t, mediump>	hmat2x4;
	typedef detail::tmat3x2<half_t, mediump>	hmat3x2;
	typedef detail::tmat3x3<half_t, mediump>	hmat3x3;
	typedef detail::tmat3x4<half_t, mediump>	hmat3x4;
	typedef detail::tmat4x2<half_t, mediump>	hmat4x2;
	typedef detail::tmat4x3<half_t, mediump>	hmat4x3;
	typedef detail::tmat4x4<half_t, mediump>	hmat4x4;
	
#elif(!defined(GLM_PRECISION_HIGHP_HALF) && !defined(GLM_PRECISION_MEDIUMP_HALF) && defined(GLM_PRECISION_LOWP_HALF))	
	typedef detail::tvec2<half_t, lowp>			hvec2;
	typedef detail::tvec3<half_t, lowp>			hvec3;
	typedef detail::tvec4<half_t, lowp>			hvec4;
	typedef detail::tmat2x2<half_t, lowp>		hmat2;
	typedef detail::tmat3x3<half_t, lowp>		hmat3;
	typedef detail::tmat4x4<half_t, lowp>		hmat4;
	typedef detail::tmat2x2<half_t, lowp>		hmat2x2;
	typedef detail::tmat2x3<half_t, lowp>		hmat2x3;
	typedef detail::tmat2x4<half_t, lowp>		hmat2x4;
	typedef detail::tmat3x2<half_t, lowp>		hmat3x2;
	typedef detail::tmat3x3<half_t, lowp>		hmat3x3;
	typedef detail::tmat3x4<half_t, lowp>		hmat3x4;
	typedef detail::tmat4x2<half_t, lowp>		hmat4x2;
	typedef detail::tmat4x3<half_t, lowp>		hmat4x3;
	typedef detail::tmat4x4<half_t, lowp>		hmat4x4;
#endif
	
	/// Returns the absolute value of a half-precision floating-point value
	/// @see gtc_half_float
	half abs(half const & x);

	/// Returns the absolute value of a half-precision floating-point two dimensional vector
	/// @see gtc_half_float
	hvec2 abs(hvec2 const & x);

	/// Returns the absolute value of a half-precision floating-point three dimensional vector
	/// @see gtc_half_float
	hvec3 abs(hvec3 const & x);

	/// Returns the absolute value of a half-precision floating-point four dimensional vector
	/// @see gtc_half_float
	hvec4 abs(hvec4 const & x);

	/// Selects which vector each returned component comes
	/// from. For a component of <a> that is false, the
	/// corresponding component of x is returned. For a
	/// component of a that is true, the corresponding
	/// component of y is returned. Components of x and y that
	/// are not selected are allowed to be invalid floating point
	/// values and will have no effect on the results. Thus, this
	/// provides different functionality than
	/// genType mix(genType x, genType y, genType(a))
	/// where a is a Boolean vector.
	///
	/// @see gtc_half_float
	half mix(half const & x, half const & y, bool const & a);

	/// @}
}// namespace glm

#include "half_float.inl"

#endif//GLM_GTC_half_float
