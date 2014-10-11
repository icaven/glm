///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-03-10
// Updated : 2008-03-15
// Licence : This source is under MIT License
// File    : gtx_associated_min_max.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm{

// Min comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER U associatedMin(T x, U a, T y, U b)
{
	return x < y ? a : b;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMin
(
	const tvec2<T, P>& x, const tvec2<U, P>& a,
	const tvec2<T, P>& y, const tvec2<U, P>& b
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? a[i] : b[i];
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMin
(
	const tvec3<T, P>& x, const tvec3<U, P>& a,
	const tvec3<T, P>& y, const tvec3<U, P>& b
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? a[i] : b[i];
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMin
(
	const tvec4<T, P>& x, const tvec4<U, P>& a,
	const tvec4<T, P>& y, const tvec4<U, P>& b
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? a[i] : b[i];
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMin
(
	T x, const tvec2<U, P>& a,
	T y, const tvec2<U, P>& b
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x < y ? a[i] : b[i];
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMin
(
	T x, const tvec3<U, P>& a,
	T y, const tvec3<U, P>& b
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x < y ? a[i] : b[i];
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMin
(
	T x, const tvec4<U, P>& a,
	T y, const tvec4<U, P>& b
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x < y ? a[i] : b[i];
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMin
(
	tvec2<T, P> const & x, U a,
	tvec2<T, P> const & y, U b
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? a : b;
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMin
(
	tvec3<T, P> const & x, U a,
	tvec3<T, P> const & y, U b
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? a : b;
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMin
(
	const tvec4<T, P>& x, U a,
	const tvec4<T, P>& y, U b
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? a : b;
	return Result;
}

// Min comparison between 3 variables
template<typename T, typename U>
GLM_FUNC_QUALIFIER U associatedMin
(
	T x, U a,
	T y, U b,
	T z, U c
)
{
	U Result = x < y ? (x < z ? a : c) : (y < z ? b : c);
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMin
(
	const tvec2<T, P>& x, const tvec2<U, P>& a,
	const tvec2<T, P>& y, const tvec2<U, P>& b,
	const tvec2<T, P>& z, const tvec2<U, P>& c
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? (x[i] < z[i] ? a[i] : c[i]) : (y[i] < z[i] ? b[i] : c[i]);
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMin
(
	const tvec3<T, P>& x, const tvec3<U, P>& a,
	const tvec3<T, P>& y, const tvec3<U, P>& b,
	const tvec3<T, P>& z, const tvec3<U, P>& c
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? (x[i] < z[i] ? a[i] : c[i]) : (y[i] < z[i] ? b[i] : c[i]);
	return Result;
}

template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMin
(
	const tvec4<T, P>& x, const tvec4<U, P>& a,
	const tvec4<T, P>& y, const tvec4<U, P>& b,
	const tvec4<T, P>& z, const tvec4<U, P>& c
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] < y[i] ? (x[i] < z[i] ? a[i] : c[i]) : (y[i] < z[i] ? b[i] : c[i]);
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U>
GLM_FUNC_QUALIFIER U associatedMin
(
	T x, U a,
	T y, U b,
	T z, U c,
	T w, U d
)
{
	T Test1 = min(x, y);
	T Test2 = min(z, w);;
	U Result1 = x < y ? a : b;
	U Result2 = z < w ? c : d;
	U Result = Test1 < Test2 ? Result1 : Result2;
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMin
(
	const tvec2<T, P>& x, const tvec2<U, P>& a,
	const tvec2<T, P>& y, const tvec2<U, P>& b,
	const tvec2<T, P>& z, const tvec2<U, P>& c,
	const tvec2<T, P>& w, const tvec2<U, P>& d
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = min(x[i], y[i]);
		T Test2 = min(z[i], w[i]);
		U Result1 = x[i] < y[i] ? a[i] : b[i];
		U Result2 = z[i] < w[i] ? c[i] : d[i];
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMin
(
	const tvec3<T, P>& x, const tvec3<U, P>& a,
	const tvec3<T, P>& y, const tvec3<U, P>& b,
	const tvec3<T, P>& z, const tvec3<U, P>& c,
	const tvec3<T, P>& w, const tvec3<U, P>& d
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = min(x[i], y[i]);
		T Test2 = min(z[i], w[i]);
		U Result1 = x[i] < y[i] ? a[i] : b[i];
		U Result2 = z[i] < w[i] ? c[i] : d[i];
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMin
(
	const tvec4<T, P>& x, const tvec4<U, P>& a,
	const tvec4<T, P>& y, const tvec4<U, P>& b,
	const tvec4<T, P>& z, const tvec4<U, P>& c,
	const tvec4<T, P>& w, const tvec4<U, P>& d
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = min(x[i], y[i]);
		T Test2 = min(z[i], w[i]);
		U Result1 = x[i] < y[i] ? a[i] : b[i];
		U Result2 = z[i] < w[i] ? c[i] : d[i];
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMin
(
	T x, const tvec2<U, P>& a,
	T y, const tvec2<U, P>& b,
	T z, const tvec2<U, P>& c,
	T w, const tvec2<U, P>& d
)
{
	T Test1 = min(x, y);
	T Test2 = min(z, w);

	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		U Result1 = x < y ? a[i] : b[i];
		U Result2 = z < w ? c[i] : d[i];
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMin
(
	T x, const tvec3<U, P>& a,
	T y, const tvec3<U, P>& b,
	T z, const tvec3<U, P>& c,
	T w, const tvec3<U, P>& d
)
{
	T Test1 = min(x, y);
	T Test2 = min(z, w);

	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		U Result1 = x < y ? a[i] : b[i];
		U Result2 = z < w ? c[i] : d[i];
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMin
(
	T x, const tvec4<U, P>& a,
	T y, const tvec4<U, P>& b,
	T z, const tvec4<U, P>& c,
	T w, const tvec4<U, P>& d
)
{
	T Test1 = min(x, y);
	T Test2 = min(z, w);

	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		U Result1 = x < y ? a[i] : b[i];
		U Result2 = z < w ? c[i] : d[i];
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMin
(
	const tvec2<T, P>& x, U a,
	const tvec2<T, P>& y, U b,
	const tvec2<T, P>& z, U c,
	const tvec2<T, P>& w, U d
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = min(x[i], y[i]);
		T Test2 = min(z[i], w[i]);;
		U Result1 = x[i] < y[i] ? a : b;
		U Result2 = z[i] < w[i] ? c : d;
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMin
(
	const tvec3<T, P>& x, U a,
	const tvec3<T, P>& y, U b,
	const tvec3<T, P>& z, U c,
	const tvec3<T, P>& w, U d
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = min(x[i], y[i]);
		T Test2 = min(z[i], w[i]);;
		U Result1 = x[i] < y[i] ? a : b;
		U Result2 = z[i] < w[i] ? c : d;
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Min comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMin
(
	const tvec4<T, P>& x, U a,
	const tvec4<T, P>& y, U b,
	const tvec4<T, P>& z, U c,
	const tvec4<T, P>& w, U d
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = min(x[i], y[i]);
		T Test2 = min(z[i], w[i]);;
		U Result1 = x[i] < y[i] ? a : b;
		U Result2 = z[i] < w[i] ? c : d;
		Result[i] = Test1 < Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U>
GLM_FUNC_QUALIFIER U associatedMax(T x, U a, T y, U b)
{
	return x > y ? a : b;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	const tvec2<T, P>& x, const tvec2<U, P>& a,
	const tvec2<T, P>& y, const tvec2<U, P>& b
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? a[i] : b[i];
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	const tvec3<T, P>& x, const tvec3<U, P>& a,
	const tvec3<T, P>& y, const tvec3<U, P>& b
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? a[i] : b[i];
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	const tvec4<T, P>& x, const tvec4<U, P>& a,
	const tvec4<T, P>& y, const tvec4<U, P>& b
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? a[i] : b[i];
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	T x, const tvec2<U, P>& a,
	T y, const tvec2<U, P>& b
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x > y ? a[i] : b[i];
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	T x, const tvec3<U, P>& a,
	T y, const tvec3<U, P>& b
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x > y ? a[i] : b[i];
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	T x, const tvec4<U, P>& a,
	T y, const tvec4<U, P>& b
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x > y ? a[i] : b[i];
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	const tvec2<T, P>& x, U a,
	const tvec2<T, P>& y, U b
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? a : b;
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	const tvec3<T, P>& x, U a,
	const tvec3<T, P>& y, U b
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? a : b;
	return Result;
}

// Max comparison between 2 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	const tvec4<T, P>& x, U a,
	const tvec4<T, P>& y, U b
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? a : b;
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U>
GLM_FUNC_QUALIFIER U associatedMax
(
	T x, U a,
	T y, U b,
	T z, U c
)
{
	U Result = x > y ? (x > z ? a : c) : (y > z ? b : c);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	const tvec2<T, P>& x, const tvec2<U, P>& a,
	const tvec2<T, P>& y, const tvec2<U, P>& b,
	const tvec2<T, P>& z, const tvec2<U, P>& c
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a[i] : c[i]) : (y[i] > z[i] ? b[i] : c[i]);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	const tvec3<T, P>& x, const tvec3<U, P>& a,
	const tvec3<T, P>& y, const tvec3<U, P>& b,
	const tvec3<T, P>& z, const tvec3<U, P>& c
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a[i] : c[i]) : (y[i] > z[i] ? b[i] : c[i]);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	const tvec4<T, P>& x, const tvec4<U, P>& a,
	const tvec4<T, P>& y, const tvec4<U, P>& b,
	const tvec4<T, P>& z, const tvec4<U, P>& c
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a[i] : c[i]) : (y[i] > z[i] ? b[i] : c[i]);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	T x, const tvec2<U, P>& a,
	T y, const tvec2<U, P>& b,
	T z, const tvec2<U, P>& c
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x > y ? (x > z ? a[i] : c[i]) : (y > z ? b[i] : c[i]);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	T x, const tvec3<U, P>& a,
	T y, const tvec3<U, P>& b,
	T z, const tvec3<U, P>& c
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x > y ? (x > z ? a[i] : c[i]) : (y > z ? b[i] : c[i]);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	T x, const tvec4<U, P>& a,
	T y, const tvec4<U, P>& b,
	T z, const tvec4<U, P>& c
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x > y ? (x > z ? a[i] : c[i]) : (y > z ? b[i] : c[i]);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	const tvec2<T, P>& x, U a,
	const tvec2<T, P>& y, U b,
	const tvec2<T, P>& z, U c
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a : c) : (y[i] > z[i] ? b : c);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	const tvec3<T, P>& x, U a,
	const tvec3<T, P>& y, U b,
	const tvec3<T, P>& z, U c
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a : c) : (y[i] > z[i] ? b : c);
	return Result;
}

// Max comparison between 3 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	const tvec4<T, P>& x, U a,
	const tvec4<T, P>& y, U b,
	const tvec4<T, P>& z, U c
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
		Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a : c) : (y[i] > z[i] ? b : c);
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U>
GLM_FUNC_QUALIFIER U associatedMax
(
	T x, U a,
	T y, U b,
	T z, U c,
	T w, U d
)
{
	T Test1 = max(x, y);
	T Test2 = max(z, w);;
	U Result1 = x > y ? a : b;
	U Result2 = z > w ? c : d;
	U Result = Test1 > Test2 ? Result1 : Result2;
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	const tvec2<T, P>& x, const tvec2<U, P>& a,
	const tvec2<T, P>& y, const tvec2<U, P>& b,
	const tvec2<T, P>& z, const tvec2<U, P>& c,
	const tvec2<T, P>& w, const tvec2<U, P>& d
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = max(x[i], y[i]);
		T Test2 = max(z[i], w[i]);
		U Result1 = x[i] > y[i] ? a[i] : b[i];
		U Result2 = z[i] > w[i] ? c[i] : d[i];
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	const tvec3<T, P>& x, const tvec3<U, P>& a,
	const tvec3<T, P>& y, const tvec3<U, P>& b,
	const tvec3<T, P>& z, const tvec3<U, P>& c,
	const tvec3<T, P>& w, const tvec3<U, P>& d
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = max(x[i], y[i]);
		T Test2 = max(z[i], w[i]);
		U Result1 = x[i] > y[i] ? a[i] : b[i];
		U Result2 = z[i] > w[i] ? c[i] : d[i];
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	const tvec4<T, P>& x, const tvec4<U, P>& a,
	const tvec4<T, P>& y, const tvec4<U, P>& b,
	const tvec4<T, P>& z, const tvec4<U, P>& c,
	const tvec4<T, P>& w, const tvec4<U, P>& d
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = max(x[i], y[i]);
		T Test2 = max(z[i], w[i]);
		U Result1 = x[i] > y[i] ? a[i] : b[i];
		U Result2 = z[i] > w[i] ? c[i] : d[i];
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	T x, const tvec2<U, P>& a,
	T y, const tvec2<U, P>& b,
	T z, const tvec2<U, P>& c,
	T w, const tvec2<U, P>& d
)
{
	T Test1 = max(x, y);
	T Test2 = max(z, w);

	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		U Result1 = x > y ? a[i] : b[i];
		U Result2 = z > w ? c[i] : d[i];
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	T x, const tvec3<U, P>& a,
	T y, const tvec3<U, P>& b,
	T z, const tvec3<U, P>& c,
	T w, const tvec3<U, P>& d
)
{
	T Test1 = max(x, y);
	T Test2 = max(z, w);

	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		U Result1 = x > y ? a[i] : b[i];
		U Result2 = z > w ? c[i] : d[i];
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	T x, const tvec4<U, P>& a,
	T y, const tvec4<U, P>& b,
	T z, const tvec4<U, P>& c,
	T w, const tvec4<U, P>& d
)
{
	T Test1 = max(x, y);
	T Test2 = max(z, w);

	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		U Result1 = x > y ? a[i] : b[i];
		U Result2 = z > w ? c[i] : d[i];
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec2<U, P> associatedMax
(
	const tvec2<T, P>& x, U a,
	const tvec2<T, P>& y, U b,
	const tvec2<T, P>& z, U c,
	const tvec2<T, P>& w, U d
)
{
	tvec2<U, P> Result(tvec2<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = max(x[i], y[i]);
		T Test2 = max(z[i], w[i]);;
		U Result1 = x[i] > y[i] ? a : b;
		U Result2 = z[i] > w[i] ? c : d;
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec3<U, P> associatedMax
(
	const tvec3<T, P>& x, U a,
	const tvec3<T, P>& y, U b,
	const tvec3<T, P>& z, U c,
	const tvec3<T, P>& w, U d
)
{
	tvec3<U, P> Result(tvec3<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = max(x[i], y[i]);
		T Test2 = max(z[i], w[i]);;
		U Result1 = x[i] > y[i] ? a : b;
		U Result2 = z[i] > w[i] ? c : d;
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

// Max comparison between 4 variables
template<typename T, typename U, precision P>
GLM_FUNC_QUALIFIER tvec4<U, P> associatedMax
(
	const tvec4<T, P>& x, U a,
	const tvec4<T, P>& y, U b,
	const tvec4<T, P>& z, U c,
	const tvec4<T, P>& w, U d
)
{
	tvec4<U, P> Result(tvec4<U, P>::_null);
	for(detail::component_count_t i = 0; i < detail::component_count(Result); ++i)
	{
		T Test1 = max(x[i], y[i]);
		T Test2 = max(z[i], w[i]);;
		U Result1 = x[i] > y[i] ? a : b;
		U Result2 = z[i] > w[i] ? c : d;
		Result[i] = Test1 > Test2 ? Result1 : Result2;
	}
	return Result;
}

}//namespace glm
