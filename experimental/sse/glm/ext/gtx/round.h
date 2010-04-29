///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/round.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_half
// - GLM_GTX_double
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_round__
#define __glm_gtx_round__

// Dependency:
#include "../../glm.h"
#include "../../ext/gtx/half.h"
#include "../../ext/gtx/double.h"

namespace glm
{
    template <typename genType> genType roundGTX(const genType& x);     //!< \brief Computes the component-wise round value of x (from GLM_GTX_round extension)
    __halfGTX roundGTX(__halfGTX x);                                    //!< \brief Computes the round value of x (from GLM_GTX_round extension)
    float roundGTX(float x);                                            //!< \brief Computes the round value of x (from GLM_GTX_round extension)
    double roundGTX(double x);                                          //!< \brief Computes the round value of x (from GLM_GTX_round extension)

    namespace gtx
    {
		//! GLM_GTX_round extension: Computes the round value
        namespace round
        {
            template <typename genType> inline genType round(const genType& x){return roundGTX(x);}     //!< \brief Computes the component-wise round value of x (from GLM_GTX_round extension)
            inline __halfGTX round(__halfGTX x){return roundGTX(x);}                                    //!< \brief Computes the round value of x (from GLM_GTX_round extension)
            inline float round(float x){return roundGTX(x);}                                            //!< \brief Computes the round value of x (from GLM_GTX_round extension)
            inline double round(double x){return roundGTX(x);}                                          //!< \brief Computes the round value of x (from GLM_GTX_round extension)
        }
    }
}

#define GLM_GTX_round namespace gtx::round

#include "round.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_round;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_round__
