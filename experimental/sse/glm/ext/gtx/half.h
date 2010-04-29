///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/half.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_quaternion
///////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright:
// This half implementation is based on OpenEXR witch is Copyright (c) 2002, 
// Industrial Light & Magic, a division of Lucas Digital Ltd. LLC
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_half__
#define __glm_gtx_half__

// Dependency:
#include "../../glm.h"
#include "../gtx/quaternion.h"

namespace glm
{
	namespace detail 
	{
		struct hdata
		{
			hdata() : data(0) {}
			hdata(const hdata& value);
			hdata(float value);

			operator float();

			short data;
		};

		float _toFloat32(hdata value);
		hdata _toFloat16(float value);

		union uif
		{
			int i;
			float f;
		};

		//! \brief Type for half-precision floating-point numbers. (From GLM_GTX_half extension)
		class _halfGTX
		{
		public:
			// Constructors
			_halfGTX();
			_halfGTX(float s);
			_halfGTX(double s);
			_halfGTX(int s);
			_halfGTX(bool s);
			_halfGTX(detail::hdata value) :
				data(value)
			{}

			operator float() const;
			operator double() const;
			operator int() const;
			operator detail::hdata() const;

			// Operators
			_halfGTX& operator=(_halfGTX s);
			_halfGTX& operator=(float s);
			_halfGTX operator+ (_halfGTX s) const;
			_halfGTX& operator+= (_halfGTX s);
			_halfGTX operator+ (float s) const;
			_halfGTX& operator+= (float s);
			_halfGTX operator- (_halfGTX s) const;
			_halfGTX& operator-= (_halfGTX s);
			_halfGTX operator- (float s) const;
			_halfGTX& operator-= (float s);
			_halfGTX operator* (_halfGTX s) const;
			_halfGTX& operator*= (_halfGTX s);
			_halfGTX operator* (float s) const;
			_halfGTX& operator*= (float s);
			_halfGTX operator/ (_halfGTX s) const;
			_halfGTX& operator/= (_halfGTX s);
			_halfGTX operator/ (float s) const;
			_halfGTX& operator/= (float s);
			_halfGTX operator- () const;
			_halfGTX operator++ ();
			_halfGTX operator++ (int n) const;
			_halfGTX operator-- ();
			_halfGTX operator-- (int n) const;

			bool operator< (const _halfGTX& s) const;
			bool operator> (const _halfGTX& s) const;
			bool operator<=(const _halfGTX& s) const;
			bool operator>=(const _halfGTX& s) const;
			bool operator==(const _halfGTX& s) const;
			bool operator!=(const _halfGTX& s) const;
			
			detail::hdata _data() const{return data;}

		private:
			detail::hdata data;
		};

		class _hvec3GTX;
		class _hvec4GTX;

		class _hvec2GTX : public _cvec2<hdata, _hvec2GTX, _hvec3GTX, _hvec4GTX, _xref2<hdata> >
		{
		public:
			// Common constructors
			_hvec2GTX();
			_hvec2GTX(const _hvec2GTX& v);

			// Swizzle constructors
			_hvec2GTX(const _xref2<hdata>& r);

			// T constructors
			explicit _hvec2GTX(const _halfGTX x);
			explicit _hvec2GTX(const _halfGTX a, const _halfGTX b);
			explicit _hvec2GTX(const _halfGTX a, const _hvec2GTX& b);
			explicit _hvec2GTX(const _halfGTX a, const _hvec3GTX& b);
			explicit _hvec2GTX(const _halfGTX a, const _hvec4GTX& b);
			explicit _hvec2GTX(const _hvec3GTX& a);
			explicit _hvec2GTX(const _hvec4GTX& a);

			// U constructors
			template <typename U> explicit _hvec2GTX(const U x);
			template <typename U> explicit _hvec2GTX(const U a, const U b);
			template <typename U> explicit _hvec2GTX(const U a, const _xvec2<U>& b);
			template <typename U> explicit _hvec2GTX(const U a, const _xvec3<U>& b);
			template <typename U> explicit _hvec2GTX(const U a, const _xvec4<U>& b);
			template <typename U> explicit _hvec2GTX(const _xvec2<U>& a);
			template <typename U> explicit _hvec2GTX(const _xvec3<U>& a);
			template <typename U> explicit _hvec2GTX(const _xvec4<U>& a);

