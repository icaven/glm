///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-03-05
// Updated : 2007-03-05
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_query.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_matrix_query__
#define __glm_gtx_matrix_query__

// Dependency:
#include "../../glm.h"
#include <cfloat>

namespace glm
{
	template<typename T> bool isNullGTX(const detail::_xmat2<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Return if a matrix a null matrix (from GLM_GTX_matrix_query extension)
	template<typename T> bool isNullGTX(const detail::_xmat3<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Return if a matrix a null matrix (from GLM_GTX_matrix_query extension)
	template<typename T> bool isNullGTX(const detail::_xmat4<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Return if a matrix a null matrix (from GLM_GTX_matrix_query extension)

	template<typename genType> bool isIdentityGTX(const genType& m, const typename genType::value_type epsilon = std::numeric_limits<typename genType::value_type>::epsilon()); //!< Return if a matrix an identity matrix (from GLM_GTX_matrix_query extension)

	template<typename T> bool isNormalizedGTX(const detail::_xmat2<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Return if a matrix a normalized matrix (from GLM_GTX_matrix_query extension)
	template<typename T> bool isNormalizedGTX(const detail::_xmat3<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Return if a matrix a normalized matrix (from GLM_GTX_matrix_query extension)
	template<typename T> bool isNormalizedGTX(const detail::_xmat4<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()); //!< Return if a matrix a normalized matrix (from GLM_GTX_matrix_query extension)

	template<typename genType> bool isOrthogonalGTX(const genType& m, const typename genType::value_type epsilon = std::numeric_limits<typename genType::value_type>::epsilon()); //!< Return if a matrix an orthonormalized matrix (from GLM_GTX_matrix_query extension)

    namespace gtx
    {
		//! GLM_GTX_matrix_query: Query to evaluate matrices properties
        namespace matrix_query
        {
	        template<typename T> inline bool isNull(const detail::_xmat2<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()){return isNullGTX(m, epsilon);} //!< Return if a matrix a null matrix (from GLM_GTX_matrix_query extension)
	        template<typename T> inline bool isNull(const detail::_xmat3<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()){return isNullGTX(m, epsilon);} //!< Return if a matrix a null matrix (from GLM_GTX_matrix_query extension)
	        template<typename T> inline bool isNull(const detail::_xmat4<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()){return isNullGTX(m, epsilon);} //!< Return if a matrix a null matrix (from GLM_GTX_matrix_query extension)

	        template<typename genType> inline bool isIdentity(const genType& m, const typename genType::value_type epsilon = std::numeric_limits<typename genType::value_type>::epsilon()){return isIdentityGTX(m, epsilon);} //!< Return if a matrix an identity matrix (from GLM_GTX_matrix_query extension)

	        template<typename T> inline bool isNormalized(const detail::_xmat2<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()){return isNormalizedGTX(m, epsilon);} //!< Return if a matrix a normalized matrix (from GLM_GTX_matrix_query extension)
	        template<typename T> inline bool isNormalized(const detail::_xmat3<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()){return isNormalizedGTX(m, epsilon);} //!< Return if a matrix a normalized matrix (from GLM_GTX_matrix_query extension)
	        template<typename T> inline bool isNormalized(const detail::_xmat4<T>& m, const T epsilon = std::numeric_limits<T>::epsilon()){return isNormalizedGTX(m, epsilon);} //!< Return if a matrix a normalized matrix (from GLM_GTX_matrix_query extension)
        
	        template<typename genType> inline bool isOrthogonal(const genType& m, const typename genType::value_type epsilon = std::numeric_limits<typename genType::value_type>::epsilon()){return isOrthogonalGTX(m, epsilon);}   //!< Return if a matrix an orthonormalized matrix (from GLM_GTX_matrix_query extension)
        }
    }
}

#define GLM_GTX_matrix_query namespace gtx::matrix_query

#include "matrix_query.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_matrix_query;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_matrix_query__
