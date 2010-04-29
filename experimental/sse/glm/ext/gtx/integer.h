///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-24
// Updated : 2006-11-14
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/integer.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_integer__
#define __glm_gtx_integer__

// Dependency:
#include "../../glm.h"

namespace glm
{
    int absGTX(int x);                                                                                                  //!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLM_GTX_integer extension)
    template <typename T> T absGTX(T x);                                                                                //!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> absGTX(const detail::_xvec2<T>& x);											//!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> absGTX(const detail::_xvec3<T>& x);											//!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> absGTX(const detail::_xvec4<T>& x);											//!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLM_GTX_integer extension)

    template <typename genType> genType signGTX(const genType& x);                                                      //!< \brief Returns 1.0 if x > 0, 0.0 if x = 0, or -1.0 if x < 0. (From GLM_GTX_integer extension)
	
    template <typename T> T minGTX(T x, T y);                                                                           //!< \brief Returns y if y < x; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, T y);									//!< \brief Returns y if y < x; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, T y);									//!< \brief Returns y if y < x; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, T y);									//!< \brief Returns y if y < x; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);				//!< \brief Returns y if y < x; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);				//!< \brief Returns y if y < x; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);				//!< \brief Returns y if y < x; otherwise, it returns x. (From GLM_GTX_integer extension)

    template <typename T> T maxGTX(T x, T y);                                                                           //!< \brief Returns y if x < y; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, T y);									//!< \brief Returns y if x < y; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, T y);									//!< \brief Returns y if x < y; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, T y);									//!< \brief Returns y if x < y; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);				//!< \brief Returns y if x < y; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);				//!< \brief Returns y if x < y; otherwise, it returns x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);				//!< \brief Returns y if x < y; otherwise, it returns x. (From GLM_GTX_integer extension)

    template <typename T> T clampGTX(T x, T minVal, T maxVal);																							//!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> clampGTX(const detail::_xvec2<T>& x, T minVal, T maxVal);													//!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> clampGTX(const detail::_xvec3<T>& x, T minVal, T maxVal);													//!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> clampGTX(const detail::_xvec4<T>& x, T minVal, T maxVal);													//!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> clampGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& minVal, const detail::_xvec2<T>& maxVal);     //!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> clampGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& minVal, const detail::_xvec3<T>& maxVal);     //!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> clampGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& minVal, const detail::_xvec4<T>& maxVal);     //!< \brief Returns min(max(x, minVal), maxVal) for each component in x using the floating-point values minVal and maxVal. (From GLM_GTX_integer extension)

    int powGTX(int x, int y);                                                                                           //!< \brief Returns x raised to the y power. (From GLM_GTX_integer extension)
    template <typename T> T powGTX(T x, T y);                                                                           //!< \brief Returns x raised to the y power. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> powGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);				//!< \brief Returns x raised to the y power. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> powGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);				//!< \brief Returns x raised to the y power. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> powGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);				//!< \brief Returns x raised to the y power. (From GLM_GTX_integer extension)

    int sqrtGTX(int x);                                                                                                 //!< \brief Returns the positive square root of x. (From GLM_GTX_integer extension)
    template <typename T> T sqrtGTX(T x);                                                                               //!< \brief Returns the positive square root of x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> sqrtGTX(const detail::_xvec2<T>& x);										//!< \brief Returns the positive square root of x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> sqrtGTX(const detail::_xvec3<T>& x);										//!< \brief Returns the positive square root of x. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> sqrtGTX(const detail::_xvec4<T>& x);										//!< \brief Returns the positive square root of x. (From GLM_GTX_integer extension)

	int modGTX(int x, int y);                                                                                           //!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)
    //template <typename T> T modGTX(T x, T y);                                                                         //!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> modGTX(const detail::_xvec2<T>& x, T y);									//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> modGTX(const detail::_xvec3<T>& x, T y);									//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> modGTX(const detail::_xvec4<T>& x, T y);									//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec2<T> modGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);				//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec3<T> modGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);				//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)
    template <typename T> detail::_xvec4<T> modGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);				//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)

    template <typename T> T factorialGTX(T x);                                                                          //!< \brief Return the factorial value of a number (!12 max, integer only)
    template <typename T> detail::_xvec2<T> factorialGTX(const detail::_xvec2<T>& x);									//!< \brief Return the factorial value of a number (!12 max, integer only)
    template <typename T> detail::_xvec3<T> factorialGTX(const detail::_xvec3<T>& x);									//!< \brief Return the factorial value of a number (!12 max, integer only)
    template <typename T> detail::_xvec4<T> factorialGTX(const detail::_xvec4<T>& x);									//!< \brief Return the factorial value of a number (!12 max, integer only)

	namespace gtx
	{
		//! GLM_GTX_integer extension: Add support for integer for core functions
		namespace integer
		{
			inline int abs(int x);																							//!< \brief Returns x if x >= 0; otherwise, it returns -x. (From GLM_GTX_integer extension)
			inline int pow(int x, int y){return powGTX(x, y);}																//!< \brief Returns x raised to the y power. (From GLM_GTX_integer extension)
			inline int sqrt(int x){return sqrtGTX(x);}																		//!< \brief Returns the positive square root of x. (From GLM_GTX_integer extension)
			inline int mod(int x, int y){return modGTX(x, y);}																//!< \brief Modulus. Returns x - y * floor(x / y) for each component in x using the floating point value y. (From GLM_GTX_integer extension)
			template <typename T> inline T factorial(T x){return factorialGTX(x);}											//!< \brief Return the factorial value of a number (!12 max, integer only)
			template <typename T> inline detail::_xvec2<T> factorial(const detail::_xvec2<T>& x){return factorialGTX(x);}	//!< \brief Return the factorial value of a number (!12 max, integer only)
			template <typename T> inline detail::_xvec3<T> factorial(const detail::_xvec3<T>& x){return factorialGTX(x);}	//!< \brief Return the factorial value of a number (!12 max, integer only)
			template <typename T> inline detail::_xvec4<T> factorial(const detail::_xvec4<T>& x){return factorialGTX(x);}	//!< \brief Return the factorial value of a number (!12 max, integer only)
		}
	}
}

#define GLM_GTX_integer namespace gtx::integer

#include "integer.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_integer;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_integer__
