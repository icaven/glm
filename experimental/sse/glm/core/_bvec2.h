///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-04-27
// Updated : 2007-01-19
// Licence : This source is under GNU LGPL licence
// File    : glm/core/_bvec2.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_core_bvec2__
#define __glm_core_bvec2__

#include "./_cvec2.inl"

namespace glm{
namespace detail{

	class _bvec2 : public _cvec2<bool, _bvec2, _bvec3, _bvec4, _xref2<bool> >
	{
	public:
		// Common constructors
		_bvec2();
		_bvec2(const _bvec2& v);

		// Swizzle constructors
		_bvec2(const _xref2<bool>& r);

		// Bool constructors
		explicit _bvec2(const bool a);
		explicit _bvec2(const bool a, const bool b);
		explicit _bvec2(const bool a, const _bvec2& b);
		explicit _bvec2(const bool a, const _bvec3& b);
		explicit _bvec2(const bool a, const _bvec4& b);
		explicit _bvec2(const _bvec3& a);
		explicit _bvec2(const _bvec4& a);

		// U constructors
		template <typename U> explicit _bvec2(const U x);
		template <typename U> explicit _bvec2(const U a, const U b);
		template <typename U> explicit _bvec2(const U a, const _xvec2<U>& b);
		template <typename U> explicit _bvec2(const U a, const _xvec3<U>& b);
		template <typename U> explicit _bvec2(const U a, const _xvec4<U>& b);
		template <typename U> explicit _bvec2(const _xvec3<U>& a);
		template <typename U> explicit _bvec2(const _xvec4<U>& a);

		// Operators
		_bvec2& operator=(const _bvec2& v);
		//_bvec2 operator! () const;
	};

} //namespace detail
} //namespace glm

#endif//__glm_core_bvec2__
