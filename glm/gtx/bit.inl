///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-14
// Updated : 2013-12-25
// Licence : This source is under MIT License
// File    : glm/gtx/bit.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "../detail/_vectorize.hpp"
#include <limits>

namespace glm
{
	// highestBitValue
	template <typename genType>
	GLM_FUNC_QUALIFIER genType highestBitValue
	(
		genType const & value
	)
	{
		genType tmp = value;
		genType result = genType(0);
		while(tmp)
		{
			result = (tmp & (~tmp + 1)); // grab lowest bit
			tmp &= ~result; // clear lowest bit
		}
		return result;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<int, P> highestBitValue
	(
		tvec2<T, P> const & value
	)
	{
		return tvec2<int, P>(
			highestBitValue(value[0]),
			highestBitValue(value[1]));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<int, P> highestBitValue
	(
		tvec3<T, P> const & value
	)
	{
		return tvec3<int, P>(
			highestBitValue(value[0]),
			highestBitValue(value[1]),
			highestBitValue(value[2]));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<int, P> highestBitValue
	(
		tvec4<T, P> const & value
	)
	{
		return tvec4<int, P>(
			highestBitValue(value[0]),
			highestBitValue(value[1]),
			highestBitValue(value[2]),
			highestBitValue(value[3]));
	}

	// isPowerOfTwo
	template <typename genType>
	GLM_FUNC_QUALIFIER bool isPowerOfTwo(genType const & Value)
	{
		//detail::If<std::numeric_limits<genType>::is_signed>::apply(abs, Value);
		//return !(Value & (Value - 1));

		// For old complier?
		genType Result = Value;
		if(std::numeric_limits<genType>::is_signed)
			Result = abs(Result);
		return !(Result & (Result - 1));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec2<bool, P> isPowerOfTwo
	(
		tvec2<T, P> const & value
	)
	{
		return tvec2<bool, P>(
			isPowerOfTwo(value[0]),
			isPowerOfTwo(value[1]));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec3<bool, P> isPowerOfTwo
	(
		tvec3<T, P> const & value
	)
	{
		return tvec3<bool, P>(
			isPowerOfTwo(value[0]),
			isPowerOfTwo(value[1]),
			isPowerOfTwo(value[2]));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<bool, P> isPowerOfTwo
	(
		tvec4<T, P> const & value
	)
	{
		return tvec4<bool, P>(
			isPowerOfTwo(value[0]),
			isPowerOfTwo(value[1]),
			isPowerOfTwo(value[2]),
			isPowerOfTwo(value[3]));
	}

	// powerOfTwoAbove
	template <typename genType>
	GLM_FUNC_QUALIFIER genType powerOfTwoAbove(genType const & value)
	{
		return isPowerOfTwo(value) ? value : highestBitValue(value) << 1;
	}

	VECTORIZE_VEC(powerOfTwoAbove)

	// powerOfTwoBelow
	template <typename genType>
	GLM_FUNC_QUALIFIER genType powerOfTwoBelow
	(
		genType const & value
	)
	{
		return isPowerOfTwo(value) ? value : highestBitValue(value);
	}

	VECTORIZE_VEC(powerOfTwoBelow)

	// powerOfTwoNearest
	template <typename genType>
	GLM_FUNC_QUALIFIER genType powerOfTwoNearest
	(
		genType const & value
	)
	{
		if(isPowerOfTwo(value))
			return value;

		genType prev = highestBitValue(value);
		genType next = prev << 1;
		return (next - value) < (value - prev) ? next : prev;
	}

	VECTORIZE_VEC(powerOfTwoNearest)

	template <typename genIUType>
	GLM_FUNC_QUALIFIER genIUType fillBitfieldWithOne
	(
		genIUType const & Value,
		int const & FromBit, 
		int const & ToBit
	)
	{
		assert(FromBit <= ToBit);
		assert(ToBit <= sizeof(genIUType) * std::size_t(8));

		genIUType Result = Value;
		for(signed i = 0; i <= ToBit; ++i)
			Result |= (1 << i);
		return Result;
	}

	template <typename genIUType>
	GLM_FUNC_QUALIFIER genIUType fillBitfieldWithZero
	(
		genIUType const & Value,
		int const & FromBit, 
		int const & ToBit
	)
	{
		assert(FromBit <= ToBit);
		assert(ToBit <= sizeof(genIUType) * std::size_t(8));

		genIUType Result = Value;
		for(signed i = 0; i <= ToBit; ++i)
			Result &= ~(1 << i);
		return Result;
	}
}//namespace glm
