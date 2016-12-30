/// @ref core
/// @file glm/detail/type_vec4.hpp

#pragma once

#include "type_vec.hpp"
#if GLM_SWIZZLE == GLM_SWIZZLE_ENABLED
#	if GLM_HAS_UNRESTRICTED_UNIONS
#		include "_swizzle.hpp"
#	else
#		include "_swizzle_func.hpp"
#	endif
#endif //GLM_SWIZZLE
#include <cstddef>

namespace glm
{
	template<typename T, precision P>
	struct vec<4, T, P>
	{
		// -- Implementation detail --

		typedef T value_type;
		typedef vec<4, T, P> type;
		typedef vec<4, bool, P> bool_type;

		// -- Data --

#		if GLM_HAS_ALIGNED_TYPE
#			if GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic push
#				pragma GCC diagnostic ignored "-Wpedantic"
#			endif
#			if GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic push
#				pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
#				pragma clang diagnostic ignored "-Wnested-anon-types"
#			endif

			union
			{
				struct { T x, y, z, w;};
				struct { T r, g, b, a; };
				struct { T s, t, p, q; };

				typename detail::storage<T, sizeof(T) * 4, detail::is_aligned<P>::value>::type data;

#				if GLM_SWIZZLE == GLM_SWIZZLE_ENABLED
					_GLM_SWIZZLE4_2_MEMBERS(T, P, x, y, z, w)
					_GLM_SWIZZLE4_2_MEMBERS(T, P, r, g, b, a)
					_GLM_SWIZZLE4_2_MEMBERS(T, P, s, t, p, q)
					_GLM_SWIZZLE4_3_MEMBERS(T, P, x, y, z, w)
					_GLM_SWIZZLE4_3_MEMBERS(T, P, r, g, b, a)
					_GLM_SWIZZLE4_3_MEMBERS(T, P, s, t, p, q)
					_GLM_SWIZZLE4_4_MEMBERS(T, P, x, y, z, w)
					_GLM_SWIZZLE4_4_MEMBERS(T, P, r, g, b, a)
					_GLM_SWIZZLE4_4_MEMBERS(T, P, s, t, p, q)
#				endif//GLM_SWIZZLE
			};

#			if GLM_COMPILER & GLM_COMPILER_CLANG
#				pragma clang diagnostic pop
#			endif
#			if GLM_COMPILER & GLM_COMPILER_GCC
#				pragma GCC diagnostic pop
#			endif
#		else
			union { T x, r, s; };
			union { T y, g, t; };
			union { T z, b, p; };
			union { T w, a, q; };

#			if GLM_SWIZZLE == GLM_SWIZZLE_ENABLED
				GLM_SWIZZLE_GEN_VEC_FROM_VEC4(T, P)
#			endif//GLM_SWIZZLE
#		endif

		// -- Component accesses --

		/// Return the count of components of the vector
		typedef length_t length_type;
		GLM_FUNC_DECL static length_type length(){return 4;}

		GLM_FUNC_DECL T & operator[](length_type i);
		GLM_FUNC_DECL T const & operator[](length_type i) const;

		// -- Implicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR_SIMD vec() GLM_DEFAULT_CTOR;
		GLM_FUNC_DECL GLM_CONSTEXPR_SIMD vec(vec<4, T, P> const& v) GLM_DEFAULT;
		template<precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR_SIMD vec(vec<4, T, Q> const& v);

		// -- Explicit basic constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR_SIMD explicit vec(ctor);
		GLM_FUNC_DECL GLM_CONSTEXPR_SIMD explicit vec(T scalar);
		GLM_FUNC_DECL GLM_CONSTEXPR_SIMD vec(T a, T b, T c, T d);

		// -- Conversion scalar constructors --

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, typename D>
		GLM_FUNC_DECL GLM_CONSTEXPR_SIMD vec(A a, B b, C c, D d);
		template<typename A, typename B, typename C, typename D>
		GLM_FUNC_DECL GLM_CONSTEXPR_CTOR vec(vec<1, A, P> const& a, vec<1, B, P> const& b, vec<1, C, P> const& c, vec<1, D, P> const& d);

		// -- Conversion vector constructors --

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, Q> const & a, B b, C c);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, Q> const & a, vec<1, B, Q> const & b, vec<1, C, Q> const & c);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A a, vec<2, B, Q> const & b, C c);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, Q> const & a, vec<2, B, Q> const & b, vec<1, C, Q> const & c);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A a, B b, vec<2, C, Q> const & c);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, typename C, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, Q> const & a, vec<1, B, Q> const & b, vec<2, C, Q> const & c);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<3, A, Q> const & a, B b);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<3, A, Q> const & a, vec<1, B, Q> const & b);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(A a, vec<3, B, Q> const & b);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<1, A, Q> const & a, vec<3, B, Q> const & b);
		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename A, typename B, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR vec(vec<2, A, Q> const & a, vec<2, B, Q> const & b);

		/// Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template<typename U, precision Q>
		GLM_FUNC_DECL GLM_CONSTEXPR GLM_EXPLICIT vec(vec<4, U, Q> const& v);

		// -- Swizzle constructors --
