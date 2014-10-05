///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-27
// Licence : This source is under MIT License
// File    : glm/gtx/optimum_pow.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename genType>
	GLM_FUNC_QUALIFIER genType pow2(genType const & x)
	{
		return x * x;
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType pow3(genType const & x)
	{
		return x * x * x;
	}

	template <typename genType>
	GLM_FUNC_QUALIFIER genType pow4(genType const & x)
	{
		return (x * x) * (x * x);
	}

	GLM_FUNC_QUALIFIER bool powOfTwo(int x)
	{
		return !(x & (x - 1));
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec2<bool, P> powOfTwo(tvec2<int, P> const & x)
	{
		return tvec2<bool, P>(
			powOfTwo(x.x),
			powOfTwo(x.y));
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec3<bool, P> powOfTwo(tvec3<int, P> const & x)
	{
		return tvec3<bool, P>(
			powOfTwo(x.x),
			powOfTwo(x.y),
			powOfTwo(x.z));
	}

	template <precision P>
	GLM_FUNC_QUALIFIER tvec4<bool, P> powOfTwo(tvec4<int, P> const & x)
	{
		return tvec4<bool, P>(
			powOfTwo(x.x),
			powOfTwo(x.y),
			powOfTwo(x.z),
			powOfTwo(x.w));
	}
}//namespace glm
