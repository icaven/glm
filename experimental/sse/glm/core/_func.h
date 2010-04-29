///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-12
// Updated : 2007-01-05
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_func.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_func__
#define __glm_func__

#include "./_xvec2.h"
#include "./_xvec3.h"
#include "./_xvec4.h"
#include "./_bvec2.h"
#include "./_bvec3.h"
#include "./_bvec4.h"
#include "./_xmat2.h"
#include "./_xmat3.h"
#include "./_xmat4.h"
#include "./_xmat2x3.h"
#include "./_xmat3x2.h"
#include "./_xmat2x4.h"
#include "./_xmat4x2.h"
#include "./_xmat3x4.h"
#include "./_xmat4x3.h"
/*
#ifdef WIN32
#pragma warning (disable : 4244)
#endif //WIN32
*/
namespace glm
{
    ////////////////////////////////////////////////////////////////////////
    // Trigonometric Functions

    template <typename T> T radians(T degrees); //!< \brief Converts degrees to radians and returns the result. (From GLSL 1.10.59 specification)
	template <typename T> detail::_xvec2<T> radians(const detail::_xvec2<T>& degrees); //!< \brief Converts degrees to radians and returns the result. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> radians(const detail::_xvec3<T>& degrees); //!< \brief Converts degrees to radians and returns the result. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> radians(const detail::_xvec4<T>& degrees); //!< \brief Converts degrees to radians and returns the result. (From GLSL 1.10.59 specification)

    template <typename T> T degrees(T radians); //!< \brief Converts radians to degrees and returns the result. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> degrees(const detail::_xvec2<T>& radians); //!< \brief Converts radians to degrees and returns the result. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> degrees(const detail::_xvec3<T>& radians); //!< \brief Converts radians to degrees and returns the result. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> degrees(const detail::_xvec4<T>& radians); //!< \brief Converts radians to degrees and returns the result. (From GLSL 1.10.59 specification)

    template <typename T> T sin(T angle); //!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> sin(const detail::_xvec2<T>& angle); //!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> sin(const detail::_xvec3<T>& angle); //!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> sin(const detail::_xvec4<T>& angle); //!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLSL 1.10.59 specification)

    template <typename T> T cos(T angle); //!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> cos(const detail::_xvec2<T>& angle); //!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> cos(const detail::_xvec3<T>& angle); //!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> cos(const detail::_xvec4<T>& angle); //!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLSL 1.10.59 specification)

    template <typename T> T tan(T angle); //!< \brief The standard trigonometric tangent function. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> tan(const detail::_xvec2<T>& angle); //!< \brief The standard trigonometric tangent function. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> tan(const detail::_xvec3<T>& angle); //!< \brief The standard trigonometric tangent function. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> tan(const detail::_xvec4<T>& angle); //!< \brief The standard trigonometric tangent function. (From GLSL 1.10.59 specification)

    template <typename T> T asin(T x); //!< \brief Arc sine. Returns an angle whose sine is x. The range of values returned by this function is [-PI/2, PI/2]. Results are undefined if |x| > 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> asin(const detail::_xvec2<T>& x); //!< \brief Arc sine. Returns an angle whose sine is x. The range of values returned by this function is [-PI/2, PI/2]. Results are undefined if |x| > 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> asin(const detail::_xvec3<T>& x); //!< \brief Arc sine. Returns an angle whose sine is x. The range of values returned by this function is [-PI/2, PI/2]. Results are undefined if |x| > 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> asin(const detail::_xvec4<T>& x); //!< \brief Arc sine. Returns an angle whose sine is x. The range of values returned by this function is [-PI/2, PI/2]. Results are undefined if |x| > 1. (From GLSL 1.10.59 specification)

    template <typename T> T acos(T x); //!< \brief Arc cosine. Returns an angle whose sine is x. The range of values returned by this function is [0, PI]. Results are undefined if |x| > 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> acos(const detail::_xvec2<T>& x); //!< \brief Arc cosine. Returns an angle whose sine is x. The range of values returned by this function is [0, PI]. Results are undefined if |x| > 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> acos(const detail::_xvec3<T>& x); //!< \brief Arc cosine. Returns an angle whose sine is x. The range of values returned by this function is [0, PI]. Results are undefined if |x| > 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> acos(const detail::_xvec4<T>& x); //!< \brief Arc cosine. Returns an angle whose sine is x. The range of values returned by this function is [0, PI]. Results are undefined if |x| > 1. (From GLSL 1.10.59 specification)

