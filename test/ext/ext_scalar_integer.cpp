#include <glm/ext/scalar_integer.hpp>
#include <glm/ext/scalar_int_sized.hpp>
#include <glm/ext/scalar_uint_sized.hpp>
#include <vector>
#include <ctime>
#include <cstdio>

namespace isPowerOfTwo
{
	template<typename genType>
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

		int Error = 0;

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

		int Error = 0;

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

		int Error = 0;

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<int>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(Data[i].Value);
			Error += Data[i].Return == Result ? 0 : 1;
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

		int Error = 0;

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<glm::uint>); i < n; ++i)
		{
			bool Result = glm::isPowerOfTwo(Data[i].Value);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test()
	{
		int Error = 0;

		Error += test_int16();
		Error += test_uint16();
		Error += test_int32();
		Error += test_uint32();

		return Error;
	}
}//isPowerOfTwo

namespace nextPowerOfTwo_advanced
{
	template<typename genIUType>
	GLM_FUNC_QUALIFIER genIUType highestBitValue(genIUType Value)
	{
		genIUType tmp = Value;
		genIUType result = genIUType(0);
		while(tmp)
		{
			result = (tmp & (~tmp + 1)); // grab lowest bit
			tmp &= ~result; // clear lowest bit
		}
		return result;
	}

	template<typename genType>
	GLM_FUNC_QUALIFIER genType nextPowerOfTwo_loop(genType value)
	{
		return glm::isPowerOfTwo(value) ? value : highestBitValue(value) << 1;
	}

	template<typename genType>
	struct type
	{
		genType		Value;
		genType		Return;
	};

	int test_int32()
	{
		type<glm::int32> const Data[] =
		{
			{0x0000ffff, 0x00010000},
			{-3, -4},
			{-8, -8},
			{0x00000001, 0x00000001},
			{0x00000002, 0x00000002},
			{0x00000004, 0x00000004},
			{0x00000007, 0x00000008},
			{0x0000fff0, 0x00010000},
			{0x0000f000, 0x00010000},
			{0x08000000, 0x08000000},
			{0x00000000, 0x00000000},
			{0x00000003, 0x00000004}
		};

		int Error(0);

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<glm::int32>); i < n; ++i)
		{
			glm::int32 Result = glm::nextPowerOfTwo(Data[i].Value);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test_uint32()
	{
		type<glm::uint32> const Data[] =
		{
			{0x00000001, 0x00000001},
			{0x00000002, 0x00000002},
			{0x00000004, 0x00000004},
			{0x00000007, 0x00000008},
			{0x0000ffff, 0x00010000},
			{0x0000fff0, 0x00010000},
			{0x0000f000, 0x00010000},
			{0x80000000, 0x80000000},
			{0x00000000, 0x00000000},
			{0x00000003, 0x00000004}
		};

		int Error(0);

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<glm::uint32>); i < n; ++i)
		{
			glm::uint32 Result = glm::nextPowerOfTwo(Data[i].Value);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int perf()
	{
		int Error(0);

		std::vector<glm::uint> v;
		v.resize(100000000);

		std::clock_t Timestramp0 = std::clock();

		for(glm::uint32 i = 0, n = static_cast<glm::uint>(v.size()); i < n; ++i)
			v[i] = nextPowerOfTwo_loop(i);

		std::clock_t Timestramp1 = std::clock();

		for(glm::uint32 i = 0, n = static_cast<glm::uint>(v.size()); i < n; ++i)
			v[i] = glm::nextPowerOfTwo(i);

		std::clock_t Timestramp2 = std::clock();

		std::printf("nextPowerOfTwo_loop: %d clocks\n", static_cast<int>(Timestramp1 - Timestramp0));
		std::printf("glm::nextPowerOfTwo: %d clocks\n", static_cast<int>(Timestramp2 - Timestramp1));

		return Error;
	}

	int test()
	{
		int Error(0);

		Error += test_int32();
		Error += test_uint32();

		return Error;
	}
}//namespace nextPowerOfTwo_advanced

