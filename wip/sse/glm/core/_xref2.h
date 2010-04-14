///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-05-29
// Updated : 2008-01-04
// Licence : This source is under GNU LGPL licence
// File    : _xref2.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xref2_h__
#define __xref2_h__

namespace glm{
namespace detail{

	template <typename T>
	class _xref2
	{
	public:
		_xref2(T& x, T& y);
		_xref2<T>& operator= (const _xref2<T>& r);
		_xref2<T>& operator+=(const _xref2<T>& r);
		_xref2<T>& operator-=(const _xref2<T>& r);
		_xref2<T>& operator*=(const _xref2<T>& r);
		_xref2<T>& operator/=(const _xref2<T>& r);
		_xref2<T>& operator= (const _xvec2<T>& v);
		_xref2<T>& operator+=(const _xvec2<T>& v);
		_xref2<T>& operator-=(const _xvec2<T>& v);
		_xref2<T>& operator*=(const _xvec2<T>& v);
		_xref2<T>& operator/=(const _xvec2<T>& v);
		T& x;
		T& y;
	};

} //namespace detail
} //namespace glm

#endif//__xref2_h__