    template <typename T> T atan(T y, T x); //!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> atan(const detail::_xvec2<T>& y, const detail::_xvec2<T>& x); //!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> atan(const detail::_xvec3<T>& y, const detail::_xvec3<T>& x); //!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> atan(const detail::_xvec4<T>& y, const detail::_xvec4<T>& x); //!< \brief Arc tangent. Returns an angle whose tangent is y/x. The signs of x and y are used to determine what quadrant the angle is in. The range of values returned by this function is [-PI, PI]. Results are undefined if x and y are both 0. (From GLSL 1.10.59 specification)

    template <typename T> T atan(T y_over_x); //!< \brief Arc tangent. Returns an angle whose tangent is y_over_x. The range of values returned by this function is [-PI/2, PI/2]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> atan(const detail::_xvec2<T>& y_over_x); //!< \brief Arc tangent. Returns an angle whose tangent is y_over_x. The range of values returned by this function is [-PI/2, PI/2]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> atan(const detail::_xvec3<T>& y_over_x); //!< \brief Arc tangent. Returns an angle whose tangent is y_over_x. The range of values returned by this function is [-PI/2, PI/2]. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> atan(const detail::_xvec4<T>& y_over_x); //!< \brief Arc tangent. Returns an angle whose tangent is y_over_x. The range of values returned by this function is [-PI/2, PI/2]. (From GLSL 1.10.59 specification)

    ////////////////////////////////////////////////////////////////////////
    // Exponential Functions

    template <typename T> T pow(T x, T y); //!< \brief Returns x raised to the y power. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> pow(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns x raised to the y power. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> pow(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns x raised to the y power. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> pow(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns x raised to the y power. (From GLSL 1.10.59 specification)

    template <typename T> T exp(T x); //!< \brief Returns the natural exponentiation of x, i.e., e^x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> exp(const detail::_xvec2<T>& x); //!< \brief Returns the natural exponentiation of x, i.e., e^x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> exp(const detail::_xvec3<T>& x); //!< \brief Returns the natural exponentiation of x, i.e., e^x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> exp(const detail::_xvec4<T>& x); //!< \brief Returns the natural exponentiation of x, i.e., e^x. (From GLSL 1.10.59 specification)

    template <typename T> T log(T x); //!< \brief Returns the natural logarithm of x, i.e., returns the value y which satisfies the equation x = e^y. Results are undefined if x <= 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> log(const detail::_xvec2<T>& x); //!< \brief Returns the natural logarithm of x, i.e., returns the value y which satisfies the equation x = e^y. Results are undefined if x <= 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> log(const detail::_xvec3<T>& x); //!< \brief Returns the natural logarithm of x, i.e., returns the value y which satisfies the equation x = e^y. Results are undefined if x <= 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> log(const detail::_xvec4<T>& x); //!< \brief Returns the natural logarithm of x, i.e., returns the value y which satisfies the equation x = e^y. Results are undefined if x <= 0. (From GLSL 1.10.59 specification)

    template <typename T> T exp2(T x); //!< \brief Returns 2 raised to the x power. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> exp2(const detail::_xvec2<T>& x); //!< \brief Returns 2 raised to the x power. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> exp2(const detail::_xvec3<T>& x); //!< \brief Returns 2 raised to the x power. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> exp2(const detail::_xvec4<T>& x); //!< \brief Returns 2 raised to the x power. (From GLSL 1.10.59 specification)

    template <typename T> T log2(T x); //!< \brief Returns the base 2 log of x, i.e., returns the value y, which satisfies the equation x = 2 ^ y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> log2(const detail::_xvec2<T>& x); //!< \brief Returns the base 2 log of x, i.e., returns the value y, which satisfies the equation x = 2 ^ y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> log2(const detail::_xvec3<T>& x); //!< \brief Returns the base 2 log of x, i.e., returns the value y, which satisfies the equation x = 2 ^ y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> log2(const detail::_xvec4<T>& x); //!< \brief Returns the base 2 log of x, i.e., returns the value y, which satisfies the equation x = 2 ^ y. (From GLSL 1.10.59 specification)

    template <typename T> T sqrt(T x); //!< \brief Returns the positive square root of x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> sqrt(const detail::_xvec2<T>& x); //!< \brief Returns the positive square root of x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> sqrt(const detail::_xvec3<T>& x); //!< \brief Returns the positive square root of x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> sqrt(const detail::_xvec4<T>& x); //!< \brief Returns the positive square root of x. (From GLSL 1.10.59 specification)
    
