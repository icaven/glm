/// @ref gtx_normal
/// @file glm/gtx/normal.inl

namespace glm
{
	template<typename T, qualifier P> 
	GLM_FUNC_QUALIFIER vec<3, T, P> triangleNormal
	(
		vec<3, T, P> const & p1, 
		vec<3, T, P> const & p2, 
		vec<3, T, P> const & p3
	)
	{
		return normalize(cross(p1 - p2, p1 - p3));
	}
}//namespace glm
