///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-07
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/extend.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_extend__
#define __glm_gtx_extend__

// Dependency:
#include "../../glm.h"

namespace glm
{
	template <typename genType, typename T> genType extendGTX(const genType& Origin, const genType& Source, const T Length); //!< \brief Extends of Length the Origin position using the (Source - Origin) direction (from GLM_GTX_extend extension)

	namespace gtx
	{
		//! GLM_GTX_extend extension: Extend a position from a source to a position at a defined length.
		namespace extend
		{
			template <typename genType, typename T> inline genType extend(const genType& Origin, const genType& Source, const T Length){return extendGTX(Origin, Source, Length);} //!< \brief Extends of Length the Origin position using the (Source - Origin) direction (from GLM_GTX_extend extension)
		}
	}
}

#define GLM_GTX_extend namespace gtx::extend

#include "extend.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_extend;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_extend__
