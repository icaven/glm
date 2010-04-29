///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-08
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/fast_trigonometry.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_fast_trigonometry__
#define __glm_gtx_fast_trigonometry__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> T fastSinGTX(const T angle);										//!< Faster than the common sin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec2<T> fastSinGTX(const detail::_xvec2<T>& angle);		//!< Faster than the common sin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec3<T> fastSinGTX(const detail::_xvec3<T>& angle);		//!< Faster than the common sin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec4<T> fastSinGTX(const detail::_xvec4<T>& angle);		//!< Faster than the common sin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)

    template <typename T> T fastCosGTX(const T angle);										//!< Faster than the common cos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec2<T> fastCosGTX(const detail::_xvec2<T>& angle);		//!< Faster than the common cos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec3<T> fastCosGTX(const detail::_xvec3<T>& angle);		//!< Faster than the common cos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec4<T> fastCosGTX(const detail::_xvec4<T>& angle);		//!< Faster than the common cos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)

    template <typename T> T fastTanGTX(const T angle);										//!< Faster than the common tan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec2<T> fastTanGTX(const detail::_xvec2<T>& angle);		//!< Faster than the common tan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec3<T> fastTanGTX(const detail::_xvec3<T>& angle);		//!< Faster than the common tan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec4<T> fastTanGTX(const detail::_xvec4<T>& angle);		//!< Faster than the common tan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)

    template <typename T> T fastAsinGTX(const T x);											//!< Faster than the common asin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec2<T> fastAsinGTX(const detail::_xvec2<T>& x);		//!< Faster than the common asin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec3<T> fastAsinGTX(const detail::_xvec3<T>& x);		//!< Faster than the common asin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec4<T> fastAsinGTX(const detail::_xvec4<T>& x);		//!< Faster than the common asin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)

    template <typename T> T fastAcosGTX(const T x);											//!< Faster than the common acos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec2<T> fastAcosGTX(const detail::_xvec2<T>& x);		//!< Faster than the common acos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec3<T> fastAcosGTX(const detail::_xvec3<T>& x);		//!< Faster than the common acos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec4<T> fastAcosGTX(const detail::_xvec4<T>& x);		//!< Faster than the common acos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)

    template <typename T> T fastAtanGTX(const T y, const T x);														//!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec2<T> fastAtanGTX(const detail::_xvec2<T>& y, const detail::_xvec2<T>& x);	//!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec3<T> fastAtanGTX(const detail::_xvec3<T>& y, const detail::_xvec3<T>& x);	//!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec4<T> fastAtanGTX(const detail::_xvec4<T>& y, const detail::_xvec4<T>& x);	//!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)

    template <typename T> T fastAtanGTX(const T y_over_x);									//!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec2<T> fastAtanGTX(const detail::_xvec2<T>& y_over_x); //!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec3<T> fastAtanGTX(const detail::_xvec3<T>& y_over_x); //!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
    template <typename T> detail::_xvec4<T> fastAtanGTX(const detail::_xvec4<T>& y_over_x); //!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)

    namespace gtx
    {
		//! GLM_GTX_fast_trigonometry extension: Fast but less accurate implementations of trigonometric functions.
        namespace fast_trigonometry
        {
            template <typename T> inline T fastSin(const T& angle){return fastSinGTX(angle);}			//!< Faster than the common sin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
            template <typename T> inline T fastCos(const T& angle){return fastCosGTX(angle);}			//!< Faster than the common cos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
            template <typename T> inline T fastTan(const T& angle){return fastTanGTX(angle);}			//!< Faster than the common tan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
            template <typename T> inline T fastAsin(const T& angle){return fastAsinGTX(angle);}			//!< Faster than the common asin function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
            template <typename T> inline T fastAcos(const T& angle){return fastAcosGTX(angle);}			//!< Faster than the common acos function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
            template <typename T> inline T fastAtan(const T& y, const T& x){return fastAtanGTX(y, x);}	//!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
            template <typename T> inline T fastAtan(const T& angle){return fastAtanGTX(angle);}			//!< Faster than the common atan function but less accurate. Defined between -2pi and 2pi. (From GLM_GTX_fast_trigonometry extension)
        }
    }
}

#define GLM_GTX_fast_trigonometry namespace gtx::fast_trigonometry

#include "fast_trigonometry.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_fast_trigonometry;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_fast_trigonometry__