    template <typename T> T inversesqrt(T x); //!< \brief Returns the reciprocal of the positive square root of x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> inversesqrt(const detail::_xvec2<T>& x); //!< \brief Returns the reciprocal of the positive square root of x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> inversesqrt(const detail::_xvec3<T>& x); //!< \brief Returns the reciprocal of the positive square root of x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> inversesqrt(const detail::_xvec4<T>& x); //!< \brief Returns the reciprocal of the positive square root of x. (From GLSL 1.10.59 specification)

    ////////////////////////////////////////////////////////////////////////
    // Common Functions

    template <typename T> T abs(T x); //!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> abs(const detail::_xvec2<T>& x); //!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> abs(const detail::_xvec3<T>& x); //!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> abs(const detail::_xvec4<T>& x); //!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLSL 1.10.59 specification)

    template <typename T> T sign(T x); //!< \brief Returns 1.0 if x > 0, 0.0 if x = 0, or -1.0 if x < 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> sign(const detail::_xvec2<T>& x); //!< \brief Returns 1.0 if x > 0, 0.0 if x = 0, or -1.0 if x < 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> sign(const detail::_xvec3<T>& x); //!< \brief Returns 1.0 if x > 0, 0.0 if x = 0, or -1.0 if x < 0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> sign(const detail::_xvec4<T>& x); //!< \brief Returns 1.0 if x > 0, 0.0 if x = 0, or -1.0 if x < 0. (From GLSL 1.10.59 specification)

    template <typename T> T floor(T x); //!< \brief Returns a value equal to the nearest integer that is less then or equal to x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> floor(const detail::_xvec2<T>& x); //!< \brief Returns a value equal to the nearest integer that is less then or equal to x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> floor(const detail::_xvec3<T>& x); //!< \brief Returns a value equal to the nearest integer that is less then or equal to x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> floor(const detail::_xvec4<T>& x); //!< \brief Returns a value equal to the nearest integer that is less then or equal to x. (From GLSL 1.10.59 specification)

    template <typename T> T ceil(T x); //!< \brief Returns a value equal to the nearest integer that is greater than or equal to x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> ceil(const detail::_xvec2<T>& x); //!< \brief Returns a value equal to the nearest integer that is greater than or equal to x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> ceil(const detail::_xvec3<T>& x); //!< \brief Returns a value equal to the nearest integer that is greater than or equal to x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> ceil(const detail::_xvec4<T>& x); //!< \brief Returns a value equal to the nearest integer that is greater than or equal to x. (From GLSL 1.10.59 specification)

    template <typename T> T fract(T x); //!< \brief Return x - floor(x). (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> fract(const detail::_xvec2<T>& x); //!< \brief Return x - floor(x). (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> fract(const detail::_xvec3<T>& x); //!< \brief Return x - floor(x). (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> fract(const detail::_xvec4<T>& x); //!< \brief Return x - floor(x). (From GLSL 1.10.59 specification)

    template <typename T> T mod(T x, T y);																	//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> mod(const detail::_xvec2<T>& x, T y);							//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> mod(const detail::_xvec3<T>& x, T y);							//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> mod(const detail::_xvec4<T>& x, T y);							//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> mod(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);	//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the corresponding component of y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> mod(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);	//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the corresponding component of y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> mod(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);	//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the corresponding component of y. (From GLSL 1.10.59 specification)

    template <typename T> T min(T x, T y); //!< \brief Returns y if y < x; otherwise, it returns x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> min(const detail::_xvec2<T>& x, T y); //!< \brief Returns y if y < x; otherwise, it returns x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> min(const detail::_xvec3<T>& x, T y); //!< \brief Returns y if y < x; otherwise, it returns x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> min(const detail::_xvec4<T>& x, T y); //!< \brief Returns y if y < x; otherwise, it returns x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> min(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns minimum of each component of x compared with the floating-point value y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> min(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns minimum of each component of x compared with the floating-point value y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> min(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns minimum of each component of x compared with the floating-point value y. (From GLSL 1.10.59 specification)

