///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-03-10
// Updated : 2008-03-15
// Licence : This source is under GNU LGPL licence
// File    : gtx_associated_min_max.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	// Min comparison between 2 variables
	template<typename T, typename U> 
	inline U associatedMinGTX(T x, U a, T y, U b)
	{
		return x < y ? a : b;
	}

	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMinGTX
	(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b
	)
	{
		detail::_xvec2<U> Result;
		//Result.x = x[0] < y[0] ? a[0] : b[0];
		//Result.y = x[1] < y[1] ? a[1] : b[1];
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
			Result[i] = x[i] < y[i] ? a[i] : b[i];
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMinGTX
	(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
			Result[i] = x[i] < y[i] ? a[i] : b[i];
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMinGTX
	(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
			Result[i] = x[i] < y[i] ? a[i] : b[i];
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMinGTX
	(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
			Result[i] = x < y ? a[i] : b[i];
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMinGTX
	(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
			Result[i] = x < y ? a[i] : b[i];
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMinGTX
	(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
			Result[i] = x < y ? a[i] : b[i];
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMinGTX
	(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<T>::value_size; ++i)
			Result[i] = x[i] < y[i] ? a : b;
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMinGTX
	(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<T>::value_size; ++i)
			Result[i] = x[i] < y[i] ? a : b;
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMinGTX
	(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<T>::value_size; ++i)
			Result[i] = x[i] < y[i] ? a : b;
		return Result;
	}

	// Min comparison between 3 variables
	template<typename T, typename U> 
	inline U associatedMinGTX
	(
		T x, U a, 
		T y, U b,
		T z, U c
	)
	{
		U Result = x < y ? (x < z ? a : c) : (y < z ? b : c);
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMinGTX
	(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b,
		const detail::_xvec2<T>& z, const detail::_xvec2<U>& c
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
			Result[i] = x[i] < y[i] ? (x[i] < z[i] ? a[i] : c[i]) : (y[i] < z[i] ? b[i] : c[i]);
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMinGTX
	(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b,
		const detail::_xvec3<T>& z, const detail::_xvec3<U>& c
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
			Result[i] = x[i] < y[i] ? (x[i] < z[i] ? a[i] : c[i]) : (y[i] < z[i] ? b[i] : c[i]);
		return Result;
	}

	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMinGTX
	(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b,
		const detail::_xvec4<T>& z, const detail::_xvec4<U>& c
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
			Result[i] = x[i] < y[i] ? (x[i] < z[i] ? a[i] : c[i]) : (y[i] < z[i] ? b[i] : c[i]);
		return Result;
	}

	// Min comparison between 4 variables
	template<typename T, typename U> 
	inline U associatedMinGTX
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
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMinGTX
	(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b,
		const detail::_xvec2<T>& z, const detail::_xvec2<U>& c,
		const detail::_xvec2<T>& w, const detail::_xvec2<U>& d
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMinGTX
	(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b,
		const detail::_xvec3<T>& z, const detail::_xvec3<U>& c,
		const detail::_xvec3<T>& w, const detail::_xvec3<U>& d
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMinGTX
	(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b,
		const detail::_xvec4<T>& z, const detail::_xvec4<U>& c,
		const detail::_xvec4<T>& w, const detail::_xvec4<U>& d
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMinGTX
	(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b,
		T z, const detail::_xvec2<U>& c,
		T w, const detail::_xvec2<U>& d
	)
	{
		T Test1 = min(x, y);
		T Test2 = min(z, w);

		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
		{
			U Result1 = x < y ? a[i] : b[i];
			U Result2 = z < w ? c[i] : d[i];
			Result[i] = Test1 < Test2 ? Result1 : Result2;
		}
		return Result;
	}

	// Min comparison between 4 variables
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMinGTX
	(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b,
		T z, const detail::_xvec3<U>& c,
		T w, const detail::_xvec3<U>& d
	)
	{
		T Test1 = min(x, y);
		T Test2 = min(z, w);

		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
		{
			U Result1 = x < y ? a[i] : b[i];
			U Result2 = z < w ? c[i] : d[i];
			Result[i] = Test1 < Test2 ? Result1 : Result2;
		}
		return Result;
	}

	// Min comparison between 4 variables
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMinGTX
	(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b,
		T z, const detail::_xvec4<U>& c,
		T w, const detail::_xvec4<U>& d
	)
	{
		T Test1 = min(x, y);
		T Test2 = min(z, w);

		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
		{
			U Result1 = x < y ? a[i] : b[i];
			U Result2 = z < w ? c[i] : d[i];
			Result[i] = Test1 < Test2 ? Result1 : Result2;
		}
		return Result;
	}

	// Min comparison between 4 variables
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMinGTX
	(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b,
		const detail::_xvec2<T>& z, U c,
		const detail::_xvec2<T>& w, U d
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<T>::size_type i = 0; i < detail::_xvec2<T>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMinGTX
	(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b,
		const detail::_xvec3<T>& z, U c,
		const detail::_xvec3<T>& w, U d
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<T>::size_type i = 0; i < detail::_xvec3<T>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMinGTX
	(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b,
		const detail::_xvec4<T>& z, U c,
		const detail::_xvec4<T>& w, U d
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<T>::size_type i = 0; i < detail::_xvec4<T>::value_size; ++i)
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
	inline U associatedMaxGTX(T x, U a, T y, U b)
	{
		return x > y ? a : b;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
			Result[i] = x[i] > y[i] ? a[i] : b[i];
		return Result;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
			Result[i] = x[i] > y[i] ? a[i] : b[i];
		return Result;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
			Result[i] = x[i] > y[i] ? a[i] : b[i];
		return Result;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
			Result[i] = x > y ? a[i] : b[i];
		return Result;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
			Result[i] = x > y ? a[i] : b[i];
		return Result;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
			Result[i] = x > y ? a[i] : b[i];
		return Result;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<T>::size_type i = 0; i < detail::_xvec2<T>::value_size; ++i)
			Result[i] = x[i] > y[i] ? a : b;
		return Result;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<T>::size_type i = 0; i < detail::_xvec3<T>::value_size; ++i)
			Result[i] = x[i] > y[i] ? a : b;
		return Result;
	}

	// Max comparison between 2 variables
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<T>::size_type i = 0; i < detail::_xvec4<T>::value_size; ++i)
			Result[i] = x[i] > y[i] ? a : b;
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline U associatedMaxGTX
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
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b,
		const detail::_xvec2<T>& z, const detail::_xvec2<U>& c
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
			Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a[i] : c[i]) : (y[i] > z[i] ? b[i] : c[i]);
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b,
		const detail::_xvec3<T>& z, const detail::_xvec3<U>& c
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
			Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a[i] : c[i]) : (y[i] > z[i] ? b[i] : c[i]);
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b,
		const detail::_xvec4<T>& z, const detail::_xvec4<U>& c
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
			Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a[i] : c[i]) : (y[i] > z[i] ? b[i] : c[i]);
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b,
		T z, const detail::_xvec2<U>& c
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
			Result[i] = x > y ? (x > z ? a[i] : c[i]) : (y > z ? b[i] : c[i]);
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b,
		T z, const detail::_xvec3<U>& c
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
			Result[i] = x > y ? (x > z ? a[i] : c[i]) : (y > z ? b[i] : c[i]);
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b,
		T z, const detail::_xvec4<U>& c
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
			Result[i] = x > y ? (x > z ? a[i] : c[i]) : (y > z ? b[i] : c[i]);
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b,
		const detail::_xvec2<T>& z, U c
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<T>::size_type i = 0; i < detail::_xvec2<T>::value_size; ++i)
			Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a : c) : (y[i] > z[i] ? b : c);
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b,
		const detail::_xvec3<T>& z, U c
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<T>::size_type i = 0; i < detail::_xvec3<T>::value_size; ++i)
			Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a : c) : (y[i] > z[i] ? b : c);
		return Result;
	}

	// Max comparison between 3 variables
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b,
		const detail::_xvec4<T>& z, U c
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<T>::size_type i = 0; i < detail::_xvec4<T>::value_size; ++i)
			Result[i] = x[i] > y[i] ? (x[i] > z[i] ? a : c) : (y[i] > z[i] ? b : c);
		return Result;
	}

	// Max comparison between 4 variables
	template<typename T, typename U> 
	inline U associatedMaxGTX
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
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b,
		const detail::_xvec2<T>& z, const detail::_xvec2<U>& c,
		const detail::_xvec2<T>& w, const detail::_xvec2<U>& d
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b,
		const detail::_xvec3<T>& z, const detail::_xvec3<U>& c,
		const detail::_xvec3<T>& w, const detail::_xvec3<U>& d
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b,
		const detail::_xvec4<T>& z, const detail::_xvec4<U>& c,
		const detail::_xvec4<T>& w, const detail::_xvec4<U>& d
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b,
		T z, const detail::_xvec2<U>& c,
		T w, const detail::_xvec2<U>& d
	)
	{
		T Test1 = max(x, y);
		T Test2 = max(z, w);

		detail::_xvec2<U> Result;
		for(detail::_xvec2<U>::size_type i = 0; i < detail::_xvec2<U>::value_size; ++i)
		{
			U Result1 = x > y ? a[i] : b[i];
			U Result2 = z > w ? c[i] : d[i];
			Result[i] = Test1 > Test2 ? Result1 : Result2;
		}
		return Result;
	}

	// Max comparison between 4 variables
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b,
		T z, const detail::_xvec3<U>& c,
		T w, const detail::_xvec3<U>& d
	)
	{
		T Test1 = max(x, y);
		T Test2 = max(z, w);

		detail::_xvec3<U> Result;
		for(detail::_xvec3<U>::size_type i = 0; i < detail::_xvec3<U>::value_size; ++i)
		{
			U Result1 = x > y ? a[i] : b[i];
			U Result2 = z > w ? c[i] : d[i];
			Result[i] = Test1 > Test2 ? Result1 : Result2;
		}
		return Result;
	}

	// Max comparison between 4 variables
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b,
		T z, const detail::_xvec4<U>& c,
		T w, const detail::_xvec4<U>& d
	)
	{
		T Test1 = max(x, y);
		T Test2 = max(z, w);

		detail::_xvec4<U> Result;
		for(detail::_xvec4<U>::size_type i = 0; i < detail::_xvec4<U>::value_size; ++i)
		{
			U Result1 = x > y ? a[i] : b[i];
			U Result2 = z > w ? c[i] : d[i];
			Result[i] = Test1 > Test2 ? Result1 : Result2;
		}
		return Result;
	}

	// Max comparison between 4 variables
	template<typename T, typename U> 
	inline detail::_xvec2<U> associatedMaxGTX
	(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b,
		const detail::_xvec2<T>& z, U c,
		const detail::_xvec2<T>& w, U d
	)
	{
		detail::_xvec2<U> Result;
		for(detail::_xvec2<T>::size_type i = 0; i < detail::_xvec2<T>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec3<U> associatedMaxGTX
	(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b,
		const detail::_xvec3<T>& z, U c,
		const detail::_xvec3<T>& w, U d
	)
	{
		detail::_xvec3<U> Result;
		for(detail::_xvec3<T>::size_type i = 0; i < detail::_xvec3<T>::value_size; ++i)
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
	template<typename T, typename U> 
	inline detail::_xvec4<U> associatedMaxGTX
	(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b,
		const detail::_xvec4<T>& z, U c,
		const detail::_xvec4<T>& w, U d
	)
	{
		detail::_xvec4<U> Result;
		for(detail::_xvec4<T>::size_type i = 0; i < detail::_xvec4<T>::value_size; ++i)
		{
			T Test1 = max(x[i], y[i]);
			T Test2 = max(z[i], w[i]);;
			U Result1 = x[i] > y[i] ? a : b;
			U Result2 = z[i] > w[i] ? c : d;
			Result[i] = Test1 > Test2 ? Result1 : Result2;
		}
		return Result;
	}
}
