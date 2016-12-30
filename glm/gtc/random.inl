/// @ref gtc_random
/// @file glm/gtc/random.inl

#include "../geometric.hpp"
#include "../exponential.hpp"
#include <cstdlib>
#include <ctime>
#include <cassert>

namespace glm{
namespace detail
{
	template <int D, typename T, precision P, template <int, class, precision> class vecType>
	struct compute_rand
	{
		GLM_FUNC_QUALIFIER static vecType<D, T, P> call();
	};

	template <precision P>
	struct compute_rand<1, uint8, P, vec>
	{
		GLM_FUNC_QUALIFIER static vec<1, uint8, P> call()
		{
			return vec<1, uint8, P>(
				std::rand() % std::numeric_limits<uint8>::max());
		}
	};

	template <precision P>
	struct compute_rand<2, uint8, P, vec>
	{
		GLM_FUNC_QUALIFIER static vec<2, uint8, P> call()
		{
			return vec<2, uint8, P>(
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max());
		}
	};

	template <precision P>
	struct compute_rand<3, uint8, P, vec>
	{
		GLM_FUNC_QUALIFIER static vec<3, uint8, P> call()
		{
			return vec<3, uint8, P>(
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max());
		}
	};

	template <precision P>
	struct compute_rand<4, uint8, P, vec>
	{
		GLM_FUNC_QUALIFIER static vec<4, uint8, P> call()
		{
			return vec<4, uint8, P>(
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max());
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_rand<D, uint16, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, uint16, P> call()
		{
			return
				(vecType<D, uint16, P>(compute_rand<D, uint8, P, vecType>::call()) << static_cast<uint16>(8)) |
				(vecType<D, uint16, P>(compute_rand<D, uint8, P, vecType>::call()) << static_cast<uint16>(0));
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_rand<D, uint32, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, uint32, P> call()
		{
			return
				(vecType<D, uint32, P>(compute_rand<D, uint16, P, vecType>::call()) << static_cast<uint32>(16)) |
				(vecType<D, uint32, P>(compute_rand<D, uint16, P, vecType>::call()) << static_cast<uint32>(0));
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_rand<D, uint64, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, uint64, P> call()
		{
			return
				(vecType<D, uint64, P>(compute_rand<D, uint32, P, vecType>::call()) << static_cast<uint64>(32)) |
				(vecType<D, uint64, P>(compute_rand<D, uint32, P, vecType>::call()) << static_cast<uint64>(0));
		}
	};

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand
	{
		GLM_FUNC_QUALIFIER static vecType<D, T, P> call(vecType<D, T, P> const & Min, vecType<D, T, P> const & Max);
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, int8, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, int8, P> call(vecType<D, int8, P> const & Min, vecType<D, int8, P> const & Max)
		{
			return (vecType<D, int8, P>(compute_rand<D, uint8, P, vecType>::call() % vecType<D, uint8, P>(Max + static_cast<int8>(1) - Min))) + Min;
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, uint8, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, uint8, P> call(vecType<D, uint8, P> const & Min, vecType<D, uint8, P> const & Max)
		{
			return (compute_rand<D, uint8, P, vecType>::call() % (Max + static_cast<uint8>(1) - Min)) + Min;
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, int16, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, int16, P> call(vecType<D, int16, P> const & Min, vecType<D, int16, P> const & Max)
		{
			return (vecType<D, int16, P>(compute_rand<D, uint16, P, vecType>::call() % vecType<D, uint16, P>(Max + static_cast<int16>(1) - Min))) + Min;
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, uint16, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, uint16, P> call(vecType<D, uint16, P> const & Min, vecType<D, uint16, P> const & Max)
		{
			return (compute_rand<D, uint16, P, vecType>::call() % (Max + static_cast<uint16>(1) - Min)) + Min;
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, int32, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, int32, P> call(vecType<D, int32, P> const & Min, vecType<D, int32, P> const & Max)
		{
			return (vecType<D, int32, P>(compute_rand<D, uint32, P, vecType>::call() % vecType<D, uint32, P>(Max + static_cast<int32>(1) - Min))) + Min;
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, uint32, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, uint32, P> call(vecType<D, uint32, P> const & Min, vecType<D, uint32, P> const & Max)
		{
			return (compute_rand<D, uint32, P, vecType>::call() % (Max + static_cast<uint32>(1) - Min)) + Min;
		}
	};
 
	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, int64, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, int64, P> call(vecType<D, int64, P> const & Min, vecType<D, int64, P> const & Max)
		{
			return (vecType<D, int64, P>(compute_rand<D, uint64, P, vecType>::call() % vecType<D, uint64, P>(Max + static_cast<int64>(1) - Min))) + Min;
		}
	};

	template <int D, precision P, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, uint64, P, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, uint64, P> call(vecType<D, uint64, P> const & Min, vecType<D, uint64, P> const & Max)
		{
			return (compute_rand<D, uint64, P, vecType>::call() % (Max + static_cast<uint64>(1) - Min)) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, float, lowp, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, float, lowp> call(vecType<D, float, lowp> const & Min, vecType<D, float, lowp> const & Max)
		{
			return vecType<D, float, lowp>(compute_rand<D, uint8, lowp, vecType>::call()) / static_cast<float>(std::numeric_limits<uint8>::max()) * (Max - Min) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, float, mediump, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, float, mediump> call(vecType<D, float, mediump> const & Min, vecType<D, float, mediump> const & Max)
		{
			return vecType<D, float, mediump>(compute_rand<D, uint16, mediump, vecType>::call()) / static_cast<float>(std::numeric_limits<uint16>::max()) * (Max - Min) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, float, highp, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, float, highp> call(vecType<D, float, highp> const & Min, vecType<D, float, highp> const & Max)
		{
			return vecType<D, float, highp>(compute_rand<D, uint32, highp, vecType>::call()) / static_cast<float>(std::numeric_limits<uint32>::max()) * (Max - Min) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, double, lowp, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, double, lowp> call(vecType<D, double, lowp> const & Min, vecType<D, double, lowp> const & Max)
		{
			return vecType<D, double, lowp>(compute_rand<D, uint16, lowp, vecType>::call()) / static_cast<double>(std::numeric_limits<uint16>::max()) * (Max - Min) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, double, mediump, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, double, mediump> call(vecType<D, double, mediump> const & Min, vecType<D, double, mediump> const & Max)
		{
			return vecType<D, double, mediump>(compute_rand<D, uint32, mediump, vecType>::call()) / static_cast<double>(std::numeric_limits<uint32>::max()) * (Max - Min) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, double, highp, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, double, highp> call(vecType<D, double, highp> const & Min, vecType<D, double, highp> const & Max)
		{
			return vecType<D, double, highp>(compute_rand<D, uint64, highp, vecType>::call()) / static_cast<double>(std::numeric_limits<uint64>::max()) * (Max - Min) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, long double, lowp, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, long double, lowp> call(vecType<D, long double, lowp> const & Min, vecType<D, long double, lowp> const & Max)
		{
			return vecType<D, long double, lowp>(compute_rand<D, uint32, lowp, vecType>::call()) / static_cast<long double>(std::numeric_limits<uint32>::max()) * (Max - Min) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, long double, mediump, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, long double, mediump> call(vecType<D, long double, mediump> const & Min, vecType<D, long double, mediump> const & Max)
		{
			return vecType<D, long double, mediump>(compute_rand<D, uint64, mediump, vecType>::call()) / static_cast<long double>(std::numeric_limits<uint64>::max()) * (Max - Min) + Min;
		}
	};

	template <int D, template <int, typename, precision> class vecType>
	struct compute_linearRand<D, long double, highp, vecType>
	{
		GLM_FUNC_QUALIFIER static vecType<D, long double, highp> call(vecType<D, long double, highp> const & Min, vecType<D, long double, highp> const & Max)
		{
			return vecType<D, long double, highp>(compute_rand<D, uint64, highp, vecType>::call()) / static_cast<long double>(std::numeric_limits<uint64>::max()) * (Max - Min) + Min;
		}
	};
}//namespace detail

	template <typename genType>
	GLM_FUNC_QUALIFIER genType linearRand(genType Min, genType Max)
	{
		return detail::compute_linearRand<1, genType, highp, vec>::call(
			vec<1, genType, highp>(Min),
			vec<1, genType, highp>(Max)).x;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> linearRand(vecType<D, T, P> const & Min, vecType<D, T, P> const & Max)
	{
		return detail::compute_linearRand<D, T, P, vecType>::call(Min, Max);
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType gaussRand(genType Mean, genType Deviation)
	{
		genType w, x1, x2;
	
		do
		{
			x1 = linearRand(genType(-1), genType(1));
			x2 = linearRand(genType(-1), genType(1));
		
			w = x1 * x1 + x2 * x2;
		} while(w > genType(1));
	
		return x2 * Deviation * Deviation * sqrt((genType(-2) * log(w)) / w) + Mean;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> gaussRand(vecType<D, T, P> const & Mean, vecType<D, T, P> const & Deviation)
	{
		return detail::functor2<D, T, P>::call(gaussRand, Mean, Deviation);
	}

	template <typename T>
	GLM_FUNC_QUALIFIER vec<2, T, defaultp> diskRand(T Radius)
	{		
		vec<2, T, defaultp> Result(T(0));
		T LenRadius(T(0));
		
		do
		{
			Result = linearRand(
				vec<2, T, defaultp>(-Radius),
				vec<2, T, defaultp>(Radius));
			LenRadius = length(Result);
		}
		while(LenRadius > Radius);
		
		return Result;
	}
	
	template <typename T>
	GLM_FUNC_QUALIFIER vec<3, T, defaultp> ballRand(T Radius)
	{		
		vec<3, T, defaultp> Result(T(0));
		T LenRadius(T(0));
		
		do
		{
			Result = linearRand(
				vec<3, T, defaultp>(-Radius),
				vec<3, T, defaultp>(Radius));
			LenRadius = length(Result);
		}
		while(LenRadius > Radius);
		
		return Result;
	}
	
	template <typename T>
	GLM_FUNC_QUALIFIER vec<2, T, defaultp> circularRand(T Radius)
	{
		T a = linearRand(T(0), T(6.283185307179586476925286766559f));
		return vec<2, T, defaultp>(cos(a), sin(a)) * Radius;		
	}
	
	template <typename T>
	GLM_FUNC_QUALIFIER vec<3, T, defaultp> sphericalRand(T Radius)
	{
		T z = linearRand(T(-1), T(1));
		T a = linearRand(T(0), T(6.283185307179586476925286766559f));
	
		T r = sqrt(T(1) - z * z);
	
		T x = r * cos(a);
		T y = r * sin(a);
	
		return vec<3, T, defaultp>(x, y, z) * Radius;	
	}
}//namespace glm