			// Bool constructors
			explicit _hvec2GTX(const bool x);
			explicit _hvec2GTX(const bool a, const bool b);
			explicit _hvec2GTX(const bool a, const _bvec2& b);
			explicit _hvec2GTX(const bool a, const _bvec3& b);
			explicit _hvec2GTX(const bool a, const _bvec4& b);
			explicit _hvec2GTX(const _bvec2& a);
			explicit _hvec2GTX(const _bvec3& a);
			explicit _hvec2GTX(const _bvec4& a);

			// Unary updatable operators
			_hvec2GTX& operator= (const _hvec2GTX& v);
			_hvec2GTX& operator+=(const _halfGTX s);
			_hvec2GTX& operator+=(const _hvec2GTX& v);
			_hvec2GTX& operator-=(const _halfGTX s);
			_hvec2GTX& operator-=(const _hvec2GTX& v);
			_hvec2GTX& operator*=(const _halfGTX s);
			_hvec2GTX& operator*=(const _hvec2GTX& v);
			_hvec2GTX& operator/=(const _halfGTX s);
			_hvec2GTX& operator/=(const _hvec2GTX& v);
			_hvec2GTX& operator++();
			_hvec2GTX& operator--();
		};

		class _hvec3GTX : public _cvec3<hdata, _hvec2GTX, _hvec3GTX, _hvec4GTX, _xref2<hdata>, _xref3<hdata> >
		{
		public:
			// Common constructors
			_hvec3GTX();
			_hvec3GTX(const _hvec3GTX& v);

			// Swizzle constructors
			_hvec3GTX(const _xref3<hdata>& r);

			// T constructors
			explicit _hvec3GTX(const _halfGTX a);
			explicit _hvec3GTX(const _halfGTX a, const _halfGTX b, const _halfGTX c);
			explicit _hvec3GTX(const _halfGTX a, const _halfGTX b, const _hvec2GTX& c);
			explicit _hvec3GTX(const _halfGTX a, const _halfGTX b, const _hvec3GTX& c);
			explicit _hvec3GTX(const _halfGTX a, const _halfGTX b, const _hvec4GTX& c);
			explicit _hvec3GTX(const _halfGTX a, const _hvec2GTX& b);
			explicit _hvec3GTX(const _halfGTX a, const _hvec3GTX& b);
			explicit _hvec3GTX(const _halfGTX a, const _hvec4GTX& b);
			explicit _hvec3GTX(const _hvec2GTX& a, _halfGTX b);
			explicit _hvec3GTX(const _hvec2GTX& a, const _hvec2GTX& b);
			explicit _hvec3GTX(const _hvec2GTX& a, const _hvec3GTX& b);
			explicit _hvec3GTX(const _hvec2GTX& a, const _hvec4GTX& b);
			explicit _hvec3GTX(const _hvec4GTX& a);

			// U constructors
			template <typename U> explicit _hvec3GTX(const U x);
			template <typename U> explicit _hvec3GTX(const U a, const U b, const U c);
			template <typename U> explicit _hvec3GTX(const U a, const U b, const _xvec2<U>& c);
			template <typename U> explicit _hvec3GTX(const U a, const U b, const _xvec3<U>& c);
			template <typename U> explicit _hvec3GTX(const U a, const U b, const _xvec4<U>& c);
			template <typename U> explicit _hvec3GTX(const U a, const _xvec2<U>& b);
			template <typename U> explicit _hvec3GTX(const U a, const _xvec3<U>& b);
			template <typename U> explicit _hvec3GTX(const U a, const _xvec4<U>& b);
			template <typename U> explicit _hvec3GTX(const _xvec2<U>& a, U b);
			template <typename U> explicit _hvec3GTX(const _xvec2<U>& a, const _xvec2<U>& b);
			template <typename U> explicit _hvec3GTX(const _xvec2<U>& a, const _xvec3<U>& b);
			template <typename U> explicit _hvec3GTX(const _xvec2<U>& a, const _xvec4<U>& b);
			template <typename U> explicit _hvec3GTX(const _xvec3<U>& a);
			template <typename U> explicit _hvec3GTX(const _xvec4<U>& a);

