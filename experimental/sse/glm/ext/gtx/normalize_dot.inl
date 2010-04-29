//////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
//////////////////////////////////////////////////////////////////////////////////
// Created : 2007-09-28
// Updated : 2007-09-28
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/normalize_dot.inl
//////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
//////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> T normalizeDotGTX(T x, T y)
	{
		return glm::dot(x, y) * glm::inversesqrt(glm::dot(x, x) * glm::dot(y, y));
	}

	template <typename T> T normalizeDotGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
	{
		return glm::dot(x, y) * glm::inversesqrt(glm::dot(x, x) * glm::dot(y, y));
	}

    template <typename T> T normalizeDotGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
	{
		return glm::dot(x, y) * glm::inversesqrt(glm::dot(x, x) * glm::dot(y, y));
	}

    template <typename T> T normalizeDotGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
	{
		return glm::dot(x, y) * glm::inversesqrt(glm::dot(x, x) * glm::dot(y, y));
	}

    template <typename T> T fastNormalizeDotGTX(T x, T y)
	{
		return glm::dot(x, y) * glm::fastInverseSqrtGTX(glm::dot(x, x) * glm::dot(y, y));
	}

    template <typename T> T fastNormalizeDotGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y)
	{
		return glm::dot(x, y) * glm::fastInverseSqrtGTX(glm::dot(x, x) * glm::dot(y, y));
	}

    template <typename T> T fastNormalizeDotGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y)
	{
		return glm::dot(x, y) * glm::fastInverseSqrtGTX(glm::dot(x, x) * glm::dot(y, y));
	}

    template <typename T> T fastNormalizeDotGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y)
	{
		return glm::dot(x, y) * glm::fastInverseSqrtGTX(glm::dot(x, x) * glm::dot(y, y));
	}
}
