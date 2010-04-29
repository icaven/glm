///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2007-03-14
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/quaternion.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////
// ToDo:
// - Study constructors with angles and axis
// - Study constructors with vec3 that are the imaginary component of quaternion
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_quaternion__
#define __glm_gtx_quaternion__

// Dependency:
#include "../../glm.h"

namespace glm
{
	namespace detail
	{
		//! \brief Template for quaternion. (From GLM_GTX_quaternion extension)
		template <typename T> class _xquat
		{
		public:
			T x, y, z, w;

			// Constructors
			_xquat();
			explicit _xquat(const T s, const _xvec3<T>& v);
			explicit _xquat(const T w, const T x, const T y, const T z);

			// Convertions
			explicit _xquat(const T pitch, const T yaw, const T roll);
			explicit _xquat(const _xvec3<T>& eulerAngles);
			//explicit _xquat(const _xvec4<T>& x);
			explicit _xquat(const _xmat3<T>& m);
			explicit _xquat(const _xmat4<T>& m);
			//explicit _xquat(float angle, float x, float y, float z);
			//explicit _xquat(float angle, const _xvec3<T>& v);

			// Accesses
			T& operator[](int i);
			T operator[](int i) const;
			operator T*();
			operator const T*() const;

			// Operators
			_xquat<T>  operator+ (const _xquat<T>& q) const;
			_xquat<T>& operator+=(const _xquat<T>& q);
			_xquat<T>  operator- (const _xquat<T>& q) const;
			_xquat<T>& operator-=(const _xquat<T>& q);
			_xquat<T>  operator* (T s) const;
			_xquat<T>& operator*=(T s);
			_xquat<T>  operator* (const _xquat<T>& q) const;
			_xquat<T>& operator*=(const _xquat<T>& q);
			_xquat<T>  operator/ (T s) const;
			_xquat<T>& operator/=(T s);
			_xquat<T>  operator/ (const _xquat<T>& q) const;
			_xquat<T>& operator/=(const _xquat<T>& q);
			_xquat<T>  operator- () const;

			// Transformations
			_xvec3<T> operator* (const _xvec3<T>& v) const;
			_xvec4<T> operator* (const _xvec4<T>& v) const;
		};

		template <typename T> _xquat<T> operator* (const T s, const _xquat<T> & q)
		{
			return q * s;
		}
	} //namespace detail

