///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-07
// Updated : 2006-01-07
// Licence : This source is under GNU LGPL licence
// File    : gtx_extend.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM version 1.0
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T>
    T extendGTX(const T Origin, const T Source, const T Distance)
    {
        return Origin + (Source - Origin) * Distance;
    }

	template <typename T>
    detail::_xvec2<T> extendGTX(const detail::_xvec2<T>& Origin, const detail::_xvec2<T>& Source, const T Distance)
    {
        return Origin + (Source - Origin) * Distance;
    }

	template <typename T>
    detail::_xvec3<T> extendGTX(const detail::_xvec3<T>& Origin, const detail::_xvec3<T>& Source, const T Distance)
    {
        return Origin + (Source - Origin) * Distance;
    }

	template <typename T>
    detail::_xvec4<T> extendGTX(const detail::_xvec4<T>& Origin, const detail::_xvec4<T>& Source, const T Distance)
    {
        return Origin + (Source - Origin) * Distance;
    }
}
