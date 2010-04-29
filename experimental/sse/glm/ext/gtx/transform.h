///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/transform.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_transform__
#define __glm_gtx_transform__

// Dependency:
#include "../../glm.h"

namespace glm
{
    template <typename T> detail::_xmat4<T> translateGTX(T x, T y, T z);													//!< /brief Builds a translation 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> translateGTX(const detail::_xvec3<T> & v);										//!< /brief Builds a translation 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> translateGTX(const detail::_xmat4<T> & m, T x, T y, T z);						//!< /brief Transforms a matrix with a translation 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> translateGTX(const detail::_xmat4<T> & m, const detail::_xvec3<T> & v);         //!< /brief Transforms a matrix with a translation 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> rotateGTX(T angle, T x, T y, T z);												//!< /brief Builds a rotation 4 * 4 matrix created from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> rotateGTX(T angle, const detail::_xvec3<T> & v);								//!< /brief Builds a rotation 4 * 4 matrix created from an axis vector and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> rotateGTX(const detail::_xmat4<T> & m, T angle, T x, T y, T z);					//!< /brief Transforms a matrix with a rotation 4 * 4 matrix created from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> rotateGTX(const detail::_xmat4<T> & m, T angle, const detail::_xvec3<T> & v);   //!< /brief Transforms a matrix with a rotation 4 * 4 matrix created from an axis vector and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> scaleGTX(T x, T y, T z);														//!< /brief Builds a scale 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> scaleGTX(const detail::_xvec3<T> & v);											//!< /brief Builds a scale 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> scaleGTX(const detail::_xmat4<T> & m, T x, T y, T z);							//!< /brief Transforms a matrix with a scale 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> scaleGTX(const detail::_xmat4<T> & m, const detail::_xvec3<T> & v);             //!< /brief Transforms a matrix with a scale 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)

    // 3D
    template <typename T> detail::_xmat4<T> translate3DGTX(const detail::_xmat4<T> & m, T x, T y, T z);						//!< /brief Transforms a matrix with a translation 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> translate3DGTX(const detail::_xmat4<T> & m, const detail::_xvec3<T> & v);       //!< /brief Transforms a matrix with a translation 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> rotate3DGTX(const detail::_xmat4<T> & m, T angle, T x, T y, T z);				//!< /brief Transforms a matrix with a rotation 4 * 4 matrix created from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> rotate3DGTX(const detail::_xmat4<T> & m, T angle, const detail::_xvec3<T> & v); //!< /brief Transforms a matrix with a rotation 4 * 4 matrix created from an axis vector and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat3<T> rotate3DGTX(const detail::_xmat3<T> & m, T angle, T x, T y, T z);				//!< /brief Transforms a matrix with a rotation 3 * 3 matrix created from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat3<T> rotate3DGTX(const detail::_xmat3<T> & m, T angle, const detail::_xvec3<T> & v); //!< /brief Transforms a matrix with a rotation 3 * 3 matrix created from an axis vector and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> scale3DGTX(const detail::_xmat4<T> & m, T x, T y, T z);							//!< /brief Transforms a matrix with a scale 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat4<T> scale3DGTX(const detail::_xmat4<T> & m, const detail::_xvec3<T> & v);           //!< /brief Transforms a matrix with a scale 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat3<T> scale3DGTX(const detail::_xmat3<T> & m, T x, T y, T z);							//!< /brief Transforms a matrix with a scale 3 * 3 matrix created from 3 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat3<T> scale3DGTX(const detail::_xmat3<T> & m, const detail::_xvec3<T> & v);           //!< /brief Transforms a matrix with a scale 3 * 3 matrix created from a vector of 3 components (from GLM_GTX_transform extension)

    // 2D
    template <typename T> detail::_xmat3<T> translate2DGTX(const detail::_xmat3<T> & m, T x, T y);							//!< /brief Translates a 3 * 3 matrix from 2 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat3<T> translate2DGTX(const detail::_xmat3<T> & m, const detail::_xvec2<T> & v);		//!< /brief Translates a 3 * 3 matrix from a vector of 2 components (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat3<T> rotate2DGTX(const detail::_xmat3<T> & m, T angle);								//!< /brief Rotates a 3 * 3 matrix from an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat2<T> rotate2DGTX(const detail::_xmat2<T> & m, T angle);								//!< /brief Rotates a 2 * 2 matrix from an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat3<T> scale2DGTX(const detail::_xmat3<T> & m, T x, T y);								//!< /brief Scales a 3 * 3 matrix using 2 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat3<T> scale2DGTX(const detail::_xmat3<T> & m, const detail::_xvec2<T> & v);			//!< /brief Scales a 3 * 3 matrix using a vector of 2 components (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat2<T> scale2DGTX(const detail::_xmat2<T> & m, T x, T y);								//!< /brief Scales a 2 * 2 matrix using 2 scalars (from GLM_GTX_transform extension)
    template <typename T> detail::_xmat2<T> scale2DGTX(const detail::_xmat2<T> & m, const detail::_xvec2<T> & v);			//!< /brief Scales a 2 * 2 matrix using a vector of 2 components (from GLM_GTX_transform extension)

