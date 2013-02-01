///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2012 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2010-09-16
// Licence : This source is under MIT licence
// File    : test/gtx/bit.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtc/type_precision.hpp>
#include <glm/gtx/bit.hpp>
#include <iostream>
#include <vector>
#include <ctime>

#include <emmintrin.h>

enum result
{
	SUCCESS,
	FAIL,
	ASSERT,
	STATIC_ASSERT
};

namespace extractField
{
	template <typename genType, typename sizeType>
	struct type
	{
		genType		Value;
		sizeType	BitFirst;
		sizeType	BitCount;
		genType		Return;
		result		Result;
	};

	typedef type<glm::uint64, glm::uint> typeU64;

#if(((GLM_COMPILER & GLM_COMPILER_GCC) == GLM_COMPILER_GCC) && (GLM_COMPILER < GLM_COMPILER_GCC44))
	typeU64 const Data64[] =
	{
		{0xffffffffffffffffLLU, 8, 0, 0x0000000000000000LLU, SUCCESS},
		{0x0000000000000000LLU, 0,64, 0x0000000000000000LLU, SUCCESS},
		{0xffffffffffffffffLLU, 0,64, 0xffffffffffffffffLLU, SUCCESS},
		{0x0f0f0f0f0f0f0f0fLLU, 0,64, 0x0f0f0f0f0f0f0f0fLLU, SUCCESS},
		{0x0000000000000000LLU, 8, 0, 0x0000000000000000LLU, SUCCESS},
		{0x8000000000000000LLU,63, 1, 0x0000000000000001LLU, SUCCESS},
		{0x7fffffffffffffffLLU,63, 1, 0x0000000000000000LLU, SUCCESS},
		{0x0000000000000300LLU, 8, 8, 0x0000000000000003LLU, SUCCESS},
		{0x000000000000ff00LLU, 8, 8, 0x00000000000000ffLLU, SUCCESS},
		{0xfffffffffffffff0LLU, 0, 5, 0x0000000000000010LLU, SUCCESS},
		{0x00000000000000ffLLU, 1, 3, 0x0000000000000007LLU, SUCCESS},
		{0x00000000000000ffLLU, 0, 3, 0x0000000000000007LLU, SUCCESS},
		{0x0000000000000000LLU, 0, 2, 0x0000000000000000LLU, SUCCESS},
		{0xffffffffffffffffLLU, 0, 8, 0x00000000000000ffLLU, SUCCESS},
		{0xffffffff00000000LLU,32,32, 0x00000000ffffffffLLU, SUCCESS},
		{0xfffffffffffffff0LLU, 0, 8, 0x0000000000000000LLU, FAIL},
		{0xffffffffffffffffLLU,32,32, 0x0000000000000000LLU, FAIL},
		//{0xffffffffffffffffLLU,64, 1, 0x0000000000000000LLU, ASSERT}, // Throw an assert 
		//{0xffffffffffffffffLLU, 0,65, 0x0000000000000000LLU, ASSERT}, // Throw an assert 
		//{0xffffffffffffffffLLU,33,32, 0x0000000000000000LLU, ASSERT}, // Throw an assert 
	};
#else
	typeU64 const Data64[] =
	{
		{0xffffffffffffffff, 8, 0, 0x0000000000000000, SUCCESS},
		{0x0000000000000000, 0,64, 0x0000000000000000, SUCCESS},
		{0xffffffffffffffff, 0,64, 0xffffffffffffffff, SUCCESS},
		{0x0f0f0f0f0f0f0f0f, 0,64, 0x0f0f0f0f0f0f0f0f, SUCCESS},
		{0x0000000000000000, 8, 0, 0x0000000000000000, SUCCESS},
		{0x8000000000000000,63, 1, 0x0000000000000001, SUCCESS},
		{0x7fffffffffffffff,63, 1, 0x0000000000000000, SUCCESS},
		{0x0000000000000300, 8, 8, 0x0000000000000003, SUCCESS},
		{0x000000000000ff00, 8, 8, 0x00000000000000ff, SUCCESS},
		{0xfffffffffffffff0, 0, 5, 0x0000000000000010, SUCCESS},
		{0x00000000000000ff, 1, 3, 0x0000000000000007, SUCCESS},
		{0x00000000000000ff, 0, 3, 0x0000000000000007, SUCCESS},
		{0x0000000000000000, 0, 2, 0x0000000000000000, SUCCESS},
		{0xffffffffffffffff, 0, 8, 0x00000000000000ff, SUCCESS},
		{0xffffffff00000000,32,32, 0x00000000ffffffff, SUCCESS},
		{0xfffffffffffffff0, 0, 8, 0x0000000000000000, FAIL},
		{0xffffffffffffffff,32,32, 0x0000000000000000, FAIL},
		//{0xffffffffffffffff,64, 1, 0x0000000000000000, ASSERT}, // Throw an assert 
		//{0xffffffffffffffff, 0,65, 0x0000000000000000, ASSERT}, // Throw an assert 
		//{0xffffffffffffffff,33,32, 0x0000000000000000, ASSERT}, // Throw an assert 
	};
#endif

