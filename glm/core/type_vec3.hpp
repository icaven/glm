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
/// @ref core
/// @file glm/core/type_vec3.hpp
/// @date 2008-08-22 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#ifndef glm_core_type_gentype3
#define glm_core_type_gentype3

#include "../fwd.hpp"
#include "type_vec.hpp"
#include "_swizzle.hpp"

namespace glm{
namespace detail
{
	template <typename T, precision P>
	struct tvec3
	{	
		enum ctor{_null};

		typedef T value_type;
		typedef std::size_t size_type;
		typedef tvec3<T, P> type;
		typedef tvec3<bool, P> bool_type;

		GLM_FUNC_DECL GLM_CONSTEXPR size_type length() const;

		//////////////////////////////////////
		// Data

#		if((GLM_LANG & GLM_LANG_CXXMS_FLAG) && defined(GLM_SWIZZLE))
			union
			{
				struct{ value_type x, y, z; };
				struct{ value_type r, g, b; };
				struct{ value_type s, t, p; };

				_GLM_SWIZZLE3_2_MEMBERS(T, P, tvec2, x, y, z)
				_GLM_SWIZZLE3_2_MEMBERS(T, P, tvec2, r, g, b)
				_GLM_SWIZZLE3_2_MEMBERS(T, P, tvec2, s, t, p)
				_GLM_SWIZZLE3_3_MEMBERS(T, P, tvec3, x, y, z)
				_GLM_SWIZZLE3_3_MEMBERS(T, P, tvec3, r, g, b)
				_GLM_SWIZZLE3_3_MEMBERS(T, P, tvec3, s, t, p)
				_GLM_SWIZZLE3_4_MEMBERS(T, P, tvec4, x, y, z)
				_GLM_SWIZZLE3_4_MEMBERS(T, P, tvec4, r, g, b)
				_GLM_SWIZZLE3_4_MEMBERS(T, P, tvec4, s, t, p)
			};
#		else
			union { value_type x, r, s; };
			union { value_type y, g, t; };
			union { value_type z, b, p; };

#			if(defined(GLM_SWIZZLE))
				//GLM_SWIZZLE_GEN_REF_FROM_VEC3(T, P, detail::tvec3, detail::tref2, detail::tref3)
				GLM_SWIZZLE_GEN_VEC_FROM_VEC3(T, P, detail::tvec3, detail::tvec2, detail::tvec3, detail::tvec4)
#			endif//(defined(GLM_SWIZZLE))
#		endif//GLM_LANG

		//////////////////////////////////////
		// Accesses