			// Bool constructors
			explicit _hvec3GTX(const bool a);
			explicit _hvec3GTX(const bool a, const bool b, const bool c);
			explicit _hvec3GTX(const bool a, const bool b, const _bvec2& c);
			explicit _hvec3GTX(const bool a, const bool b, const _bvec3& c);
			explicit _hvec3GTX(const bool a, const bool b, const _bvec4& c);
			explicit _hvec3GTX(const bool a, const _bvec2& b);
			explicit _hvec3GTX(const bool a, const _bvec3& b);
			explicit _hvec3GTX(const bool a, const _bvec4& b);
			explicit _hvec3GTX(const _bvec2& a, bool b);
			explicit _hvec3GTX(const _bvec2& a, const _bvec2& b);
			explicit _hvec3GTX(const _bvec2& a, const _bvec3& b);
			explicit _hvec3GTX(const _bvec2& a, const _bvec4& b);
			explicit _hvec3GTX(const _bvec3& a);
			explicit _hvec3GTX(const _bvec4& a);

			// Unary updatable operators
			_hvec3GTX& operator= (const _hvec3GTX& v);
			_hvec3GTX& operator+=(const _halfGTX s);
			_hvec3GTX& operator+=(const _hvec3GTX& v);
			_hvec3GTX& operator-=(const _halfGTX s);
			_hvec3GTX& operator-=(const _hvec3GTX& v);
			_hvec3GTX& operator*=(const _halfGTX s);
			_hvec3GTX& operator*=(const _hvec3GTX& v);
			_hvec3GTX& operator/=(const _halfGTX s);
			_hvec3GTX& operator/=(const _hvec3GTX& v);
			_hvec3GTX& operator++();
			_hvec3GTX& operator--();
		};

		class _hvec4GTX : public _cvec4<hdata, _hvec2GTX, _hvec3GTX, _hvec4GTX, _xref2<hdata>, _xref3<hdata>, _xref4<hdata> >
		{
		public:
			// Common constructors
			_hvec4GTX();
			_hvec4GTX(const _hvec4GTX& v);

			// Swizzle constructors
			_hvec4GTX(const _xref4<hdata>& r);

			// T constructors
			explicit _hvec4GTX(const _halfGTX a);
			explicit _hvec4GTX(const _halfGTX a, const _halfGTX b, const _halfGTX c, const _halfGTX d);
			explicit _hvec4GTX(const _halfGTX a, const _halfGTX b, const _halfGTX c, const _hvec2GTX& d);
			explicit _hvec4GTX(const _halfGTX a, const _halfGTX b, const _halfGTX c, const _hvec3GTX& d);
			explicit _hvec4GTX(const _halfGTX a, const _halfGTX b, const _halfGTX c, const _hvec4GTX& d);
			explicit _hvec4GTX(const _halfGTX a, const _halfGTX b, const _hvec2GTX& c);
			explicit _hvec4GTX(const _halfGTX a, const _halfGTX b, const _hvec3GTX& c);
			explicit _hvec4GTX(const _halfGTX a, const _halfGTX b, const _hvec4GTX& c);
			explicit _hvec4GTX(const _halfGTX a, const _hvec2GTX& b, const _halfGTX c);
			explicit _hvec4GTX(const _halfGTX a, const _hvec2GTX& b, const _hvec2GTX& c);
			explicit _hvec4GTX(const _halfGTX a, const _hvec2GTX& b, const _hvec3GTX& c);
			explicit _hvec4GTX(const _halfGTX a, const _hvec2GTX& b, const _hvec4GTX& c);
			explicit _hvec4GTX(const _halfGTX a, const _hvec3GTX& b);
			explicit _hvec4GTX(const _halfGTX a, const _hvec4GTX& b);
			explicit _hvec4GTX(const _hvec2GTX& a, const _halfGTX b, const _halfGTX c);
			explicit _hvec4GTX(const _hvec2GTX& a, const _halfGTX b, const _hvec2GTX& c);
			explicit _hvec4GTX(const _hvec2GTX& a, const _halfGTX b, const _hvec3GTX& c);
			explicit _hvec4GTX(const _hvec2GTX& a, const _halfGTX b, const _hvec4GTX& c);
			explicit _hvec4GTX(const _hvec2GTX& a, const _hvec2GTX& b);
			explicit _hvec4GTX(const _hvec2GTX& a, const _hvec3GTX& b);
			explicit _hvec4GTX(const _hvec2GTX& a, const _hvec4GTX& b);
			explicit _hvec4GTX(const _hvec3GTX& a, const _halfGTX b);
			explicit _hvec4GTX(const _hvec3GTX& a, const _hvec2GTX& b);
			explicit _hvec4GTX(const _hvec3GTX& a, const _hvec3GTX& b);
			explicit _hvec4GTX(const _hvec3GTX& a, const _hvec4GTX& b);

