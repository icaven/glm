///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2007-02-22
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/color_space.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_color_space__
#define __glm_gtx_color_space__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xvec3<T> rgbColorGTX(const detail::_xvec3<T>& hsvValue);				//!< \brief Converts a color from HSV color space to its color in RGB color space (from GLM_GTX_color_space extension)
    template <typename T> detail::_xvec3<T> hsvColorGTX(const detail::_xvec3<T>& rgbValue);				//!< \brief Converts a color from RGB color space to its color in HSV color space (from GLM_GTX_color_space extension)
	template <typename T> detail::_xmat4<T> saturationGTX(const T s);									//!< Build a saturation matrix (from GLM_GTX_color_space extension)
	template <typename T> detail::_xvec3<T> saturationGTX(const T s, const detail::_xvec3<T>& color);	//!< Modify the saturation of a color (from GLM_GTX_color_space extension)
	template <typename T> detail::_xvec4<T> saturationGTX(const T s, const detail::_xvec4<T>& color);	//!< Modify the saturation of a color (from GLM_GTX_color_space extension)
	template <typename T> T luminosityGTX(const detail::_xvec3<T>& cColor);								//!< Compute color luminosity associating ratios (0.33, 0.59, 0.11) to RGB canals (from GLM_GTX_color_space extension)

    namespace gtx
    {
		//! GLM_GTX_color_space extension: Related to RVB to HSV conversions and operations
        namespace color_space
        {
            template <typename T> inline detail::_xvec3<T> rgbColor(const detail::_xvec3<T>& hsvValue){return rgbColorGTX(hsvValue);}				//!< \brief Converts a color from HSV color space to its color in RGB color space (from GLM_GTX_color_space extension)
            template <typename T> inline detail::_xvec3<T> hsvColor(const detail::_xvec3<T>& rgbValue){return hsvColorGTX(rgbValue);}				//!< \brief Converts a color from RGB color space to its color in HSV color space (from GLM_GTX_color_space extension)
	        template <typename T> inline detail::_xmat4<T> saturation(const T s){return saturationGTX(s);}											//!< Build a saturation matrix (from GLM_GTX_color_space extension)
	        template <typename T> inline detail::_xvec3<T> saturation(const T s, const detail::_xvec3<T>& color){return saturationGTX(s, color);}	//!< Modify the saturation of a color (from GLM_GTX_color_space extension)
	        template <typename T> inline detail::_xvec4<T> saturation(const T s, const detail::_xvec4<T>& color){return saturationGTX(s, color);}	//!< Modify the saturation of a color (from GLM_GTX_color_space extension)
			template <typename T> inline T luminosity(const detail::_xvec3<T>& color){return luminosityGTX(color);}									//!< Compute color luminosity associating ratios (0.33, 0.59, 0.11) to RGB canals (from GLM_GTX_color_space extension)
        }
    }
}

#define GLM_GTX_color_space namespace gtx::color_space

#include "color_space.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_color_space;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_color_space__
