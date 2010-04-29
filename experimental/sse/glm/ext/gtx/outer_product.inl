///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-03-30
// Updated : 2006-03-30
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/outer_product.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline detail::_xmat2<T> outerProductGTX(
		const detail::_xvec2<T>& a, 
		const detail::_xvec2<T>& b)
    {
		detail::_xmat2<T> m;
		m[0][0] = a.x * b.x;
		m[0][1] = a.x * b.y;
		m[1][0] = a.y * b.x;
		m[1][1] = a.y * b.y;
        return m;
    }

    template <typename T> 
    inline detail::_xmat3<T> outerProductGTX(
		const detail::_xvec3<T>& a, 
		const detail::_xvec3<T>& b)
    {
		detail::_xmat3<T> m;
		m[0][0] = a.x * b.x;
		m[0][1] = a.x * b.y;
		m[0][2] = a.x * b.z;
		m[1][0] = a.y * b.x;
		m[1][1] = a.y * b.y;
		m[1][2] = a.y * b.z;
		m[2][0] = a.z * b.x;
		m[2][1] = a.z * b.y;
		m[2][2] = a.z * b.z;
        return m;
    }

    template <typename T> 
    inline detail::_xmat4<T> outerProductGTX(
		const detail::_xvec4<T>& a, 
		const detail::_xvec4<T>& b)
    {
		detail::_xmat4<T> m;
		m[0][0] = a.x * b.x;
		m[0][1] = a.x * b.y;
		m[0][2] = a.x * b.z;
		m[0][3] = T(0);
		m[1][0] = a.y * b.x;
		m[1][1] = a.y * b.y;
		m[1][2] = a.y * b.z;
		m[1][3] = T(0);
		m[2][0] = a.z * b.x;
		m[2][1] = a.z * b.y;
		m[2][2] = a.z * b.z;
		m[2][3] = T(0);
		m[3] = detail::_xvec4<T>(T(0), T(0), T(0), T(1));
        return m;
    }
}
