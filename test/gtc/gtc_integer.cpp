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

namespace isPowerOfTwo
{
	template <typename genType>
	struct type
	{
		genType		Value;
		bool		Return;
	};

	int test_int()
	{
		type<int> const DataI32[] =
		{
			{0x00000001, true},
			{0x00000002, true},
			{0x00000004, true},
			{0xffffffff, true},
			{0x00000000, true},
			{0x00000003, false}
		};

		int Error(0);

		for(std::size_t i = 0, n = sizeof(DataI32) / sizeof(type<int>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(DataI32[i].Value);
			Error += DataI32[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test_uint()
	{
		type<glm::uint> const DataU32[] =
		{
			{0x00000001, true},
			{0x00000002, true},
			{0x00000004, true},
			{0x80000000, true},
			{0x00000000, true},
			{0x00000003, false}
		};

		int Error(0);

		for(std::size_t i = 0, n = sizeof(DataU32) / sizeof(type<glm::uint>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(DataU32[i].Value);
			Error += DataU32[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test()
	{
		int Error(0);

		Error += test_int();
		Error += test_uint();

		return Error;
	}
}//isPowerOfTwo

int main()
{
	int Error(0);

	Error += isPowerOfTwo::test();

	return Error;
}