namespace prevPowerOfTwo
{
	template <typename T>
	int run()
	{
		int Error = 0;

		T const A = glm::prevPowerOfTwo(static_cast<T>(7));
		Error += A == static_cast<T>(4) ? 0 : 1;

		T const B = glm::prevPowerOfTwo(static_cast<T>(15));
		Error += B == static_cast<T>(8) ? 0 : 1;

		T const C = glm::prevPowerOfTwo(static_cast<T>(31));
		Error += C == static_cast<T>(16) ? 0 : 1;

		T const D = glm::prevPowerOfTwo(static_cast<T>(32));
		Error += D == static_cast<T>(32) ? 0 : 1;

		return Error;
	}

	int test()
	{
		int Error = 0;

		Error += run<glm::int8>();
		Error += run<glm::int16>();
		Error += run<glm::int32>();
		Error += run<glm::int64>();

		Error += run<glm::uint8>();
		Error += run<glm::uint16>();
		Error += run<glm::uint32>();
		Error += run<glm::uint64>();

		return Error;
	}
}//namespace prevPowerOfTwo

namespace nextPowerOfTwo
{
	template <typename T>
	int run()
	{
		int Error = 0;

		T const A = glm::nextPowerOfTwo(static_cast<T>(7));
		Error += A == static_cast<T>(8) ? 0 : 1;

		T const B = glm::nextPowerOfTwo(static_cast<T>(15));
		Error += B == static_cast<T>(16) ? 0 : 1;

		T const C = glm::nextPowerOfTwo(static_cast<T>(31));
		Error += C == static_cast<T>(32) ? 0 : 1;

		T const D = glm::nextPowerOfTwo(static_cast<T>(32));
		Error += D == static_cast<T>(32) ? 0 : 1;

		return Error;
	}

	int test()
	{
		int Error = 0;

		Error += run<glm::int8>();
		Error += run<glm::int16>();
		Error += run<glm::int32>();
		Error += run<glm::int64>();

		Error += run<glm::uint8>();
		Error += run<glm::uint16>();
		Error += run<glm::uint32>();
		Error += run<glm::uint64>();

		return Error;
	}
}//namespace nextPowerOfTwo

namespace prevMultiple
{
	template<typename genIUType>
	struct type
	{
		genIUType Source;
		genIUType Multiple;
		genIUType Return;
	};

	template <typename T>
	int run()
	{
		type<T> const Data[] =
		{
			{8, 3, 6},
			{7, 7, 7}
		};

		int Error = 0;
		
		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<T>); i < n; ++i)
		{
			T const Result = glm::prevMultiple(Data[i].Source, Data[i].Multiple);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test()
	{
		int Error = 0;

		Error += run<glm::int8>();
		Error += run<glm::int16>();
		Error += run<glm::int32>();
		Error += run<glm::int64>();

		Error += run<glm::uint8>();
		Error += run<glm::uint16>();
		Error += run<glm::uint32>();
		Error += run<glm::uint64>();

		return Error;
	}
}//namespace prevMultiple

namespace nextMultiple
{
	template<typename genIUType>
	struct type
	{
		genIUType Source;
		genIUType Multiple;
		genIUType Return;
	};

	template <typename T>
	int run()
	{
		type<T> const Data[] =
		{
			{ 8, 3, 6 },
			{ 7, 7, 7 }
		};

		int Error = 0;

		for(std::size_t i = 0, n = sizeof(Data) / sizeof(type<T>); i < n; ++i)
		{
			T const Result = glm::nextMultiple(Data[i].Source, Data[i].Multiple);
			Error += Data[i].Return == Result ? 0 : 1;
		}

		return Error;
	}

	int test()
	{
		int Error = 0;

		Error += run<glm::int8>();
		Error += run<glm::int16>();
		Error += run<glm::int32>();
		Error += run<glm::int64>();

		Error += run<glm::uint8>();
		Error += run<glm::uint16>();
		Error += run<glm::uint32>();
		Error += run<glm::uint64>();

		return Error;
	}
}//namespace nextMultiple

int main()
{
	int Error(0);

	Error += isPowerOfTwo::test();
	Error += prevPowerOfTwo::test();
	Error += nextPowerOfTwo::test();
	Error += nextPowerOfTwo_advanced::test();
	
#	ifdef NDEBUG
		Error += nextPowerOfTwo_advanced::perf();
#	endif//NDEBUG

	Error += prevMultiple::test();
	Error += nextMultiple::test();

	return Error;
}
