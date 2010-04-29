///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-12-06
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/handed_coordinate_space.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_handed_coordinate_space__
#define __glm_gtx_handed_coordinate_space__

// Dependency:
#include "../../glm.h"

#define GLM_GTX_handed_coordinate_space_supported 

namespace glm
{
    template <typename T> bool rightHandedGTX(const detail::_xvec3<T>& tangent, const detail::_xvec3<T>& binormal, const detail::_xvec3<T>& normal);    //!< Return if a trihedron right handed or not (From GLM_GTX_handed_coordinate_space extension)
    template <typename T> bool leftHandedGTX(const detail::_xvec3<T>& tangent, const detail::_xvec3<T>& binormal, const detail::_xvec3<T>& normal);     //!< Return if a trihedron left handed or not (From GLM_GTX_handed_coordinate_space extension)

    namespace gtx
    {
		//! GLM_GTX_handed_coordinate_space extension: To know if a triedron is right or left handed
		namespace handed_coordinate_space
        {
            template <typename T> inline bool rightHanded(const detail::_xvec3<T>& tangent, const detail::_xvec3<T>& binormal, const detail::_xvec3<T>& normal){return rightHandedGTX(tangent, binormal, normal);}  //!< Return if a trihedron right handed or not (From GLM_GTX_handed_coordinate_space extension)
            template <typename T> inline bool leftHanded(const detail::_xvec3<T>& tangent, const detail::_xvec3<T>& binormal, const detail::_xvec3<T>& normal){return leftHandedGTX(tangent, binormal, normal);}    //!< Return if a trihedron left handed or not (From GLM_GTX_handed_coordinate_space extension)
        }
    }
}

#define GLM_GTX_handed_coordinate_space namespace gtx::handed_coordinate_space

#include "handed_coordinate_space.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_handed_coordinate_space;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_handed_coordinate_space__