	template <typename T> T lengthGTX(const detail::_xquat<T>& q);                                                                                      //!< \brief Returns the length of the quaternion x. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> normalizeGTX(const detail::_xquat<T>& q);                                                                           //!< \brief Returns the normalized quaternion of from x. (from GLM_GTX_quaternion extension)
    template <typename T> T dotGTX(const detail::_xquat<T>& q1, const detail::_xquat<T>& q2);                                                                   //!< \brief Returns dot product of q1 and q2, i.e., q1[0] * q2[0] + q1[1] * q2[1] + ... (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> crossGTX(const detail::_xquat<T>& q1, const detail::_xquat<T>& q2);                                                         //!< \brief Returns the cross product of q1 and q2. (from GLM_GTX_quaternion extension)
	template <typename T> detail::_xquat<T> mixGTX(const detail::_xquat<T>& x, const detail::_xquat<T>& y, T a);                                                        //!< \brief Returns a LERP interpolated quaternion of x and y according a. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> squadGTX(const detail::_xquat<T>& q1, const detail::_xquat<T>& q2, const detail::_xquat<T>& s1, const detail::_xquat<T>& s2, const T h);    //!< \brief Compute a point on a path according squad equation. q1 and q2 are control points; s1 and s2 are intermediate control points (from GLM_GTX_transform extension)
    template <typename T> detail::_xquat<T> intermediateGTX(const detail::_xquat<T>& prev, const detail::_xquat<T>& curr, const detail::_xquat<T>& next);                       //!< \brief Returns an intermediate control point for squad interpolation (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> expGTX(const detail::_xquat<T>& q, const T exponent);                                                               //!< \brief Returns a exp of a quaternion. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> logGTX(const detail::_xquat<T>& q);                                                                                 //!< \brief Returns a log of a quaternion. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> powGTX(const detail::_xquat<T>& x, T y);																			//!< \brief Returns x raised to the y power. (from GLM_GTX_quaternion extension)
	template <typename T> detail::_xquat<T> sqrtGTX(const detail::_xquat<T>& q); 
    template <typename T> detail::_xquat<T> conjugateGTX(const detail::_xquat<T>& q);                                                                           //!< \brief Returns the q conjugate. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> inverseGTX(const detail::_xquat<T>& q);                                                                             //!< \brief Returns the q inverse. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> rotateGTX(const detail::_xquat<T>& q, T angle, T x, T y, T z);                                                      //!< \brief Rotates a quaternion from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
	template <typename T> detail::_xquat<T> rotateGTX(const detail::_xquat<T>& q, T angle, const detail::_xvec3<T>& v);                                                 //!< \brief Rotates a quaternion from an vector of 3 components axis and an angle expressed in degrees (from GLM_GTX_transform extension)
    template <typename T> detail::_xvec3<T> rotateGTX(const detail::_xquat<T>& q, const detail::_xvec3<T>& v);                                                          //!< \brief Rotates a 3 components vector by a quaternion. (from GLM_GTX_transform extension)
    template <typename T> detail::_xvec4<T> rotateGTX(const detail::_xquat<T>& q, const detail::_xvec4<T>& v);                                                          //!< \brief Rotates a 4 components vector by a quaternion. (from GLM_GTX_transform extension)
    template <typename T> T angleGTX(const detail::_xquat<T>& x);                                                                                       //!< \brief Returns the q rotation angle. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xvec3<T> axisGTX(const detail::_xquat<T>& x);                                                                                //!< \brief Returns the q rotation axis. (from GLM_GTX_quaternion extension)
    //template <typename T> detail::_xmat3<T> mat3GTX(const detail::_xquat<T>& x);                                                                                //!< \brief Converts a quaternion to a 3 * 3 matrix. (from GLM_GTX_quaternion extension)
    //template <typename T> detail::_xmat4<T> mat4GTX(const detail::_xquat<T>& x);                                                                                //!< \brief Converts a quaternion to a 4 * 4 matrix. (from GLM_GTX_quaternion extension)
    //template <typename T> detail::_xquat<T> quatGTX(const detail::_xmat3<T>& x);                                                                                //!< \brief Converts a 3 * 3 matrix to a quaternion. (from GLM_GTX_quaternion extension)
    //template <typename T> detail::_xquat<T> quatGTX(const detail::_xmat4<T>& x);                                                                                //!< \brief Converts a 4 * 4 matrix to a quaternion. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> angleAxisGTX(T angle, T x, T y, T z);                                                                       //!< \brief Build a quaternion from an angle and an axis. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xquat<T> angleAxisGTX(T angle, const detail::_xvec3<T>& v);                                                                  //!< \brief Build a quaternion from an angle and an axis. (from GLM_GTX_quaternion extension)
    template <typename T> T extractRealComponentGTX(const detail::_xquat<T>& q);                                                                        //!< \brief Extract the real component of a quaternion. (from GLM_GTX_quaternion extension)
	template <typename T> T rollGTX(const detail::_xquat<T>& x);                                                                                        //!< \brief Returns roll value of euler angles. (from GLM_GTX_quaternion extension)
	template <typename T> T pitchGTX(const detail::_xquat<T>& x);                                                                                       //!< \brief Returns pitch value of euler angles. (from GLM_GTX_quaternion extension)
	template <typename T> T yawGTX(const detail::_xquat<T>& x);                                                                                         //!< \brief Returns yaw value of euler angles. (from GLM_GTX_quaternion extension)
    template <typename T> detail::_xvec3<T> eularAnglesGTX(const detail::_xquat<T>& x);                                                                         //!< \brief Returns euler angles, yitch as x, yaw as y, roll as z. (from GLM_GTX_quaternion extension)
	template <typename T> detail::_xvec3<T> crossGTX(const detail::_xquat<T>& q, const detail::_xvec3<T>& v){return rotateGTX(q, v);}                                   //!< \brief Compute a cross product between a quaternion and a vector. (from GLM_GTX_quaternion extension)
	template <typename T> detail::_xvec3<T> crossGTX(const detail::_xvec3<T>& v, const detail::_xquat<T>& q){return rotateGTX(inverseGTX(q), v);}                       //!< \brief Compute a cross product between a vector and a quaternion. (from GLM_GTX_quaternion extension)
	template <typename T> detail::_xmat3<T> toMat3GTX(const detail::_xquat<T>& x);                                                                              //!< \brief Converts a quaternion to a 3 * 3 matrix. (from GLM_GTX_quaternion extension)
	template <typename T> detail::_xmat4<T> toMat4GTX(const detail::_xquat<T>& x);                                                                              //!< \brief Converts a quaternion to a 4 * 4 matrix. (from GLM_GTX_quaternion extension)
	template <typename T> detail::_xquat<T> toQuatGTX(const detail::_xmat3<T>& x);                                                                              //!< \brief Converts a 3 * 3 matrix to a quaternion. (from GLM_GTX_quaternion extension)
	template <typename T> detail::_xquat<T> toQuatGTX(const detail::_xmat4<T>& x);                                                                              //!< \brief Converts a 4 * 4 matrix to a quaternion. (from GLM_GTX_quaternion extension)

