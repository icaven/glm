/// @ref core
/// @file glm/detail/func_exponential.inl

#include "func_vector_relational.hpp"
#include "_vectorize.hpp"
#include <limits>
#include <cmath>
#include <cassert>

namespace glm{
namespace detail
{
#	if GLM_HAS_CXX11_STL
		using std::log2;
#	else
		template <typename genType>
		genType log2(genType Value)
		{
			return std::log(Value) * static_cast<genType>(1.4426950408889634073599246810019);
		}
#	endif

	template <int D, typename T, precision P, template <int, class, precision> class vecType, bool isFloat, bool Aligned>
	struct compute_log2
	{
		GLM_FUNC_QUALIFIER static vec<D, T, P> call(vec<D, T, P> const & vec)
		{
			return detail::functor1<D, T, T, P>::call(log2, vec);
		}
	};

	template <int D, typename T, precision P, bool Aligned>
	struct compute_sqrt
	{
		GLM_FUNC_QUALIFIER static vec<D, T, P> call(vec<D, T, P> const & x)
		{
			return detail::functor1<D, T, T, P>::call(std::sqrt, x);
		}
	};

	template <int D, typename T, precision P, bool Aligned>
	struct compute_inversesqrt
	{
		GLM_FUNC_QUALIFIER static vec<D, T, P> call(vec<D, T, P> const & x)
		{
			return static_cast<T>(1) / sqrt(x);
		}
	};
		
	template <int D, bool Aligned>
	struct compute_inversesqrt<D, float, lowp, Aligned>
	{
		GLM_FUNC_QUALIFIER static vec<D, float, lowp> call(vec<D, float, lowp> const & x)
		{
			vec<D, float, lowp> tmp(x);
			vec<D, float, lowp> xhalf(tmp * 0.5f);
			vec<D, uint, lowp>* p = reinterpret_cast<vec<D, uint, lowp>*>(const_cast<vec<D, float, lowp>*>(&x));
			vec<D, uint, lowp> i = vec<D, uint, lowp>(0x5f375a86) - (*p >> vec<D, uint, lowp>(1));
			vec<D, float, lowp>* ptmp = reinterpret_cast<vec<D, float, lowp>*>(&i);
			tmp = *ptmp;
			tmp = tmp * (1.5f - xhalf * tmp * tmp);
			return tmp;
		}
	};
}//namespace detail

	// pow
	using std::pow;
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> pow(vecType<D, T, P> const & base, vecType<D, T, P> const & exponent)
	{
		return detail::functor2<D, T, P>::call(pow, base, exponent);
	}

	// exp
	using std::exp;
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> exp(vecType<D, T, P> const & x)
	{
		return detail::functor1<D, T, T, P>::call(exp, x);
	}

	// log
	using std::log;
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> log(vecType<D, T, P> const & x)
	{
		return detail::functor1<D, T, T, P>::call(log, x);
	}

	//exp2, ln2 = 0.69314718055994530941723212145818f
	template <typename genType>
	GLM_FUNC_QUALIFIER genType exp2(genType x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'exp2' only accept floating-point inputs");

		return std::exp(static_cast<genType>(0.69314718055994530941723212145818) * x);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> exp2(vecType<D, T, P> const & x)
	{
		return detail::functor1<D, T, T, P>::call(exp2, x);
	}

	// log2, ln2 = 0.69314718055994530941723212145818f
	template <typename genType>
	GLM_FUNC_QUALIFIER genType log2(genType x)
	{
		return log2(tvec1<genType>(x)).x;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> log2(vecType<D, T, P> const & x)
	{
		return detail::compute_log2<D, T, P, vecType, std::numeric_limits<T>::is_iec559, detail::is_aligned<P>::value>::call(x);
	}

	// sqrt
	using std::sqrt;
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> sqrt(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'sqrt' only accept floating-point inputs");
		return detail::compute_sqrt<D, T, P, detail::is_aligned<P>::value>::call(x);
	}

	// inversesqrt
	template <typename genType>
	GLM_FUNC_QUALIFIER genType inversesqrt(genType x)
	{
		return static_cast<genType>(1) / sqrt(x);
	}
	
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> inversesqrt(vecType<D, T, P> const & x)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559, "'inversesqrt' only accept floating-point inputs");
		return detail::compute_inversesqrt<D, T, P, detail::is_aligned<P>::value>::call(x);
	}
}//namespace glm

#if GLM_ARCH != GLM_ARCH_PURE && GLM_HAS_UNRESTRICTED_UNIONS
#	include "func_exponential_simd.inl"
#endif

