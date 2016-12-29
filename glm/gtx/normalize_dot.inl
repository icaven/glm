/// @ref gtx_normalize_dot
/// @file glm/gtx/normalize_dot.inl

namespace glm
{
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T normalizeDot(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		return glm::dot(x, y) * glm::inversesqrt(glm::dot(x, x) * glm::dot(y, y));
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T fastNormalizeDot(vecType<D, T, P> const & x, vecType<D, T, P> const & y)
	{
		return glm::dot(x, y) * glm::fastInverseSqrt(glm::dot(x, x) * glm::dot(y, y));
	}
}//namespace glm
