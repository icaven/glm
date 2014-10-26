///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-16
// Updated : 2014-10-25
// Licence : This source is under MIT licence
// File    : test/gtx/bit.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/gtx/bit.hpp>
#include <glm/gtc/type_precision.hpp>


namespace isPowerOfTwo
{
	template <typename genType>
	struct type
	{
		genType		Value;
		bool		Return;
	};

	type<int> const DataI32[] =
	{
		{0x00000001, true},
		{0x00000002, true},
		{0x00000004, true},
		{0xffffffff, true},
		{0x00000000, true},
		{0x00000003, true}
	};

	int test()
	{
		int Error(0);

		for(std::size_t i = 0, n = sizeof(DataI32) / sizeof(type<int>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(DataI32[i].Value);
			Error += DataI32[i].Return == Result ? 0 : 1;
			assert(!Error);
		}

		return Error;
	}
}//isPowerOfTwo

int main()
{
	int Error(0);

	Error += isPowerOfTwo::test();

	return Error;
}