    template <typename T> T max(T x, T y); //!< \brief Returns y if x < y; otherwise, it returns x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> max(const detail::_xvec2<T>& x, T y); //!< \brief Returns y if x < y; otherwise, it returns x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> max(const detail::_xvec3<T>& x, T y); //!< \brief Returns y if x < y; otherwise, it returns x. (From GLSL 1.10.59 specification) 
    template <typename T> detail::_xvec4<T> max(const detail::_xvec4<T>& x, T y); //!< \brief Returns y if x < y; otherwise, it returns x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> max(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns maximum of each component of x compared with the floating-point value y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> max(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns maximum of each component of x compared with the floating-point value y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> max(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns maximum of each component of x compared with the floating-point value y. (From GLSL 1.10.59 specification)

    template <typename T> T clamp(T x, T minVal, T maxVal); //!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> clamp(const detail::_xvec2<T>& x, T minVal, T maxVal); //!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> clamp(const detail::_xvec3<T>& x, T minVal, T maxVal); //!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> clamp(const detail::_xvec4<T>& x, T minVal, T maxVal); //!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> clamp(const detail::_xvec2<T>& x, const detail::_xvec2<T>& minVal, const detail::_xvec2<T>& maxVal); //!< \brief Returns the component-wise result of min(max(x, minVal), maxVal). (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> clamp(const detail::_xvec3<T>& x, const detail::_xvec3<T>& minVal, const detail::_xvec3<T>& maxVal); //!< \brief Returns the component-wise result of min(max(x, minVal), maxVal). (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> clamp(const detail::_xvec4<T>& x, const detail::_xvec4<T>& minVal, const detail::_xvec4<T>& maxVal); //!< \brief Returns the component-wise result of min(max(x, minVal), maxVal). (From GLSL 1.10.59 specification)

	template <typename T, typename U> T mix(const T& x, const T& y, const U& a); // Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLSL 1.10.59 specification)
/*
    template <typename T> T mix(T x, T y, T a); //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLSL 1.10.59 specification)
    template <typename T> _xvec2<T> mix(const _xvec2<T>& x, const _xvec2<T>& y, T a); //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLSL 1.10.59 specification)
    template <typename T> _xvec3<T> mix(const _xvec3<T>& x, const _xvec3<T>& y, T a); //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLSL 1.10.59 specification)
    template <typename T> _xvec4<T> mix(const _xvec4<T>& x, const _xvec4<T>& y, T a); //!< \brief Returns x * (1.0 - a) + y * a, i.e., the linear blend of x and y using the floating-point value a. The value for a is not restricted to the range [0, 1]. (From GLSL 1.10.59 specification)
    template <typename T> _xvec2<T> mix(const _xvec2<T>& x, const _xvec2<T>& y, const _xvec2<T>& a); //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLSL 1.10.59 specification)
    template <typename T> _xvec3<T> mix(const _xvec3<T>& x, const _xvec3<T>& y, const _xvec3<T>& a); //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLSL 1.10.59 specification)
    template <typename T> _xvec4<T> mix(const _xvec4<T>& x, const _xvec4<T>& y, const _xvec4<T>& a); //!< \brief Returns the component-wise result of x * (1.0 - a) + y * a, i.e., the linear blend of x and y using vector a. The value for a is not restricted to the range [0, 1]. (From GLSL 1.10.59 specification)
*/
    template <typename T> T step(T edge, T x); //!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> step(T edge, const detail::_xvec2<T>& x); //!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> step(T edge, const detail::_xvec3<T>& x); //!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> step(T edge, const detail::_xvec4<T>& x); //!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> step(const detail::_xvec2<T>& edge, const detail::_xvec2<T>& x); //!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> step(const detail::_xvec3<T>& edge, const detail::_xvec3<T>& x); //!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> step(const detail::_xvec4<T>& edge, const detail::_xvec4<T>& x); //!< \brief Returns 0.0 if x <= edge; otherwise, it returns 1.0. (From GLSL 1.10.59 specification)

    template <typename T> T smoothstep(T edge0, T edge1, T x); //!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> smoothstep(T edge0, T edge1, const detail::_xvec2<T>& x); //!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLSL 1.10.59 specification) 
    template <typename T> detail::_xvec3<T> smoothstep(T edge0, T edge1, const detail::_xvec3<T>& x); //!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> smoothstep(T edge0, T edge1, const detail::_xvec4<T>& x); //!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> smoothstep(const detail::_xvec2<T>& edge0, const detail::_xvec2<T>& edge1, const detail::_xvec2<T>& x); //!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> smoothstep(const detail::_xvec3<T>& edge0, const detail::_xvec3<T>& edge1, const detail::_xvec3<T>& x); //!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> smoothstep(const detail::_xvec4<T>& edge0, const detail::_xvec4<T>& edge1, const detail::_xvec4<T>& x); //!< \brief Returns 0.0 if x <= edge0 and 1.0 if x >= edge1 and performs smooth Hermite interpolation between 0 and 1 when edge0 < x, edge1. (From GLSL 1.10.59 specification)

