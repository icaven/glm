///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-11-21
// Updated : 2007-11-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/statistics_operation.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_statistics_operation__
#define __glm_gtx_statistics_operation__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> T distanceGTX(const _xvec2<T>& v1, const _xvec2<T>& v2);
    template <typename T> T distanceGTX(const _xvec3<T>& v1, const _xvec3<T>& v2);
    template <typename T> T distanceGTX(const _xvec4<T>& v1, const _xvec4<T>& v2);

    template <typename T> T distanceGTX(const _xmat2<T>& m1, const _xmat2<T>& m2);
    template <typename T> T distanceGTX(const _xmat3<T>& m1, const _xmat3<T>& m2);
    template <typename T> T distanceGTX(const _xmat4<T>& m1, const _xmat4<T>& m2);

    template <typename T> T expectedValueGTX(const _xvec2<T>& v1, const _xvec2<T>& v2);
    template <typename T> T expectedValueGTX(const _xvec3<T>& v1, const _xvec3<T>& v2);
    template <typename T> T expectedValueGTX(const _xvec4<T>& v1, const _xvec4<T>& v2);

    template <typename T> T expectedValueGTX(const _xmat2<T>& m1, const _xmat2<T>& m2);
    template <typename T> T expectedValueGTX(const _xmat3<T>& m1, const _xmat3<T>& m2);
    template <typename T> T expectedValueGTX(const _xmat4<T>& m1, const _xmat4<T>& m2);

    template <typename T> T varianceGTX(const _xvec2<T>& v1, const _xvec2<T>& v2);
    template <typename T> T varianceGTX(const _xvec3<T>& v1, const _xvec3<T>& v2);
    template <typename T> T varianceGTX(const _xvec4<T>& v1, const _xvec4<T>& v2);

    template <typename T> T varianceGTX(const _xmat2<T>& m1, const _xmat2<T>& m2);
    template <typename T> T varianceGTX(const _xmat3<T>& m1, const _xmat3<T>& m2);
    template <typename T> T varianceGTX(const _xmat4<T>& m1, const _xmat4<T>& m2);

    template <typename T> T standardDevitionGTX(const _xvec2<T>& v1, const _xvec2<T>& v2);
    template <typename T> T standardDevitionGTX(const _xvec3<T>& v1, const _xvec3<T>& v2);
    template <typename T> T standardDevitionGTX(const _xvec4<T>& v1, const _xvec4<T>& v2);

    template <typename T> T standardDevitionGTX(const _xmat2<T>& m1, const _xmat2<T>& m2);
    template <typename T> T standardDevitionGTX(const _xmat3<T>& m1, const _xmat3<T>& m2);
    template <typename T> T standardDevitionGTX(const _xmat4<T>& m1, const _xmat4<T>& m2);

    namespace gtx
    {
		//! GLM_GTX_statistics_operation extension: - Work in progress - Statistics functions
        namespace statistics_operation
        {

        }
    }
}

#define GLM_GTX_statistics_operation namespace gtx::statistics_operation

#include "statistics_operation.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_statistics_operation;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_statistics_operation__
