/// @ref gtx_wrap
/// @file glm/gtx/wrap.inl

namespace glm
{
	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER vec<L, T, P> clamp(vec<L, T, P> const& Texcoord)
	{
		return glm::clamp(Texcoord, vec<L, T, P>(0), vec<L, T, P>(1));
	}

	template<typename genType>
	GLM_FUNC_QUALIFIER genType clamp(genType const& Texcoord)
	{
		return clamp(vec<1, genType, defaultp>(Texcoord)).x;
	}

	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER vec<L, T, P> repeat(vec<L, T, P> const& Texcoord)
	{
		return glm::fract(Texcoord);
	}

	template<typename genType>
	GLM_FUNC_QUALIFIER genType repeat(genType const& Texcoord)
	{
		return repeat(vec<1, genType, defaultp>(Texcoord)).x;
	}

	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER vec<L, T, P> mirrorClamp(vec<L, T, P> const& Texcoord)
	{
		return glm::fract(glm::abs(Texcoord));
	}

	template<typename genType>
	GLM_FUNC_QUALIFIER genType mirrorClamp(genType const& Texcoord)
	{
		return mirrorClamp(vec<1, genType, defaultp>(Texcoord)).x;
	}

	template<length_t L, typename T, qualifier P>
	GLM_FUNC_QUALIFIER vec<L, T, P> mirrorRepeat(vec<L, T, P> const& Texcoord)
	{
		vec<L, T, P> const Abs = glm::abs(Texcoord);
		vec<L, T, P> const Clamp = glm::mod(glm::floor(Abs), vec<L, T, P>(2));
		vec<L, T, P> const Floor = glm::floor(Abs);
		vec<L, T, P> const Rest = Abs - Floor;
		vec<L, T, P> const Mirror = Clamp + Rest;
		return mix(Rest, vec<L, T, P>(1) - Rest, glm::greaterThanEqual(Mirror, vec<L, T, P>(1)));
	}

	template<typename genType>
	GLM_FUNC_QUALIFIER genType mirrorRepeat(genType const& Texcoord)
	{
		return mirrorRepeat(vec<1, genType, defaultp>(Texcoord)).x;
	}
}//namespace glm
