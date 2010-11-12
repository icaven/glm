///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-11-12
// Updated : 2010-11-12
// Licence : This source is under MIT License
// File    : glm/gtc/glu_replacement.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace gtc{
namespace glu_replacement
{
	template <typename valType> 
	inline detail::tmat4x4<valType> ortho(
		valType const & left, 
		valType const & right, 
		valType const & bottom, 
		valType const & top)
	{
		detail::tmat4x4<valType> Result(1);
		Result[0][0] = valType(2) / (right - left);
		Result[1][1] = valType(2) / (top - bottom);
		Result[2][2] = - valType(1);
		Result[3][0] = - (right + left) / (right - left);
		Result[3][1] = - (top + bottom) / (top - bottom);
		return Result;
	}

	template <typename valType> 
	inline detail::tmat4x4<valType> perspective(
		valType const & fovy, 
		valType const & aspect, 
		valType const & zNear, 
		valType const & zFar)
	{
		valType range = tan(radians(fovy / valType(2))) * zNear;	
		valType left = -range * aspect;
		valType right = range * aspect;
		valType bottom = -range;
		valType top = range;

		detail::tmat4x4<valType> Result(valType(0));
		Result[0][0] = (valType(2) * zNear) / (right - left);
		Result[1][1] = (valType(2) * zNear) / (top - bottom);
		Result[2][2] = - (zFar + zNear) / (zFar - zNear);
		Result[2][3] = - valType(1);
		Result[3][2] = - (valType(2) * zFar * zNear) / (zFar - zNear);
		return Result;
	}

	template <typename T, typename U>
	inline detail::tvec3<T> project(
		detail::tvec3<T> const & obj, 
		detail::tmat4x4<T> const & model, 
		detail::tmat4x4<T> const & proj, 
		detail::tvec4<U> const & viewport)
	{
		detail::tvec4<T> tmp = detail::tvec4<T>(obj, T(1));
		tmp = model * tmp;
		tmp = proj * tmp;

		tmp /= tmp.w;
		tmp = tmp * T(0.5) + T(0.5);
		tmp[0] = tmp[0] * T(viewport[2]) + T(viewport[0]);
		tmp[1] = tmp[1] * T(viewport[3]) + T(viewport[1]);

		return detail::tvec3<T>(tmp);
	}

	template <typename T, typename U>
	inline detail::tvec3<T> unProject(
		detail::tvec3<T> const & win, 
		detail::tmat4x4<T> const & model, 
		detail::tmat4x4<T> const & proj, 
		detail::tvec4<U> const & viewport)
	{
		detail::tmat4x4<T> inverse = glm::inverse(proj * model);

		detail::tvec4<T> tmp = detail::tvec4<T>(win, T(1));
		tmp.x = (tmp.x - T(viewport[0])) / T(viewport[2]);
		tmp.y = (tmp.y - T(viewport[1])) / T(viewport[3]);
		tmp = tmp * T(2) - T(1);

		detail::tvec4<T> obj = inverse * tmp;
		obj /= obj.w;

		return detail::tvec3<T>(obj);
	}

    template <typename T> 
    inline detail::tmat4x4<T> lookAt(
		const detail::tvec3<T>& eye, 
		const detail::tvec3<T>& center, 
		const detail::tvec3<T>& up)
    {
        detail::tvec3<T> f = normalize(center - eye);
        detail::tvec3<T> u = normalize(up);
        detail::tvec3<T> s = normalize(cross(f, u));
        u = cross(s, f);

        detail::tmat4x4<T> Result(1);
        Result[0][0] = s.x;
        Result[1][0] = s.y;
        Result[2][0] = s.z;
        Result[0][1] = u.x;
        Result[1][1] = u.y;
        Result[2][1] = u.z;
        Result[0][2] =-f.x;
        Result[1][2] =-f.y;
        Result[2][2] =-f.z;
    /*  Test this instead of translate3D
        Result[3][0] =-dot(s, eye);
        Result[3][1] =-dot(y, eye);
        Result[3][2] = dot(f, eye);
    */  
		return gtc::matrix_transform::translate(Result, -eye);
    }

}//namespace glu_replacement
}//namespace gtc
}//namespace glm
