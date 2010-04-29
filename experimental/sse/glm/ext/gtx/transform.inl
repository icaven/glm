///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/transform.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline detail::_xmat4<T> translateGTX(T x, T y, T z)
    {
        return translateGTX(detail::_xvec3<T>(x, y , z));
    }

    template <typename T> 
    inline detail::_xmat4<T> translateGTX(const detail::_xvec3<T>& v)
    {
        detail::_xmat4<T> result(T(1));
        result[3] = detail::_xvec4<T>(v, T(1));
        return result;
    }

    template <typename T> 
    inline detail::_xmat4<T> translateGTX(const detail::_xmat4<T>& m, T x, T y, T z)
    {
        detail::_xmat4<T> r;
        r[0] = m[0];
        r[1] = m[1];
        r[2] = m[2];
        r[3][0] = m[0][0] * x + m[1][0] * y + m[2][0] * z + m[3][0];
        r[3][1] = m[0][1] * x + m[1][1] * y + m[2][1] * z + m[3][1];
        r[3][2] = m[0][2] * x + m[1][2] * y + m[2][2] * z + m[3][2];
        r[3][3] = m[0][3] * x + m[1][3] * y + m[2][3] * z + m[3][3];
        return r;
    }

    template <typename T> 
    inline detail::_xmat4<T> translateGTX(const detail::_xmat4<T>& m, const detail::_xvec3<T>& v)
    {
        return translateGTX(m, v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat4<T> rotateGTX(T angle, T x, T y, T z)
    {
        float a = radians(angle);
        float c = cos(a);
        float s = sin(a);
        detail::_xmat4<T> Result;

        detail::_xvec3<T> axis = normalize(detail::_xvec3<T>(x, y, z));

        Result[0][0] = c + (1 - c) * axis.x * axis.x;
	    Result[0][1] = (1 - c) * axis.x * axis.y + s * axis.z;
	    Result[0][2] = (1 - c) * axis.x * axis.z - s * axis.y;
	    Result[0][3] = 0;

	    Result[1][0] = (1 - c) * axis.y * axis.x - s * axis.z;
	    Result[1][1] = c + (1 - c) * axis.y * axis.y;
	    Result[1][2] = (1 - c) * axis.y * axis.z + s * axis.x;
	    Result[1][3] = 0;

	    Result[2][0] = (1 - c) * axis.x * axis.z + s * axis.y;
	    Result[2][1] = (1 - c) * axis.y * axis.z - s * axis.x;
	    Result[2][2] = c + (1 - c) * axis.z * axis.z;
	    Result[2][3] = 0;

        Result[3] = detail::_xvec4<T>(0, 0, 0, 1);
        return Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> rotateGTX(T angle, const detail::_xvec3<T>& v)
    {
        return rotateGTX(angle, v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat4<T> rotateGTX(const detail::_xmat4<T>& m, T angle, T x, T y, T z)
    {
        return m * rotateGTX(angle, x, y, z);
    }

    template <typename T> 
    inline detail::_xmat4<T> rotateGTX(const detail::_xmat4<T>& m, T angle, const detail::_xvec3<T>& v)
    {
        return m * rotateGTX(angle, v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat4<T> scaleGTX(T x, T y, T z)
    {
        detail::_xmat4<T> Result(T(1));
        Result[0][0] = x;
        Result[1][1] = y;
        Result[2][2] = z;
        return Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> scaleGTX(const detail::_xvec3<T>& v)
    {
        return scaleGTX(v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat4<T> scaleGTX(const detail::_xmat4<T>& m, T x, T y, T z)
    {
        detail::_xmat4<T> Result;
        Result[0] = m[0] * x;
        Result[1] = m[1] * y;
        Result[2] = m[2] * z;
        Result[3] = m[3];
        return Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> scaleGTX(const detail::_xmat4<T>& m, const detail::_xvec3<T>& v)
    {
        return scaleGTX(m, v.x, v.y, v.z);
    }

    /////////////////////////////////////////////////
    template <typename T> 
    inline detail::_xmat4<T> translate3DGTX(const detail::_xmat4<T>& m, T x, T y, T z)
    {
        detail::_xmat4<T> r;
        r[0] = m[0];
        r[1] = m[1];
        r[2] = m[2];
        r[3][0] = m[0][0] * x + m[1][0] * y + m[2][0] * z + m[3][0];
        r[3][1] = m[0][1] * x + m[1][1] * y + m[2][1] * z + m[3][1];
        r[3][2] = m[0][2] * x + m[1][2] * y + m[2][2] * z + m[3][2];
        r[3][3] = m[0][3] * x + m[1][3] * y + m[2][3] * z + m[3][3];
        return r;
    }

    template <typename T> 
    inline detail::_xmat4<T> translate3DGTX(const detail::_xmat4<T>& m, const detail::_xvec3<T>& v)
    {
        return translate3DGTX(m, v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat4<T> rotate3DGTX(const detail::_xmat4<T>& m, T angle, T x, T y, T z)
    {
        T a = radians(angle);
        T c = cos(a);
        T s = sin(a);
        detail::_xmat4<T> Result;

        detail::_xvec3<T> axis = normalize(detail::_xvec3<T>(x, y, z));

        Result[0][0] = c + (1 - c) * axis.x * axis.x;
	    Result[0][1] = (1 - c) * axis.x * axis.y + s * axis.z;
	    Result[0][2] = (1 - c) * axis.x * axis.z - s * axis.y;
	    Result[0][3] = 0;

	    Result[1][0] = (1 - c) * axis.y * axis.x - s * axis.z;
	    Result[1][1] = c + (1 - c) * axis.y * axis.y;
	    Result[1][2] = (1 - c) * axis.y * axis.z + s * axis.x;
	    Result[1][3] = 0;

	    Result[2][0] = (1 - c) * axis.x * axis.z + s * axis.y;
	    Result[2][1] = (1 - c) * axis.y * axis.z - s * axis.x;
	    Result[2][2] = c + (1 - c) * axis.z * axis.z;
	    Result[2][3] = 0;

        Result[3] = detail::_xvec4<T>(0, 0, 0, 1);

        return m * Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> rotate3DGTX(const detail::_xmat4<T>& m, T angle, const detail::_xvec3<T>& v)
    {
        return rotate3DGTX(m, angle, v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat3<T> rotate3DGTX(const detail::_xmat3<T>& m, T angle, T x, T y, T z)
    {
        T a = radians(angle);
        T c = cos(a);
        T s = sin(a);
        detail::_xmat3<T> Result;

        detail::_xvec3<T> axis = normalize(detail::_xvec3<T>(x, y, z));

        Result[0][0] = c + (1 - c) * axis.x * axis.x;
	    Result[0][1] = (1 - c) * axis.x * axis.y + s * axis.z;
	    Result[0][2] = (1 - c) * axis.x * axis.z - s * axis.y;

	    Result[1][0] = (1 - c) * axis.y * axis.x - s * axis.z;
	    Result[1][1] = c + (1 - c) * axis.y * axis.y;
	    Result[1][2] = (1 - c) * axis.y * axis.z + s * axis.x;

	    Result[2][0] = (1 - c) * axis.x * axis.z + s * axis.y;
	    Result[2][1] = (1 - c) * axis.y * axis.z - s * axis.x;
	    Result[2][2] = c + (1 - c) * axis.z * axis.z;

        return m * Result;
    }

    template <typename T> 
    inline detail::_xmat3<T> rotate3DGTX(const detail::_xmat3<T>& m, T angle, const detail::_xvec3<T>& v)
    {
        return rotate3DGTX(m, angle, v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat4<T> scale3DGTX(const detail::_xmat4<T>& m, T x, T y, T z)
    {
        detail::_xmat4<T> r;
        r[0] = m[0] * x;
        r[1] = m[1] * y;
        r[2] = m[2] * z;
        r[3] = m[3];
        return r;
    }

    template <typename T> 
    inline detail::_xmat4<T> scale3DGTX(const detail::_xmat4<T>& m, const detail::_xvec3<T>& v)
    {
        return scale3DGTX(m, v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat3<T> scale3DGTX(const detail::_xmat3<T>& m, T x, T y, T z)
    {
        detail::_xmat3<T> r;
        r[0] = m[0] * x;
        r[1] = m[1] * y;
        r[2] = m[2] * z;
        return r;
    }

    template <typename T> 
    inline detail::_xmat3<T> scale3DGTX(const detail::_xmat3<T>& m, const detail::_xvec3<T>& v)
    {
        return scale3DGTX(m, v.x, v.y, v.z);
    }

    template <typename T> 
    inline detail::_xmat3<T> translate2DGTX(const detail::_xmat3<T>& m, T x, T y)
    {
        detail::_xmat3<T> r;
        r[0] = m[0];
        r[1] = m[1];
        r[2] = m[2];
        r[2][0] = m[0][0] * x + m[1][0] * y + m[2][0];
        r[2][1] = m[0][1] * x + m[1][1] * y + m[2][1];
        r[2][2] = m[0][2] * x + m[1][2] * y + m[2][2];
        return r;
    }

    template <typename T> 
    inline detail::_xmat3<T> translate2DGTX(const detail::_xmat3<T>& m, const detail::_xvec2<T>& v)
    {
        return translate2DGTX(m, v.x, v.y);
    }

    template <typename T> 
    inline detail::_xmat3<T> rotate2DGTX(const detail::_xmat3<T>& m, T angle)
    {
        T a = radians(angle);
        T c = cos(a);
        T s = sin(a);
        detail::_xmat3<T> Result;

        Result[0][0] = c;
	    Result[0][1] = -s;
	    Result[0][2] = 0;

	    Result[1][0] = s;
	    Result[1][1] = c;
	    Result[1][2] = 0;

        Result[2] = detail::_xvec3<T>(0, 0, 1);

        return m * Result;
    }

    template <typename T> 
    inline detail::_xmat2<T> rotate2DGTX(const detail::_xmat2<T>& m, T angle)
    {
        T a = radians(angle);
        T c = cos(a);
        T s = sin(a);
        detail::_xmat2<T> Result;

        Result[0][0] = c;
	    Result[0][1] = -s;

	    Result[1][0] = s;
	    Result[1][1] = c;

        return m * Result;
    }

    template <typename T> 
    inline detail::_xmat3<T> scale2DGTX(const detail::_xmat3<T>& m, T x, T y)
    {
        detail::_xmat3<T> r;
        r[0] = m[0] * x;
        r[1] = m[1] * y;
        r[2] = m[2];
        return r;
    }

    template <typename T> 
    inline detail::_xmat3<T> scale2DGTX(const detail::_xmat3<T>& m, const detail::_xvec2<T>& v)
    {
        return scale2DGTX(m, v.x, v.y);
    }

    template <typename T> 
    inline detail::_xmat2<T> scale2DGTX(const detail::_xmat2<T>& m, T x, T y)
    {
        detail::_xmat2<T> r;
        r[0] = m[0] * x;
        r[1] = m[1] * y;
        return r;
    }

    template <typename T> 
    inline detail::_xmat2<T> scale2DGTX(const detail::_xmat2<T>& m, const detail::_xvec2<T>& v)
    {
        return scale2DGTX(m, v.x, v.y);
    }
}
