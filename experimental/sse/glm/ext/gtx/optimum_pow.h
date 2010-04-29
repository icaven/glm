///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/optimum_pow.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_optimum_pow__
#define __glm_gtx_optimum_pow__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename genType> genType pow2GTX(const genType& x);  //!< \brief Returns x raised to the power of 2. (From GLM_GTX_optimum_pow extension)
    template <typename genType> genType pow3GTX(const genType& x);  //!< \brief Returns x raised to the power of 3. (From GLM_GTX_optimum_pow extension)
    template <typename genType> genType pow4GTX(const genType& x);  //!< \brief Returns x raised to the power of 4. (From GLM_GTX_optimum_pow extension)
    
    inline bool powOfTwoGTX(int num);									//!< \brief Checks if the parameter is a power of 2 number. (From GLM_GTX_optimum_pow extension)
    inline detail::_bvec2 powOfTwoGTX(const detail::_xvec2<int>& x);	//!< \brief Checks to determine if the parameter component are power of 2 numbers. (From GLM_GTX_optimum_pow extension)
    inline detail::_bvec3 powOfTwoGTX(const detail::_xvec3<int>& x);	//!< \brief Checks to determine if the parameter component are power of 2 numbers. (From GLM_GTX_optimum_pow extension)
    inline detail::_bvec4 powOfTwoGTX(const detail::_xvec4<int>& x);	//!< \brief Checks to determine if the parameter component are power of 2 numbers. (From GLM_GTX_optimum_pow extension)

    namespace gtx
    {
		//! GLM_GTX_optimum_pow extension: Integer exponenciation of power functions.
        namespace optimum_pow
        {
            template <typename genType> inline genType pow2(const genType& x){return pow2GTX(x);}   //!< \brief Returns x raised to the power of 2. (From GLM_GTX_optimum_pow extension)
            template <typename genType> inline genType pow3(const genType& x){return pow3GTX(x);}   //!< \brief Returns x raised to the power of 3. (From GLM_GTX_optimum_pow extension)
            template <typename genType> inline genType pow4(const genType& x){return pow4GTX(x);}   //!< \brief Returns x raised to the power of 4. (From GLM_GTX_optimum_pow extension)
            
            inline bool powOfTwo(int num){return powOfTwoGTX(num);}                                 //!< \brief Checks if the parameter is a power of 2 number. (From GLM_GTX_optimum_pow extension)
            inline detail::_bvec2 powOfTwo(const detail::_xvec2<int>& x){return powOfTwoGTX(x);}	//!< \brief Checks to determine if the parameter component are power of 2 numbers. (From GLM_GTX_optimum_pow extension)
            inline detail::_bvec3 powOfTwo(const detail::_xvec3<int>& x){return powOfTwoGTX(x);}	//!< \brief Checks to determine if the parameter component are power of 2 numbers. (From GLM_GTX_optimum_pow extension)
            inline detail::_bvec4 powOfTwo(const detail::_xvec4<int>& x){return powOfTwoGTX(x);}	//!< \brief Checks to determine if the parameter component are power of 2 numbers. (From GLM_GTX_optimum_pow extension)
        }
    }
}

#define GLM_GTX_optimum_pow namespace gtx::optimum_pow

#include "optimum_pow.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_optimum_pow;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_optimum_pow__