	int test()
	{
		glm::uint32 count = sizeof(Data64) / sizeof(typeU64);
		
		for(glm::uint32 i = 0; i < count; ++i)
		{
			glm::uint64 Return = glm::extractField(
				Data64[i].Value, 
				Data64[i].BitFirst, 
				Data64[i].BitCount);
			
			bool Compare = Data64[i].Return == Return;
			
			if(Data64[i].Result == SUCCESS && Compare)
				continue;
			else if(Data64[i].Result == FAIL && !Compare)
				continue;
			
			std::cout << "glm::extractfield test fail on test " << i << std::endl;
			return 1;
		}
		
		return 0;
	}
}//extractField

namespace bitRevert
{
	template <typename genType>
	struct type
	{
		genType		Value;
		genType		Return;
		result		Result;
	};

	typedef type<glm::uint64> typeU64;

#if(((GLM_COMPILER & GLM_COMPILER_GCC) == GLM_COMPILER_GCC) && (GLM_COMPILER < GLM_COMPILER_GCC44))
	typeU64 const Data64[] =
	{
		{0xffffffffffffffffLLU, 0xffffffffffffffffLLU, SUCCESS},
		{0x0000000000000000LLU, 0x0000000000000000LLU, SUCCESS},
		{0xf000000000000000LLU, 0x000000000000000fLLU, SUCCESS},
	};
#else
	typeU64 const Data64[] =
	{
		{0xffffffffffffffff, 0xffffffffffffffff, SUCCESS},
		{0x0000000000000000, 0x0000000000000000, SUCCESS},
		{0xf000000000000000, 0x000000000000000f, SUCCESS},
	};
#endif

	int test()
	{
		glm::uint32 count = sizeof(Data64) / sizeof(typeU64);
		
		for(glm::uint32 i = 0; i < count; ++i)
		{
			glm::uint64 Return = glm::bitRevert(
				Data64[i].Value);
			
			bool Compare = Data64[i].Return == Return;
			
			if(Data64[i].Result == SUCCESS && Compare)
				continue;
			else if(Data64[i].Result == FAIL && !Compare)
				continue;
			
			std::cout << "glm::extractfield test fail on test " << i << std::endl;
			return 1;
		}
		
		return 0;
	}
}//bitRevert

inline glm::uint64 fastBitfieldInterleave(glm::uint32 x, glm::uint32 y)
{
	glm::uint64 REG1;
	glm::uint64 REG2;

	REG1 = x;
	REG1 = ((REG1 << 16) | REG1) & glm::uint64(0x0000FFFF0000FFFF);
	REG1 = ((REG1 <<  8) | REG1) & glm::uint64(0x00FF00FF00FF00FF);
	REG1 = ((REG1 <<  4) | REG1) & glm::uint64(0x0F0F0F0F0F0F0F0F);
	REG1 = ((REG1 <<  2) | REG1) & glm::uint64(0x3333333333333333);
	REG1 = ((REG1 <<  1) | REG1) & glm::uint64(0x5555555555555555);

	REG2 = y;
	REG2 = ((REG2 << 16) | REG2) & glm::uint64(0x0000FFFF0000FFFF);
	REG2 = ((REG2 <<  8) | REG2) & glm::uint64(0x00FF00FF00FF00FF);
	REG2 = ((REG2 <<  4) | REG2) & glm::uint64(0x0F0F0F0F0F0F0F0F);
	REG2 = ((REG2 <<  2) | REG2) & glm::uint64(0x3333333333333333);
	REG2 = ((REG2 <<  1) | REG2) & glm::uint64(0x5555555555555555);

	return REG1 | (REG2 << 1);
}

