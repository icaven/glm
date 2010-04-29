///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-11-13
// Updated : 2007-08-20
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/gpu_shader4.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_round
// - GLM_GTX_half
// - GLM_GTX_double
// - GLM_GTX_integer
///////////////////////////////////////////////////////////////////////////////////////////////////
// ToDo:
// - Defined all the extensions
///////////////////////////////////////////////////////////////////////////////////////////////////
// Comment:
// This extension is based on GL_EXT_gpu_shader4 extension
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_gpu_shader4__
#define __glm_gtx_gpu_shader4__

// Dependency:
#include "../../glm.h"
#include "../../ext/gtx/round.h"
#include "../../ext/gtx/half.h"

namespace glm
{
    __halfGTX truncateGTX(__halfGTX x);										//!< \brief Computes the truncate value of x (from GLM_GTX_gpu_shader4 extension) 
    float truncateGTX(float x);												//!< \brief Computes the truncate value of x (from GLM_GTX_gpu_shader4 extension)
    double truncateGTX(double x);											//!< \brief Computes the truncate value of x (from GLM_GTX_gpu_shader4 extension)
    template <typename genType> genType truncateGTX(const genType& x);		//!< \brief Computes the component-wise truncate value of x (from GLM_GTX_gpu_shader4 extension)

    unsigned int powGTX(unsigned int x, unsigned int y);					//!< \brief Returns x raised to the y power. (from GLM_GTX_gpu_shader4 extension)
    unsigned int sqrtGTX(unsigned int x);									//!< \brief Returns the positive square root of x. (from GLM_GTX_gpu_shader4 extension)

	typedef detail::_xvec2<unsigned int>		__uvec2GTX;					//!< \brief Vector of 2 half-precision floating-point numbers. (From GLM_GTX_gpu_shader4 extension)
    typedef detail::_xvec3<unsigned int>		__uvec3GTX;					//!< \brief Vector of 3 half-precision floating-point numbers. (From GLM_GTX_gpu_shader4 extension)
    typedef detail::_xvec4<unsigned int>		__uvec4GTX;					//!< \brief Vector of 4 half-precision floating-point numbers. (From GLM_GTX_gpu_shader4 extension)

	namespace gtx
	{
		//! GLM_GTX_gpu_shader4 extension: Implementation of GL_EXT_gpu_shader4 for GLM
		namespace gpu_shader4
		{
			template <typename genType> genType truncate(const genType& x){return truncateGTX(x);}  //!< \brief Computes the component-wise truncate value of x (from GLM_GTX_gpu_shader4 extension)

			typedef detail::_xvec2<unsigned int>		uvec2;                                              //!< \brief Vector of 2 half-precision floating-point numbers. (From GLM_GTX_gpu_shader4 extension)
			typedef detail::_xvec3<unsigned int>		uvec3;                                              //!< \brief Vector of 3 half-precision floating-point numbers. (From GLM_GTX_gpu_shader4 extension)
			typedef detail::_xvec4<unsigned int>		uvec4;                                              //!< \brief Vector of 4 half-precision floating-point numbers. (From GLM_GTX_gpu_shader4 extension)

			// vec2 bit operators
			template <typename T> detail::_xvec2<T>& operator%=(detail::_xvec2<T>& r, const T s);							//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec2<T>& operator%=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v);          //!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec2<T>& operator&=(detail::_xvec2<T>& r, const T s);							//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator&=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v);          //!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator|=(detail::_xvec2<T>& r, const T s);							//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator|=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v);          //!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator^=(detail::_xvec2<T>& r, const T s);							//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator^=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v);          //!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator<<=(detail::_xvec2<T>& r, const T s);							//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator<<=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v);         //!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator>>=(detail::_xvec2<T>& r, const T s);							//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T>& operator>>=(detail::_xvec2<T>& r, const detail::_xvec2<T>& v);         //!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)

			template <typename T> detail::_xvec2<T> operator% (const detail::_xvec2<T>& v, const T s);						//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec2<T> operator% (const T s, const detail::_xvec2<T>& v);						//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec2<T> operator% (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2);   //!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec2<T> operator& (const detail::_xvec2<T>& v, const T s);						//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator& (const T s, const detail::_xvec2<T>& v);						//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator& (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2);   //!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
 			template <typename T> detail::_xvec2<T> operator| (const detail::_xvec2<T>& v, const T s);						//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator| (const T s, const detail::_xvec2<T>& v);						//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
 			template <typename T> detail::_xvec2<T> operator| (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2);   //!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator^ (const detail::_xvec2<T>& v, const T s);						//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator^ (const T s, const detail::_xvec2<T>& v);						//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator^ (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2);   //!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator<< (const detail::_xvec2<T>& v, const T s);						//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator<< (const T s, const detail::_xvec2<T>& v);						//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator<< (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2);  //!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec2<T> operator>> (const detail::_xvec2<T>& v, const T s);						//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec2<T> operator>> (const T s, const detail::_xvec2<T>& v);						//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec2<T> operator>> (const detail::_xvec2<T>& v1, const detail::_xvec2<T>& v2);  //!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> const detail::_xvec2<T> operator~ (const detail::_xvec2<T>& v);