    ////////////////////////////////////////////////////////////////////////
    // Geometric Functions

    template <typename T> T length(T x); //!< \brief Returns the length of x, i.e., sqrt(x * x). (From GLSL 1.10.59 specification)
    template <typename T> T length(const detail::_xvec2<T>& x); //!< \brief Returns the length of x, i.e., sqrt(x[0] * x[0] + x[1] * x[1]). (From GLSL 1.10.59 specification)
    template <typename T> T length(const detail::_xvec3<T>& x); //!< \brief Returns the length of x, i.e., sqrt(x[0] * x[0] + x[1] * x[1] + x[2] * x[2]). (From GLSL 1.10.59 specification)
    template <typename T> T length(const detail::_xvec4<T>& x); //!< \brief Returns the length of x, i.e., sqrt(x[0] * x[0] + x[1] * x[1] + x[2] * x[2] + x[3] * x[3]). (From GLSL 1.10.59 specification)

    template <typename T> T distance(const T p0, const T p1); //!< \brief Returns the distance betwwen p0 and p1, i.e., length(p0 - p1). (From GLSL 1.10.59 specification)
    template <typename T> T distance(const detail::_xvec2<T>& p0, const detail::_xvec2<T>& p1); //!< \brief Returns the distance betwwen p0 and p1, i.e., length(p0 - p1). (From GLSL 1.10.59 specification)
    template <typename T> T distance(const detail::_xvec3<T>& p0, const detail::_xvec3<T>& p1); //!< \brief Returns the distance betwwen p0 and p1, i.e., length(p0 - p1). (From GLSL 1.10.59 specification)
    template <typename T> T distance(const detail::_xvec4<T>& p0, const detail::_xvec4<T>& p1); //!< \brief Returns the distance betwwen p0 and p1, i.e., length(p0 - p1). (From GLSL 1.10.59 specification)
	//template <typename genType> valType distance(const genType& p0, const genType& p1); //!< \brief Returns the distance betwwen p0 and p1, i.e., length(p0 - p1). (From GLSL 1.10.59 specification)

