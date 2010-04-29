///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-02-21
// Updated : 2007-02-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vecx.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <cassert>

namespace glm
{
namespace detail{

	template <int N> const typename _bvecxGTX<N>::size_type _bvecxGTX<N>::value_size = N;

    // Bool constructors
	template <int N>
	inline _bvecxGTX<N>::_bvecxGTX()
	{
		for(int i = 0; i < N; ++i)
	        this->data[i] = false;
	}

	template <int N>
	inline _bvecxGTX<N>::_bvecxGTX(const _bvecxGTX<N>& v)
	{
		for(int i = 0; i < N; ++i)
	        this->data[i] = v[i];
	}

	template <int N>
    inline _bvecxGTX<N>::_bvecxGTX(const bool s)
	{
		for(int i = 0; i < N; ++i)
	        this->data[i] = s;
	}

	// Accesses
	template <int N>
    inline bool& _bvecxGTX<N>::operator[](int i)
	{
        assert(i >= 0 && i < N);
		return this->data[i];
	}

	template <int N>
    inline const bool _bvecxGTX<N>::operator[](int i) const
	{
        assert(i >= 0 && i < N);
		return this->data[i];
	}

	template <int N>
    inline _bvecxGTX<N>::operator bool*()
	{
		return data;
	}

	template <int N>
    inline _bvecxGTX<N>::operator const bool*() const
	{
		return data;
	}

    // Operators
	template <int N>
    inline _bvecxGTX<N>& _bvecxGTX<N>::operator=(const _bvecxGTX<N>& v)
	{
		for(int i = 0; i < N; ++i)
			this->data[i] = v[i];
		return *this;
	}

	template <int N>
    inline _bvecxGTX<N> _bvecxGTX<N>::operator! () const
	{
		_bvecxGTX<N> result;
		for(int i = 0; i < N; ++i)
			result[i] = !this->data[i];
		return result;
	}

	template <int N, typename T> const typename _xvecxGTX<N, T>::size_type _xvecxGTX<N, T>::value_size = N;

	// Common constructors
	template <int N, typename T>
	inline _xvecxGTX<N, T>::_xvecxGTX()
	{
		for(int i = 0; i < N; ++i)
	        this->data[i] = T(0);
	}

	template <int N, typename T>
    inline _xvecxGTX<N, T>::_xvecxGTX(const _xvecxGTX<N, T>& v)
	{
		for(int i = 0; i < N; ++i)
	        this->data[i] = v[i];
	}

    // T constructors
	template <int N, typename T> 
    inline _xvecxGTX<N, T>::_xvecxGTX(const T s)
	{
		for(int i = 0; i < N; ++i)
	        this->data[i] = s;
	}

	// Accesses
    template <int N, typename T> 
    inline T& _xvecxGTX<N, T>::operator[](int i)
    {
        assert(i >= 0 && i < N);
		return this->data[i];
    }

