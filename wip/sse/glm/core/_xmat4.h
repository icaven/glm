///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-27
// Updated : 2007-03-01
// Licence : This source is under GNU LGPL licence
// File    : _xmat4.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xmat4_h__
#define __xmat4_h__

namespace glm{
namespace detail{

    template <typename T> class _xvec3;
    template <typename T> class _xvec4;
    template <typename T> class _xquat;

    template <typename T> class _xmat2;
    template <typename T> class _xmat3;
    template <typename T> class _xmat2x4;
	template <typename T> class _xmat2x3;
    template <typename T> class _xmat3x2;
    template <typename T> class _xmat3x4;
    template <typename T> class _xmat4x2;
    template <typename T> class _xmat4x3;

	//!< \brief Template for 4 * 4 matrix of floating-point numbers.
    template <typename T> 
	class _xmat4
    {
    private:
        // Data
        _xvec4<T> value[4];

    public:
		typedef T value_type;
		typedef _xvec4<T> col_type;
		typedef _xvec4<T> row_type;
		typedef int size_type;
		static const size_type value_size;
		static const size_type col_size;
		static const size_type row_size;

        _xmat4<T> _inverse() const;

    public:
        // Constructors
        _xmat4();
        explicit _xmat4(const T x);
        explicit _xmat4(
            const T x0, const T y0, const T z0, const T w0,
            const T x1, const T y1, const T z1, const T w1,
            const T x2, const T y2, const T z2, const T w2,
            const T x3, const T y3, const T z3, const T w3);
        explicit _xmat4(const _xvec4<T> & v0, 
            const _xvec4<T> & v1,
            const _xvec4<T> & v2,
            const _xvec4<T> & v3);

		// Conversions
		template <typename U> 
		explicit _xmat4(const _xmat4<U>& m);

		explicit _xmat4(const _xmat2<T>& x);
        explicit _xmat4(const _xmat3<T>& x);
        explicit _xmat4(const _xmat2x3<T>& x);
        explicit _xmat4(const _xmat3x2<T>& x);
        explicit _xmat4(const _xmat2x4<T>& x);
        explicit _xmat4(const _xmat4x2<T>& x);
        explicit _xmat4(const _xmat3x4<T>& x);
        explicit _xmat4(const _xmat4x3<T>& x);

        //explicit _xmat4(const T* a);
        // GL_GTX_euler_angles
        //explicit _xmat4(const _xvec3<T> & angle);

        // Conversion
        //explicit _xmat4(const glm::_xquat<T> & q);

        // Accesses
        _xvec4<T>& operator[](int i) {return value[i];}
        const _xvec4<T> & operator[](int i) const {return value[i];}
		// operator T*() {return &value[0][0];}
		// operator const T*() const {return &value[0][0];}
		operator T*() {return (T*)this;}
        operator const T*() const {return (const T*)this;}

        // Unary updatable operators
        _xmat4<T>& operator= (const _xmat4<T>& m);
        _xmat4<T>& operator+= (const T s);
        _xmat4<T>& operator+= (const _xmat4<T>& m);
        _xmat4<T>& operator-= (const T s);
        _xmat4<T>& operator-= (const _xmat4<T>& m);
        _xmat4<T>& operator*= (const T s);
        _xmat4<T>& operator*= (const _xmat4<T>& m);
        _xmat4<T>& operator/= (const T s);
        _xmat4<T>& operator/= (const _xmat4<T>& m);
        _xmat4<T>& operator++ ();
        _xmat4<T>& operator-- ();
    };

	// Binary operators
    template <typename T> 
    inline _xmat4<T> operator+ (const _xmat4<T>& m, const T s);

    template <typename T> 
    inline _xmat4<T> operator+ (const T s, const _xmat4<T>& m);

    template <typename T> 
    inline _xvec4<T> operator+ (const _xmat4<T>& m, const _xvec4<T>& v);

    template <typename T> 
    inline _xvec4<T> operator+ (const _xvec4<T>& v, const _xmat4<T>& m);
 
    template <typename T> 
    inline _xmat4<T> operator+ (const _xmat4<T>& m1, const _xmat4<T>& m2);
    
    template <typename T> 
    inline _xmat4<T> operator- (const _xmat4<T>& m, const T s);

    template <typename T> 
    inline _xmat4<T> operator- (const T s, const _xmat4<T>& m);

    template <typename T> 
    inline _xvec4<T> operator- (const _xmat4<T>& m, const _xvec4<T>& v);

    template <typename T> 
    inline _xvec4<T> operator- (const _xvec4<T>& v, const _xmat4<T>& m);

    template <typename T> 
    inline _xmat4<T> operator- (const _xmat4<T>& m1, const _xmat4<T>& m2);

    template <typename T> 
    inline _xmat4<T> operator* (const _xmat4<T>& m, const T s);

    template <typename T> 
    inline _xmat4<T> operator* (const T s, const _xmat4<T>& m);

    template <typename T> 
    inline _xvec4<T> operator* (const _xmat4<T>& m, const _xvec4<T>& v);

    template <typename T> 
    inline _xvec4<T> operator* (const _xvec4<T>& v, const _xmat4<T>& m);

    template <typename T> 
    inline _xmat4<T> operator* (const _xmat4<T>& m1, const _xmat4<T>& m2);

    template <typename T> 
    inline _xmat4<T> operator/ (const _xmat4<T>& m, const T s);

    template <typename T> 
    inline _xmat4<T> operator/ (const T s, const _xmat4<T>& m);

    template <typename T> 
    inline _xvec4<T> operator/ (const _xmat4<T>& m, const _xvec4<T>& v);

    template <typename T> 
    inline _xvec4<T> operator/ (const _xvec4<T>& v, const _xmat4<T>& m);

    template <typename T> 
    inline _xmat4<T> operator/ (const _xmat4<T>& m1, const _xmat4<T>& m2);

	// Unary constant operators
    template <typename T> 
    inline const _xmat4<T> operator- (const _xmat4<T>& m);

    template <typename T> 
    inline const _xmat4<T> operator-- (const _xmat4<T>& m, int);

    template <typename T> 
    inline const _xmat4<T> operator++ (const _xmat4<T>& m, int);

} //namespace detail
} //namespace glm

#endif //__xmat4_h__