    typedef detail::_xquat<float> __quatGTX;                                                                                                            //!< \brief Quaternion of floating-point numbers. (from GLM_GTX_quaternion extension)

    namespace gtx
    {
		//! GLM_GTX_quaternion extension: Quaternion types and functions
        namespace quaternion
        {
            template <typename T> T length(const detail::_xquat<T>& q){return lengthGTX(q);}                                                                //!< \brief Returns the length of the quaternion x. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> normalize(const detail::_xquat<T>& q){return normalizeGTX(q);}                                                  //!< \brief Returns the normalized quaternion of from x. (from GLM_GTX_quaternion extension)
            template <typename T> T dot(const detail::_xquat<T>& q1, const detail::_xquat<T>& q2){return dotGTX(q1, q2);}                                           //!< \brief Returns dot product of q1 and q2, i.e., q1[0] * q2[0] + q1[1] * q2[1] + ... (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> cross(const detail::_xquat<T>& q1, const detail::_xquat<T>& q2){return crossGTX(q1, q2);}                               //!< \brief Returns the cross product of q1 and q2. (from GLM_GTX_quaternion extension)
	        template <typename T> detail::_xquat<T> mix(const detail::_xquat<T>& x, const detail::_xquat<T>& y, T a){return mixGTX(x, y, a);}                               //!< \brief Returns a LERP interpolated quaternion of x and y according a. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> squad(const detail::_xquat<T>& q1, const detail::_xquat<T>& q2, const detail::_xquat<T>& s1, const detail::_xquat<T>& s2, const T h)
            {return squadGTX(q1, q2, s1, s2, h);}                                                                                                   //!< \brief Compute a point on a path according squad equation. q1 and q2 are control points; s1 and s2 are intermediate control points (from GLM_GTX_transform extension)
            template <typename T> detail::_xquat<T> intermediate(const detail::_xquat<T>& prev, const detail::_xquat<T>& curr, const detail::_xquat<T>& next)
            {return intermediateGTX(prev, curr, next);}                                                                                             //!< \brief Returns an intermediate control point for squad interpolation (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> exp(const detail::_xquat<T>& q, const T exponent){return expGTX(q, exponent);}                                  //!< \brief Returns a exp of a quaternion. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> log(const detail::_xquat<T>& q){return logGTX(q);}                                                              //!< \brief Returns a log of a quaternion. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> pow(const detail::_xquat<T>& x, T y){return powGTX(x, y);}                                                      //!< \brief Returns x raised to the y power. (from GLM_GTX_quaternion extension)
			template <typename T> detail::_xquat<T> sqrt(const detail::_xquat<T>& q){return sqrtGTX(q);}																			//!< \brief Returns quarternion square root (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> conjugate(const detail::_xquat<T>& q){return conjugateGTX(q);}                                                  //!< \brief Returns the q conjugate. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> inverse(const detail::_xquat<T>& q){return inverseGTX(q);}                                                      //!< \brief Returns the q inverse. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> rotate(const detail::_xquat<T>& q, T angle, T x, T y, T z){return rotateGTX(q, angle, x, y ,z);}                //!< \brief Rotates a quaternion from an axis of 3 scalars and an angle expressed in degrees (from GLM_GTX_transform extension)
	        template <typename T> detail::_xquat<T> rotate(const detail::_xquat<T>& q, T angle, const detail::_xvec3<T>& v){return rotateGTX(q, angle, v);}                 //!< \brief Rotates a quaternion from an vector of 3 components axis and an angle expressed in degrees (from GLM_GTX_transform extension)
            template <typename T> detail::_xvec3<T> rotate(const detail::_xquat<T>& q, const detail::_xvec3<T>& v){return rotateGTX(q, v);}                                 //!< \brief Rotates a 3 components vector by a quaternion. (from GLM_GTX_transform extension)
            template <typename T> detail::_xvec4<T> rotate(const detail::_xquat<T>& q, const detail::_xvec4<T>& v){return rotateGTX(q, v);}                                 //!< \brief Rotates a 4 components vector by a quaternion. (from GLM_GTX_transform extension)
            template <typename T> T angle(const detail::_xquat<T>& x){return angleGTX(x);}                                                                  //!< \brief Returns the q rotation angle. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xvec3<T> axis(const detail::_xquat<T>& x){return axisGTX(x);}                                                            //!< \brief Returns the q rotation axis. (from GLM_GTX_quaternion extension)
            //template <typename T> detail::_xmat3<T> mat3(const detail::_xquat<T>& x);                                                                             //!< \brief Converts a quaternion to a 3 * 3 matrix. (from GLM_GTX_quaternion extension)
            //template <typename T> detail::_xmat4<T> mat4(const detail::_xquat<T>& x);                                                                             //!< \brief Converts a quaternion to a 4 * 4 matrix. (from GLM_GTX_quaternion extension)
            //template <typename T> detail::_xquat<T> quat(const detail::_xmat3<T>& x);                                                                             //!< \brief Converts a 3 * 3 matrix to a quaternion. (from GLM_GTX_quaternion extension)
            //template <typename T> detail::_xquat<T> quat(const detail::_xmat4<T>& x);                                                                             //!< \brief Converts a 4 * 4 matrix to a quaternion. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> angleAxis(T angle, T x, T y, T z){return angleAxisGTX(angle, x, y, z);}                                 //!< \brief Build a quaternion from an angle and an axis. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xquat<T> angleAxis(T angle, const detail::_xvec3<T>& v){return angleAxisGTX(angle, v);}                                  //!< \brief Build a quaternion from an angle and an axis. (from GLM_GTX_quaternion extension)
            template <typename T> T extractRealComponent(const detail::_xquat<T>& q){return extractRealComponentGTX(q);}                                    //!< \brief Extract the real component of a quaternion. (from GLM_GTX_quaternion extension)
	        template <typename T> T roll(const detail::_xquat<T>& x){return rollGTX(x);}                                                                    //!< \brief Returns roll value of euler angles. (from GLM_GTX_quaternion extension)
	        template <typename T> T pitch(const detail::_xquat<T>& x){return pitchGTX(x);}                                                                  //!< \brief Returns pitch value of euler angles. (from GLM_GTX_quaternion extension)
	        template <typename T> T yaw(const detail::_xquat<T>& x){return yawGTX(x);}                                                                      //!< \brief Returns yaw value of euler angles. (from GLM_GTX_quaternion extension)
            template <typename T> detail::_xvec3<T> eularAngles(const detail::_xquat<T>& x){return eularAnglesGTX(x);}                                              //!< \brief Returns euler angles, yitch as x, yaw as y, roll as z. (from GLM_GTX_quaternion extension)
	        template <typename T> detail::_xvec3<T> cross(const detail::_xquat<T>& q, const detail::_xvec3<T>& v){return rotateGTX(q, v);}                                  //!< \brief Compute a cross product between a quaternion and a vector. (from GLM_GTX_quaternion extension)
	        template <typename T> detail::_xvec3<T> cross(const detail::_xvec3<T>& v, const detail::_xquat<T>& q){return rotateGTX(inverseGTX(q), v);}                      //!< \brief Compute a cross product between a vector and a quaternion. (from GLM_GTX_quaternion extension)
	        template <typename T> detail::_xmat3<T> toMat3(const detail::_xquat<T>& x){return toMat3GTX(x);}                                                        //!< \brief Converts a quaternion to a 3 * 3 matrix. (from GLM_GTX_quaternion extension)
	        template <typename T> detail::_xmat4<T> toMat4(const detail::_xquat<T>& x){return toMat4GTX(x);}                                                        //!< \brief Converts a quaternion to a 4 * 4 matrix. (from GLM_GTX_quaternion extension)
	        template <typename T> detail::_xquat<T> toQuat(const detail::_xmat3<T>& x){return toQuatGTX(x);}                                                        //!< \brief Converts a 3 * 3 matrix to a quaternion. (from GLM_GTX_quaternion extension)
	        template <typename T> detail::_xquat<T> toQuat(const detail::_xmat4<T>& x){return toQuatGTX(x);}                                                        //!< \brief Converts a 4 * 4 matrix to a quaternion. (from GLM_GTX_quaternion extension)

            typedef detail::_xquat<float> quat;                                                                                                             //!< \brief Quaternion of floating-point numbers. (from GLM_GTX_quaternion extension)
        }
    }
} //namespace glm

#define GLM_GTX_quaternion namespace gtx::quaternion

#include "quaternion.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_quaternion;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_quaternion__
