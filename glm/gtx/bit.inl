///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2012 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-14
// Updated : 2008-11-14
// Licence : This source is under MIT License
// File    : glm/gtx/bit.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename genIType>
	GLM_FUNC_QUALIFIER genIType mask
	(
		genIType const & count
	)
	{
		return ((genIType(1) << (count)) - genIType(1));
	}

	VECTORIZE_VEC(mask)

	// extractField
	template <typename genIType>
	GLM_FUNC_QUALIFIER genIType extractField
	(
		half const & value, 
		genIType const & first, 
		genIType const & count
	)
	{
		assert(first + count < sizeof(half));
		return (value._data() << first) >> ((sizeof(half) << 3) - count);
	}

	template <typename genIType>
	GLM_FUNC_QUALIFIER genIType extractField
	(
		float const & value, 
		genIType const & first, 
		genIType const & count
	)
	{
		assert(first + count < sizeof(float));
		return (detail::uif32(value).i << first) >> ((sizeof(float) << 3) - count);
	}

	template <typename genIType>
	GLM_FUNC_QUALIFIER genIType extractField
	(
		double const & value, 
		genIType const & first, 
		genIType const & count
	)
	{
		assert(first + count < sizeof(double));
		return (detail::uif64(value).i << first) >> ((sizeof(double) << genIType(3)) - count);
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER genIUType extractField
	(
		genIUType const & Value, 
		sizeType const & First, 
		sizeType const & Count
	)
	{
		sizeType GenSize = sizeof(genIUType) << 3;

		assert(First + Count <= GenSize);

		genIUType ShiftLeft = Count ? Value << (GenSize - (Count + First)) : 0;
		genIUType ShiftBack = ShiftLeft >> genIUType(GenSize - Count);

		return ShiftBack;
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec2<genIUType> extractField
	(
		detail::tvec2<genIUType> const & value, 
		sizeType const & first, 
		sizeType const & count
	)
	{
		return detail::tvec2<genIUType>(
			extractField(value[0], first, count),
			extractField(value[1], first, count));
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec3<genIUType> extractField
	(
		detail::tvec3<genIUType> const & value, 
		sizeType const & first, 
		sizeType const & count
	)
	{
		return detail::tvec3<genIUType>(
			extractField(value[0], first, count),
			extractField(value[1], first, count),
			extractField(value[2], first, count));
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec4<genIUType> extractField
	(
		detail::tvec4<genIUType> const & value, 
		sizeType const & first, 
		sizeType const & count
	)
	{
		return detail::tvec4<genIUType>(
			extractField(value[0], first, count),
			extractField(value[1], first, count),
			extractField(value[2], first, count),
			extractField(value[3], first, count));
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec2<genIUType> extractField
	(
		detail::tvec2<genIUType> const & value, 
		detail::tvec2<sizeType> const & first, 
		detail::tvec2<sizeType> const & count
	)
	{
		return detail::tvec2<genIUType>(
			extractField(value[0], first[0], count[0]),
			extractField(value[1], first[1], count[1]));
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec3<genIUType> extractField
	(
		detail::tvec3<genIUType> const & value, 
		detail::tvec3<sizeType> const & first, 
		detail::tvec3<sizeType> const & count
	)
	{
		return detail::tvec3<genIUType>(
			extractField(value[0], first[0], count[0]),
			extractField(value[1], first[1], count[1]),
			extractField(value[2], first[2], count[2]));
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec4<genIUType> extractField
	(
		detail::tvec4<genIUType> const & value, 
		detail::tvec4<sizeType> const & first, 
		detail::tvec4<sizeType> const & count
	)
	{
		return detail::tvec4<genIUType>(
			extractField(value[0], first[0], count[0]),
			extractField(value[1], first[1], count[1]),
			extractField(value[2], first[2], count[2]),
			extractField(value[3], first[3], count[3]));
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec2<genIUType> extractField
	(
		genIUType const & value, 
		detail::tvec2<sizeType> const & first, 
		detail::tvec2<sizeType> const & count
	)
	{
		return detail::tvec2<genIUType>(
			extractField(value, first[0], count[0]),
			extractField(value, first[1], count[1]));
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec3<genIUType> extractField
	(
		genIUType const & value, 
		detail::tvec3<sizeType> const & first, 
		detail::tvec3<sizeType> const & count
	)
	{
		return detail::tvec3<genIUType>(
			extractField(value, first[0], count[0]),
			extractField(value, first[1], count[1]),
			extractField(value, first[2], count[2]));
	}

	template <typename genIUType, typename sizeType>
	GLM_FUNC_QUALIFIER detail::tvec4<genIUType> extractField
	(
		genIUType const & value, 
		detail::tvec4<sizeType> const & first, 
		detail::tvec4<sizeType> const & count
	)
	{
		return detail::tvec4<genIUType>(
			extractField(value, first[0], count[0]),
			extractField(value, first[1], count[1]),
			extractField(value, first[2], count[2]),
			extractField(value, first[3], count[3]));
	}

	// lowestBit
	template <typename genType>
	GLM_FUNC_QUALIFIER int lowestBit
	(
		genType const & Value
	)
	{
		assert(Value != genType(0)); // not valid call

		genType Bit;
		for(Bit = genType(0); !(Value & (1 << Bit)); ++Bit){}
		return Bit;
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec2<int> lowestBit
	(
		detail::tvec2<valType> const & value
	)
	{
		return detail::tvec2<int>(
			lowestBit(value[0]),
			lowestBit(value[1]));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec3<int> lowestBit
	(
		detail::tvec3<valType> const & value
	)
	{
		return detail::tvec3<int>(
			lowestBit(value[0]),
			lowestBit(value[1]),
			lowestBit(value[2]));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec4<int> lowestBit
	(
		detail::tvec4<valType> const & value
	)
	{
		return detail::tvec4<int>(
			lowestBit(value[0]),
			lowestBit(value[1]),
			lowestBit(value[2]),
			lowestBit(value[3]));
	}

	// highestBit
	template <typename genType>
	GLM_FUNC_QUALIFIER int highestBit
	(
		genType const & value
	)
	{
		assert(value != genType(0)); // not valid call

		genType bit = genType(-1);
		for(genType tmp = value; tmp; tmp >>= 1, ++bit){}
		return bit;
	}

	//template <>
	//GLM_FUNC_QUALIFIER int highestBit<int>
	//(
	//	int value
	//)
	//{
	//	int bit = -1;
	//	for(int tmp = value; tmp; tmp >>= 1, ++bit);
	//	return bit;
	//}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec2<int> highestBit
	(
		detail::tvec2<valType> const & value
	)
	{
		return detail::tvec2<int>(
			highestBit(value[0]),
			highestBit(value[1]));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec3<int> highestBit
	(
		detail::tvec3<valType> const & value
	)
	{
		return detail::tvec3<int>(
			highestBit(value[0]),
			highestBit(value[1]),
			highestBit(value[2]));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec4<int> highestBit
	(
		detail::tvec4<valType> const & value
	)
	{
		return detail::tvec4<int>(
			highestBit(value[0]),
			highestBit(value[1]),
			highestBit(value[2]),
			highestBit(value[3]));
	}

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

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec2<int> highestBitValue
	(
		detail::tvec2<valType> const & value
	)
	{
		return detail::tvec2<int>(
			highestBitValue(value[0]),
			highestBitValue(value[1]));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec3<int> highestBitValue
	(
		detail::tvec3<valType> const & value
	)
	{
		return detail::tvec3<int>(
			highestBitValue(value[0]),
			highestBitValue(value[1]),
			highestBitValue(value[2]));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec4<int> highestBitValue
	(
		detail::tvec4<valType> const & value
	)
	{
		return detail::tvec4<int>(
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

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec2<bool> isPowerOfTwo
	(
		detail::tvec2<valType> const & value
	)
	{
		return detail::tvec2<bool>(
			isPowerOfTwo(value[0]),
			isPowerOfTwo(value[1]));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec3<bool> isPowerOfTwo
	(
		detail::tvec3<valType> const & value
	)
	{
		return detail::tvec3<bool>(
			isPowerOfTwo(value[0]),
			isPowerOfTwo(value[1]),
			isPowerOfTwo(value[2]));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec4<bool> isPowerOfTwo
	(
		detail::tvec4<valType> const & value
	)
	{
		return detail::tvec4<bool>(
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

	template <typename genType>
	GLM_FUNC_QUALIFIER genType bitRevert(genType const & In)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_integer, "'bitRevert' only accept integer values");

		genType Out = 0;
		std::size_t BitSize = sizeof(genType) * 8;
		for(std::size_t i = 0; i < BitSize; ++i)
			if(In & (genType(1) << i))
				Out |= genType(1) << (BitSize - 1 - i);
		return Out;
	}

	VECTORIZE_VEC(bitRevert)

	template <typename genType>
	GLM_FUNC_QUALIFIER genType bitRotateRight(genType const & In, std::size_t Shift)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_integer, "'bitRotateRight' only accept integer values");

		std::size_t BitSize = sizeof(genType) * 8;
		return (In << Shift) | (In >> (BitSize - Shift));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec2<valType> bitRotateRight
	(
		detail::tvec2<valType> const & Value, 
		std::size_t Shift
	)
	{
		return detail::tvec2<valType>(
			bitRotateRight(Value[0], Shift),
			bitRotateRight(Value[1], Shift));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec3<valType> bitRotateRight
	(
		detail::tvec3<valType> const & Value, 
		std::size_t Shift
	)
	{
		return detail::tvec3<valType>(
			bitRotateRight(Value[0], Shift),
			bitRotateRight(Value[1], Shift),
			bitRotateRight(Value[2], Shift));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec4<valType> bitRotateRight
	(
		detail::tvec4<valType> const & Value, 
		std::size_t Shift
	)
	{
		return detail::tvec4<valType>(
			bitRotateRight(Value[0], Shift),
			bitRotateRight(Value[1], Shift),
			bitRotateRight(Value[2], Shift),
			bitRotateRight(Value[3], Shift));
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType bitRotateLeft(genType const & In, std::size_t Shift)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_integer, "'bitRotateLeft' only accept integer values");

		std::size_t BitSize = sizeof(genType) * 8;
		return (In >> Shift) | (In << (BitSize - Shift));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec2<valType> bitRotateLeft
	(
		detail::tvec2<valType> const & Value, 
		std::size_t Shift
	)
	{
		return detail::tvec2<valType>(
			bitRotateLeft(Value[0], Shift),
			bitRotateLeft(Value[1], Shift));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec3<valType> bitRotateLeft
	(
		detail::tvec3<valType> const & Value, 
		std::size_t Shift
	)
	{
		return detail::tvec3<valType>(
			bitRotateLeft(Value[0], Shift),
			bitRotateLeft(Value[1], Shift),
			bitRotateLeft(Value[2], Shift));
	}

	template <typename valType>
	GLM_FUNC_QUALIFIER detail::tvec4<valType> bitRotateLeft
	(
		detail::tvec4<valType> const & Value, 
		std::size_t Shift
	)
	{
		return detail::tvec4<valType>(
			bitRotateLeft(Value[0], Shift),
			bitRotateLeft(Value[1], Shift),
			bitRotateLeft(Value[2], Shift),
			bitRotateLeft(Value[3], Shift));
	}

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
		for(std::size_t i = 0; i <= ToBit; ++i)
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
		for(std::size_t i = 0; i <= ToBit; ++i)
			Result &= ~(1 << i);
		return Result;
	}

	namespace detail
	{
		template <typename PARAM, typename RET>
		inline RET bitfieldInterleave(PARAM x, PARAM y)
		{
			RET Result = 0; 
			for (int i = 0; i < sizeof(PARAM) * 8; i++)
				Result |= (x & 1U << i) << i | (y & 1U << i) << (i + 1);
			return Result;
		}

		template <>
		inline glm::uint16 bitfieldInterleave(glm::uint8 x, glm::uint8 y)
		{
			glm::uint16 REG1(x);
			glm::uint16 REG2(y);

			REG1 = ((REG1 <<  4) | REG1) & glm::uint16(0x0F0F);
			REG2 = ((REG2 <<  4) | REG2) & glm::uint16(0x0F0F);

			REG1 = ((REG1 <<  2) | REG1) & glm::uint16(0x3333);
			REG2 = ((REG2 <<  2) | REG2) & glm::uint16(0x3333);

			REG1 = ((REG1 <<  1) | REG1) & glm::uint16(0x5555);
			REG2 = ((REG2 <<  1) | REG2) & glm::uint16(0x5555);

			return REG1 | (REG2 << 1);
		}

		template <>
		inline glm::uint32 bitfieldInterleave(glm::uint16 x, glm::uint16 y)
		{
			glm::uint32 REG1(x);
			glm::uint32 REG2(y);

			REG1 = ((REG1 <<  8) | REG1) & glm::uint32(0x00FF00FF);
			REG2 = ((REG2 <<  8) | REG2) & glm::uint32(0x00FF00FF);

			REG1 = ((REG1 <<  4) | REG1) & glm::uint32(0x0F0F0F0F);
			REG2 = ((REG2 <<  4) | REG2) & glm::uint32(0x0F0F0F0F);

			REG1 = ((REG1 <<  2) | REG1) & glm::uint32(0x33333333);
			REG2 = ((REG2 <<  2) | REG2) & glm::uint32(0x33333333);

			REG1 = ((REG1 <<  1) | REG1) & glm::uint32(0x55555555);
			REG2 = ((REG2 <<  1) | REG2) & glm::uint32(0x55555555);

			return REG1 | (REG2 << 1);
		}

		template <>
		inline glm::uint64 bitfieldInterleave(glm::uint32 x, glm::uint32 y)
		{
			glm::uint64 REG1(x);
			glm::uint64 REG2(y);

			REG1 = ((REG1 << 16) | REG1) & glm::uint64(0x0000FFFF0000FFFF);
			REG2 = ((REG2 << 16) | REG2) & glm::uint64(0x0000FFFF0000FFFF);

			REG1 = ((REG1 <<  8) | REG1) & glm::uint64(0x00FF00FF00FF00FF);
			REG2 = ((REG2 <<  8) | REG2) & glm::uint64(0x00FF00FF00FF00FF);

			REG1 = ((REG1 <<  4) | REG1) & glm::uint64(0x0F0F0F0F0F0F0F0F);
			REG2 = ((REG2 <<  4) | REG2) & glm::uint64(0x0F0F0F0F0F0F0F0F);

			REG1 = ((REG1 <<  2) | REG1) & glm::uint64(0x3333333333333333);
			REG2 = ((REG2 <<  2) | REG2) & glm::uint64(0x3333333333333333);

			REG1 = ((REG1 <<  1) | REG1) & glm::uint64(0x5555555555555555);
			REG2 = ((REG2 <<  1) | REG2) & glm::uint64(0x5555555555555555);

			return REG1 | (REG2 << 1);
		}

		inline glm::uint64 bitfieldInterleave(glm::uint32 x, glm::uint32 y, glm::uint32 z)
		{
			glm::uint64 REG1(x);
			glm::uint64 REG2(y);
			glm::uint64 REG3(z);

			REG1 = ((REG1 << 32) | REG1) & glm::uint64(0xFFFF00000000FFFF);
			REG2 = ((REG2 << 32) | REG2) & glm::uint64(0xFFFF00000000FFFF);
			REG3 = ((REG3 << 32) | REG3) & glm::uint64(0xFFFF00000000FFFF);

			REG1 = ((REG1 << 16) | REG1) & glm::uint64(0x00FF0000FF0000FF);
			REG2 = ((REG2 << 16) | REG2) & glm::uint64(0x00FF0000FF0000FF);
			REG3 = ((REG3 << 16) | REG3) & glm::uint64(0x00FF0000FF0000FF);

			REG1 = ((REG1 <<  8) | REG1) & glm::uint64(0xF00F00F00F00F00F);
			REG2 = ((REG2 <<  8) | REG2) & glm::uint64(0xF00F00F00F00F00F);
			REG3 = ((REG3 <<  8) | REG3) & glm::uint64(0xF00F00F00F00F00F);

			REG1 = ((REG1 <<  4) | REG1) & glm::uint64(0x30C30C30C30C30C3);
			REG2 = ((REG2 <<  4) | REG2) & glm::uint64(0x30C30C30C30C30C3);
			REG3 = ((REG3 <<  4) | REG3) & glm::uint64(0x30C30C30C30C30C3);

			REG1 = ((REG1 <<  2) | REG1) & glm::uint64(0x9249249249249249);
			REG2 = ((REG2 <<  2) | REG2) & glm::uint64(0x9249249249249249);
			REG3 = ((REG3 <<  2) | REG3) & glm::uint64(0x9249249249249249);

			return REG1 | (REG2 << 1) | (REG3 << 2);
		}

		inline glm::uint64 bitfieldInterleave(glm::uint16 x, glm::uint16 y, glm::uint16 z, glm::uint16 w)
		{
			glm::uint64 REG1(x);
			glm::uint64 REG2(y);
			glm::uint64 REG3(z);
			glm::uint64 REG4(w);
/*
			REG1 = ((REG1 << 64) | REG1) & glm::uint64(0x000000000000FFFF);
			REG2 = ((REG2 << 64) | REG2) & glm::uint64(0x000000000000FFFF);
			REG3 = ((REG3 << 64) | REG3) & glm::uint64(0x000000000000FFFF);
			REG4 = ((REG4 << 64) | REG4) & glm::uint64(0x000000000000FFFF);
*/
			REG1 = ((REG1 << 32) | REG1) & glm::uint64(0x000000FF000000FF);
			REG2 = ((REG2 << 32) | REG2) & glm::uint64(0x000000FF000000FF);
			REG3 = ((REG3 << 32) | REG3) & glm::uint64(0x000000FF000000FF);
			REG4 = ((REG4 << 32) | REG4) & glm::uint64(0x000000FF000000FF);

			REG1 = ((REG1 << 16) | REG1) & glm::uint64(0x000F000F000F000F);
			REG2 = ((REG2 << 16) | REG2) & glm::uint64(0x000F000F000F000F);
			REG3 = ((REG3 << 16) | REG3) & glm::uint64(0x000F000F000F000F);
			REG4 = ((REG4 << 16) | REG4) & glm::uint64(0x000F000F000F000F);

			REG1 = ((REG1 <<  8) | REG1) & glm::uint64(0x0303030303030303);
			REG2 = ((REG2 <<  8) | REG2) & glm::uint64(0x0303030303030303);
			REG3 = ((REG3 <<  8) | REG3) & glm::uint64(0x0303030303030303);
			REG4 = ((REG4 <<  8) | REG4) & glm::uint64(0x0303030303030303);

			REG1 = ((REG1 <<  4) | REG1) & glm::uint64(0x1111111111111111);
			REG2 = ((REG2 <<  4) | REG2) & glm::uint64(0x1111111111111111);
			REG3 = ((REG3 <<  4) | REG3) & glm::uint64(0x1111111111111111);
			REG4 = ((REG4 <<  4) | REG4) & glm::uint64(0x1111111111111111);

			return REG1 | (REG2 << 1) | (REG3 << 2) | (REG4 << 3);
		}
	}//namespace detail

	inline int16 bitfieldInterleave(int8 x, int8 y)
	{
		union sign8
		{
			int8 i;
			uint8 u;
		} sign_x, sign_y;

		union sign16
		{
			int16 i;
			uint16 u;
		} result;

		sign_x.i = x;
		sign_y.i = y;
		result.u = detail::bitfieldInterleave<int8, int16>(sign_x.u, sign_y.u);

		return result.i;
	}

	inline uint16 bitfieldInterleave(uint8 x, uint8 y)
	{
		return detail::bitfieldInterleave<uint8, uint16>(x, y);
	}

	inline int32 bitfieldInterleave(int16 x, int16 y)
	{
		union sign16
		{
			int16 i;
			uint16 u;
		} sign_x, sign_y;

		union sign32
		{
			int32 i;
			uint32 u;
		} result;

		sign_x.i = x;
		sign_y.i = y;
		result.u = detail::bitfieldInterleave<int16, int32>(sign_x.u, sign_y.u);

		return result.i;
	}

	inline uint32 bitfieldInterleave(uint16 x, uint16 y)
	{
		return detail::bitfieldInterleave<uint16, uint32>(x, y);
	}

	inline int64 bitfieldInterleave(int32 x, int32 y)
	{
		union sign32
		{
			int32 i;
			uint32 u;
		} sign_x, sign_y;

		union sign64
		{
			int64 i;
			uint64 u;
		} result;

		sign_x.i = x;
		sign_y.i = y;
		result.u = detail::bitfieldInterleave<int32, int64>(sign_x.u, sign_y.u);

		return result.i;
	}

	inline uint64 bitfieldInterleave(uint32 x, uint32 y)
	{
		return detail::bitfieldInterleave<uint32, uint64>(x, y);
	}
}//namespace glm