			// vec3 bit operators
			template <typename T> detail::_xvec3<T>& operator%=(detail::_xvec3<T>& r, const T s);							//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec3<T>& operator%=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v);          //!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec3<T>& operator&=(detail::_xvec3<T>& r, const T s);							//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T>& operator&=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v);          //!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T>& operator|=(detail::_xvec3<T>& r, const T s);							//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T>& operator|=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v);          //!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T>& operator^=(detail::_xvec3<T>& r, const T s);							//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T>& operator^=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v);          //!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T>& operator<<=(detail::_xvec3<T>& r, const T s);							//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T>& operator<<=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v);         //!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T>& operator>>=(detail::_xvec3<T>& r, const T s);							//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec3<T>& operator>>=(detail::_xvec3<T>& r, const detail::_xvec3<T>& v);         //!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)

			template <typename T> detail::_xvec3<T> operator% (const detail::_xvec3<T>& v, const T s);						//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec3<T> operator% (const T s, const detail::_xvec3<T>& v);						//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec3<T> operator% (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2);   //!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec3<T> operator& (const detail::_xvec3<T>& v, const T s);						//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator& (const T s, const detail::_xvec3<T>& v);						//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator& (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2);   //!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator| (const detail::_xvec3<T>& v, const T s);						//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator| (const T s, const detail::_xvec3<T>& v);						//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator| (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2);   //!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator^ (const detail::_xvec3<T>& v, const T s);						//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator^ (const T s, const detail::_xvec3<T>& v);						//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator^ (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2);   //!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator<< (const detail::_xvec3<T>& v, const T s);						//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator<< (const T s, const detail::_xvec3<T>& v);						//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator<< (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2);  //!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec3<T> operator>> (const detail::_xvec3<T>& v, const T s);						//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec3<T> operator>> (const T s, const detail::_xvec3<T>& v);						//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec3<T> operator>> (const detail::_xvec3<T>& v1, const detail::_xvec3<T>& v2);  //!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> const detail::_xvec3<T> operator~ (const detail::_xvec3<T>& v);							//!< \brief bitwise negation operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)

			// vec4 bit operators
			template <typename T> detail::_xvec4<T>& operator%=(detail::_xvec4<T>& r, const T s);							//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec4<T>& operator%=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v);			//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec4<T>& operator&=(detail::_xvec4<T>& r, const T s);							//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T>& operator&=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v);          //!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T>& operator|=(detail::_xvec4<T>& r, const T s);							//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T>& operator|=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v);          //!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T>& operator^=(detail::_xvec4<T>& r, const T s);							//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T>& operator^=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v);          //!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T>& operator<<=(detail::_xvec4<T>& r, const T s);							//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T>& operator<<=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v);         //!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T>& operator>>=(detail::_xvec4<T>& r, const T s);							//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec4<T>& operator>>=(detail::_xvec4<T>& r, const detail::_xvec4<T>& v);         //!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)

			template <typename T> detail::_xvec4<T> operator% (const detail::_xvec4<T>& v, const T s);						//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec4<T> operator% (const T s, const detail::_xvec4<T>& v);						//!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec4<T> operator% (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2);   //!< \brief Modulus operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec4<T> operator& (const detail::_xvec4<T>& v, const T s);						//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator& (const T s, const detail::_xvec4<T>& v);						//!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator& (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2);   //!< \brief bitwise AND operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator| (const detail::_xvec4<T>& v, const T s);						//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator| (const T s, const detail::_xvec4<T>& v);						//!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator| (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2);   //!< \brief bitwise inclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator^ (const detail::_xvec4<T>& v, const T s);						//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator^ (const T s, const detail::_xvec4<T>& v);						//!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator^ (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2);   //!< \brief bitwise exclusive OR operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator<< (const detail::_xvec4<T>& v, const T s);						//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator<< (const T s, const detail::_xvec4<T>& v);						//!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator<< (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2);  //!< \brief bitwise left shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension) 
			template <typename T> detail::_xvec4<T> operator>> (const detail::_xvec4<T>& v, const T s);						//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec4<T> operator>> (const T s, const detail::_xvec4<T>& v);						//!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> detail::_xvec4<T> operator>> (const detail::_xvec4<T>& v1, const detail::_xvec4<T>& v2);  //!< \brief bitwise right shift operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
			template <typename T> const detail::_xvec4<T> operator~ (const detail::_xvec4<T>& v);							//!< \brief bitwise negation operator for integer vectors. (From GLM_GTX_gpu_shader4 extension)
		}
	}
}

#define GLM_GTX_gpu_shader4 namespace gtx::gpu_shader4

#include "gpu_shader4.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_gpu_shader4;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_gpu_shader4__
