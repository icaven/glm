///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-14
// Updated : 2007-08-14
// Licence : This source is under GNU LGPL licence
// File    : gtx_extented_min_max.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_half
// - GLM_GTX_double
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_extented_min_max__
#define __glm_gtx_extented_min_max__

// Dependency:
#include "../../glm.h"
#include "../gtx/half.h"
#include "../gtx/double.h"

namespace glm
{
	template <typename T> detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const T y, const T z); //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const T y, const T z); //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const T y, const T z); //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)

    template <typename T> detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const T y, const T z, const T w); //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const T y, const T z, const T w); //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const T y, const T z, const T w); //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)

    template <typename T> detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z); //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z); //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z); //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)

    template <typename T> detail::_xvec2<T> minGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z, const detail::_xvec2<T>& w); //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec3<T> minGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z, const detail::_xvec3<T>& w); //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec4<T> minGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z, const detail::_xvec4<T>& w); //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)

	template <typename T> detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const T y, const T z); //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const T y, const T z); //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const T y, const T z); //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)

    template <typename T> detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const T y, const T z, const T w); //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const T y, const T z, const T w); //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const T y, const T z, const T w); //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)

    template <typename T> detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z); //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z); //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z); //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)

    template <typename T> detail::_xvec2<T> maxGTX(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z, const detail::_xvec2<T>& w); //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec3<T> maxGTX(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z, const detail::_xvec3<T>& w); //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
    template <typename T> detail::_xvec4<T> maxGTX(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z, const detail::_xvec4<T>& w); //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)

	namespace gtx
	{
		//! GLM_GTX_extented_min_max extension: Min and max functions for 3 to 4 parameters.
		namespace extented_min_max
		{
			template <typename T> inline detail::_xvec2<T> min(const detail::_xvec2<T>& x, const T y, const T z){return minGTX(x, y, z);} //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec3<T> min(const detail::_xvec3<T>& x, const T y, const T z){return minGTX(x, y, z);} //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec4<T> min(const detail::_xvec4<T>& x, const T y, const T z){return minGTX(x, y, z);} //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)

			template <typename T> inline detail::_xvec2<T> min(const detail::_xvec2<T>& x, const T y, const T z, const T w){return minGTX(x, y, z, w);} //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec3<T> min(const detail::_xvec3<T>& x, const T y, const T z, const T w){return minGTX(x, y, z, w);} //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec4<T> min(const detail::_xvec4<T>& x, const T y, const T z, const T w){return minGTX(x, y, z, w);} //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)

			template <typename T> inline detail::_xvec2<T> min(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z){return minGTX(x, y, z);} //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec3<T> min(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z){return minGTX(x, y, z);} //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec4<T> min(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z){return minGTX(x, y, z);} //!< Return the minimum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)

			template <typename T> inline detail::_xvec2<T> min(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z, const detail::_xvec2<T>& w){return minGTX(x, y, z, w);} //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec3<T> min(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z, const detail::_xvec3<T>& w){return minGTX(x, y, z, w);} //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec4<T> min(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z, const detail::_xvec4<T>& w){return minGTX(x, y, z, w);} //!< Return the minimum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)

			template <typename T> inline detail::_xvec2<T> max(const detail::_xvec2<T>& x, const T y, const T z){return maxGTX(x, y, z);} //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec3<T> max(const detail::_xvec3<T>& x, const T y, const T z){return maxGTX(x, y, z);} //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec4<T> max(const detail::_xvec4<T>& x, const T y, const T z){return maxGTX(x, y, z);} //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)

			template <typename T> inline detail::_xvec2<T> max(const detail::_xvec2<T>& x, const T y, const T z, const T w){return maxGTX(x, y, z, w);} //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec3<T> max(const detail::_xvec3<T>& x, const T y, const T z, const T w){return maxGTX(x, y, z, w);} //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec4<T> max(const detail::_xvec4<T>& x, const T y, const T z, const T w){return maxGTX(x, y, z, w);} //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)

			template <typename T> inline detail::_xvec2<T> max(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z){return maxGTX(x, y, z);} //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec3<T> max(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z){return maxGTX(x, y, z);} //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec4<T> max(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z){return maxGTX(x, y, z);} //!< Return the maximum component-wise values of 3 imputs (From GLM_GTX_extented_min_max extension)

			template <typename T> inline detail::_xvec2<T> max(const detail::_xvec2<T>& x, const detail::_xvec2<T>& y, const detail::_xvec2<T>& z, const detail::_xvec2<T>& w){return maxGTX(x, y, z, w);} //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec3<T> max(const detail::_xvec3<T>& x, const detail::_xvec3<T>& y, const detail::_xvec3<T>& z, const detail::_xvec3<T>& w){return maxGTX(x, y, z, w);} //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
			template <typename T> inline detail::_xvec4<T> max(const detail::_xvec4<T>& x, const detail::_xvec4<T>& y, const detail::_xvec4<T>& z, const detail::_xvec4<T>& w){return maxGTX(x, y, z, w);} //!< Return the maximum component-wise values of 4 imputs (From GLM_GTX_extented_min_max extension)
		}
	}
}

#define GLM_GTX_extented_min_max namespace gtx::extented_min_max

#include "extented_min_max.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_extented_min_max;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_extented_min_max__
