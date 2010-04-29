///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-02-21
// Updated : 2007-02-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vecx.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_vecx__
#define __glm_gtx_vecx__

namespace glm{
namespace detail{

	template <int N>
    class _bvecxGTX
    {
	private:
		bool data[N];

	public:
		typedef bool value_type;
		typedef int size_type;
		static const size_type value_size;
		static const size_type col_size;
		static const size_type row_size;

        // Common constructors
	    _bvecxGTX();
        _bvecxGTX(const _bvecxGTX& v);

		// Accesses
        bool& operator[](int i);
        const bool operator[](int i) const;
        operator bool*();
	    operator const bool*() const;

        // Bool constructors
        explicit _bvecxGTX(const bool a);

        // Operators
        _bvecxGTX<N>& operator=(const _bvecxGTX<N>& v);
	    _bvecxGTX<N> operator! () const;
    };

    template <int N, typename T = float>
    class _xvecxGTX
    {
	private:
		T data[N];

	public:
		typedef T value_type;
		typedef int size_type;
		static const size_type value_size;

        // Common constructors
	    _xvecxGTX();
        _xvecxGTX(const _xvecxGTX<N, T>& v);

		// Accesses
        T& operator[](int i);
        const T operator[](int i) const;
        operator T*();
	    operator const T*() const;

        // T constructors
        explicit _xvecxGTX(const T x);

        // Unary updatable operators
        _xvecxGTX<N, T>& operator= (const _xvecxGTX<N, T>& v);
	    _xvecxGTX<N, T>& operator+=(const T s);
	    _xvecxGTX<N, T>& operator+=(const _xvecxGTX<N, T>& v);
	    _xvecxGTX<N, T>& operator-=(const T s);
	    _xvecxGTX<N, T>& operator-=(const _xvecxGTX<N, T>& v);
	    _xvecxGTX<N, T>& operator*=(const T s);
	    _xvecxGTX<N, T>& operator*=(const _xvecxGTX<N, T>& v);
	    _xvecxGTX<N, T>& operator/=(const T s);
	    _xvecxGTX<N, T>& operator/=(const _xvecxGTX<N, T>& v);
	    _xvecxGTX<N, T>& operator++();
        _xvecxGTX<N, T>& operator--();
    };

}//namespace detail

    // Binary operators
    template <int N, typename T>
	detail::_xvecxGTX<N, T> operator+ (const detail::_xvecxGTX<N, T>& v, const T s);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator+ (const T s, const detail::_xvecxGTX<N, T>& v);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator+ (const detail::_xvecxGTX<N, T>& v1, const detail::_xvecxGTX<N, T>& v2);
    
    template <int N, typename T>
	detail::_xvecxGTX<N, T> operator- (const detail::_xvecxGTX<N, T>& v, const T s);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator- (const T s, const detail::_xvecxGTX<N, T>& v);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator- (const detail::_xvecxGTX<N, T>& v1, const detail::_xvecxGTX<N, T>& v2);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator* (const detail::_xvecxGTX<N, T>& v, const T s);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator* (const T s, const detail::_xvecxGTX<N, T>& v);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator* (const detail::_xvecxGTX<N, T>& v1, const detail::_xvecxGTX<N, T>& v2);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator/ (const detail::_xvecxGTX<N, T>& v, const T s);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator/ (const T s, const detail::_xvecxGTX<N, T>& v);

    template <int N, typename T>
    detail::_xvecxGTX<N, T> operator/ (const detail::_xvecxGTX<N, T>& v1, const detail::_xvecxGTX<N, T>& v2);

    // Unary constant operators
    template <int N, typename T>
    const detail::_xvecxGTX<N, T> operator- (const detail::_xvecxGTX<N, T>& v);

    template <int N, typename T>
    const detail::_xvecxGTX<N, T> operator-- (const detail::_xvecxGTX<N, T>& v, int);

    template <int N, typename T>
    const detail::_xvecxGTX<N, T> operator++ (const detail::_xvecxGTX<N, T>& v, int);