inline glm::uint64 interleaveBitfieldInterleave(glm::uint32 x, glm::uint32 y)
{
	glm::uint64 REG1;
	glm::uint64 REG2;

	REG1 = x;
	REG2 = y;

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

inline glm::uint64 loopBitfieldInterleave(glm::uint32 x, glm::uint32 y)
{
	static glm::uint64 const Mask[5] = 
	{
		0x5555555555555555,
		0x3333333333333333,
		0x0F0F0F0F0F0F0F0F,
		0x00FF00FF00FF00FF,
		0x0000FFFF0000FFFF
	};

	glm::uint64 REG1 = x;
	glm::uint64 REG2 = y;
	for(int i = 4; i >= 0; --i)
	{
		REG1 = ((REG1 << (1 << i)) | REG1) & Mask[i];
		REG2 = ((REG2 << (1 << i)) | REG2) & Mask[i];
	}

	return REG1 | (REG2 << 1);
}

/*
const int N = 1024;

int32_t b1[N]; // 2 x arrays of input bit sets
int32_t b2[N];
int32_t b3[N]; // 1 x array of output bit sets

for (int i = 0; i < N; i += 4)
{
    __m128i v1 = _mm_loadu_si128(&b1[i]); // load input bits sets
    __m128i v2 = _mm_loadu_si128(&b2[i]);
    __m128i v3 = _mm_and_si128(v1, v2);   // do the bitwise AND
    _mm_storeu_si128(&b3[i], v3);         // store the result
}
If you just want to AND an array in-place with a fixed mask then it would simplify to this:

const int N = 1024;

int32_t b1[N]; // input/output array of bit sets

const __m128i v2 = _mm_set1_epi32(0x12345678); // mask

for (int i = 0; i < N; i += 4)
{
    __m128i v1 = _mm_loadu_si128(&b1[i]); // load input bits sets
    __m128i v3 = _mm_and_si128(v1, v2);   // do the bitwise AND
    _mm_storeu_si128(&b1[i], v3);         // store the result
}
Note: for better performance make sure your input/output arrays are 16 byte aligned and then use _mm_load_si128/_mm_store_si128 rather than their unaligned counterparts as above.
*/

inline glm::uint64 sseBitfieldInterleave(glm::uint32 x, glm::uint32 y)
{
	GLM_ALIGN(16) glm::uint32 const Array[4] = {x, 0, y, 0};

	__m128i const Mask4 = _mm_set1_epi32(0x0000FFFF);
	__m128i const Mask3 = _mm_set1_epi32(0x00FF00FF);
	__m128i const Mask2 = _mm_set1_epi32(0x0F0F0F0F);
	__m128i const Mask1 = _mm_set1_epi32(0x33333333);
	__m128i const Mask0 = _mm_set1_epi32(0x55555555);

	__m128i Reg1;
	__m128i Reg2;

	// REG1 = x;
	// REG2 = y;
	Reg1 = _mm_load_si128((__m128i*)Array);

	//REG1 = ((REG1 << 16) | REG1) & glm::uint64(0x0000FFFF0000FFFF);
	//REG2 = ((REG2 << 16) | REG2) & glm::uint64(0x0000FFFF0000FFFF);
	Reg2 = _mm_slli_si128(Reg1, 2);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask4);

	//REG1 = ((REG1 <<  8) | REG1) & glm::uint64(0x00FF00FF00FF00FF);
	//REG2 = ((REG2 <<  8) | REG2) & glm::uint64(0x00FF00FF00FF00FF);
	Reg2 = _mm_slli_si128(Reg1, 1);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask3);

	//REG1 = ((REG1 <<  4) | REG1) & glm::uint64(0x0F0F0F0F0F0F0F0F);
	//REG2 = ((REG2 <<  4) | REG2) & glm::uint64(0x0F0F0F0F0F0F0F0F);
	Reg2 = _mm_slli_epi32(Reg1, 4);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask2);

	//REG1 = ((REG1 <<  2) | REG1) & glm::uint64(0x3333333333333333);
	//REG2 = ((REG2 <<  2) | REG2) & glm::uint64(0x3333333333333333);
	Reg2 = _mm_slli_epi32(Reg1, 2);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask1);

	//REG1 = ((REG1 <<  1) | REG1) & glm::uint64(0x5555555555555555);
	//REG2 = ((REG2 <<  1) | REG2) & glm::uint64(0x5555555555555555);
	Reg2 = _mm_slli_epi32(Reg1, 1);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask0);

	//return REG1 | (REG2 << 1);
	Reg2 = _mm_slli_epi32(Reg1, 1);
	Reg2 = _mm_srli_si128(Reg2, 8);
	Reg1 = _mm_or_si128(Reg1, Reg2);
	
	GLM_ALIGN(16) glm::uint64 Result[2];
	_mm_store_si128((__m128i*)Result, Reg1);

	return Result[0];
}

