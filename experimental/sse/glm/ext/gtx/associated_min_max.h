///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-03-10
// Updated : 2008-03-15
// Licence : This source is under GNU LGPL licence
// File    : gtx_associated_min_max.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_extented_min_max
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_associated_min_max__
#define __glm_gtx_associated_min_max__

// Dependency:
#include "../../glm.h"

namespace glm
{
	//! Min comparison between 2 variables
	template<typename T, typename U> 
	U associatedMinGTX(
		T x, U a, 
		T y, U b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b);

	//! Min comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	U associatedMinGTX(
		T x, U a, 
		T y, U b,
		T z, U c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b,
		const detail::_xvec2<T>& z, const detail::_xvec2<U>& c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b,
		const detail::_xvec3<T>& z, const detail::_xvec3<U>& c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b,
		const detail::_xvec4<T>& z, const detail::_xvec4<U>& c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b,
		T z, const detail::_xvec2<U>& c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b,
		T z, const detail::_xvec3<U>& c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b,
		T z, const detail::_xvec4<U>& c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b,
		const detail::_xvec2<T>& z, U c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b,
		const detail::_xvec3<T>& z, U c);

	//! Min comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b,
		const detail::_xvec4<T>& z, U c);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	U associatedMinGTX(
		T x, U a, 
		T y, U b,
		T z, U c,
		T w, U d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b,
		const detail::_xvec2<T>& z, const detail::_xvec2<U>& c,
		const detail::_xvec2<T>& w, const detail::_xvec2<U>& d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b,
		const detail::_xvec3<T>& z, const detail::_xvec3<U>& c,
		const detail::_xvec3<T>& w, const detail::_xvec3<U>& d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b,
		const detail::_xvec4<T>& z, const detail::_xvec4<U>& c,
		const detail::_xvec4<T>& w, const detail::_xvec4<U>& d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b,
		T z, const detail::_xvec2<U>& c,
		T w, const detail::_xvec2<U>& d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b,
		T z, const detail::_xvec3<U>& c,
		T w, const detail::_xvec3<U>& d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b,
		T z, const detail::_xvec4<U>& c,
		T w, const detail::_xvec4<U>& d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMinGTX(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b,
		const detail::_xvec2<T>& z, U c,
		const detail::_xvec2<T>& w, U d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMinGTX(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b,
		const detail::_xvec3<T>& z, U c,
		const detail::_xvec3<T>& w, U d);

	//! Min comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMinGTX(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b,
		const detail::_xvec4<T>& z, U c,
		const detail::_xvec4<T>& w, U d);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	U associatedMaxGTX(
		T x, U a, 
		T y, U b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b);

	//! Max comparison between 2 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	U associatedMaxGTX(
		T x, U a, 
		T y, U b,
		T z, U c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b,
		const detail::_xvec2<T>& z, const detail::_xvec2<U>& c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b,
		const detail::_xvec3<T>& z, const detail::_xvec3<U>& c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b,
		const detail::_xvec4<T>& z, const detail::_xvec4<U>& c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b,
		T z, const detail::_xvec2<U>& c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b,
		T z, const detail::_xvec3<U>& c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b,
		T z, const detail::_xvec4<U>& c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b,
		const detail::_xvec2<T>& z, U c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b,
		const detail::_xvec3<T>& z, U c);

	//! Max comparison between 3 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b,
		const detail::_xvec4<T>& z, U c);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	U associatedMaxGTX(
		T x, U a, 
		T y, U b,
		T z, U c,
		T w, U d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		const detail::_xvec2<T>& x, const detail::_xvec2<U>& a, 
		const detail::_xvec2<T>& y, const detail::_xvec2<U>& b,
		const detail::_xvec2<T>& z, const detail::_xvec2<U>& c,
		const detail::_xvec2<T>& w, const detail::_xvec2<U>& d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		const detail::_xvec3<T>& x, const detail::_xvec3<U>& a, 
		const detail::_xvec3<T>& y, const detail::_xvec3<U>& b,
		const detail::_xvec3<T>& z, const detail::_xvec3<U>& c,
		const detail::_xvec3<T>& w, const detail::_xvec3<U>& d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		const detail::_xvec4<T>& x, const detail::_xvec4<U>& a, 
		const detail::_xvec4<T>& y, const detail::_xvec4<U>& b,
		const detail::_xvec4<T>& z, const detail::_xvec4<U>& c,
		const detail::_xvec4<T>& w, const detail::_xvec4<U>& d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		T x, const detail::_xvec2<U>& a, 
		T y, const detail::_xvec2<U>& b,
		T z, const detail::_xvec2<U>& c,
		T w, const detail::_xvec2<U>& d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		T x, const detail::_xvec3<U>& a, 
		T y, const detail::_xvec3<U>& b,
		T z, const detail::_xvec3<U>& c,
		T w, const detail::_xvec3<U>& d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		T x, const detail::_xvec4<U>& a, 
		T y, const detail::_xvec4<U>& b,
		T z, const detail::_xvec4<U>& c,
		T w, const detail::_xvec4<U>& d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec2<U> associatedMaxGTX(
		const detail::_xvec2<T>& x, U a, 
		const detail::_xvec2<T>& y, U b,
		const detail::_xvec2<T>& z, U c,
		const detail::_xvec2<T>& w, U d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec3<U> associatedMaxGTX(
		const detail::_xvec3<T>& x, U a, 
		const detail::_xvec3<T>& y, U b,
		const detail::_xvec3<T>& z, U c,
		const detail::_xvec3<T>& w, U d);

	//! Max comparison between 4 variables
	template<typename T, typename U> 
	detail::_xvec4<U> associatedMaxGTX(
		const detail::_xvec4<T>& x, U a, 
		const detail::_xvec4<T>& y, U b,
		const detail::_xvec4<T>& z, U c,
		const detail::_xvec4<T>& w, U d);

	namespace gtx
	{
		//! GLM_GTX_associated_min_max extension: Min and max functions that return associated values not the compared onces.
		namespace associated_min_max
		{
			//! Min comparison between 2 variables
			template<typename genTypeT, typename genTypeU>
			inline genTypeU associatedMin(
				const genTypeT& x, const genTypeU& a, 
				const genTypeT& y, const genTypeU& b)
			{
				return associatedMinGTX(x, a, y, b);
			}

			//! Min comparison between 3 variables
			template<typename genTypeT, typename genTypeU>
			inline genTypeU associatedMin(
				const genTypeT& x, const genTypeU& a, 
				const genTypeT& y, const genTypeU& b, 
				const genTypeT& z, const genTypeU& c)
			{
				return associatedMinGTX(x, a, y, b, z, c);
			}

			//! Min comparison between 4 variables
			template<typename genTypeT, typename genTypeU>
			inline genTypeU associatedMin(
				const genTypeT& x, const genTypeU& a, 
				const genTypeT& y, const genTypeU& b, 
				const genTypeT& z, const genTypeU& c, 
				const genTypeT& w, const genTypeU& d)
			{
				return associatedMinGTX(x, a, y, b, z, c, w, d);
			}

			//! Max comparison between 2 variables
			template<typename genTypeT, typename genTypeU>
			inline genTypeU associatedMax(
				const genTypeT& x, const genTypeU& a, 
				const genTypeT& y, const genTypeU& b)
			{
				return associatedMaxGTX(x, a, y, b);
			}

			//! Max comparison between 3 variables
			template<typename genTypeT, typename genTypeU>
			inline genTypeU associatedMax(
				const genTypeT& x, const genTypeU& a, 
				const genTypeT& y, const genTypeU& b, 
				const genTypeT& z, const genTypeU& c)
			{
				return associatedMaxGTX(x, a, y, b, z, c);
			}

			//! Max comparison between 4 variables
			template<typename genTypeT, typename genTypeU>
			inline genTypeU associatedMax(
				const genTypeT& x, const genTypeU& a, 
				const genTypeT& y, const genTypeU& b, 
				const genTypeT& z, const genTypeU& c, 
				const genTypeT& w, const genTypeU& d)
			{
				return associatedMaxGTX(x, a, y, b, z, c, w, d);
			}
		}
	}
}

#define GLM_GTX_associated_min_max namespace gtx::associated_min_max

#include "associated_min_max.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_associated_min_max;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_associated_min_max__