	// Trigonometric Functions
	template <int N, typename T> const detail::_xvecxGTX<N, T> radians(const detail::_xvecxGTX<N, T>& degrees); //!< \brief Converts degrees to radians and returns the result. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> degrees(const detail::_xvecxGTX<N, T>& radians); //!< \brief Converts radians to degrees and returns the result. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> sin(const detail::_xvecxGTX<N, T>& angle);		//!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> cos(const detail::_xvecxGTX<N, T>& angle);		//!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> tan(const detail::_xvecxGTX<N, T>& angle);		//!< \brief The standard trigonometric tangent function. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> asin(const detail::_xvecxGTX<N, T>& x);			//!< \brief Arc sine. Returns an angle whose sine is x. The range of values returned by this function is [-PI/2, PI/2]. Results are undefined if |x| > 1. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> acos(const detail::_xvecxGTX<N, T>& x);			//!< \brief Arc cosine. Returns an angle whose sine is x. The range of values returned by this function is [0, PI]. Results are undefined if |x| > 1. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> atan(const detail::_xvecxGTX<N, T>& y, const detail::_xvecxGTX<N, T>& x);	//!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> atan(const detail::_xvecxGTX<N, T>& y_over_x);								//!< \brief Arc tangent. Returns an angle whose tangent is y_over_x. The range of values returned by this function is [-PI/2, PI/2]. (From GLM_GTX_vecx extension)

	// Exponential Functions
	template <int N, typename T> const detail::_xvecxGTX<N, T> pow(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y); //!< \brief Returns x raised to the y power. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> exp(const detail::_xvecxGTX<N, T>& x);	//!< \brief Returns the natural exponentiation of x, i.e., e^x. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> log(const detail::_xvecxGTX<N, T>& x);	//!< \brief Returns the natural logarithm of x, i.e., returns the value y which satisfies the equation x = e^y. Results are undefined if x <= 0. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> exp2(const detail::_xvecxGTX<N, T>& x);	//!< \brief Returns 2 raised to the x power. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> log2(const detail::_xvecxGTX<N, T>& x);	//!< \brief Returns the base 2 log of x, i.e., returns the value y, which satisfies the equation x = 2 ^ y. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> sqrt(const detail::_xvecxGTX<N, T>& x);	//!< \brief Returns the positive square root of x. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> inversesqrt(const detail::_xvecxGTX<N, T>& x);	//!< \brief Returns the reciprocal of the positive square root of x. (From GLM_GTX_vecx extension)

	// Common Functions
	template <int N, typename T> const detail::_xvecxGTX<N, T> abs(const detail::_xvecxGTX<N, T>& x);		//!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> sign(const detail::_xvecxGTX<N, T>& x);		//!< \brief Returns 1.0 if x > 0, 0.0 if x = 0, or -1.0 if x < 0. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> floor(const detail::_xvecxGTX<N, T>& x);		//!< \brief Returns a value equal to the nearest integer that is less then or equal to x. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> ceil(const detail::_xvecxGTX<N, T>& x);		//!< \brief Returns a value equal to the nearest integer that is greater than or equal to x. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> fract(const detail::_xvecxGTX<N, T>& x);		//!< \brief Return x - floor(x). (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> mod(const detail::_xvecxGTX<N, T>& x, T y);									//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> mod(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);		//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the corresponding component of y. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> min(const detail::_xvecxGTX<N, T>& x, T y);									//!< \brief Returns y if y < x; otherwise, it returns x. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> min(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);		//!< \brief Returns minimum of each component of x compared with the floating-point value y. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> max(const detail::_xvecxGTX<N, T>& x, T y);									//!< \brief Returns y if x < y; otherwise, it returns x. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> max(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);		//!< \brief Returns maximum of each component of x compared with the floating-point value y. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> clamp(const detail::_xvecxGTX<N, T>& x, T minVal, T maxVal);																//!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> clamp(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& minVal, const detail::_xvecxGTX<N, T>& maxVal);	//!< \brief Returns the component-wise result of min(max(x, minVal), maxVal). (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> step(T edge, const detail::_xvecxGTX<N, T>& x);																			//!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> step(const detail::_xvecxGTX<N, T>& edge, const detail::_xvecxGTX<N, T>& x);												//!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> smoothstep(T edge0, T edge1, const detail::_xvecxGTX<N, T>& x);															//!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> smoothstep(const detail::_xvecxGTX<N, T>& edge0, const detail::_xvecxGTX<N, T>& edge1, const detail::_xvecxGTX<N, T>& x);//!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLM_GTX_vecx extension)

