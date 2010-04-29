///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2007 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-15
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_cvecx.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_cvecx_h__
#define __glm_core_cvecx_h__

#define CVEC2_TYPE		T, VEC2, VEC3, VEC4, REF2
#define CVEC3_TYPE		T, VEC2, VEC3, VEC4, REF2, REF3
#define CVEC4_TYPE		T, VEC2, VEC3, VEC4, REF2, REF3, REF4

#define CVEC2_LIST		typename T, typename VEC2, typename VEC3, typename VEC4, typename REF2
#define CVEC3_LIST		typename T, typename VEC2, typename VEC3, typename VEC4, typename REF2, typename REF3
#define CVEC4_LIST		typename T, typename VEC2, typename VEC3, typename VEC4, typename REF2, typename REF3, typename REF4

#define XVEC2_INST		T, _xvec2<T>, _xvec3<T>, _xvec4<T>, _xref2<T>
#define XVEC3_INST		T, _xvec2<T>, _xvec3<T>, _xvec4<T>, _xref2<T>, _xref3<T>
#define XVEC4_INST		T, _xvec2<T>, _xvec3<T>, _xvec4<T>, _xref2<T>, _xref3<T>, _xref4<T>

#define BVEC2_INST		bool, _bvec2, _bvec3, _bvec4, _xref2<bool>
#define BVEC3_INST		bool, _bvec2, _bvec3, _bvec4, _xref2<bool>, _xref3<bool>
#define BVEC4_INST		bool, _bvec2, _bvec3, _bvec4, _xref2<bool>, _xref3<bool>, _xref4<bool>

#define HVEC2_INST		hdata, _hvec2GTX, _hvec3GTX, _hvec4GTX, _xref2<hdata>
#define HVEC3_INST		hdata, _hvec2GTX, _hvec3GTX, _hvec4GTX, _xref2<hdata>, _xref3<hdata>
#define HVEC4_INST		hdata, _hvec2GTX, _hvec3GTX, _hvec4GTX, _xref2<hdata>, _xref3<hdata>, _xref4<hdata>

#define	_xvec2_base(T)	_cvec2<T, _xvec2<T>, _xvec3<T>, _xvec4<T>, _xref2<T> >
#define	_xvec3_base(T)	_cvec3<T, _xvec2<T>, _xvec3<T>, _xvec4<T>, _xref2<T>, _xref3<T> >
#define	_xvec4_base(T)	_cvec4<T, _xvec2<T>, _xvec3<T>, _xvec4<T>, _xref2<T>, _xref3<T>, _xref4<T> >

namespace glm{
namespace detail{

    template <typename T> class _xref2; //!< \dontinclude 
	template <typename T> class _xref3; //!< \dontinclude 
	template <typename T> class _xref4; //!< \dontinclude 

	template <typename T> class _xvec2; //!< \dontinclude 
    template <typename T> class _xvec3; //!< \dontinclude 
    template <typename T> class _xvec4; //!< \dontinclude 

	class _bvec2; //!< \dontinclude 
    class _bvec3; //!< \dontinclude 
    class _bvec4; //!< \dontinclude 
} //namespace detail
} //namespace glm

#endif//__glm_core_cvecx_h__