			// U constructors
			template <typename U> explicit _hvec4GTX(const U x);
			template <typename U> explicit _hvec4GTX(const U a, const U b, const U c, const U d);
			template <typename U> explicit _hvec4GTX(const U a, const U b, const U c, const _xvec2<U>& d);
			template <typename U> explicit _hvec4GTX(const U a, const U b, const U c, const _xvec3<U>& d);
			template <typename U> explicit _hvec4GTX(const U a, const U b, const U c, const _xvec4<U>& d);
			template <typename U> explicit _hvec4GTX(const U a, const U b, const _xvec2<U>& c);
			template <typename U> explicit _hvec4GTX(const U a, const U b, const _xvec3<U>& c);
			template <typename U> explicit _hvec4GTX(const U a, const U b, const _xvec4<U>& c);
			template <typename U> explicit _hvec4GTX(const U a, const _xvec2<U>& b, const U c);
			template <typename U> explicit _hvec4GTX(const U a, const _xvec2<U>& b, const _xvec2<U>& c);
			template <typename U> explicit _hvec4GTX(const U a, const _xvec2<U>& b, const _xvec3<U>& c);
			template <typename U> explicit _hvec4GTX(const U a, const _xvec2<U>& b, const _xvec4<U>& c);
			template <typename U> explicit _hvec4GTX(const U a, const _xvec3<U>& b);
			template <typename U> explicit _hvec4GTX(const U a, const _xvec4<U>& b);
			template <typename U> explicit _hvec4GTX(const _xvec2<U>& a, const U b, const U c);
			template <typename U> explicit _hvec4GTX(const _xvec2<U>& a, const U b, const _xvec2<U>& c);
			template <typename U> explicit _hvec4GTX(const _xvec2<U>& a, const U b, const _xvec3<U>& c);
			template <typename U> explicit _hvec4GTX(const _xvec2<U>& a, const U b, const _xvec4<U>& c);
			template <typename U> explicit _hvec4GTX(const _xvec2<U>& a, const _xvec2<U>& b);
			template <typename U> explicit _hvec4GTX(const _xvec2<U>& a, const _xvec3<U>& b);
			template <typename U> explicit _hvec4GTX(const _xvec2<U>& a, const _xvec4<U>& b);
			template <typename U> explicit _hvec4GTX(const _xvec3<U>& a, const U b);
			template <typename U> explicit _hvec4GTX(const _xvec3<U>& a, const _xvec2<U>& b);
			template <typename U> explicit _hvec4GTX(const _xvec3<U>& a, const _xvec3<U>& b);
			template <typename U> explicit _hvec4GTX(const _xvec3<U>& a, const _xvec4<U>& b);
			template <typename U> explicit _hvec4GTX(const _xvec4<U>& a);

