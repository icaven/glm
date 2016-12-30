/// @ref gtx_wrap
/// @file glm/gtx/wrap.inl

namespace glm
{
	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> clamp(vecType<D, T, P> const& Texcoord)
	{
		return glm::clamp(Texcoord, vecType<D, T, P>(0), vecType<D, T, P>(1));
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType clamp(genType const & Texcoord)
	{
		return clamp(vec<1, genType, defaultp>(Texcoord)).x;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> repeat(vecType<D, T, P> const& Texcoord)
	{
		return glm::fract(Texcoord);
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType repeat(genType const & Texcoord)
	{
		return repeat(vec<1, genType, defaultp>(Texcoord)).x;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> mirrorClamp(vecType<D, T, P> const& Texcoord)
	{
		return glm::fract(glm::abs(Texcoord));
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType mirrorClamp(genType const & Texcoord)
	{
		return mirrorClamp(vec<1, genType, defaultp>(Texcoord)).x;
	}

	template <int D, typename T, precision P, template <int, typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<D, T, P> mirrorRepeat(vecType<D, T, P> const& Texcoord)
	{
		vecType<D, T, P> const Abs = glm::abs(Texcoord);
		vecType<D, T, P> const Clamp = glm::mod(glm::floor(Abs), vecType<D, T, P>(2));
		vecType<D, T, P> const Floor = glm::floor(Abs);
		vecType<D, T, P> const Rest = Abs - Floor;
		vecType<D, T, P> const Mirror = Clamp + Rest;
		return mix(Rest, vecType<D, T, P>(1) - Rest, glm::greaterThanEqual(Mirror, vecType<D, T, P>(1)));
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType mirrorRepeat(genType const& Texcoord)
	{
		return mirrorRepeat(vec<1, genType, defaultp>(Texcoord)).x;
	}
}//namespace glm