		GLM_FUNC_DECL value_type & operator[](size_type i);
		GLM_FUNC_DECL T const & operator[](size_type i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		GLM_FUNC_DECL tvec3();
		GLM_FUNC_DECL tvec3(tvec3<T, P> const & v);
		template <precision Q>
		GLM_FUNC_DECL tvec3(tvec3<T, Q> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		GLM_FUNC_DECL explicit tvec3(
			ctor);
		GLM_FUNC_DECL explicit tvec3(
			T const & s);
		GLM_FUNC_DECL explicit tvec3(
			T const & s1,
			T const & s2,
			T const & s3);

		//////////////////////////////////////
		// Conversion scalar constructors

		//! Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U>
		GLM_FUNC_DECL explicit tvec3(
			U const & x);
		//! Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, typename V, typename W>
		GLM_FUNC_DECL explicit tvec3(
			U const & x,
			V const & y,
			W const & z);			

		//////////////////////////////////////
		// Conversion vector constructors

		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL explicit tvec3(tvec2<A, Q> const & v, B const & s);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL explicit tvec3(A const & s, tvec2<B, Q> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL explicit tvec3(tvec3<U, Q> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL explicit tvec3(tvec4<U, Q> const & v);

		//////////////////////////////////////
		// Swizzle constructors

		GLM_FUNC_DECL tvec3(tref3<T, P> const & r);

		template <typename A, typename B> 
		GLM_FUNC_DECL explicit tvec3(tref2<A, P> const & v, B const & s);

		template <typename A, typename B> 
		GLM_FUNC_DECL explicit tvec3(A const & s, tref2<B, P> const & v);

		template <int E0, int E1, int E2>
		GLM_FUNC_DECL tvec3(_swizzle<3, T, P, tvec3<T, P>, E0, E1, E2, -1> const & that)
		{
			*this = that();
		}

		template <int E0, int E1>
		GLM_FUNC_DECL tvec3(_swizzle<2, T, P, tvec2<T, P>, E0, E1, -1, -2> const & v, T const & s)
		{
			*this = tvec3<T, P>(v(), s);
		}

		template <int E0, int E1>
		GLM_FUNC_DECL tvec3(T const & s, _swizzle<2, T, P, tvec2<T, P>, E0, E1, -1, -2> const & v)
		{
			*this = tvec3<T, P>(s, v());
		}

		//////////////////////////////////////
		// Unary arithmetic operators

		GLM_FUNC_DECL tvec3<T, P> & operator= (tvec3<T, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator= (tvec3<U, P> const & v);

		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator+=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator+=(tvec3<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator-=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator-=(tvec3<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator*=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator*=(tvec3<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator/=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec3<T, P> & operator/=(tvec3<U, P> const & v);

		//////////////////////////////////////
		// Increment and decrement operators

		GLM_FUNC_DECL tvec3<T, P> & operator++();
		GLM_FUNC_DECL tvec3<T, P> & operator--();
		GLM_FUNC_DECL tvec3<T, P> operator++(int);
		GLM_FUNC_DECL tvec3<T, P> operator--(int);

		//////////////////////////////////////
		// Unary bit operators

		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator%= (U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator%= (tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator&= (U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator&= (tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator|= (U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator|= (tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator^= (U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator^= (tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator<<=(U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator<<=(tvec3<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator>>=(U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec3<T, P> & operator>>=(tvec3<U, P> const & v);

		//////////////////////////////////////
		// Swizzle operators

		GLM_FUNC_DECL value_type swizzle(comp X) const;
		GLM_FUNC_DECL tvec2<T, P> swizzle(comp X, comp Y) const;
		GLM_FUNC_DECL tvec3<T, P> swizzle(comp X, comp Y, comp Z) const;
		GLM_FUNC_DECL tvec4<T, P> swizzle(comp X, comp Y, comp Z, comp W) const;
		GLM_FUNC_DECL tref2<T, P> swizzle(comp X, comp Y);
		GLM_FUNC_DECL tref3<T, P> swizzle(comp X, comp Y, comp Z);
	};

	template <typename T, precision P>
	struct tref3
	{
		GLM_FUNC_DECL tref3(T & x, T & y, T & z);
		GLM_FUNC_DECL tref3(tref3<T, P> const & r);
		GLM_FUNC_DECL explicit tref3(tvec3<T, P> const & v);
		GLM_FUNC_DECL tref3<T, P> & operator= (tref3<T, P> const & r);
		GLM_FUNC_DECL tref3<T, P> & operator= (tvec3<T, P> const & v);
		GLM_FUNC_DECL tvec3<T, P> operator() ();

		T & x;
		T & y;
		T & z;
	};

	GLM_DETAIL_IS_VECTOR(tvec3);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator+(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(tvec3<T, P> const & v, 	T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-	(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator*(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator/(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator/(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator/(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator-(tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator%(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator%(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator%(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator&(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator&(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator&(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator|(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator|(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator|(tvec3<T, P> const & v1, tvec3<T, P> const & v2);
		
	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator^(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator^(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator^(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator<<(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator<<(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator<<(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator>>(tvec3<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator>>(T const & s, tvec3<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec3<T, P> operator>>(tvec3<T, P> const & v1, tvec3<T, P> const & v2);

	template <typename T, precision P> 
	GLM_FUNC_DECL tvec3<T, P> operator~(tvec3<T, P> const & v);

}//namespace detail
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_vec3.inl"
#endif//GLM_EXTERNAL_TEMPLATE

#endif//glm_core_type_gentype3
