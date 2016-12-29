/// @ref gtx_float_normalize
/// @file glm/gtx/float_normalize.inl

#include <limits>

namespace glm
{
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, float, P> floatNormalize(vecType<D, T, P> const & v)
	{
		return vecType<D, float, P>(v) / static_cast<float>(std::numeric_limits<T>::max());
	}

}//namespace glm
