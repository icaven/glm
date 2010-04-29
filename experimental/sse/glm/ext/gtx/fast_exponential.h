///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-09
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/fast_exponential.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_half
// - GLM_GTX_double
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_fast_exponential__
#define __glm_gtx_fast_exponential__

// Dependency:
#include "../../glm.h"
#include "../gtx/half.h"
#include "../gtx/double.h"

namespace glm
{
	template <typename T> T fastPowGTX(const T x, const T y); //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec2<T> fastPowGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y); //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec3<T> fastPowGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y); //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec4<T> fastPowGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y); //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)

    template <typename T> T fastPowGTX(const T x, int y); //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec2<T> fastPowGTX(const detail::_xvec2<T>& x, const detail::_xvec2<int>& y); //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec3<T> fastPowGTX(const detail::_xvec3<T>& x, const detail::_xvec3<int>& y); //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec4<T> fastPowGTX(const detail::_xvec4<T>& x, const detail::_xvec4<int>& y); //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)

    template <typename T> T fastExpGTX(const T x); //!< Faster than the common exp function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec2<T> fastExpGTX(const detail::_xvec2<T>& x); //!< Faster than the common exp function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec3<T> fastExpGTX(const detail::_xvec3<T>& x); //!< Faster than the common exp function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec4<T> fastExpGTX(const detail::_xvec4<T>& x); //!< Faster than the common exp function but less accurate (From GLM_GTX_fast_exponential extension)

    template <typename T> T fastLogGTX(const T x); //!< Faster than the common log function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec2<T> fastLogGTX(const detail::_xvec2<T>& x); //!< Faster than the common log function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec3<T> fastLogGTX(const detail::_xvec3<T>& x); //!< Faster than the common log function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec4<T> fastLogGTX(const detail::_xvec4<T>& x); //!< Faster than the common log function but less accurate (From GLM_GTX_fast_exponential extension)

    template <typename T> T fastExp2GTX(const T x); //!< Faster than the common exp2 function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec2<T> fastExp2GTX(const detail::_xvec2<T>& x); //!< Faster than the common exp2 function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec3<T> fastExp2GTX(const detail::_xvec3<T>& x); //!< Faster than the common exp2 function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec4<T> fastExp2GTX(const detail::_xvec4<T>& x); //!< Faster than the common exp2 function but less accurate (From GLM_GTX_fast_exponential extension)

	template <typename T> T fastLog2GTX(const T x); //!< Faster than the common log2 function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec2<T> fastLog2GTX(const detail::_xvec2<T>& x); //!< Faster than the common log2 function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec3<T> fastLog2GTX(const detail::_xvec3<T>& x); //!< Faster than the common log2 function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec4<T> fastLog2GTX(const detail::_xvec4<T>& x); //!< Faster than the common log2 function but less accurate (From GLM_GTX_fast_exponential extension)

	template <typename T> T fastLnGTX(const T x); //!< Faster than the common ln function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec2<T> fastLnGTX(const detail::_xvec2<T>& x); //!< Faster than the common ln function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec3<T> fastLnGTX(const detail::_xvec3<T>& x); //!< Faster than the common ln function but less accurate (From GLM_GTX_fast_exponential extension)
    template <typename T> detail::_xvec4<T> fastLnGTX(const detail::_xvec4<T>& x); //!< Faster than the common ln function but less accurate (From GLM_GTX_fast_exponential extension)

	namespace gtx
	{
		//! GLM_GTX_fast_exponential extension: Fast but less accurate implementations of exponential based functions.
		namespace fast_exponential
		{
			template <typename T> inline T fastPow(const T& x, const T& y){return fastPowGTX(x, y);} //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)
			template <typename T, typename U> inline T fastPow(const T& x, const U& y){return fastPowGTX(x, y);} //!< Faster than the common pow function but less accurate (From GLM_GTX_fast_exponential extension)
			template <typename T> inline T fastExp(const T& x){return fastExpGTX(x);} //!< Faster than the common exp function but less accurate (From GLM_GTX_fast_exponential extension)
			template <typename T> inline T fastLog(const T& x){return fastLogGTX(x);} //!< Faster than the common log function but less accurate (From GLM_GTX_fast_exponential extension)
			template <typename T> inline T fastExp2(const T& x){return fastExp2GTX(x);} //!< Faster than the common exp2 function but less accurate (From GLM_GTX_fast_exponential extension)
			template <typename T> inline T fastLog2(const T& x){return fastLog2GTX(x);} //!< Faster than the common log2 function but less accurate (From GLM_GTX_fast_exponential extension)
			template <typename T> inline T fastLn(const T& x){return fastLnGTX(x);} //!< Faster than the common ln function but less accurate (From GLM_GTX_fast_exponential extension)
		}
	}
}

#define GLM_GTX_fast_exponential namespace gtx::fast_exponential

#include "fast_exponential.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_fast_exponential;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_fast_exponential__
