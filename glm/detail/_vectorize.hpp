///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
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
/// @file glm/core/_vectorize.hpp
/// @date 2011-10-14 / 2011-10-14
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "type_vec1.hpp"
#include "type_vec2.hpp"
#include "type_vec3.hpp"
#include "type_vec4.hpp"

namespace glm{
namespace detail
{
	template <typename R, typename T, precision P, template <typename, precision> class vecType>
	struct functor1{};

	template <typename R, typename T, precision P>
	struct functor1<R, T, P, tvec1>
	{
		GLM_FUNC_QUALIFIER static tvec1<R, P> call(T (*Func) (T x), tvec1<T, P> const & v)
		{
			return tvec1<R, P>(Func(v.x));
		}
	};

	template <typename R, typename T, precision P>
	struct functor1<R, T, P, tvec2>
	{
		GLM_FUNC_QUALIFIER static tvec2<R, P> call(T (*Func) (T x), tvec2<T, P> const & v)
		{
			return tvec2<R, P>(Func(v.x), Func(v.y));
		}
	};

	template <typename R, typename T, precision P>
	struct functor1<R, T, P, tvec3>
	{
		GLM_FUNC_QUALIFIER static tvec3<R, P> call(T (*Func) (T x), tvec3<T, P> const & v)
		{
			return tvec3<R, P>(Func(v.x), Func(v.y), Func(v.z));
		}
	};

	template <typename R, typename T, precision P>
	struct functor1<R, T, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<R, P> call(T (*Func) (T x), tvec4<T, P> const & v)
		{
			return tvec4<R, P>(Func(v.x), Func(v.y), Func(v.z), Func(v.w));
		}
	};

	template <typename T, precision P, template <typename, precision> class vecType>
	struct functor2{};

	template <typename T, precision P>
	struct functor2<T, P, tvec1>
	{
		GLM_FUNC_QUALIFIER static tvec1<T, P> call(T (*Func) (T x, T y), tvec1<T, P> const & a, tvec1<T, P> const & b)
		{
			return tvec1<T, P>(Func(a.x, b.x));
		}
	};

	template <typename T, precision P>
	struct functor2<T, P, tvec2>
	{
		GLM_FUNC_QUALIFIER static tvec2<T, P> call(T (*Func) (T x, T y), tvec2<T, P> const & a, tvec2<T, P> const & b)
		{
			return tvec2<T, P>(Func(a.x, b.x), Func(a.y, b.y));
		}
	};

	template <typename T, precision P>
	struct functor2<T, P, tvec3>
	{
		GLM_FUNC_QUALIFIER static tvec3<T, P> call(T (*Func) (T x, T y), tvec3<T, P> const & a, tvec3<T, P> const & b)
		{
			return tvec3<T, P>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z));
		}
	};

	template <typename T, precision P>
	struct functor2<T, P, tvec4>
	{
		GLM_FUNC_QUALIFIER static tvec4<T, P> call(T (*Func) (T x, T y), tvec4<T, P> const & a, tvec4<T, P> const & b)
		{
			return tvec4<T, P>(Func(a.x, b.x), Func(a.y, b.y), Func(a.z, b.z), Func(a.w, b.w));
		}
	};
}//namespace detail
}//namespace glm

#define VECTORIZE1_VEC(func)						\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER tvec1<T, P> func(	\
		tvec1<T, P> const & v)				\
	{												\
		return tvec1<T, P>(					\
			func(v.x));								\
	}

#define VECTORIZE2_VEC(func)						\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER tvec2<T, P> func(	\
		tvec2<T, P> const & v)				\
	{												\
		return tvec2<T, P>(					\
			func(v.x),								\
			func(v.y));								\
	}

#define VECTORIZE3_VEC(func)						\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER tvec3<T, P> func(	\
		tvec3<T, P> const & v)				\
	{												\
		return tvec3<T, P>(					\
			func(v.x),								\
			func(v.y),								\
			func(v.z));								\
	}

#define VECTORIZE4_VEC(func)						\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER tvec4<T, P> func(	\
		tvec4<T, P> const & v)				\
	{												\
		return tvec4<T, P>(					\
			func(v.x),								\
			func(v.y),								\
			func(v.z),								\
			func(v.w));								\
	}