inline glm::uint64 sseUnalignedBitfieldInterleave(glm::uint32 x, glm::uint32 y)
{
	glm::uint32 const Array[4] = {x, 0, y, 0};

	__m128i const Mask4 = _mm_set1_epi32(0x0000FFFF);
	__m128i const Mask3 = _mm_set1_epi32(0x00FF00FF);
	__m128i const Mask2 = _mm_set1_epi32(0x0F0F0F0F);
	__m128i const Mask1 = _mm_set1_epi32(0x33333333);
	__m128i const Mask0 = _mm_set1_epi32(0x55555555);

	__m128i Reg1;
	__m128i Reg2;

	// REG1 = x;
	// REG2 = y;
	Reg1 = _mm_loadu_si128((__m128i*)Array);

	//REG1 = ((REG1 << 16) | REG1) & glm::uint64(0x0000FFFF0000FFFF);
	//REG2 = ((REG2 << 16) | REG2) & glm::uint64(0x0000FFFF0000FFFF);
	Reg2 = _mm_slli_si128(Reg1, 2);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask4);

	//REG1 = ((REG1 <<  8) | REG1) & glm::uint64(0x00FF00FF00FF00FF);
	//REG2 = ((REG2 <<  8) | REG2) & glm::uint64(0x00FF00FF00FF00FF);
	Reg2 = _mm_slli_si128(Reg1, 1);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask3);

	//REG1 = ((REG1 <<  4) | REG1) & glm::uint64(0x0F0F0F0F0F0F0F0F);
	//REG2 = ((REG2 <<  4) | REG2) & glm::uint64(0x0F0F0F0F0F0F0F0F);
	Reg2 = _mm_slli_epi32(Reg1, 4);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask2);

	//REG1 = ((REG1 <<  2) | REG1) & glm::uint64(0x3333333333333333);
	//REG2 = ((REG2 <<  2) | REG2) & glm::uint64(0x3333333333333333);
	Reg2 = _mm_slli_epi32(Reg1, 2);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask1);

	//REG1 = ((REG1 <<  1) | REG1) & glm::uint64(0x5555555555555555);
	//REG2 = ((REG2 <<  1) | REG2) & glm::uint64(0x5555555555555555);
	Reg2 = _mm_slli_epi32(Reg1, 1);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask0);

	//return REG1 | (REG2 << 1);
	Reg2 = _mm_slli_epi32(Reg1, 1);
	Reg2 = _mm_srli_si128(Reg2, 8);
	Reg1 = _mm_or_si128(Reg1, Reg2);
	
	glm::uint64 Result[2];
	_mm_storeu_si128((__m128i*)Result, Reg1);

	return Result[0];
}