    template <int N, typename T> 
    inline const T _xvecxGTX<N, T>::operator[](int i) const
    {
		assert(i >= 0 && i < N);
        return this->data[i];
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>::operator T*()
    {
        return data;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>::operator const T*() const 
    {
        return data;
    }

    template <int N, typename T>
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator=(const _xvecxGTX<N, T>& v)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] = v[i];
        return *this;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator+= (const T s)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] += s;
	    return *this;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator+=(const _xvecxGTX<N, T>& v)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] += v[i];
	    return *this;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator-= (const T s)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] -= s;
	    return *this;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator-=(const _xvecxGTX<N, T>& v)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] -= v[i];
	    return *this;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator*=(const T s)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] *= s;
	    return *this;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator*= (const _xvecxGTX<N, T>& v)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] *= v[i];
	    return *this;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator/=(const T s)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] /= s;
	    return *this;
    }

    template <int N, typename T> 
    inline _xvecxGTX<N, T>& _xvecxGTX<N, T>::operator/= (const _xvecxGTX<N, T>& v)
    {
		for(int i = 0; i < N; ++i)
	        this->data[i] /= v[i];
	    return *this;
    }
}//namespace detail

    // Unary constant operators
    template <int N, typename T> 
    inline const detail::_xvecxGTX<N, T> operator- (const detail::_xvecxGTX<N, T>& v)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = -v[i];
	    return result;
    }

    template <int N, typename T>
    inline const detail::_xvecxGTX<N, T> operator++ (const detail::_xvecxGTX<N, T>& v, int)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v[i] + T(1);
	    return result;
    }

    template <int N, typename T> 
    inline const detail::_xvecxGTX<N, T> operator-- (const detail::_xvecxGTX<N, T>& v, int)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v[i] - T(1);
	    return result;
    }

    // Binary operators
    template <int N, typename T>
	inline detail::_xvecxGTX<N, T> operator+ (const detail::_xvecxGTX<N, T>& v, const T s)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v[i] + s;
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator+ (const T s, const detail::_xvecxGTX<N, T>& v)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v[i] + s;
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator+ (const detail::_xvecxGTX<N, T>& v1, const detail::_xvecxGTX<N, T>& v2)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v1[i] + v2[i];
	    return result;
    }
    
    template <int N, typename T>
	inline detail::_xvecxGTX<N, T> operator- (const detail::_xvecxGTX<N, T>& v, const T s)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v[i] - s;
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator- (const T s, const detail::_xvecxGTX<N, T>& v)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = s - v[i];
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator- (const detail::_xvecxGTX<N, T>& v1, const detail::_xvecxGTX<N, T>& v2)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v1[i] - v2[i];
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator* (const detail::_xvecxGTX<N, T>& v, const T s)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v[i] * s;
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator* (const T s, const detail::_xvecxGTX<N, T>& v)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = s * v[i];
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator* (const detail::_xvecxGTX<N, T>& v1, const detail::_xvecxGTX<N, T>& v2)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v1[i] * v2[i];
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator/ (const detail::_xvecxGTX<N, T>& v, const T s)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v[i] / s;
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator/ (const T s, const detail::_xvecxGTX<N, T>& v)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = s / v[i];
	    return result;
    }

    template <int N, typename T>
    inline detail::_xvecxGTX<N, T> operator/ (const detail::_xvecxGTX<N, T>& v1, const detail::_xvecxGTX<N, T>& v2)
    {
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = v1[i] / v2[i];
	    return result;
    }

	// Trigonometric Functions
	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> radians(const detail::_xvecxGTX<N, T>& degrees)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = radians(degrees[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> degrees(const detail::_xvecxGTX<N, T>& radians)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = degrees(radians[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> sin(const detail::_xvecxGTX<N, T>& angle)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = sin(angle[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> cos(const detail::_xvecxGTX<N, T>& angle)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = cos(angle[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> tan(const detail::_xvecxGTX<N, T>& angle)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = tan(angle[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> asin(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = asin(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> acos(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = acos(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> atan(const detail::_xvecxGTX<N, T>& y, const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = atan(y[i], x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> atan(const detail::_xvecxGTX<N, T>& y_over_x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = atan(y_over_x[i]);
	    return result;
	}

	// Exponential Functions
	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> pow(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = pow(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> exp(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = exp(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> log(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = log(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> exp2(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = exp2(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> log2(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = log2(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> sqrt(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = sqrt(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> inversesqrt(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = inversesqrt(x[i]);
	    return result;
	}

	// Common Functions
	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> abs(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = abs(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> sign(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = sign(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> floor(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = floor(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> ceil(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = ceil(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> fract(const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = fract(x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> mod(const detail::_xvecxGTX<N, T>& x, T y)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = mod(x[i], y);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> mod(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = mod(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> min(
		const detail::_xvecxGTX<N, T>& x, 
		T y)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = min(x[i], y);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> min(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = min(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> max(
		const detail::_xvecxGTX<N, T>& x, 
		T y)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = max(x[i], y);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> max(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = max(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> clamp(
		const detail::_xvecxGTX<N, T>& x, 
		T minVal, 
		T maxVal)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = clamp(x[i], minVal, maxVal);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> clamp(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& minVal, 
		const detail::_xvecxGTX<N, T>& maxVal)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = clamp(x[i], minVal[i], maxVal[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> step(
		T edge, 
		const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = step(edge, x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> step(
		const detail::_xvecxGTX<N, T>& edge, 
		const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = step(edge[i], x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> smoothstep(
		T edge0, 
		T edge1, 
		const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = step(edge0, edge1, x[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> smoothstep(
		const detail::_xvecxGTX<N, T>& edge0, 
		const detail::_xvecxGTX<N, T>& edge1, 
		const detail::_xvecxGTX<N, T>& x)
	{
		detail::_xvecxGTX<N, T> result;
		for(int i = 0; i< N; ++i)
			result[i] = step(edge0[i], edge1[i], x[i]);
	    return result;
	}

	// Geometric Functions
	template <int N, typename T> 
	const T length(
		const detail::_xvecxGTX<N, T>& x)
	{
        T sqr = dot(x, x);
        return sqrt(sqr);
	}

	template <int N, typename T> 
	const T distance(
		const detail::_xvecxGTX<N, T>& p0, 
		const detail::_xvecxGTX<N, T>& p1)
	{
        return length(p1 - p0);
	}

	template <int N, typename T> 
	const T dot(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		T result = T(0);
		for(int i = 0; i < N; ++i)
			result += x[i] * y[i];
		return result;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> normalize(
		const detail::_xvecxGTX<N, T>& x)
	{
        T sqr = dot(x, x);
	    return x * inversesqrt(sqr);
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> faceforward(
		const detail::_xvecxGTX<N, T>& Normal, 
		const detail::_xvecxGTX<N, T>& I, 
		const detail::_xvecxGTX<N, T>& Nref)
	{
		return dot(Nref, I) < T(0) ? Normal : -Normal;
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> reflect(
		const detail::_xvecxGTX<N, T>& I, 
		const detail::_xvecxGTX<N, T>& Normal)
	{
		return I - Normal * dot(Normal, I) * T(2);
	}

	template <int N, typename T> 
	const detail::_xvecxGTX<N, T> refract(
		const detail::_xvecxGTX<N, T>& I, 
		const detail::_xvecxGTX<N, T>& Normal, 
		T eta)
	{
        T dot = dot(Normal, I);
        T k = T(1) - eta * eta * (T(1) - dot * dot);
        if(k < T(0))
            return detail::_xvecxGTX<N, T>(T(0));
        else
            return eta * I - (eta * dot + sqrt(k)) * Normal;
	}

	// Vector Relational Functions
	template <int N, typename T> 
	const detail::_bvecxGTX<N> lessThan(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = lessThan(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_bvecxGTX<N> lessThanEqual(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = lessThanEqual(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_bvecxGTX<N> greaterThan(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = greaterThan(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_bvecxGTX<N> greaterThanEqual(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = greaterThanEqual(x[i], y[i]);
	    return result;
	}

	template <int N> 
	const detail::_bvecxGTX<N> equal(
		const detail::_bvecxGTX<N>& x, 
		const detail::_bvecxGTX<N>& y)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = equal(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_bvecxGTX<N> equal(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = equal(x[i], y[i]);
	    return result;
	}

	template <int N> 
	const detail::_bvecxGTX<N> notEqual(
		const detail::_bvecxGTX<N>& x, 
		const detail::_bvecxGTX<N>& y)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = equal(x[i], y[i]);
	    return result;
	}

	template <int N, typename T> 
	const detail::_bvecxGTX<N> notEqual(
		const detail::_xvecxGTX<N, T>& x, 
		const detail::_xvecxGTX<N, T>& y)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = notEqual(x[i], y[i]);
	    return result;
	}

	template <int N> 
	const bool any(const detail::_bvecxGTX<N>& x)
	{
		for(int i = 0; i< N; ++i)
			if(x[i]) return true;
	    return false;
	}

	template <int N> 
	const bool all(const detail::_bvecxGTX<N>& x)
	{
		for(int i = 0; i< N; ++i)
			if(!x[i]) return false;
	    return true;
	}

#if (defined(GLM_COMPILER) && GLM_COMPILER & GLM_COMPILER_VC) // VC compiler doesn't support the C++ key word 'not'
    template <int N> 
	detail::_bvecxGTX<N> not(
		const detail::_bvecxGTX<N>& v)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = !v[i];
	    return result;
	}
#elif (defined(GLM_COMPILER) && GLM_COMPILER & GLM_COMPILER_GCC) // GCC
    template <int N> 
	detail::_bvecxGTX<N> operator not(
		const detail::_bvecxGTX<N>& v)
	{
		detail::_bvecxGTX<N> result;
		for(int i = 0; i< N; ++i)
			result[i] = !v[i];
	    return result;
	}
#endif
} //namespace glm
