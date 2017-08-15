/// @ref gtx_mixed_product
/// @file glm/gtx/mixed_product.inl

namespace glm
{
	template<typename T, qualifier P>
	GLM_FUNC_QUALIFIER T mixedProduct
	(
		vec<3, T, P> const & v1,
		vec<3, T, P> const & v2,
		vec<3, T, P> const & v3
	)
	{
		return dot(cross(v1, v2), v3);
	}
}//namespace glm
