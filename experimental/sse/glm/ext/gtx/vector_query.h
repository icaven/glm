///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-05
// Updated : 2007-03-05
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/vector_query.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_vector_query__
#define __glm_gtx_vector_query__

// Dependency:
#include "../../glm.h"
#include <cfloat>

namespace glm
{
	template <typename T> bool areCollinearGTX(const detail::_xvec2<T>& v0, const detail::_xvec2<T>& v1, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Check if two vectors are collinears (From GLM_GTX_vector_query extensions)
	template <typename T> bool areCollinearGTX(const detail::_xvec3<T>& v0, const detail::_xvec3<T>& v1, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Check if two vectors are collinears (From GLM_GTX_vector_query extensions)
	template <typename T> bool areCollinearGTX(const detail::_xvec4<T>& v0, const detail::_xvec4<T>& v1, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Check if two vectors are collinears (From GLM_GTX_vector_query extensions)

	template <typename T> bool areOppositeGTX(const detail::_xvec2<T>& v0, const detail::_xvec2<T>& v1, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Check if two vectors are opposite (From GLM_GTX_vector_query extensions)
	template <typename T> bool areOppositeGTX(const detail::_xvec3<T>& v0, const detail::_xvec3<T>& v1, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Check if two vectors are opposite (From GLM_GTX_vector_query extensions)
	template <typename T> bool areOppositeGTX(const detail::_xvec4<T>& v0, const detail::_xvec4<T>& v1, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Check if two vectors are opposite (From GLM_GTX_vector_query extensions)

    template <typename genType> bool areOrthogonalGTX(const genType& v0, const genType& v1, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon()); //!< Check if two vectors are orthogonal (From GLM_GTX_vector_query extensions)

	template <typename genType> bool isNormalizedGTX(const genType& v, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon());	//!< Check if a vector is normalized (From GLM_GTX_vector_query extensions)

	template <typename genType> bool isNullGTX(const genType& v, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon());		//!< Check if a vector is null (From GLM_GTX_vector_query extensions)

    template <typename T> bool isCompNullGTX(const float s, const T epsilon = std::numeric_limits<T>::epsilon());					//!< Check if each vector component is null (From GLM_GTX_vector_query extensions)
    template <typename T> bvec2 isCompNullGTX(const detail::_xvec2<T>& v, const T epsilon = std::numeric_limits<T>::epsilon());     //!< Check if each vector component is null (From GLM_GTX_vector_query extensions)
    template <typename T> bvec3 isCompNullGTX(const detail::_xvec3<T>& v, const T epsilon = std::numeric_limits<T>::epsilon());     //!< Check if each vector component is null (From GLM_GTX_vector_query extensions)
    template <typename T> bvec4 isCompNullGTX(const detail::_xvec4<T>& v, const T epsilon = std::numeric_limits<T>::epsilon());     //!< Check if each vector component is null (From GLM_GTX_vector_query extensions)

	template <typename genType> bool areOrthonormalGTX(const genType& v0, const genType& v1, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon());	//!< Check if two vectors are orthonormal (From GLM_GTX_vector_query extensions)

	template <typename genType> bool areSimilarGTX(const genType& v0, const genType& v1, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon());		//!< Check if two vectors are similar (From GLM_GTX_vector_query extensions)

    namespace gtx
    {
		//! GLM_GTX_vector_query extension: Query informations of vector types
        namespace vector_query
        {
	        template <typename genType> inline bool areCollinear(const genType& v0, const genType& v1, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon()){return areCollinearGTX(v0, v1, epsilon);}		//!< Check if two vectors are collinears (From GLM_GTX_vector_query extensions)
	        template <typename genType> inline bool areOpposite(const genType& v0, const genType& v1, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon()){return areOppositeGTX(v0, v1, epsilon);}		//!< Check if two vectors are opposites (From GLM_GTX_vector_query extensions)
	        template <typename genType> inline bool areOrthogonal(const genType& v0, const genType& v1, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon()){return areOrthogonalGTX(v0, v1, epsilon);}	//!< Check if two vectors are orthogonals (From GLM_GTX_vector_query extensions)
	        template <typename genType> inline bool isNormalized(const genType& v, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon()){return isNormalizedGTX(v, epsilon);}								//!< Check if a vector is normalized (From GLM_GTX_vector_query extensions)
	        template <typename genType> inline bool isNull(const genType& v, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon()){return isNullGTX(v, epsilon);}											//!< Check if a vector is null (From GLM_GTX_vector_query extensions)
	        template <typename genType> inline bool areOrthonormal(const genType& v0, const genType& v1, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon()){return areOrthonormalGTX(v0, v1, epsilon);}	//!< Check if two vectors are orthonormal (From GLM_GTX_vector_query extensions)
	        template <typename genType> inline bool areSimilar(const genType& v0, const genType& v1, const GLMvalType epsilon = std::numeric_limits<GLMvalType>::epsilon()){return areSimilarGTX(v0, v1, epsilon);}			//!< Check if two vectors are similar (From GLM_GTX_vector_query extensions)
        }
    }
}

#define GLM_GTX_vector_query namespace gtx::vector_query

#include "vector_query.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_vector_query;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_vector_query__