			// Bool constructors
			explicit _hvec4GTX(const bool x);
			explicit _hvec4GTX(const bool a, const bool b, const bool c, const bool d);
			explicit _hvec4GTX(const bool a, const bool b, const bool c, const _bvec2& d);
			explicit _hvec4GTX(const bool a, const bool b, const bool c, const _bvec3& d);
			explicit _hvec4GTX(const bool a, const bool b, const bool c, const _bvec4& d);
			explicit _hvec4GTX(const bool a, const bool b, const _bvec2& c);
			explicit _hvec4GTX(const bool a, const bool b, const _bvec3& c);
			explicit _hvec4GTX(const bool a, const bool b, const _bvec4& c);
			explicit _hvec4GTX(const bool a, const _bvec2& b, const bool c);
			explicit _hvec4GTX(const bool a, const _bvec2& b, const _bvec2& c);
			explicit _hvec4GTX(const bool a, const _bvec2& b, const _bvec3& c);
			explicit _hvec4GTX(const bool a, const _bvec2& b, const _bvec4& c);
			explicit _hvec4GTX(const bool a, const _bvec3& b);
			explicit _hvec4GTX(const bool a, const _bvec4& b);
			explicit _hvec4GTX(const _bvec2& a, const bool b, const bool c);
			explicit _hvec4GTX(const _bvec2& a, const bool b, const _bvec2& c);
			explicit _hvec4GTX(const _bvec2& a, const bool b, const _bvec3& c);
			explicit _hvec4GTX(const _bvec2& a, const bool b, const _bvec4& c);
			explicit _hvec4GTX(const _bvec2& a, const _bvec2& b);
			explicit _hvec4GTX(const _bvec2& a, const _bvec3& b);
			explicit _hvec4GTX(const _bvec2& a, const _bvec4& b);
			explicit _hvec4GTX(const _bvec3& a, const bool b);
			explicit _hvec4GTX(const _bvec3& a, const _bvec2& b);
			explicit _hvec4GTX(const _bvec3& a, const _bvec3& b);
			explicit _hvec4GTX(const _bvec3& a, const _bvec4& b);
			explicit _hvec4GTX(const _bvec4& a);

			// Unary updatable operators
			_hvec4GTX& operator= (const _hvec4GTX& x);
			_hvec4GTX& operator+=(const _halfGTX s);
			_hvec4GTX& operator+=(const _hvec4GTX& v);
			_hvec4GTX& operator-=(const _halfGTX s);
			_hvec4GTX& operator-=(const _hvec4GTX& v);
			_hvec4GTX& operator*=(const _halfGTX s);
			_hvec4GTX& operator*=(const _hvec4GTX& v);
			_hvec4GTX& operator/=(const _halfGTX s);
			_hvec4GTX& operator/=(const _hvec4GTX& v);
			_hvec4GTX& operator++();
			_hvec4GTX& operator--();
		};
	}

	typedef detail::_halfGTX					__halfGTX;  //!< \brief Type for half-precision floating-point numbers. (From GLM_GTX_half extension)
	typedef detail::_xvec2<detail::_halfGTX>	__hvec2GTX; //!< \brief Vector of 2 half-precision floating-point numbers. (From GLM_GTX_half extension)
    typedef detail::_xvec3<detail::_halfGTX>	__hvec3GTX; //!< \brief Vector of 3 half-precision floating-point numbers. (From GLM_GTX_half extension)
    typedef detail::_xvec4<detail::_halfGTX>	__hvec4GTX; //!< \brief Vector of 4 half-precision floating-point numbers. (From GLM_GTX_half extension)
    typedef detail::_xmat2<detail::_halfGTX>	__hmat2GTX; //!< \brief 2 * 2 matrix of half-precision floating-point numbers. (From GLM_GTX_half extension)
    typedef detail::_xmat3<detail::_halfGTX>	__hmat3GTX; //!< \brief 3 * 3 matrix of half-precision floating-point numbers. (From GLM_GTX_half extension)
    typedef detail::_xmat4<detail::_halfGTX>	__hmat4GTX; //!< \brief 4 * 4 matrix of half-precision floating-point numbers. (From GLM_GTX_half extension)
    typedef detail::_xquat<detail::_halfGTX>	__hquatGTX; //!< \brief Quaternion of half-precision floating-point numbers. (from GLM_GTX_half extension)