inline __m128i _mm_bit_interleave_si128(__m128i x, __m128i y)
{
	__m128i const Mask4 = _mm_set1_epi32(0x0000FFFF);
	__m128i const Mask3 = _mm_set1_epi32(0x00FF00FF);
	__m128i const Mask2 = _mm_set1_epi32(0x0F0F0F0F);
	__m128i const Mask1 = _mm_set1_epi32(0x33333333);
	__m128i const Mask0 = _mm_set1_epi32(0x55555555);

	__m128i Reg1;
	__m128i Reg2;

	// REG1 = x;
	// REG2 = y;
	Reg1 = _mm_unpacklo_epi64(x, y);

	//REG1 = ((REG1 << 16) | REG1) & glm::uint64(0x0000FFFF0000FFFF);
	//REG2 = ((REG2 << 16) | REG2) & glm::uint64(0x0000FFFF0000FFFF);
	Reg2 = _mm_slli_si128(Reg1, 2);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask4);

	//REG1 = ((REG1 <<  8) | REG1) & glm::uint64(0x00FF00FF00FF00FF);
	//REG2 = ((REG2 <<  8) | REG2) & glm::uint64(0x00FF00FF00FF00FF);
	Reg2 = _mm_slli_si128(Reg1, 1);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask3);

	//REG1 = ((REG1 <<  4) | REG1) & glm::uint64(0x0F0F0F0F0F0F0F0F);
	//REG2 = ((REG2 <<  4) | REG2) & glm::uint64(0x0F0F0F0F0F0F0F0F);
	Reg2 = _mm_slli_epi32(Reg1, 4);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask2);

	//REG1 = ((REG1 <<  2) | REG1) & glm::uint64(0x3333333333333333);
	//REG2 = ((REG2 <<  2) | REG2) & glm::uint64(0x3333333333333333);
	Reg2 = _mm_slli_epi32(Reg1, 2);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask1);

	//REG1 = ((REG1 <<  1) | REG1) & glm::uint64(0x5555555555555555);
	//REG2 = ((REG2 <<  1) | REG2) & glm::uint64(0x5555555555555555);
	Reg2 = _mm_slli_epi32(Reg1, 1);
	Reg1 = _mm_or_si128(Reg2, Reg1);
	Reg1 = _mm_and_si128(Reg1, Mask0);

	//return REG1 | (REG2 << 1);
	Reg2 = _mm_slli_epi32(Reg1, 1);
	Reg2 = _mm_srli_si128(Reg2, 8);
	Reg1 = _mm_or_si128(Reg1, Reg2);
	
	return Reg1;
}