#define VECTORIZE_VEC(func)		\
	VECTORIZE1_VEC(func)		\
	VECTORIZE2_VEC(func)		\
	VECTORIZE3_VEC(func)		\
	VECTORIZE4_VEC(func)

#define VECTORIZE1_VEC_SCA(func)							\
	template <typename T, precision P>						\
	GLM_FUNC_QUALIFIER tvec1<T, P> func				\
	(														\
		tvec1<T, P> const & x,						\
		typename tvec1<T, P>::value_type const & y	\
	)														\
	{														\
		return tvec1<T, P>(							\
			func(x.x, y));									\
	}

#define VECTORIZE2_VEC_SCA(func)							\
	template <typename T, precision P>						\
	GLM_FUNC_QUALIFIER tvec2<T, P> func				\
	(														\
		tvec2<T, P> const & x,						\
		typename tvec2<T, P>::value_type const & y	\
	)														\
	{														\
		return tvec2<T, P>(							\
			func(x.x, y),									\
			func(x.y, y));									\
	}

#define VECTORIZE3_VEC_SCA(func)							\
	template <typename T, precision P>						\
	GLM_FUNC_QUALIFIER tvec3<T, P> func				\
	(														\
		tvec3<T, P> const & x,						\
		typename tvec3<T, P>::value_type const & y	\
	)														\
	{														\
		return tvec3<T, P>(							\
			func(x.x, y),									\
			func(x.y, y),									\
			func(x.z, y));									\
	}

#define VECTORIZE4_VEC_SCA(func)							\
	template <typename T, precision P>						\
	GLM_FUNC_QUALIFIER tvec4<T, P> func				\
	(														\
		tvec4<T, P> const & x,						\
		typename tvec4<T, P>::value_type const & y	\
	)														\
	{														\
		return tvec4<T, P>(							\
			func(x.x, y),									\
			func(x.y, y),									\
			func(x.z, y),									\
			func(x.w, y));									\
	}

#define VECTORIZE_VEC_SCA(func)		\
	VECTORIZE1_VEC_SCA(func)		\
	VECTORIZE2_VEC_SCA(func)		\
	VECTORIZE3_VEC_SCA(func)		\
	VECTORIZE4_VEC_SCA(func)

#define VECTORIZE1_VEC_VEC(func)					\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER tvec1<T, P> func		\
	(												\
		tvec1<T, P> const & x,				\
		tvec1<T, P> const & y				\
	)												\
	{												\
		return tvec1<T, P>(					\
			func(x.x, y.x));						\
	}

#define VECTORIZE2_VEC_VEC(func)					\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER tvec2<T, P> func		\
	(												\
		tvec2<T, P> const & x,				\
		tvec2<T, P> const & y				\
	)												\
	{												\
		return tvec2<T, P>(					\
			func(x.x, y.x),							\
			func(x.y, y.y));						\
	}

#define VECTORIZE3_VEC_VEC(func)					\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER tvec3<T, P> func		\
	(												\
		tvec3<T, P> const & x,				\
		tvec3<T, P> const & y				\
	)												\
	{												\
		return tvec3<T, P>(					\
			func(x.x, y.x),							\
			func(x.y, y.y),							\
			func(x.z, y.z));						\
	}

#define VECTORIZE4_VEC_VEC(func)				\
	template <typename T, precision P>			\
	GLM_FUNC_QUALIFIER tvec4<T, P> func	\
	(											\
		tvec4<T, P> const & x,			\
		tvec4<T, P> const & y			\
	)											\
	{											\
		return tvec4<T, P>(				\
			func(x.x, y.x),						\
			func(x.y, y.y),						\
			func(x.z, y.z),						\
			func(x.w, y.w));					\
	}

#define VECTORIZE_VEC_VEC(func)		\
	VECTORIZE1_VEC_VEC(func)		\
	VECTORIZE2_VEC_VEC(func)		\
	VECTORIZE3_VEC_VEC(func)		\
	VECTORIZE4_VEC_VEC(func)

namespace glm{
namespace detail
{
	template<bool C>
	struct If
	{
		template<typename F, typename T>
		static GLM_FUNC_QUALIFIER T apply(F functor, const T& val)
		{
			return functor(val);
		}
	};

	template<>
	struct If<false>
	{
		template<typename F, typename T>
		static GLM_FUNC_QUALIFIER T apply(F, const T& val)
		{
			return val;
		}
	};
}//namespace detail
}//namespace glm
