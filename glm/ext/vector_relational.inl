/// @ref ext_vector_relational

// Dependency:
#include "../vector_relational.hpp"
#include "../common.hpp"
#include "../detail/qualifier.hpp"

namespace glm
{
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, T, Q> const& x, vec<L, T, Q> const& y, T epsilon)
	{
		return equal(x, y, vec<L, T, Q>(epsilon));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> equal(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, T, Q> const& epsilon)
	{
		return lessThanEqual(abs(x - y), epsilon);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, T epsilon)
	{
		return notEqual(x, y, vec<L, T, Q>(epsilon));
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec<L, bool, Q> notEqual(vec<L, T, Q> const& x, vec<L, T, Q> const& y, vec<L, T, Q> const& epsilon)
	{
		return greaterThan(abs(x - y), epsilon);
	}
}//namespace glm
