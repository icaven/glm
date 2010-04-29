///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-01-15
// Updated : 2007-01-15
// Licence : This source is under GNU LGPL licence
// File    : _cvec2.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __cvec2_inl__
#define __cvec2_inl__

#include "_cvec2.h"

namespace glm{
namespace detail{

	template <CVEC2_LIST>
	const int _cvec2<CVEC2_TYPE>::value_size = 2;

    //////////////////////////////////////////////////////////////
    // _cvec2 constructor

	template <CVEC2_LIST>  
	inline _cvec2<CVEC2_TYPE>::_cvec2(const T x, const T y) :
		x(x), y(y)
	{}

    //////////////////////////////////////////////////////////////
    // vec2 and ivec2 accesses

    template <CVEC2_LIST>  
    inline T& _cvec2<CVEC2_TYPE>::operator [] (int i)
    {
        return (&x)[i];
    }

    template <CVEC2_LIST>  
    inline const T _cvec2<CVEC2_TYPE>::operator [] (int i) const
    {
        return (&x)[i];
    }

    template <CVEC2_LIST>  
    inline _cvec2<CVEC2_TYPE>::operator T* ()
    {
        return &x;
    }

    template <CVEC2_LIST>  
    inline _cvec2<CVEC2_TYPE>::operator const T* () const 
    {
        return &x;
    }

#if defined(GLM_SWIZZLE)
    //////////////////////////////////////////////////////////////
    // Left hand side 2 components common swizzle operator

    template <CVEC2_LIST>  
    inline REF2 _cvec2<CVEC2_TYPE>::_xy()
    {
        return REF2(this->x, this->y);
    }

    template <CVEC2_LIST>  
    inline REF2 _cvec2<CVEC2_TYPE>::_yx()
    {
        return REF2(this->y, this->x);
    }

    //////////////////////////////////////////////////////////////
    // Right hand side 2 components common swizzle operators

    template <CVEC2_LIST>  
    inline const VEC2 _cvec2<CVEC2_TYPE>::_xx() const
    {
        return VEC2(this->x, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC2 _cvec2<CVEC2_TYPE>::_yx() const
    {
        return VEC2(this->y, this->x);
    }

    template <CVEC2_LIST>  
    inline VEC2 _cvec2<CVEC2_TYPE>::_xy() const
    {
        return VEC2(this->x, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC2 _cvec2<CVEC2_TYPE>::_yy() const
    {
        return VEC2(this->y, this->y);
    }

    //////////////////////////////////////////////////////////////
    // Right hand side 3 components common swizzle operators

    template <CVEC2_LIST>  
    inline const VEC3 _cvec2<CVEC2_TYPE>::_xxx() const
    {
        return VEC3(this->x, this->x, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC3 _cvec2<CVEC2_TYPE>::_yxx() const
    {
        return VEC3(this->y, this->x, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC3 _cvec2<CVEC2_TYPE>::_xyx() const
    {
        return VEC3(this->x, this->y, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC3 _cvec2<CVEC2_TYPE>::_yyx() const
    {
        return VEC3(this->y, this->y, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC3 _cvec2<CVEC2_TYPE>::_xxy() const
    {
        return VEC3(this->x, this->x, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC3 _cvec2<CVEC2_TYPE>::_yxy() const
    {
        return VEC3(this->y, this->x, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC3 _cvec2<CVEC2_TYPE>::_xyy() const
    {
        return VEC3(this->x, this->y, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC3 _cvec2<CVEC2_TYPE>::_yyy() const
    {
        return VEC3(this->y, this->y, this->y);
    }

    //////////////////////////////////////////////////////////////
    // Right hand side 4 components common swizzle operators

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_xxxx() const
    {
        return VEC4(this->x, this->x, this->x, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_yxxx() const
    {
        return VEC4(this->y, this->x, this->x, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_xyxx() const
    {
        return VEC4(this->x, this->y, this->x, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_yyxx() const
    {
        return VEC4(this->y, this->y, this->x, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_xxyx() const
    {
        return VEC4(this->x, this->x, this->y, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_yxyx() const
    {
        return VEC4(this->y, this->x, this->y, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_xyyx() const
    {
        return VEC4(this->x, this->y, this->y, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_yyyx() const
    {
        return VEC4(this->y, this->y, this->y, this->x);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_xxxy() const
    {
        return VEC4(this->x, this->x, this->x, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_yxxy() const
    {
        return VEC4(this->y, this->x, this->x, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_xyxy() const
    {
        return VEC4(this->x, this->y, this->x, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_yyxy() const
    {
        return VEC4(this->y, this->y, this->x, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_xxyy() const
    {
        return VEC4(this->x, this->x, this->y, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_yxyy() const
    {
        return VEC4(this->y, this->x, this->y, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_xyyy() const
    {
        return VEC4(this->x, this->y, this->y, this->y);
    }

    template <CVEC2_LIST>  
    inline const VEC4 _cvec2<CVEC2_TYPE>::_yyyy() const
    {
        return VEC4(this->y, this->y, this->y, this->y);
    }
#endif //defined(GLM_SWIZZLE)

} //namespace detail
} //namespace glm

#endif //__cvec2_inl__
