/// @ref core
/// @file glm/detail/func_vector_relational.inl

#include <limits>

namespace glm
{
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, bool, P> lessThan(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<D, bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] < y[i];

		return Result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, bool, P> lessThanEqual(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<D, bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] <= y[i];
		return Result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, bool, P> greaterThan(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<D, bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] > y[i];
		return Result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, bool, P> greaterThanEqual(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<D, bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] >= y[i];
		return Result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, bool, P> equal(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<D, bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] == y[i];
		return Result;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, bool, P> notEqual(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		assert(x.length() == y.length());

		vecType<D, bool, P> Result(uninitialize);
		for(length_t i = 0; i < x.length(); ++i)
			Result[i] = x[i] != y[i];
		return Result;
	}

	template <int D, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER bool any(vecType<D, bool, P> const & v)
	{
		bool Result = false;
		for(length_t i = 0; i < v.length(); ++i)
			Result = Result || v[i];
		return Result;
	}

	template <int D, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER bool all(vecType<D, bool, P> const & v)
	{
		bool Result = true;
		for(length_t i = 0; i < v.length(); ++i)
			Result = Result && v[i];
		return Result;
	}

	template <int D, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, bool, P> not_(vecType<D, bool, P> const & v)
	{
		vecType<D, bool, P> Result(uninitialize);
		for(length_t i = 0; i < v.length(); ++i)
			Result[i] = !v[i];
		return Result;
	}
}//namespace glm

#if GLM_ARCH != GLM_ARCH_PURE && GLM_HAS_UNRESTRICTED_UNIONS
#	include "func_vector_relational_simd.inl"
#endif
