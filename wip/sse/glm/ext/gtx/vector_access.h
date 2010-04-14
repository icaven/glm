///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-16
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vector_access.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_double
// - GLM_GTX_half
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_vector_access__
#define __glm_gtx_vector_access__

// Dependency:
#include "../../glm.h"
#include "../gtx/half.h"
#include "../gtx/double.h"

namespace glm
{
/*
    void setGTX(float& v, float x);
    void setGTX(int& v, int x);
    void setGTX(bool& v, bool x);
    void setGTX(double& v, double x);
    void setGTX(__halfGTX& v, __halfGTX x);
*/
    template <typename T> void setGTX(detail::_xvec2<T>& v, T x, T y);				//!< \brief Sets values to a 2 components vector of floating-point numbers or integers (from GLM_GTX_vector_access extension)
    template <typename T> void setGTX(detail::_xvec3<T>& v, T x, T y, T z);			//!< \brief Sets values to a 3 components vector of floating-point numbers or integers (from GLM_GTX_vector_access extension)
    template <typename T> void setGTX(detail::_xvec4<T>& v, T x, T y, T z, T w);	//!< \brief Sets values to a 4 components vector of floating-point numbers or integers (from GLM_GTX_vector_access extension)

    void setGTX(detail::_bvec2& v, bool x, bool y);									//!< \brief Sets values to a 2 components vector of booleans (from GLM_GTX_vector_access extension)
    void setGTX(detail::_bvec3& v, bool x, bool y, bool z);							//!< \brief Sets values to a 3 components vector of booleans (from GLM_GTX_vector_access extension)
    void setGTX(detail::_bvec4& v, bool x, bool y, bool z, bool w);			        //!< \brief Sets values to a 4 components vector of booleans (from GLM_GTX_vector_access extension)

    namespace gtx
    {
		//! GLM_GTX_vector_access extension: Function to set values to vectors
        namespace vector_access
        {
            template <typename T> void set(detail::_xvec2<T>& v, T x, T y){setGTX(v, x, y);}                    //!< \brief Sets values to a 2 components vector of floating-point numbers or integers (from GLM_GTX_vector_access extension)
            template <typename T> void set(detail::_xvec3<T>& v, T x, T y, T z){setGTX(v, x, y, z);}            //!< \brief Sets values to a 3 components vector of floating-point numbers or integers (from GLM_GTX_vector_access extension)
            template <typename T> void set(detail::_xvec4<T>& v, T x, T y, T z, T w){setGTX(v, x, y, z, w);}    //!< \brief Sets values to a 4 components vector of floating-point numbers or integers (from GLM_GTX_vector_access extension)

            inline void set(detail::_bvec2& v, bool x, bool y){setGTX(v, x, y);}                                //!< \brief Sets values to a 2 components vector of booleans (from GLM_GTX_vector_access extension)
            inline void set(detail::_bvec3& v, bool x, bool y, bool z){setGTX(v, x, y, z);}                     //!< \brief Sets values to a 3 components vector of booleans (from GLM_GTX_vector_access extension)
            inline void set(detail::_bvec4& v, bool x, bool y, bool z, bool w){setGTX(v, x, y, z, w);}          //!< \brief Sets values to a 4 components vector of booleans (from GLM_GTX_vector_access extension)
        }
    }
}

#define GLM_GTX_vector_access namespace gtx::vector_access

#include "vector_access.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_vector_access;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_vector_access__
