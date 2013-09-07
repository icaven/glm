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
/// @file glm/core/type_vec4.hpp
/// @date 2008-08-22 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#ifndef glm_core_type_gentype4
#define glm_core_type_gentype4

#include "../fwd.hpp"
#include "type_vec.hpp"
#include "_swizzle.hpp"

namespace glm{
namespace detail
{
	template <typename T, precision P>
	struct tvec4
	{
		enum ctor{_null};

		typedef T value_type;
		typedef std::size_t size_type;
		typedef tvec4<T, P> type;
		typedef tvec4<bool, P> bool_type;

		GLM_FUNC_DECL GLM_CONSTEXPR size_type length() const;

		//////////////////////////////////////
		// Data

#		if((GLM_LANG & GLM_LANG_CXXMS_FLAG) && defined(GLM_SWIZZLE))
			union
			{
				struct { value_type r, g, b, a; };
				struct { value_type s, t, p, q; };
				struct { value_type x, y, z, w;};

				_GLM_SWIZZLE4_2_MEMBERS(T, P, tvec2, x, y, z, w)
				_GLM_SWIZZLE4_2_MEMBERS(T, P, tvec2, r, g, b, a)
				_GLM_SWIZZLE4_2_MEMBERS(T, P, tvec2, s, t, p, q)
				_GLM_SWIZZLE4_3_MEMBERS(T, P, tvec3, x, y, z, w)
				_GLM_SWIZZLE4_3_MEMBERS(T, P, tvec3, r, g, b, a)
				_GLM_SWIZZLE4_3_MEMBERS(T, P, tvec3, s, t, p, q)
				_GLM_SWIZZLE4_4_MEMBERS(T, P, tvec4, x, y, z, w)
				_GLM_SWIZZLE4_4_MEMBERS(T, P, tvec4, r, g, b, a)
				_GLM_SWIZZLE4_4_MEMBERS(T, P, tvec4, s, t, p, q)
			};
#		else
			union { value_type x, r, s; };
			union { value_type y, g, t; };
			union { value_type z, b, p; };
			union { value_type w, a, q; };

#			if(defined(GLM_SWIZZLE))
				//GLM_SWIZZLE_GEN_REF_FROM_VEC4(T, P, detail::tvec4, detail::tref2, detail::tref3, detail::tref4)
				GLM_SWIZZLE_GEN_VEC_FROM_VEC4(T, P, detail::tvec4, detail::tvec2, detail::tvec3, detail::tvec4)
#			endif//(defined(GLM_SWIZZLE))
#		endif//GLM_LANG

		//////////////////////////////////////
		// Accesses

