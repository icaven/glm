///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-14
// Updated : 2007-03-14
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/bit.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_gpu_shader4
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_bit__
#define __glm_gtx_bit__

// Dependency:
#include "../../glm.h"
#include "../../ext/gtx/gpu_shader4.h"

namespace glm
{
	template <typename T> int highestBitGTX(const T value);                                             //!< \brief Find the highest bit set to 1 in a integer variable. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec2<int> highestBitGTX(const detail::_xvec2<T>& value);			//!< \brief Find the highest bit set to 1 in a integer variable. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec3<int> highestBitGTX(const detail::_xvec3<T>& value);			//!< \brief Find the highest bit set to 1 in a integer variable. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec4<int> highestBitGTX(const detail::_xvec4<T>& value);			//!< \brief Find the highest bit set to 1 in a integer variable. (From GLM_GTX_bit extension) 

	template <typename T> T highestBitValueGTX(const T value);											//!< \brief Find the highest bit set to 1 in a integer variable and return its value. (From GLM_GTX_bit extension)
	template <typename T> detail::_xvec2<int> highestBitValueGTX(const detail::_xvec2<T>& value);		//!< \brief Find the highest bit set to 1 in a integer variable and return its value. (From GLM_GTX_bit extension)
	template <typename T> detail::_xvec3<int> highestBitValueGTX(const detail::_xvec3<T>& value);		//!< \brief Find the highest bit set to 1 in a integer variable and return its value. (From GLM_GTX_bit extension)
	template <typename T> detail::_xvec4<int> highestBitValueGTX(const detail::_xvec4<T>& value);		//!< \brief Find the highest bit set to 1 in a integer variable and return its value. (From GLM_GTX_bit extension)

	template <typename T> bool isPowerOfTwoGTX(const T value);											//!< \brief Return true if the value is a power of two number. (From GLM_GTX_bit extension) 
	template <typename T> detail::_bvec2 isPowerOfTwoGTX(const detail::_xvec2<T>& value);				//!< \brief Return true if the value is a power of two number. (From GLM_GTX_bit extension) 
	template <typename T> detail::_bvec3 isPowerOfTwoGTX(const detail::_xvec3<T>& value);				//!< \brief Return true if the value is a power of two number. (From GLM_GTX_bit extension) 
	template <typename T> detail::_bvec4 isPowerOfTwoGTX(const detail::_xvec4<T>& value);				//!< \brief Return true if the value is a power of two number. (From GLM_GTX_bit extension) 

	template <typename T> T powerOfTwoAboveGTX(const T value);											//!< \brief Return the power of two number which value is just higher the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec2<T> powerOfTwoAboveGTX(const detail::_xvec2<T>& value);			//!< \brief Return the power of two number which value is just higher the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec3<T> powerOfTwoAboveGTX(const detail::_xvec3<T>& value);			//!< \brief Return the power of two number which value is just higher the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec4<T> powerOfTwoAboveGTX(const detail::_xvec4<T>& value);			//!< \brief Return the power of two number which value is just higher the input value. (From GLM_GTX_bit extension) 

	template <typename T> T powerOfTwoBelowGTX(const T value);											//!< \brief Return the power of two number which value is just lower the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec2<T> powerOfTwoBelowGTX(const detail::_xvec2<T>& value);			//!< \brief Return the power of two number which value is just lower the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec3<T> powerOfTwoBelowGTX(const detail::_xvec3<T>& value);			//!< \brief Return the power of two number which value is just lower the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec4<T> powerOfTwoBelowGTX(const detail::_xvec4<T>& value);			//!< \brief Return the power of two number which value is just lower the input value. (From GLM_GTX_bit extension) 

	template <typename T> T powerOfTwoNearestGTX(const T value);										//!< \brief Return the power of two number which value is the closet to the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec2<T> powerOfTwoNearestGTX(const detail::_xvec2<T>& value);		//!< \brief Return the power of two number which value is the closet to the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec3<T> powerOfTwoNearestGTX(const detail::_xvec3<T>& value);		//!< \brief Return the power of two number which value is the closet to the input value. (From GLM_GTX_bit extension) 
	template <typename T> detail::_xvec4<T> powerOfTwoNearestGTX(const detail::_xvec4<T>& value);		//!< \brief Return the power of two number which value is the closet to the input value. (From GLM_GTX_bit extension) 

	namespace gtx 
	{
		//! GLM_GTX_bit extension: Allow to perform bit operations on integer values
		namespace bit 
		{
			template <typename T> inline int highestBit(const T& value){return highestBitGTX(value);}				//!< \brief Find the highest bit set to 1 in a integer variable. (From GLM_GTX_bit extension) 
			template <typename T> inline T highestBitValue(const T& value){return highestBitValueGTX(value);}		//!< \brief Find the highest bit set to 1 in a integer variable and return its value. (From GLM_GTX_bit extension)
			template <typename T> inline bool isPowerOfTwo(const T& value){return isPowerOfTwoGTX(value);}			//!< \brief Return true if the value is a power of two number. (From GLM_GTX_bit extension) 
			template <typename T> inline T powerOfTwoAbove(const T& value){return powerOfTwoAboveGTX(value);}		//!< \brief Return the power of two number which value is just higher the input value. (From GLM_GTX_bit extension) 
			template <typename T> inline T powerOfTwoBelow(const T& value){return powerOfTwoBelowGTX(value);}		//!< \brief Return the power of two number which value is just lower the input value. (From GLM_GTX_bit extension) 
			template <typename T> inline T powerOfTwoNearest(const T& value){return powerOfTwoNearestGTX(value);}	//!< \brief Return the power of two number which value is the closet to the input value. (From GLM_GTX_bit extension) 
		}
	}
}

#define GLM_GTX_bit namespace gtx::bit

#include "bit.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_bit;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_bit__
