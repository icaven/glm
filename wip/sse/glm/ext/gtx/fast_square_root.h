///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-04
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/fast_square_root.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////
// Note:
// - Sqrt optimisation based on Newton's method, 
// www.gamedev.net/community/forums/topic.asp?topic id=139956
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_fast_square_root__
#define __glm_gtx_fast_square_root__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> T fastSqrtGTX(const T x);										//!< Faster than the common sqrt function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> detail::_xvec2<T> fastSqrtGTX(const detail::_xvec2<T>& x);	//!< Faster than the common sqrt function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> detail::_xvec3<T> fastSqrtGTX(const detail::_xvec3<T>& x);	//!< Faster than the common sqrt function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> detail::_xvec4<T> fastSqrtGTX(const detail::_xvec4<T>& x);	//!< Faster than the common sqrt function but less accurate (From GLM_GTX_fast_square_root extension)

    template <typename T> T fastInverseSqrtGTX(const T x);										//!< Faster than the common inversesqrt function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> detail::_xvec2<T> fastInverseSqrtGTX(const detail::_xvec2<T>& x);		//!< Faster than the common inversesqrt function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> detail::_xvec3<T> fastInverseSqrtGTX(const detail::_xvec3<T>& x);		//!< Faster than the common inversesqrt function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> detail::_xvec4<T> fastInverseSqrtGTX(const detail::_xvec4<T>& x);		//!< Faster than the common inversesqrt function but less accurate (From GLM_GTX_fast_square_root extension)

    template <typename T> T fastLengthGTX(const T x);						//!< Faster than the common length function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> T fastLengthGTX(const detail::_xvec2<T>& x);		//!< Faster than the common length function but less accurate (From GLM_GTX_fast_square_root extension)
	template <typename T> T fastLengthGTX(const detail::_xvec3<T>& x);		//!< Faster than the common length function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> T fastLengthGTX(const detail::_xvec4<T>& x);		//!< Faster than the common length function but less accurate (From GLM_GTX_fast_square_root extension)

    template <typename T> T fastDistanceGTX(const T x, const T y);										//!< Faster than the common distance function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> T fastDistanceGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y);	//!< Faster than the common distance function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> T fastDistanceGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y);	//!< Faster than the common distance function but less accurate (From GLM_GTX_fast_square_root extension)
    template <typename T> T fastDistanceGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y);	//!< Faster than the common distance function but less accurate (From GLM_GTX_fast_square_root extension)

	template <typename T> T fastNormalizeGTX(const T x);												//!< Faster than the common normalize function but less accurate (From GLM_GTX_fast_square_root extension)
	template <typename T> detail::_xvec2<T> fastNormalizeGTX(const detail::_xvec2<T>& x);				//!< Faster than the common normalize function but less accurate (From GLM_GTX_fast_square_root extension)
	template <typename T> detail::_xvec3<T> fastNormalizeGTX(const detail::_xvec3<T>& x);				//!< Faster than the common normalize function but less accurate (From GLM_GTX_fast_square_root extension)
	template <typename T> detail::_xvec4<T> fastNormalizeGTX(const detail::_xvec4<T>& x);				//!< Faster than the common normalize function but less accurate (From GLM_GTX_fast_square_root extension)

	namespace gtx
	{
		//! GLM_GTX_fast_square_root extension: Fast but less accurate implementations of square root based functions.
		namespace fast_square_root
		{
			template <typename T> inline T fastSqrt(const T& x){return fastSqrtGTX(x);}								//!< Faster than the common sqrt function but less accurate (From GLM_GTX_fast_square_root extension)
			template <typename T> inline T fastInverseSqrt(const T& x){return fastInverseSqrtGTX(x);}				//!< Faster than the common inversesqrt function but less accurate (From GLM_GTX_fast_square_root extension)
			template <typename T> inline T fastLength(const T& x){return fastLengthGTX(x);}							//!< Faster than the common length function but less accurate (From GLM_GTX_fast_square_root extension)
			template <typename T> inline T fastDistance(const T& x, const T& y){return fastDistanceGTX(x, y);}		//!< Faster than the common distance function but less accurate (From GLM_GTX_fast_square_root extension)
			template <typename T> inline T fastNormalize(const T& x){return fastNormalizeGTX(x);}					//!< Faster than the common normalize function but less accurate (From GLM_GTX_fast_square_root extension)
		}
	}	
}

#define GLM_GTX_fast_square_root namespace gtx::fast_square_root

#include "fast_square_root.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_fast_square_root;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_fast_square_root__
