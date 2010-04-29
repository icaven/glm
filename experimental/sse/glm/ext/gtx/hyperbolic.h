///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-25
// Updated : 2007-01-26
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/hyperbolic.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_hyperbolic__
#define __glm_gtx_hyperbolic__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> T sinhGTX(const T angle);										//!< \brief The trigonometric hyperbolic sine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec2<T> sinhGTX(const detail::_xvec2<T>& angle);	//!< \brief The standard trigonometric hyperbolic sine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec3<T> sinhGTX(const detail::_xvec3<T>& angle);	//!< \brief The standard trigonometric hyperbolic sine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec4<T> sinhGTX(const detail::_xvec4<T>& angle);	//!< \brief The standard trigonometric hyperbolic sine function. (From GLM_GTX_hyperbolic extension)

    template <typename T> T coshGTX(const T angle);										//!< \brief The trigonometric hyperbolic cosine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec2<T> coshGTX(const detail::_xvec2<T>& angle);	//!< \brief The standard trigonometric hyperbolic cosine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec3<T> coshGTX(const detail::_xvec3<T>& angle);	//!< \brief The standard trigonometric hyperbolic cosine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec4<T> coshGTX(const detail::_xvec4<T>& angle);	//!< \brief The standard trigonometric hyperbolic cosine function. (From GLM_GTX_hyperbolic extension)

    template <typename T> T tanhGTX(const T angle);										//!< \brief The trigonometric hyperbolic tangent function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec2<T> tanhGTX(const detail::_xvec2<T>& angle);	//!< \brief The standard trigonometric hyperbolic tangent function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec3<T> tanhGTX(const detail::_xvec3<T>& angle);	//!< \brief The standard trigonometric hyperbolic tangent function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec4<T> tanhGTX(const detail::_xvec4<T>& angle);	//!< \brief The standard trigonometric hyperbolic tangent function. (From GLM_GTX_hyperbolic extension)

    template <typename T> T asinhGTX(const T angle);									//!< \brief The trigonometric hyperbolic asine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec2<T> asinhGTX(const detail::_xvec2<T>& angle);	//!< \brief The trigonometric hyperbolic asine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec3<T> asinhGTX(const detail::_xvec3<T>& angle);	//!< \brief The trigonometric hyperbolic asine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec4<T> asinhGTX(const detail::_xvec4<T>& angle);	//!< \brief The trigonometric hyperbolic asine function. (From GLM_GTX_hyperbolic extension)

    template <typename T> T acoshGTX(const T angle);									//!< \brief The trigonometric hyperbolic acosine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec2<T> acoshGTX(const detail::_xvec2<T>& angle);	//!< \brief The trigonometric hyperbolic acosine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec3<T> acoshGTX(const detail::_xvec3<T>& angle);	//!< \brief The trigonometric hyperbolic acosine function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec4<T> acoshGTX(const detail::_xvec4<T>& angle);	//!< \brief The trigonometric hyperbolic acosine function. (From GLM_GTX_hyperbolic extension)

    template <typename T> T atanhGTX(const T angle);									//!< \brief The trigonometric hyperbolic atangente function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec2<T> atanhGTX(const detail::_xvec2<T>& angle);	//!< \brief The trigonometric hyperbolic atangente function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec3<T> atanhGTX(const detail::_xvec3<T>& angle);	//!< \brief The trigonometric hyperbolic atangente function. (From GLM_GTX_hyperbolic extension)
    template <typename T> detail::_xvec4<T> atanhGTX(const detail::_xvec4<T>& angle);	//!< \brief The trigonometric hyperbolic atangente function. (From GLM_GTX_hyperbolic extension)

    namespace gtx
    {
		//! GLM_GTX_hyperbolic extension: Add hyperbolic functions
        namespace hyperbolic
        {
            template <typename T> inline T sinh(const T& angle){return sinhGTX(angle);} //!< \brief The trigonometric hyperbolic sine function. (From GLM_GTX_hyperbolic extension)
            template <typename T> inline T cosh(const T& angle){return coshGTX(angle);} //!< \brief The trigonometric hyperbolic cosine function. (From GLM_GTX_hyperbolic extension)
            template <typename T> inline T tanh(const T& angle){return tanhGTX(angle);} //!< \brief The trigonometric hyperbolic tangent function. (From GLM_GTX_hyperbolic extension)

            template <typename T> inline T asinh(const T& x){return asinhGTX(x);} //!< \brief The trigonometric hyperbolic asine function. (From GLM_GTX_hyperbolic extension)
            template <typename T> inline T acosh(const T& x){return asinhGTX(x);} //!< \brief The trigonometric hyperbolic acosine function. (From GLM_GTX_hyperbolic extension)
            template <typename T> inline T atanh(const T& x){return asinhGTX(x);} //!< \brief The trigonometric hyperbolic atangente function. (From GLM_GTX_hyperbolic extension)
        }
    }
}

#define GLM_GTX_hyperbolic namespace gtx::hyperbolic

#include "hyperbolic.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_hyperbolic;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_hyperbolic__