	// Geometric Functions
	template <int N, typename T> const T length(const detail::_xvecxGTX<N, T>& x);											//!< \brief Returns the length of x, i.e., sqrt(x * x). (From GLM_GTX_vecx extension)
	template <int N, typename T> const T distance(const detail::_xvecxGTX<N, T>& p0, const detail::_xvecxGTX<N, T>& p1);	//!< \brief Returns the distance betwwen p0 and p1, i.e., length(p0 - p1). (From GLM_GTX_vecx extension)
	template <int N, typename T> const T dot(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);			//!< \brief Returns the dot product of x and y, i.e., result = x[0] * y[0] + x[1] * y[1]. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> normalize(const detail::_xvecxGTX<N, T>& x);					//!< \brief Returns a vector in the same direction as x but with length of 1. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> faceforward(const detail::_xvecxGTX<N, T>& Norm, const detail::_xvecxGTX<N, T>& I, const detail::_xvecxGTX<N, T>& Nref);		//!< \brief If dot(Nref, I) < 0.0, return N, otherwise, return -N. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> reflect(const detail::_xvecxGTX<N, T>& I, const detail::_xvecxGTX<N, T>& N);													//!< \brief For the incident vector I and surface orientation N, returns the reflection direction : result = I - 2.0 * dot(N, I) * N. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_xvecxGTX<N, T> refract(const detail::_xvecxGTX<N, T>& I, const detail::_xvecxGTX<N, T>& N, T eta);											//!< \brief For the incident vector I and surface normal N, and the ratio of indices of refraction eta, return the refraction vector. (From GLM_GTX_vecx extension)

	// Vector Relational Functions
	template <int N, typename T> const detail::_bvecxGTX<N> lessThan(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);			//!< \brief Returns the component-wise compare of x < y. (From GLM_GTX_vecx extension)  
	template <int N, typename T> const detail::_bvecxGTX<N> lessThanEqual(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);		//!< \brief Returns the component-wise compare of x <= y. (From GLM_GTX_vecx extension)  
	template <int N, typename T> const detail::_bvecxGTX<N> greaterThan(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);		//!< \brief Returns the component-wise compare of x > y. (From GLM_GTX_vecx extension)  
	template <int N, typename T> const detail::_bvecxGTX<N> greaterThanEqual(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);	//!< \brief Returns the component-wise compare of x >= y. (From GLM_GTX_vecx extension)
	template <int N> const detail::_bvecxGTX<N> equal(const detail::_bvecxGTX<N>& x, const detail::_bvecxGTX<N>& y);								//!< \brief Returns the component-wise compare of x == y. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_bvecxGTX<N> equal(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);				//!< \brief Returns the component-wise compare of x == y. (From GLM_GTX_vecx extension)
	template <int N> const detail::_bvecxGTX<N> notEqual(const detail::_bvecxGTX<N>& x, const detail::_bvecxGTX<N>& y);								//!< \brief Returns the component-wise compare of x != y. (From GLM_GTX_vecx extension)
	template <int N, typename T> const detail::_bvecxGTX<N> notEqual(const detail::_xvecxGTX<N, T>& x, const detail::_xvecxGTX<N, T>& y);			//!< \brief Returns the component-wise compare of x != y. (From GLM_GTX_vecx extension)
	template <int N> const bool any(const detail::_bvecxGTX<N>& x);																					//!< \brief Returns true if any component of x is true. (From GLM_GTX_vecx extension)
	template <int N> const bool all(const detail::_bvecxGTX<N>& x);																					//!< \brief Returns true if all component of x is true. (From GLM_GTX_vecx extension)
#ifdef _MSC_VER // VC compiler doesn't support the C++ key word 'not'
    template <int N> const detail::_bvecxGTX<N> not(const detail::_bvecxGTX<N>& v); //!< \brief Returns the component-wise logical complement of x. (From GLM_GTX_vecx extension)
#endif
#ifdef __GNUC__ // GCC
    template <int N> const detail::_bvecxGTX<N> operator not(const detail::_bvecxGTX<N>& v); //!< \brief Returns the component-wise logical complement of x. (From GLM_GTX_vecx extension)
#endif

    namespace gtx
    {
		//! GLM_GTX_vecx extension: - Work in progress - Add custom size vectors
        namespace vecx
        {

        }
    }
}

#define GLM_GTX_vecx namespace gtx::vecx

#include "vecx.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_vecx;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_vecx__