namespace bitfieldInterleave
{
	int test()
	{
		glm::uint32 x_max = 1 << 13;
		glm::uint32 y_max = 1 << 12;

		// ALU
		std::vector<glm::u64vec2> Data(x_max * y_max);
		std::vector<glm::u64vec2> ParamX(x_max);
		std::vector<glm::u64vec2> ParamY(y_max);
		for(glm::uint32 x = 0; x < x_max; ++x)
			ParamX[x] = glm::u64vec2(x);
		for(glm::uint32 y = 0; y < y_max; ++y)
			ParamY[y] = glm::u64vec2(y);

		{
			for(glm::uint32 y = 0; y < (1 << 10); ++y)
			for(glm::uint32 x = 0; x < (1 << 10); ++x)
			{
				glm::uint64 A = glm::bitfieldInterleave(x, y);
				glm::uint64 B = fastBitfieldInterleave(x, y);
				glm::uint64 C = loopBitfieldInterleave(x, y);
				glm::uint64 D = interleaveBitfieldInterleave(x, y);
				glm::uint64 E = sseBitfieldInterleave(x, y);
				glm::uint64 F = sseUnalignedBitfieldInterleave(x, y);
				assert(A == B);
				assert(A == C);
				assert(A == D);
				assert(A == E);
				assert(A == F);
			}
		}

		{
			std::clock_t LastTime = std::clock();

			for(glm::uint32 y = 0; y < y_max; ++y)
			for(glm::uint32 x = 0; x < x_max; ++x)
			{
				glm::uint64 Result = glm::bitfieldInterleave(glm::uint32(ParamX[x].x), glm::uint32(ParamY[y].x));
				Data[x + y * x_max].x = Result;
			}

			std::clock_t Time = std::clock() - LastTime;

			std::cout << "glm::bitfieldInterleave Time " << Time << " clocks" << std::endl;
		}

		{
			std::clock_t LastTime = std::clock();

			for(glm::uint32 y = 0; y < y_max; ++y)
			for(glm::uint32 x = 0; x < x_max; ++x)
			{
				glm::uint64 Result = fastBitfieldInterleave(glm::uint32(ParamX[x].x), glm::uint32(ParamY[y].x));
				Data[x + y * x_max].x = Result;
			}

			std::clock_t Time = std::clock() - LastTime;

			std::cout << "fastBitfieldInterleave Time " << Time << " clocks" << std::endl;
		}

		{
			std::clock_t LastTime = std::clock();

			for(glm::uint32 y = 0; y < y_max; ++y)
			for(glm::uint32 x = 0; x < x_max; ++x)
			{
				glm::uint64 Result = loopBitfieldInterleave(glm::uint32(ParamX[x].x), glm::uint32(ParamY[y].x));
				Data[x + y * x_max].x = Result;
			}

			std::clock_t Time = std::clock() - LastTime;

			std::cout << "loopBitfieldInterleave Time " << Time << " clocks" << std::endl;
		}

		{
			std::clock_t LastTime = std::clock();

			for(glm::uint32 y = 0; y < y_max; ++y)
			for(glm::uint32 x = 0; x < x_max; ++x)
			{
				glm::uint64 Result = interleaveBitfieldInterleave(glm::uint32(ParamX[x].x), glm::uint32(ParamY[y].x));
				Data[x + y * x_max].x = Result;
			}

			std::clock_t Time = std::clock() - LastTime;

			std::cout << "interleaveBitfieldInterleave Time " << Time << " clocks" << std::endl;
		}

		{
			std::clock_t LastTime = std::clock();

			for(glm::uint32 y = 0; y < y_max; ++y)
			for(glm::uint32 x = 0; x < x_max; ++x)
			{
				glm::uint64 Result = sseBitfieldInterleave(glm::uint32(ParamX[x].x), glm::uint32(ParamY[y].x));
				Data[x + y * x_max].x = Result;
			}

			std::clock_t Time = std::clock() - LastTime;

			std::cout << "sseBitfieldInterleave Time " << Time << " clocks" << std::endl;
		}

		{
			std::clock_t LastTime = std::clock();

			for(glm::uint32 y = 0; y < y_max; ++y)
			for(glm::uint32 x = 0; x < x_max; ++x)
			{
				glm::uint64 Result = sseUnalignedBitfieldInterleave(glm::uint32(ParamX[x].x), glm::uint32(ParamY[y].x));
				Data[x + y * x_max].x = Result;
			}

			std::clock_t Time = std::clock() - LastTime;

			std::cout << "sseUnalignedBitfieldInterleave Time " << Time << " clocks" << std::endl;
		}

		{
			// SIMD
			glm::int32 simd_x_max = 1 << 13;
			glm::int32 simd_y_max = 1 << 12;

			std::vector<__m128i> SimdData(x_max * y_max);
			std::vector<__m128i> SimdParamX(x_max);
			std::vector<__m128i> SimdParamY(y_max);
			for(int x = 0; x < simd_x_max; ++x)
				SimdParamX[x] = _mm_set1_epi32(x);
			for(int y = 0; y < simd_y_max; ++y)
				SimdParamY[y] = _mm_set1_epi32(y);

			std::clock_t LastTime = std::clock();

			for(glm::int32 y = 0; y < simd_y_max; ++y)
			for(glm::int32 x = 0; x < simd_x_max; ++x)
			{
				__m128i Result = _mm_bit_interleave_si128(SimdParamX[x], SimdParamX[y]);
				SimdData[x + y * x_max] = Result;
			}

			std::clock_t Time = std::clock() - LastTime;

			std::cout << "_mm_bit_interleave_si128 Time " << Time << " clocks" << std::endl;
		}

		

		return 0;
	}
}

int main()
{
	//__m64 REG3 = _mm_set1_pi32(static_cast<int>(0x80000000));
	//__m64 REG1 = _mm_set1_pi32(0xFFFFFFFF);
	//__m64 REG2 = _mm_set1_pi32(0x55555555);
	//__m128i REG = _mm_set_epi64(REG1, REG2);


	int Error = 0;
	Error += ::bitfieldInterleave::test();
	Error += ::extractField::test();
	Error += ::bitRevert::test();

	while(true);

	return Error;
}
