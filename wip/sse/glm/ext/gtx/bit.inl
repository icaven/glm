///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-14
// Updated : 2007-03-14
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/bit.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_bit_inl__
#define __glm_gtx_bit_inl__

namespace glm
{
	// highestBitGTX
	template <typename T>
	inline int highestBitGTX(const T value)
	{
		T bit = -1;
		for(T tmp = value; tmp; tmp >>= 1, ++bit);
		return bit;
	}

	template <> 
	inline int highestBitGTX<int>(const int value)
	{
		int bit = -1;
		for(int tmp = value; tmp; tmp >>= 1, ++bit);
		return bit;
	}

	template <typename T>
	inline detail::_xvec2<int> highestBitGTX(const detail::_xvec2<T>& value)
	{
		return detail::_xvec2<int>(
			highestBitGTX(value[0]),
			highestBitGTX(value[1]));
	}

	template <typename T>
	inline detail::_xvec3<int> highestBitGTX(const detail::_xvec3<T>& value)
	{
		return detail::_xvec3<int>(
			highestBitGTX(value[0]),
			highestBitGTX(value[1]),
			highestBitGTX(value[2]));
	}

	template <typename T>
	inline detail::_xvec4<int> highestBitGTX(const detail::_xvec4<T>& value)
	{
		return detail::_xvec4<int>(
			highestBitGTX(value[0]),
			highestBitGTX(value[1]),
			highestBitGTX(value[2]),
			highestBitGTX(value[3]));
	}

	// highestBitValueGTX
	template <typename T>
	inline T highestBitValueGTX(const T value)
	{
		T tmp = value;
		T result = T(0);
		while(tmp)
		{
			result = (tmp & (~tmp + 1)); // grab lowest bit
			tmp &= ~result; // clear lowest bit
		}
		return result;
	}

	template <typename T>
	inline detail::_xvec2<int> highestBitValueGTX(const detail::_xvec2<T>& value)
	{
		return detail::_xvec2<int>(
			highestBitValueGTX(value[0]),
			highestBitValueGTX(value[1]));
	}

	template <typename T>
	inline detail::_xvec3<int> highestBitValueGTX(const detail::_xvec3<T>& value)
	{
		return detail::_xvec3<int>(
			highestBitValueGTX(value[0]),
			highestBitValueGTX(value[1]),
			highestBitValueGTX(value[2]));
	}

	template <typename T>
	inline detail::_xvec4<int> highestBitValueGTX(const detail::_xvec4<T>& value)
	{
		return detail::_xvec4<int>(
			highestBitValueGTX(value[0]),
			highestBitValueGTX(value[1]),
			highestBitValueGTX(value[2]),
			highestBitValueGTX(value[3]));
	}

	// isPowerOfTwoGTX
	template <typename T>
	inline bool isPowerOfTwoGTX(const T value)
	{
		return !(value & (value - 1));
	}

	template <typename T>
	inline detail::_bvec2 isPowerOfTwoGTX(const detail::_xvec2<T>& value)
	{
		return detail::_bvec2(
			isPowerOfTwoGTX(value[0]),
			isPowerOfTwoGTX(value[1]));
	}

	template <typename T>
	inline detail::_bvec3 isPowerOfTwoGTX(const detail::_xvec3<T>& value)
	{
		return detail::_bvec3(
			isPowerOfTwoGTX(value[0]),
			isPowerOfTwoGTX(value[1]),
			isPowerOfTwoGTX(value[2]));
	}

	template <typename T>
	inline detail::_bvec4 isPowerOfTwoGTX(const detail::_xvec4<T>& value)
	{
		return detail::_bvec4(
			isPowerOfTwoGTX(value[0]),
			isPowerOfTwoGTX(value[1]),
			isPowerOfTwoGTX(value[2]),
			isPowerOfTwoGTX(value[3]));
	}