	__halfGTX cosGTX(__halfGTX x);
	__hvec2GTX cosGTX(const __hvec2GTX& x);
	__hvec3GTX cosGTX(const __hvec3GTX& x);
	__hvec4GTX cosGTX(const __hvec4GTX& x);

	__halfGTX sinGTX(__halfGTX x);
	__hvec2GTX sinGTX(const __hvec2GTX& x);
	__hvec3GTX sinGTX(const __hvec3GTX& x);
	__hvec4GTX sinGTX(const __hvec4GTX& x);

	__halfGTX tanGTX(__halfGTX x);
	__hvec2GTX tanGTX(const __hvec2GTX& x);
	__hvec3GTX tanGTX(const __hvec3GTX& x);
	__hvec4GTX tanGTX(const __hvec4GTX& x);

	namespace gtx
	{
		//! GLM_GTX_half extension: Add support for half precision flotting-point types
		namespace half
		{
			typedef __halfGTX	half;  //!< \brief Type for half-precision floating-point numbers. (From GLM_GTX_half extension)
			typedef __hvec2GTX	hvec2; //!< \brief Vector of 2 half-precision floating-point numbers. (From GLM_GTX_half extension)
			typedef __hvec3GTX	hvec3; //!< \brief Vector of 3 half-precision floating-point numbers. (From GLM_GTX_half extension)
			typedef __hvec4GTX	hvec4; //!< \brief Vector of 4 half-precision floating-point numbers. (From GLM_GTX_half extension)
			typedef __hmat2GTX	hmat2; //!< \brief 2 * 2 matrix of half-precision floating-point numbers. (From GLM_GTX_half extension)
			typedef __hmat3GTX	hmat3; //!< \brief 3 * 3 matrix of half-precision floating-point numbers. (From GLM_GTX_half extension)
			typedef __hmat4GTX	hmat4; //!< \brief 4 * 4 matrix of half-precision floating-point numbers. (From GLM_GTX_half extension)
			typedef __hquatGTX	hquat; //!< \brief Quaternion of half-precision floating-point numbers. (From GLM_GTX_half extension)

			inline __halfGTX cos(__halfGTX x){return cosGTX(x);}			//!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_half extension)
			inline __hvec2GTX cos(const __hvec2GTX& x){return cosGTX(x);}	//!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_half extension)
			inline __hvec3GTX cos(const __hvec3GTX& x){return cosGTX(x);}	//!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_half extension)
			inline __hvec4GTX cos(const __hvec4GTX& x){return cosGTX(x);}	//!< \brief The standard trigonometric cosine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_half extension)

			inline __halfGTX sin(__halfGTX x){return sinGTX(x);}			//!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_half extension)
			inline __hvec2GTX sin(const __hvec2GTX& x){return sinGTX(x);}	//!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_half extension)
			inline __hvec3GTX sin(const __hvec3GTX& x){return sinGTX(x);}	//!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_half extension)
			inline __hvec4GTX sin(const __hvec4GTX& x){return sinGTX(x);}	//!< \brief The standard trigonometric sine function. The values returned by this function will range from [-1, 1]. (From GLM_GTX_half extension)

			inline __halfGTX tan(__halfGTX x){return tanGTX(x);}			//!< \brief The standard trigonometric tangent function. (From GLM_GTX_half extension)
			inline __hvec2GTX tan(const __hvec2GTX& x){return tanGTX(x);}	//!< \brief The standard trigonometric tangent function. (From GLM_GTX_half extension)
			inline __hvec3GTX tan(const __hvec3GTX& x){return tanGTX(x);}	//!< \brief The standard trigonometric tangent function. (From GLM_GTX_half extension)
			inline __hvec4GTX tan(const __hvec4GTX& x){return tanGTX(x);}	//!< \brief The standard trigonometric tangent function. (From GLM_GTX_half extension)
		}
	}
}

#define GLM_GTX_half namespace gtx::half

#include "half.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_half;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_half__