#		if GLM_HAS_UNRESTRICTED_UNIONS && (GLM_SWIZZLE == GLM_SWIZZLE_ENABLED)
			template<int E0, int E1, int E2, int E3>
			GLM_FUNC_DECL vec(detail::_swizzle<4, T, P, E0, E1, E2, E3> const & that)
			{
				*this = that();
			}

			template<int E0, int E1, int F0, int F1>
			GLM_FUNC_DECL vec(detail::_swizzle<2, T, P, E0, E1, -1, -2> const & v, detail::_swizzle<2, T, P, F0, F1, -1, -2> const & u)
			{
				*this = vec<4, T, P>(v(), u());
			}

			template<int E0, int E1>
			GLM_FUNC_DECL vec(T const & x, T const & y, detail::_swizzle<2, T, P, E0, E1, -1, -2> const & v)
			{
				*this = vec<4, T, P>(x, y, v());
			}

			template<int E0, int E1>
			GLM_FUNC_DECL vec(T const & x, detail::_swizzle<2, T, P, E0, E1, -1, -2> const & v, T const & w)
			{
				*this = vec<4, T, P>(x, v(), w);
			}

			template<int E0, int E1>
			GLM_FUNC_DECL vec(detail::_swizzle<2, T, P, E0, E1, -1, -2> const & v, T const & z, T const & w)
			{
				*this = vec<4, T, P>(v(), z, w);
			}

			template<int E0, int E1, int E2>
			GLM_FUNC_DECL vec(detail::_swizzle<3, T, P, E0, E1, E2, -1> const & v, T const & w)
			{
				*this = vec<4, T, P>(v(), w);
			}

			template<int E0, int E1, int E2>
			GLM_FUNC_DECL vec(T const & x, detail::_swizzle<3, T, P, E0, E1, E2, -1> const & v)
			{
				*this = vec<4, T, P>(x, v());
			}
#		endif// GLM_HAS_UNRESTRICTED_UNIONS && (GLM_SWIZZLE == GLM_SWIZZLE_ENABLED)

		// -- Unary arithmetic operators --

		GLM_FUNC_DECL vec<4, T, P> & operator=(vec<4, T, P> const & v) GLM_DEFAULT;

		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator=(vec<4, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator+=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator+=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator+=(vec<4, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator-=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator-=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator-=(vec<4, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator*=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator*=(vec<1, U, P> const& v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator*=(vec<4, U, P> const& v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator/=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator/=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator/=(vec<4, U, P> const & v);

		// -- Increment and decrement operators --

		GLM_FUNC_DECL vec<4, T, P> & operator++();
		GLM_FUNC_DECL vec<4, T, P> & operator--();
		GLM_FUNC_DECL vec<4, T, P> operator++(int);
		GLM_FUNC_DECL vec<4, T, P> operator--(int);

		// -- Unary bit operators --

		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator%=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator%=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator%=(vec<4, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator&=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator&=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator&=(vec<4, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator|=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator|=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator|=(vec<4, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator^=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator^=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator^=(vec<4, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator<<=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator<<=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator<<=(vec<4, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator>>=(U scalar);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator>>=(vec<1, U, P> const & v);
		template<typename U>
		GLM_FUNC_DECL vec<4, T, P> & operator>>=(vec<4, U, P> const & v);
	};

	// -- Unary operators --

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator+(vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator-(vec<4, T, P> const & v);

	// -- Binary operators --

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator+(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator+(vec<4, T, P> const & v1, vec<1, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator+(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator+(vec<1, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator+(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator-(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator-(vec<4, T, P> const & v1, vec<1, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator-(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator-(vec<1, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator-(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator*(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator*(vec<4, T, P> const & v1, vec<1, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator*(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator*(vec<1, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator*(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator/(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator/(vec<4, T, P> const & v1, vec<1, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator/(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator/(vec<1, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator/(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator%(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator%(vec<4, T, P> const & v, vec<1, T, P> const & scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator%(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator%(vec<1, T, P> const & scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator%(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator&(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator&(vec<4, T, P> const & v, vec<1, T, P> const & scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator&(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator&(vec<1, T, P> const & scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator&(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator|(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator|(vec<4, T, P> const & v, vec<1, T, P> const & scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator|(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator|(vec<1, T, P> const & scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator|(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator^(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator^(vec<4, T, P> const & v, vec<1, T, P> const & scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator^(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator^(vec<1, T, P> const & scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator^(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator<<(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator<<(vec<4, T, P> const & v, vec<1, T, P> const & scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator<<(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator<<(vec<1, T, P> const & scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator<<(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator>>(vec<4, T, P> const & v, T scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator>>(vec<4, T, P> const & v, vec<1, T, P> const & scalar);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator>>(T scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator>>(vec<1, T, P> const & scalar, vec<4, T, P> const & v);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator>>(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL vec<4, T, P> operator~(vec<4, T, P> const & v);

	// -- Boolean operators --

	template<typename T, precision P>
	GLM_FUNC_DECL bool operator==(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<typename T, precision P>
	GLM_FUNC_DECL bool operator!=(vec<4, T, P> const & v1, vec<4, T, P> const & v2);

	template<precision P>
	GLM_FUNC_DECL vec<4, bool, P> operator&&(vec<4, bool, P> const & v1, vec<4, bool, P> const & v2);

	template<precision P>
	GLM_FUNC_DECL vec<4, bool, P> operator||(vec<4, bool, P> const & v1, vec<4, bool, P> const & v2);
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_vec4.inl"
#endif//GLM_EXTERNAL_TEMPLATE