    namespace gtx
    {
		//! GLM_GTX_transform extension: Add transformation matrices
        namespace transform
        {
            template <typename T> inline detail::_xmat4<T> translate(T x, T y, T z){return translateGTX(x, y, z);}                                          //!< /brief Builds a translation 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> translate(const detail::_xvec3<T> & v){return translateGTX(v);}                                          //!< /brief Builds a translation 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> translate(const detail::_xmat4<T> & m, T x, T y, T z){return translateGTX(m, x, y, z);}                  //!< /brief Transforms a matrix with a translation 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> translate(const detail::_xmat4<T> & m, const detail::_xvec3<T> & v){return translateGTX(m, v);}                  //!< /brief Transforms a matrix with a translation 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> rotate(T angle, T x, T y, T z){return rotateGTX(angle, x, y, z);}                                //!< /brief Builds a rotation 4 * 4 matrix created from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> rotate(T angle, const detail::_xvec3<T> & v){return rotateGTX(angle, v);}                                //!< /brief Builds a rotation 4 * 4 matrix created from an axis vector and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> rotate(const detail::_xmat4<T> & m, T angle, T x, T y, T z){return rotateGTX(m, angle, x, y, z);}        //!< /brief Transforms a matrix with a rotation 4 * 4 matrix created from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> rotate(const detail::_xmat4<T> & m, T angle, const detail::_xvec3<T> & v){return rotateGTX(m, angle, v);}        //!< /brief Transforms a matrix with a rotation 4 * 4 matrix created from an axis vector and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> scale(T x, T y, T z){return scaleGTX(x, y, z);}                                                  //!< /brief Builds a scale 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> scale(const detail::_xvec3<T> & v){return scaleGTX(v);}                                                  //!< /brief Builds a scale 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> scale(const detail::_xmat4<T> & m, T x, T y, T z){return scaleGTX(m, x, y, z);}                          //!< /brief Transforms a matrix with a scale 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> scale(const detail::_xmat4<T> & m, const detail::_xvec3<T> & v){return scaleGTX(m, v);}                          //!< /brief Transforms a matrix with a scale 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)

            // 3D
            template <typename T> inline detail::_xmat4<T> translate3D(const detail::_xmat4<T> & m, T x, T y, T z){return translate3DGTX(m, x, y, z);}              //!< /brief Transforms a matrix with a translation 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> translate3D(const detail::_xmat4<T> & m, const detail::_xvec3<T> & v){return translate3DGTX(m, v);}              //!< /brief Transforms a matrix with a translation 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> rotate3D(const detail::_xmat4<T> & m, T angle, T x, T y, T z){return rotate3DGTX(m, angle, x, y, z);}    //!< /brief Transforms a matrix with a rotation 4 * 4 matrix created from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> rotate3D(const detail::_xmat4<T> & m, T angle, const detail::_xvec3<T> & v){return rotate3DGTX(m, angle, v);}    //!< /brief Transforms a matrix with a rotation 4 * 4 matrix created from an axis vector and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat3<T> rotate3D(const detail::_xmat3<T> & m, T angle, T x, T y, T z){return rotate3DGTX(m, angle, x, y, z);}    //!< /brief Transforms a matrix with a rotation 3 * 3 matrix created from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat3<T> rotate3D(const detail::_xmat3<T> & m, T angle, const detail::_xvec3<T> & v){return rotate3DGTX(m, angle, v);}    //!< /brief Transforms a matrix with a rotation 3 * 3 matrix created from an axis vector and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> scale3D(const detail::_xmat4<T> & m, T x, T y, T z){return scale3DGTX(m, x, y, z);}                      //!< /brief Transforms a matrix with a scale 4 * 4 matrix created from 3 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat4<T> scale3D(const detail::_xmat4<T> & m, const detail::_xvec3<T> & v){return scale3DGTX(m, v);}                      //!< /brief Transforms a matrix with a scale 4 * 4 matrix created from a vector of 3 components (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat3<T> scale3D(const detail::_xmat3<T> & m, T x, T y, T z){return scale3DGTX(m, x, y, z);}                      //!< /brief Transforms a matrix with a scale 3 * 3 matrix created from 3 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat3<T> scale3D(const detail::_xmat3<T> & m, const detail::_xvec3<T> & v){return scale3DGTX(m, v);}                      //!< /brief Transforms a matrix with a scale 3 * 3 matrix created from a vector of 3 components (from GLM_GTX_transform extension)

            // 2D
            template <typename T> inline detail::_xmat3<T> translate2D(const detail::_xmat3<T> & m, T x, T y){return translate2DGTX(m, x, y);}                      //!< /brief Translates a 3 * 3 matrix from 2 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat3<T> translate2D(const detail::_xmat3<T> & m, const detail::_xvec2<T> & v){return translate2DGTX(m, v);}              //!< /brief Translates a 3 * 3 matrix from a vector of 2 components (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat3<T> rotate2D(const detail::_xmat3<T> & m, T angle){return rotate2DGTX(m, angle);}                            //!< /brief Rotates a 3 * 3 matrix from an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat2<T> rotate2D(const detail::_xmat2<T> & m, T angle){return rotate2DGTX(m, angle);}                            //!< /brief Rotates a 2 * 2 matrix from an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat3<T> scale2D(const detail::_xmat3<T> & m, T x, T y){return scale2DGTX(m, x, y);}                              //!< /brief Scales a 3 * 3 matrix using 2 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat3<T> scale2D(const detail::_xmat3<T> & m, const detail::_xvec2<T> & v){return scale2DGTX(m, v);}                      //!< /brief Scales a 3 * 3 matrix using a vector of 2 components (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat2<T> scale2D(const detail::_xmat2<T> & m, T x, T y){return scale2DGTX(m, x, y);}                              //!< /brief Scales a 2 * 2 matrix using 2 scalars (from GLM_GTX_transform extension)
            template <typename T> inline detail::_xmat2<T> scale2D(const detail::_xmat2<T> & m, const detail::_xvec2<T> & v){return scale2DGTX(m, v);}                      //!< /brief Scales a 2 * 2 matrix using a vector of 2 components (from GLM_GTX_transform extension)
        }
    }
}

#define GLM_GTX_transform namespace gtx::transform

#include "transform.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_transform;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_transform__