	// powerOfTwoAboveGTX
	template <typename T>
	inline T powerOfTwoAboveGTX(const T value)
	{
		return isPowerOfTwoGTX(value) ? value : highestBitValueGTX(value) << 1;
	}

	template <typename T>
	inline detail::_xvec2<T> powerOfTwoAboveGTX(const detail::_xvec2<T>& value)
	{
		return detail::_xvec2<T>(
			powerOfTwoAboveGTX(value[0]),
			powerOfTwoAboveGTX(value[1]));
	}

	template <typename T>
	inline detail::_xvec3<T> powerOfTwoAboveGTX(const detail::_xvec3<T>& value)
	{
		return detail::_xvec3<T>(
			powerOfTwoAboveGTX(value[0]),
			powerOfTwoAboveGTX(value[1]),
			powerOfTwoAboveGTX(value[2]));
	}

	template <typename T>
	inline detail::_xvec4<T> powerOfTwoAboveGTX(const detail::_xvec4<T>& value)
	{
		return detail::_xvec4<T>(
			powerOfTwoAboveGTX(value[0]),
			powerOfTwoAboveGTX(value[1]),
			powerOfTwoAboveGTX(value[2]),
			powerOfTwoAboveGTX(value[3]));
	}

	// powerOfTwoBelowGTX
	template <typename T>
	inline T powerOfTwoBelowGTX(const T value)
	{
		return isPowerOfTwoGTX(value) ? value : highestBitValueGTX(value);
	}

	template <typename T>
	inline detail::_xvec2<T> powerOfTwoBelowGTX(const detail::_xvec2<T>& value)
	{
		return detail::_xvec2<T>(
			powerOfTwoBelowGTX(value[0]),
			powerOfTwoBelowGTX(value[1]));
	}

	template <typename T>
	inline detail::_xvec3<T> powerOfTwoBelowGTX(const detail::_xvec3<T>& value)
	{
		return detail::_xvec3<T>(
			powerOfTwoBelowGTX(value[0]),
			powerOfTwoBelowGTX(value[1]),
			powerOfTwoBelowGTX(value[2]));
	}

	template <typename T>
	inline detail::_xvec4<T> powerOfTwoBelowGTX(const detail::_xvec4<T>& value)
	{
		return detail::_xvec4<T>(
			powerOfTwoBelowGTX(value[0]),
			powerOfTwoBelowGTX(value[1]),
			powerOfTwoBelowGTX(value[2]),
			powerOfTwoBelowGTX(value[3]));
	}

	// powerOfTwoNearestGTX
	template <typename T>
	inline T powerOfTwoNearestGTX(const T value)
	{
		if(isPowerOfTwoGTX(value)) 
			return value;

		T prev = highestBitValueGTX(value);
		T next = prev << 1;
		return (next - value) < (value - prev) ? next : prev;
	}

	template <typename T>
	inline detail::_xvec2<T> powerOfTwoNearestGTX(const detail::_xvec2<T>& value)
	{
		return detail::_xvec2<T>(
			powerOfTwoNearestGTX(value[0]),
			powerOfTwoNearestGTX(value[1]));
	}

	template <typename T>
	inline detail::_xvec3<T> powerOfTwoNearestGTX(const detail::_xvec3<T>& value)
	{
		return detail::_xvec3<T>(
			powerOfTwoNearestGTX(value[0]),
			powerOfTwoNearestGTX(value[1]),
			powerOfTwoNearestGTX(value[2]));
	}

	template <typename T>
	inline detail::_xvec4<T> powerOfTwoNearestGTX(const detail::_xvec4<T>& value)
	{
		return detail::_xvec4<T>(
			powerOfTwoNearestGTX(value[0]),
			powerOfTwoNearestGTX(value[1]),
			powerOfTwoNearestGTX(value[2]),
			powerOfTwoNearestGTX(value[3]));
	}
}

#endif//__glm_gtx_bit_inl__
