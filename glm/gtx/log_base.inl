/// @ref gtx_log_base
/// @file glm/gtx/log_base.inl

namespace glm
{
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType log(genType const & x, genType const & base)
	{
		assert(x != genType(0));
		return glm::log(x) / glm::log(base);
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> log(vecType<D, T, P> const & x, vecType<D, T, P> const & base)
	{
		return glm::log(x) / glm::log(base);
	}
}//namespace glm
