///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2014-10-25
// Updated : 2014-10-25
// Licence : This source is under MIT licence
// File    : test/gtc/integer.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/gtc/integer.hpp>
#include <glm/gtc/type_precision.hpp>
#include <glm/gtc/vec1.hpp>

namespace isPowerOfTwo
{
	template <typename genType>
	struct type
	{
		genType		Value;
		bool		Return;
	};

	int test_int16()
	{
		type<glm::int16> const Data[] =
		{
			{0x0001, true},
			{0x0002, true},
			{0x0004, true},
			{0x0080, true},
			{0x0000, true},
			{0x0003, false}
		};

		int Error(0);

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<glm::int16>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(Data[i].Value);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test_uint16()
	{
		type<glm::uint16> const Data[] =
		{
			{0x0001, true},
			{0x0002, true},
			{0x0004, true},
			{0x0000, true},
			{0x0000, true},
			{0x0003, false}
		};

		int Error(0);

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<glm::uint16>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(Data[i].Value);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test_int32()
	{
		type<int> const Data[] =
		{
			{0x00000001, true},
			{0x00000002, true},
			{0x00000004, true},
			{0x0000000f, false},
			{0x00000000, true},
			{0x00000003, false}
		};

		int Error(0);

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<int>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(Data[i].Value);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<int>); i < n; ++i)
		{
			glm::bvec1 Result = glm::isPowerOfTwo(glm::ivec1(Data[i].Value));
			Error += glm::all(glm::equal(glm::bvec1(Data[i].Return), Result)) ? 0 : 1;
		}

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<int>); i < n; ++i)
		{
			glm::bvec2 Result = glm::isPowerOfTwo(glm::ivec2(Data[i].Value));
			Error += glm::all(glm::equal(glm::bvec2(Data[i].Return), Result)) ? 0 : 1;
		}

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<int>); i < n; ++i)
		{
			glm::bvec3 Result = glm::isPowerOfTwo(glm::ivec3(Data[i].Value));
			Error += glm::all(glm::equal(glm::bvec3(Data[i].Return), Result)) ? 0 : 1;
		}

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<int>); i < n; ++i)
		{
			glm::bvec4 Result = glm::isPowerOfTwo(glm::ivec4(Data[i].Value));
			Error += glm::all(glm::equal(glm::bvec4(Data[i].Return), Result)) ? 0 : 1;
		}

		return Error;
	}

	int test_uint32()
	{
		type<glm::uint> const Data[] =
		{
			{0x00000001, true},
			{0x00000002, true},
			{0x00000004, true},
			{0x80000000, true},
			{0x00000000, true},
			{0x00000003, false}
		};

		int Error(0);

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<glm::uint>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(Data[i].Value);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test()
	{
		int Error(0);

		Error += test_int16();
		Error += test_uint16();
		Error += test_int32();
		Error += test_uint32();

		return Error;
	}
}//isPowerOfTwo

int main()
{
	int Error(0);

	Error += isPowerOfTwo::test();

	return Error;
}