    template <typename T> T dot(T v1, T v2); //!< \brief Returns the dot product of x and y, i.e., result = x * y. (From GLSL 1.10.59 specification)
    template <typename T> T dot(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns the dot product of x and y, i.e., result = x[0] * y[0] + x[1] * y[1]. (From GLSL 1.10.59 specification)
    template <typename T> T dot(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns the dot product of x and y, i.e., result = x[0] * y[0] + x[1] * y[1] + x[2] * y[2]. (From GLSL 1.10.59 specification)
    template <typename T> T dot(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns the dot product of x and y, i.e., result = x[0] * y[0] + x[1] * y[1] + x[2] * y[2] + x[3] * y[3]. (From GLSL 1.10.59 specification)

    template <typename T> detail::_xvec3<T> cross(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< brief Returns the cross product of x and y. (From GLSL 1.10.59 specification)

	template <typename T> T normalize(T x); //!< \brief Returns a vector in the same direction as x but with length of 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> normalize(const detail::_xvec2<T>& x); //!< \brief Returns a vector in the same direction as x but with length of 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> normalize(const detail::_xvec3<T>& x); //!< \brief Returns a vector in the same direction as x but with length of 1. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> normalize(const detail::_xvec4<T>& x); //!< \brief Returns a vector in the same direction as x but with length of 1. (From GLSL 1.10.59 specification)

	//template <typename T, typename genType> genType faceforward(const genType& N, const genType& I, const genType& Nref); //!< \brief If dot(Nref, I) < 0.0, return N, otherwise, return -N. (From GLSL 1.10.59 specification) 
    template <typename T> T faceforward(T N, T I, T Nref); //!< \brief If dot(Nref, I) < 0.0, return N, otherwise, return -N. (From GLSL 1.10.59 specification) 
    template <typename T> detail::_xvec2<T> faceforward(const detail::_xvec2<T>& N, const detail::_xvec2<T>& I, const detail::_xvec2<T>& Nref); //!< \brief If dot(Nref, I) < 0.0, return N, otherwise, return -N. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> faceforward(const detail::_xvec3<T>& N, const detail::_xvec3<T>& I, const detail::_xvec3<T>& Nref); //!< \brief If dot(Nref, I) < 0.0, return N, otherwise, return -N. (From GLSL 1.10.59 specification) 
    template <typename T> detail::_xvec4<T> faceforward(const detail::_xvec4<T>& N, const detail::_xvec4<T>& I, const detail::_xvec4<T>& Nref); //!< \brief If dot(Nref, I) < 0.0, return N, otherwise, return -N. (From GLSL 1.10.59 specification) 
  
	//template <typename T, typename genType> genType reflect(const genType& I, const genType& N); //!< \brief For the incident vector I and surface orientation N, returns the reflection direction : result = I - 2.0 * dot(N, I) * N. (From GLSL 1.10.59 specification)
    template <typename T> T reflect(T I, T N); //!< \brief For the incident vector I and surface orientation N, returns the reflection direction : result = I - 2.0 * dot(N, I) * N. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> reflect(const detail::_xvec2<T>& I, const detail::_xvec2<T>& N); //!< \brief For the incident vector I and surface orientation N, returns the reflection direction : result = I - 2.0 * dot(N, I) * N. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> reflect(const detail::_xvec3<T>& I, const detail::_xvec3<T>& N); //!< \brief For the incident vector I and surface orientation N, returns the reflection direction : result = I - 2.0 * dot(N, I) * N. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> reflect(const detail::_xvec4<T>& I, const detail::_xvec4<T>& N); //!< \brief For the incident vector I and surface orientation N, returns the reflection direction : result = I - 2.0 * dot(N, I) * N. (From GLSL 1.10.59 specification)
  
    template <typename T> T refract(T I, T N, T eta); //!< \brief For the incident vector I and surface normal N, and the ratio of indices of refraction eta, return the refraction vector. (From GLSL 1.10.59 specification)  
    template <typename T> detail::_xvec2<T> refract(const detail::_xvec2<T>& I, const detail::_xvec2<T>& N, T eta); //!< \brief For the incident vector I and surface normal N, and the ratio of indices of refraction eta, return the refraction vector. (From GLSL 1.10.59 specification) 
    template <typename T> detail::_xvec3<T> refract(const detail::_xvec3<T>& I, const detail::_xvec3<T>& N, T eta); //!< \brief For the incident vector I and surface normal N, and the ratio of indices of refraction eta, return the refraction vector. (From GLSL 1.10.59 specification) 
    template <typename T> detail::_xvec4<T> refract(const detail::_xvec4<T>& I, const detail::_xvec4<T>& N, T eta); //!< \brief For the incident vector I and surface normal N, and the ratio of indices of refraction eta, return the refraction vector. (From GLSL 1.10.59 specification) 

    ////////////////////////////////////////////////////////////////////////
    // Matrix Functions

    template <typename T> detail::_xmat2<T> matrixCompMult(const detail::_xmat2<T>& x, const detail::_xmat2<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.10.59 specification)  
    template <typename T> detail::_xmat3<T> matrixCompMult(const detail::_xmat3<T>& x, const detail::_xmat3<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.10.59 specification)  
    template <typename T> detail::_xmat4<T> matrixCompMult(const detail::_xmat4<T>& x, const detail::_xmat4<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.10.59 specification)  
    template <typename T> detail::_xmat2x3<T> matrixCompMult(const detail::_xmat2x3<T>& x, const detail::_xmat2x3<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.20.6 specification)  
    template <typename T> detail::_xmat3x2<T> matrixCompMult(const detail::_xmat3x2<T>& x, const detail::_xmat3x2<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.20.6 specification)  
	template <typename T> detail::_xmat2x4<T> matrixCompMult(const detail::_xmat2x4<T>& x, const detail::_xmat2x4<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.20.6 specification)  
    template <typename T> detail::_xmat4x2<T> matrixCompMult(const detail::_xmat4x2<T>& x, const detail::_xmat4x2<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.20.6 specification)  
	template <typename T> detail::_xmat3x4<T> matrixCompMult(const detail::_xmat3x4<T>& x, const detail::_xmat3x4<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.20.6 specification)  
    template <typename T> detail::_xmat4x3<T> matrixCompMult(const detail::_xmat4x3<T>& x, const detail::_xmat4x3<T>& y); //!< \brief Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (From GLSL 1.20.6 specification)  

    template <typename T> detail::_xmat2<T> outerProduct(const detail::_xvec2<T>& c, const detail::_xvec2<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat3<T> outerProduct(const detail::_xvec3<T>& c, const detail::_xvec3<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat4<T> outerProduct(const detail::_xvec4<T>& c, const detail::_xvec4<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat2x3<T> outerProduct(const detail::_xvec3<T>& c, const detail::_xvec2<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat3x2<T> outerProduct(const detail::_xvec2<T>& c, const detail::_xvec3<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 
	template <typename T> detail::_xmat2x4<T> outerProduct(const detail::_xvec2<T>& c, const detail::_xvec4<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 
	template <typename T> detail::_xmat4x2<T> outerProduct(const detail::_xvec4<T>& c, const detail::_xvec2<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 
	template <typename T> detail::_xmat3x4<T> outerProduct(const detail::_xvec4<T>& c, const detail::_xvec3<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 
	template <typename T> detail::_xmat4x3<T> outerProduct(const detail::_xvec3<T>& c, const detail::_xvec4<T>& r); //!< \brief Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (From GLSL 1.20.6 specification) 

    template <typename T> detail::_xmat2<T> transpose(const detail::_xmat2<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat3<T> transpose(const detail::_xmat3<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat4<T> transpose(const detail::_xmat4<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat2x3<T> transpose(const detail::_xmat3x2<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat3x2<T> transpose(const detail::_xmat2x3<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat2x4<T> transpose(const detail::_xmat4x2<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat4x2<T> transpose(const detail::_xmat2x4<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat3x4<T> transpose(const detail::_xmat4x3<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 
    template <typename T> detail::_xmat4x3<T> transpose(const detail::_xmat3x4<T>& x); //!< Returns the transposed matrix of x (From GLSL 1.20.6 specification) 

    ////////////////////////////////////////////////////////////////////////
    // Vector Relational Functions

	template <typename T> detail::_bvec2 lessThan(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns the component-wise compare of x < y. (From GLSL 1.10.59 specification)  
    template <typename T> detail::_bvec3 lessThan(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns the component-wise compare of x < y. (From GLSL 1.10.59 specification)  
    template <typename T> detail::_bvec4 lessThan(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns the component-wise compare of x < y. (From GLSL 1.10.59 specification)

    template <typename T> detail::_bvec2 lessThanEqual(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns the component-wise compare of x <= y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec3 lessThanEqual(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns the component-wise compare of x <= y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec4 lessThanEqual(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns the component-wise compare of x <= y. (From GLSL 1.10.59 specification)

    template <typename T> detail::_bvec2 greaterThan(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns the component-wise compare of x > y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec3 greaterThan(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns the component-wise compare of x > y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec4 greaterThan(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns the component-wise compare of x > y. (From GLSL 1.10.59 specification)

    template <typename T> detail::_bvec2 greaterThanEqual(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns the component-wise compare of x >= y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec3 greaterThanEqual(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns the component-wise compare of x >= y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec4 greaterThanEqual(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns the component-wise compare of x >= y. (From GLSL 1.10.59 specification)

    detail::_bvec2 equal(const detail::_bvec2& x, const detail::_bvec2& y); //!< \brief Returns the component-wise compare of x == y. (From GLSL 1.10.59 specification)
    detail::_bvec3 equal(const detail::_bvec3& x, const detail::_bvec3& y); //!< \brief Returns the component-wise compare of x == y. (From GLSL 1.10.59 specification)
    detail::_bvec4 equal(const detail::_bvec4& x, const detail::_bvec4& y); //!< \brief Returns the component-wise compare of x == y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec2 equal(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns the component-wise compare of x == y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec3 equal(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns the component-wise compare of x == y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec4 equal(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns the component-wise compare of x == y. (From GLSL 1.10.59 specification)

    detail::_bvec2 notEqual(const detail::_bvec2& x, const detail::_bvec2& y); //!< \brief Returns the component-wise compare of x != y. (From GLSL 1.10.59 specification)
    detail::_bvec3 notEqual(const detail::_bvec3& x, const detail::_bvec3& y); //!< \brief Returns the component-wise compare of x != y. (From GLSL 1.10.59 specification)
    detail::_bvec4 notEqual(const detail::_bvec4& x, const detail::_bvec4& y); //!< \brief Returns the component-wise compare of x != y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec2 notEqual(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< \brief Returns the component-wise compare of x != y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec3 notEqual(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< \brief Returns the component-wise compare of x != y. (From GLSL 1.10.59 specification)
    template <typename T> detail::_bvec4 notEqual(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< \brief Returns the component-wise compare of x != y. (From GLSL 1.10.59 specification)

    bool any(const detail::_bvec2& x); //!< \brief Returns true if any component of x is true. (From GLSL 1.10.59 specification)
    bool any(const detail::_bvec3& x); //!< \brief Returns true if any component of x is true. (From GLSL 1.10.59 specification)
    bool any(const detail::_bvec4& x); //!< \brief Returns true if any component of x is true. (From GLSL 1.10.59 specification)

    bool all(const detail::_bvec2& x); //!< \brief Returns true if all component of x is true. (From GLSL 1.10.59 specification)
    bool all(const detail::_bvec3& x); //!< \brief Returns true if all component of x is true. (From GLSL 1.10.59 specification)
    bool all(const detail::_bvec4& x); //!< \brief Returns true if all component of x is true. (From GLSL 1.10.59 specification)

#if (defined(GLM_COMPILER) && GLM_COMPILER & GLM_COMPILER_VC) // VC compiler doesn't support the C++ key word 'not'
    bool not(bool x); //!< \brief Returns the component-wise logical complement of x. (From GLSL 1.10.59 specification)
    detail::_bvec2 not(const detail::_bvec2& v); //!< \brief Returns the component-wise logical complement of x. (From GLSL 1.10.59 specification)
    detail::_bvec3 not(const detail::_bvec3& v); //!< \brief Returns the component-wise logical complement of x. (From GLSL 1.10.59 specification)
    detail::_bvec4 not(const detail::_bvec4& v); //!< \brief Returns the component-wise logical complement of x. (From GLSL 1.10.59 specification)
#elif (defined(GLM_COMPILER) && GLM_COMPILER & GLM_COMPILER_GCC) // GCC
    detail::_bvec2 operator not(const detail::_bvec2& v); //!< \brief Returns the component-wise logical complement of x. (From GLSL 1.10.59 specification)
    detail::_bvec3 operator not(const detail::_bvec3& v); //!< \brief Returns the component-wise logical complement of x. (From GLSL 1.10.59 specification)
    detail::_bvec4 operator not(const detail::_bvec4& v); //!< \brief Returns the component-wise logical complement of x. (From GLSL 1.10.59 specification)
#endif

    ////////////////////////////////////////////////////////////////////////
    // Noise Functions

    template <typename T> T noise1(T x); //!< \brief Returns a 1D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> T noise1(const detail::_xvec2<T>& x); //!< \brief Returns a 1D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> T noise1(const detail::_xvec3<T>& x); //!< \brief Returns a 1D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> T noise1(const detail::_xvec4<T>& x); //!< \brief Returns a 1D noise value based on the input value x. (From GLSL 1.10.59 specification)

    template <typename T> detail::_xvec2<T> noise2(T x); //!< \brief Returns a 2D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> noise2(const detail::_xvec2<T>& x); //!< \brief Returns a 2D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> noise2(const detail::_xvec3<T>& x); //!< \brief Returns a 2D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec2<T> noise2(const detail::_xvec4<T>& x); //!< \brief Returns a 2D noise value based on the input value x. (From GLSL 1.10.59 specification)

    template <typename T> detail::_xvec3<T> noise3(T x); //!< \brief Returns a 3D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> noise3(const detail::_xvec2<T>& x); //!< \brief Returns a 3D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> noise3(const detail::_xvec3<T>& x); //!< \brief Returns a 3D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec3<T> noise3(const detail::_xvec4<T>& x); //!< \brief Returns a 3D noise value based on the input value x. (From GLSL 1.10.59 specification)

    template <typename T> detail::_xvec4<T> noise4(T x); //!< \brief Returns a 4D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> noise4(const detail::_xvec2<T>& x); //!< \brief Returns a 4D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> noise4(const detail::_xvec3<T>& x); //!< \brief Returns a 4D noise value based on the input value x. (From GLSL 1.10.59 specification)
    template <typename T> detail::_xvec4<T> noise4(const detail::_xvec4<T>& x); //!< \brief Returns a 4D noise value based on the input value x. (From GLSL 1.10.59 specification)
} //namespace glm

#endif //__glm_func__