		GLM_FUNC_DECL value_type & operator[](size_type i);
		GLM_FUNC_DECL T const & operator[](size_type i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		GLM_FUNC_DECL tvec4();
		GLM_FUNC_DECL tvec4(type const & v);
		template <precision Q>
		GLM_FUNC_DECL tvec4(tvec4<T, Q> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		GLM_FUNC_DECL explicit tvec4(
			ctor);
		GLM_FUNC_DECL explicit tvec4(
			T const & s);
		GLM_FUNC_DECL explicit tvec4(
			T const & s0,
			T const & s1,
			T const & s2,
			T const & s3);

		//////////////////////////////////////
		// Conversion scalar constructors

		/// Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U>
		GLM_FUNC_DECL explicit tvec4(
			U const & x);
		/// Explicit converions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C, typename D>
		GLM_FUNC_DECL explicit tvec4(
			A const & x,
			B const & y,
			C const & z,
			D const & w);

		//////////////////////////////////////
		// Conversion vector constructors

		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL explicit tvec4(tvec2<A, Q> const & v, B const & s1, C const & s2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL explicit tvec4(A const & s1, tvec2<B, Q> const & v, C const & s2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL explicit tvec4(A const & s1, B const & s2, tvec2<C, Q> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL explicit tvec4(tvec3<A, Q> const & v, B const & s);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL explicit tvec4(A const & s, tvec3<B, Q> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, precision Q>
		GLM_FUNC_DECL explicit tvec4(tvec2<A, Q> const & v1, tvec2<B, Q> const & v2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL explicit tvec4(tvec4<U, Q> const & v);

		template <int E0, int E1, int E2, int E3>
		GLM_FUNC_DECL tvec4(_swizzle<4, T, P, tvec4<T, P>, E0, E1, E2, E3> const & that)
		{
			*this = that();
		}

		template <int E0, int E1, int F0, int F1>
		GLM_FUNC_DECL tvec4(_swizzle<2, T, P, tvec2<T, P>, E0, E1, -1, -2> const & v, _swizzle<2, T, P, tvec2<T, P>, F0, F1, -1, -2> const & u)
		{
			*this = tvec4<T, P>(v(), u());
		}

		template <int E0, int E1>
		GLM_FUNC_DECL tvec4(T const & x, T const & y, _swizzle<2, T, P, tvec2<T, P>, E0, E1, -1, -2> const & v)
		{
			*this = tvec4<T, P>(x, y, v());
		}

		template <int E0, int E1>
		GLM_FUNC_DECL tvec4(T const & x, _swizzle<2, T, P, tvec2<T, P>, E0, E1, -1, -2> const & v, T const & w)
		{
			*this = tvec4<T, P>(x, v(), w);
		}

		template <int E0, int E1>
		GLM_FUNC_DECL tvec4(_swizzle<2, T, P, tvec2<T, P>, E0, E1, -1, -2> const & v, T const & z, T const & w)
		{
			*this = tvec4<T, P>(v(), z, w);
		}

		template <int E0, int E1, int E2>
		GLM_FUNC_DECL tvec4(_swizzle<3, T, P, tvec3<T, P>, E0, E1, E2, -1> const & v, T const & w)
		{
			*this = tvec4<T, P>(v(), w);
		}

		template <int E0, int E1, int E2>
		GLM_FUNC_DECL tvec4(T const & x, _swizzle<3, T, P, tvec3<T, P>, E0, E1, E2, -1> const & v)
		{
			*this = tvec4<T, P>(x, v());
		}

		//////////////////////////////////////
		// Swizzle constructors

		GLM_FUNC_DECL tvec4(tref4<T, P> const & r);

		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C> 
		GLM_FUNC_DECL explicit tvec4(tref2<A, P> const & v, B const & s1, C const & s2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C> 
		GLM_FUNC_DECL explicit tvec4(A const & s1, tref2<B, P> const & v, C const & s2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B, typename C> 
		GLM_FUNC_DECL explicit tvec4(A const & s1, B const & s2, tref2<C, P> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		GLM_FUNC_DECL explicit tvec4(tref3<A, P> const & v, B const & s);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		GLM_FUNC_DECL explicit tvec4(A const & s, tref3<B, P> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		GLM_FUNC_DECL explicit tvec4(tref2<A, P> const & v1, tref2<B, P> const & v2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		GLM_FUNC_DECL explicit tvec4(tvec2<A, P> const & v1, tref2<B, P> const & v2);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename A, typename B> 
		GLM_FUNC_DECL explicit tvec4(tref2<A, P> const & v1, tvec2<B, P> const & v2);

		//////////////////////////////////////
		// Unary arithmetic operators

		GLM_FUNC_DECL tvec4<T, P> & operator= (tvec4<T, P> const & v);
		template <typename U, precision Q>
		GLM_FUNC_DECL tvec4<T, P> & operator= (tvec4<U, Q> const & v);

		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator+=(U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator+=(tvec4<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator-=(U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator-=(tvec4<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator*=(U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator*=(tvec4<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator/=(U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator/=(tvec4<U, P> const & v);

		//////////////////////////////////////
		// Increment and decrement operators

		GLM_FUNC_DECL tvec4<T, P> & operator++();
		GLM_FUNC_DECL tvec4<T, P> & operator--();
		GLM_FUNC_DECL tvec4<T, P> operator++(int);
		GLM_FUNC_DECL tvec4<T, P> operator--(int);

		//////////////////////////////////////
		// Unary bit operators

		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator%= (U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator%= (tvec4<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator&= (U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator&= (tvec4<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator|= (U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator|= (tvec4<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator^= (U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator^= (tvec4<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator<<=(U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator<<=(tvec4<U, P> const & v);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator>>=(U const & s);
		template <typename U>
		GLM_FUNC_DECL tvec4<T, P> & operator>>=(tvec4<U, P> const & v);

		//////////////////////////////////////
		// Swizzle operators

		GLM_FUNC_DECL value_type swizzle(comp X) const;
		GLM_FUNC_DECL tvec2<T, P> swizzle(comp X, comp Y) const;
		GLM_FUNC_DECL tvec3<T, P> swizzle(comp X, comp Y, comp Z) const;
		GLM_FUNC_DECL tvec4<T, P> swizzle(comp X, comp Y, comp Z, comp W) const;
		GLM_FUNC_DECL tref2<T, P> swizzle(comp X, comp Y);
		GLM_FUNC_DECL tref3<T, P> swizzle(comp X, comp Y, comp Z);
		GLM_FUNC_DECL tref4<T, P> swizzle(comp X, comp Y, comp Z, comp W);
	};

	template <typename T, precision P>
	struct tref4
	{
		GLM_FUNC_DECL tref4(T & x, T & y, T & z, T & w);
		GLM_FUNC_DECL tref4(tref4<T, P> const & r);
		GLM_FUNC_DECL explicit tref4(tvec4<T, P> const & v);
		GLM_FUNC_DECL tref4<T, P> & operator= (tref4<T, P> const & r);
		GLM_FUNC_DECL tref4<T, P> & operator= (tvec4<T, P> const & v);
		GLM_FUNC_DECL tvec4<T, P> operator() ();

		T & x;
		T & y;
		T & z;
		T & w;
	};

	GLM_DETAIL_IS_VECTOR(tvec4);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator+(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator+(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator+(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator-(tvec4<T, P> const & v, 	typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator-(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator-	(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator*(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator*(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator*(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator/(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator/(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator/(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator-(tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator==(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator!=(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator%(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator%(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator%(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator&(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator&(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator&(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator|(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator|(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator|(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator^(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator^(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator^(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator<<(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator<<(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator<<(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator>>(tvec4<T, P> const & v, typename tvec4<T, P>::T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator>>(typename tvec4<T, P>::T const & s, tvec4<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec4<T, P> operator>>(tvec4<T, P> const & v1, tvec4<T, P> const & v2);

	template <typename T, precision P> 
	GLM_FUNC_DECL tvec4<T, P> operator~(tvec4<T, P> const & v);

}//namespace detail
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_vec4.inl"
#endif//GLM_EXTERNAL_TEMPLATE

#endif//glm_core_type_gentype4
