///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2005-12-21
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matrix_projection.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline detail::_xmat4<T> perspectiveGTX(T fovy, T aspect, T zNear, T zFar)
    {
        T range = tan(radians(fovy / 2)) * zNear;	
        T left = -range * aspect;
        T right = range * aspect;
        T bottom = -range;
        T top = range;

        detail::_xmat4<T> Result(T(0));
        Result[0][0] = (2 * zNear) / (right - left);
        Result[1][1] = (2 * zNear) / (top - bottom);
        Result[2][2] = - (zFar + zNear) / (zFar - zNear);
        Result[2][3] = -1;
        Result[3][2] = - (2 * zFar * zNear) / (zFar - zNear);
        return Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> infinitePerspectiveGTX(T fovy, T aspect, T zNear)
    {
        T range = tan(radians(fovy / 2)) * zNear;	
        T left = -range * aspect;
        T right = range * aspect;
        T bottom = -range;
        T top = range;

        detail::_xmat4<T> Result(T(0));
        Result[0][0] = (2 * zNear) / (right - left);
        Result[1][1] = (2 * zNear) / (top - bottom);
        Result[2][2] = -1;
        Result[2][3] = -1;
        Result[3][2] = - 2 * zNear;
        return Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> tweakedInfinitePerspectiveGTX(T fovy, T aspect, T zNear)
    {
        T range = tan(radians(fovy / 2)) * zNear;	
        T left = -range * aspect;
        T right = range * aspect;
        T bottom = -range;
        T top = range;

        detail::_xmat4<T> Result(T(0));
        Result[0][0] = (2 * zNear) / (right - left);
        Result[1][1] = (2 * zNear) / (top - bottom);
        Result[2][2] = T(0.0001f) -1;
        Result[2][3] = -1;
        Result[3][2] = - (0.0001f - 2) * zNear;
        return Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> ortho2DGTX(T left, T right, T bottom, T top)
    {
        detail::_xmat4<T> Result(1);
        Result[0][0] = 2 / (right - left);
        Result[1][1] = 2 / (top - bottom);
        Result[3][0] = - (right + left) / (right - left);
        Result[3][1] = - (top + bottom) / (top - bottom);
        return Result;
    }

    template <typename T> 
    inline detail::_xmat4<T> ortho3DGTX(T left, T right, T bottom, T top, T zNear, T zFar)
    {
        detail::_xmat4<T> Result(1);
        Result[0][0] = 2 / (right - left);
        Result[1][1] = 2 / (top - bottom);
        Result[2][2] = 2 / (zFar - zNear);
        Result[3][0] = - (right + left) / (right - left);
        Result[3][1] = - (top + bottom) / (top - bottom);
        Result[3][2] = - (zFar + zNear) / (zFar - zNear);
        return Result;
    }
/*
    template <typename T, typename U> 
    _xvec3<T> projectGTX(const _xvec3<T>& obj, const _xmat4<T>& model, const _xmat4<T>& proj, const _xvec4<U>& view)
    {
        _xvec4<T> v = proj * model * _xvec4<T>(obj, 1);
        return _xvec3<T>(T(view.x) + T(view.z) * (v.x + 1) / 2, T(view.y) + T(view.w) * (v.y + 1) / 2, (v.z + 1) / 2);
    }
*/
	template <typename T, typename U>
	inline detail::_xvec3<T> projectGTX(const detail::_xvec3<T>& obj, const detail::_xmat4<T>& model, const detail::_xmat4<T>& proj, const detail::_xvec4<U>& viewport)
	{
		detail::_xvec4<T> tmp = detail::_xvec4<T>(obj, T(1.0));
		tmp = model * tmp;
		tmp = proj * tmp;

		tmp /= tmp.w;
		tmp = tmp * T(0.5) + T(0.5);
		tmp[0] = tmp[0] * T(viewport[2]) + T(viewport[0]);
		tmp[1] = tmp[1] * T(viewport[3]) + T(viewport[1]);

		return detail::_xvec3<T>(tmp);
	}
/*
    template <typename T, typename U> 
    _xvec3<T> unProjectGTX(const _xvec3<T>& win, const _xmat4<T>& model, const _xmat4<T>& proj, const _xvec4<U>& view)
    {
        _xvec4<T> v(2 * (win.x - T(view.x)) / view.z - 1, 2 * (win.y - T(view.y)) / view.w - 1, 2 * win.z - 1, 1);
        return _xvec3<T>(inverseGTX(proj * model) * v);
    }
*/
	template <typename T, typename U>
	inline detail::_xvec3<T> unProjectGTX(const detail::_xvec3<T>& win, const detail::_xmat4<T>& model, const detail::_xmat4<T>& proj, const detail::_xvec4<U>& viewport)
	{
		detail::_xmat4<T> inverse = inverseGTX(proj * model);

		detail::_xvec4<T> tmp = detail::_xvec4<T>(win, T(1));
		tmp.x = (tmp.x - viewport[0]) / viewport[2];
		tmp.y = (tmp.y - viewport[1]) / viewport[3];
		tmp = tmp * T(2) - T(1);

		detail::_xvec4<T> obj = inverse * tmp;
		obj /= obj.w;

		return detail::_xvec3<T>(obj);
	}

}
