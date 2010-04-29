///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2007-08-14
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/euler_angles.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T>
	inline detail::_xmat2<T> orientate2GTX(const T angle)
	{
        T c = cos(angle);
        T s = sin(angle);

		detail::_xmat2<T> Result;
        Result[0][0] = c;
        Result[0][1] = s;
        Result[1][0] = -s;
        Result[1][1] = c;
		return Result;
	}

    template <typename T>
	inline detail::_xmat3<T> orientate3GTX(const T angle)
	{
        T c = cos(angle);
        T s = sin(angle);

		detail::_xmat3<T> Result;
        Result[0][0] = c;
        Result[0][1] = s;
		Result[0][2] = 0.0f;
        Result[1][0] = -s;
        Result[1][1] = c;
		Result[1][2] = 0.0f;
		Result[2][0] = 0.0f;
		Result[2][1] = 0.0f;
		Result[2][2] = 1.0f;
		return Result;
	}

	template <typename T>
    inline detail::_xmat3<T> orientate3GTX(const detail::_xvec3<T>& angles)
    {
        T tmp_ch = cos(angles.x);
        T tmp_sh = sin(angles.x);
        T tmp_cp = cos(angles.y);
        T tmp_sp = sin(angles.y);
        T tmp_cb = cos(angles.z);
        T tmp_sb = sin(angles.z);

        detail::_xmat3<T> Result;
        Result[0][0] = tmp_ch * tmp_cb + tmp_sh * tmp_sp * tmp_sb;
        Result[0][1] = tmp_sb * tmp_cp;
        Result[0][2] = -tmp_sh * tmp_cb + tmp_ch * tmp_sp * tmp_sb;
        Result[1][0] = -tmp_ch * tmp_sb + tmp_sh * tmp_sp * tmp_cb;
        Result[1][1] = tmp_cb * tmp_cp;
        Result[1][2] = tmp_sb * tmp_sh + tmp_ch * tmp_sp * tmp_cb;
        Result[2][0] = tmp_sh * tmp_cp;
        Result[2][1] = -tmp_sp;
        Result[2][2] = tmp_ch * tmp_cp;
        return Result;
    }

	template <typename T>
    inline detail::_xmat4<T> orientate4GTX(const detail::_xvec3<T>& angles)
    {
        T tmp_ch = cos(angles.x);
        T tmp_sh = sin(angles.x);
        T tmp_cp = cos(angles.y);
        T tmp_sp = sin(angles.y);
        T tmp_cb = cos(angles.z);
        T tmp_sb = sin(angles.z);

        detail::_xmat4<T> Result;
        Result[0][0] = tmp_ch * tmp_cb + tmp_sh * tmp_sp * tmp_sb;
        Result[0][1] = tmp_sb * tmp_cp;
        Result[0][2] = -tmp_sh * tmp_cb + tmp_ch * tmp_sp * tmp_sb;
        Result[0][3] = T(0);
        Result[1][0] = -tmp_ch * tmp_sb + tmp_sh * tmp_sp * tmp_cb;
        Result[1][1] = tmp_cb * tmp_cp;
        Result[1][2] = tmp_sb * tmp_sh + tmp_ch * tmp_sp * tmp_cb;
        Result[1][3] = T(0);
        Result[2][0] = tmp_sh * tmp_cp;
        Result[2][1] = -tmp_sp;
        Result[2][2] = tmp_ch * tmp_cp;
        Result[2][3] = T(0);
        Result[3][0] = T(0);
        Result[3][1] = T(0);
        Result[3][2] = T(0);
        Result[3][3] = T(1);
        return Result;
    }
}
