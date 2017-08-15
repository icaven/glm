/// @ref gtx_float_normalize
/// @file glm/gtx/float_normalize.inl

#include <limits>

namespace glm
{
	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER vec<L, float, P> floatNormalize(vec<L, T, P> const& v)
	{
		return vec<L, float, P>(v) / static_cast<float>(std::numeric_limits<T>::max());
	}

}//namespace glm
