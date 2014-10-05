//////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
//////////////////////////////////////////////////////////////////////////////////
// Created : 2007-09-28
// Updated : 2008-10-07
// Licence : This source is under MIT License
// File    : glm/gtx/normalize_dot.inl
//////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType normalizeDot
	(
		genType const & x, 
		genType const & y
	)
	{
		return 
			glm::dot(x, y) * 
			glm::inversesqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T normalizeDot
	(
		tvec2<T, P> const & x, 
		tvec2<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			glm::inversesqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T normalizeDot
	(
		tvec3<T, P> const & x, 
		tvec3<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			glm::inversesqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T normalizeDot
	(
		tvec4<T, P> const & x, 
		tvec4<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			glm::inversesqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename genType> 
	GLM_FUNC_QUALIFIER genType fastNormalizeDot
	(
		genType const & x, 
		genType const & y
	)
	{
		return 
			glm::dot(x, y) * 
			fastInverseSqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T fastNormalizeDot
	(
		tvec2<T, P> const & x, 
		tvec2<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			fastInverseSqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T fastNormalizeDot
	(
		tvec3<T, P> const & x, 
		tvec3<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			fastInverseSqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T fastNormalizeDot
	(
		tvec4<T, P> const & x, 
		tvec4<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			fastInverseSqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}
}//namespace glm
