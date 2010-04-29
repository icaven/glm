///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-27
// Updated : 2007-03-01
// Licence : This source is under GNU LGPL licence
// File    : _xmat3.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __xmat3_h__
#define __xmat3_h__

namespace glm{
namespace detail{

    template <typename T> class _xvec2;
    template <typename T> class _xvec3;
    template <typename T> class _xquat;

	template <typename T> class _xmat2;
    template <typename T> class _xmat4;
    template <typename T> class _xmat2x4;
	template <typename T> class _xmat2x3;
    template <typename T> class _xmat3x2;
    template <typename T> class _xmat3x4;
    template <typename T> class _xmat4x2;
    template <typename T> class _xmat4x3;

	//!< \brief Template for 3 * 3 matrix of floating-point numbers.
	template <typename T> 
	class _xmat3
    {
    private:
        // Data 
        _xvec3<T> value[3];

    public:
        _xmat3<T> _inverse() const;

    public:
		typedef T value_type;
		typedef _xvec3<T> col_type;
		typedef _xvec3<T> row_type;
		typedef int size_type;
		static const size_type value_size;
		static const size_type col_size;
		static const size_type row_size;

        // Constructors
	    _xmat3();
        explicit _xmat3(const T x);
        explicit _xmat3(const T x0, const T y0, const T z0,
                        const T x1, const T y1, const T z1,
                        const T x2, const T y2, const T z2);
	    explicit _xmat3(const _xvec3<T> & v0, 
                        const _xvec3<T> & v1,
                        const _xvec3<T> & v2);

		// Conversions
		template <typename U> 
		explicit _xmat3(const _xmat3<U>& m);

		explicit _xmat3(const _xmat2<T>& x);
        explicit _xmat3(const _xmat4<T>& x);
        explicit _xmat3(const _xmat2x3<T>& x);
        explicit _xmat3(const _xmat3x2<T>& x);
        explicit _xmat3(const _xmat2x4<T>& x);
        explicit _xmat3(const _xmat4x2<T>& x);
        explicit _xmat3(const _xmat3x4<T>& x);
        explicit _xmat3(const _xmat4x3<T>& x);

        //explicit _xmat3(const T* a);
        // GL_GTX_euler_angles
        //explicit _xmat3(const _xvec2<T> & angles);
        //explicit _xmat3(const _xvec3<T> & angles);

        // Conversions
        //explicit _xmat3(const glm::_xquat<T> & q);

        // Accesses
        _xvec3<T>& operator[](int i) {return value[i];}
        const _xvec3<T> & operator[](int i) const {return value[i];}
		// operator T*() {return &value[0][0];}
		// operator const T*() const {return &value[0][0];}
		operator T*() {return (T*)this;}
        operator const T*() const {return (const T*)this;}

        // Unary updatable operators
        _xmat3<T>& operator=(const _xmat3<T>& m);
	    _xmat3<T>& operator+= (const T s);
        _xmat3<T>& operator+= (const _xmat3<T>& m);
        _xmat3<T>& operator-= (const T s);
	    _xmat3<T>& operator-= (const _xmat3<T>& m);
	    _xmat3<T>& operator*= (const T s);
        _xmat3<T>& operator*= (const _xmat3<T>& m);
	    _xmat3<T>& operator/= (const T s);
        _xmat3<T>& operator/= (const _xmat3<T>& m);
        _xmat3<T>& operator++ ();
	    _xmat3<T>& operator-- ();
    };

	// Binary operators
    template <typename T> 
    inline _xmat3<T> operator+ (const _xmat3<T>& m, const T s);

    template <typename T> 
    inline _xmat3<T> operator+ (const T s, const _xmat3<T>& m);

    template <typename T> 
    inline _xvec3<T> operator+ (const _xmat3<T>& m, const _xvec3<T>& v);

    template <typename T> 
    inline _xvec3<T> operator+ (const _xvec3<T>& v, const _xmat3<T>& m);
   
    template <typename T> 
    inline _xmat3<T> operator+ (const _xmat3<T>& m1, const _xmat3<T>& m2);
    
    template <typename T> 
    inline _xmat3<T> operator- (const _xmat3<T>& m, const T s);

    template <typename T> 
    inline _xmat3<T> operator- (const T s, const _xmat3<T>& m);

    template <typename T> 
    inline _xvec3<T> operator- (const _xmat3<T>& m, const _xvec3<T>& v);

    template <typename T> 
    inline _xvec3<T> operator- (const _xvec3<T>& v, const _xmat3<T>& m);

    template <typename T> 
    inline _xmat3<T> operator- (const _xmat3<T>& m1, const _xmat3<T>& m2);

    template <typename T> 
    inline _xmat3<T> operator* (const _xmat3<T>& m, const T s);

    template <typename T> 
    inline _xmat3<T> operator* (const T s, const _xmat3<T>& m);

    template <typename T> 
    inline _xvec3<T> operator* (const _xmat3<T>& m, const _xvec3<T>& v);

    template <typename T> 
    inline _xvec3<T> operator* (const _xvec3<T>& v, const _xmat3<T>& m);

    template <typename T> 
    inline _xmat3<T> operator* (const _xmat3<T>& m1, const _xmat3<T>& m2);

    template <typename T> 
    inline _xmat3<T> operator/ (const _xmat3<T>& m, const T s);

    template <typename T> 
    inline _xmat3<T> operator/ (const T s, const _xmat3<T>& m);

    template <typename T> 
    inline _xvec3<T> operator/ (const _xmat3<T>& m, const _xvec3<T>& v);

    template <typename T> 
    inline _xvec3<T> operator/ (const _xvec3<T>& v, const _xmat3<T>& m);

    template <typename T> 
    inline _xmat3<T> operator/ (const _xmat3<T>& m1, const _xmat3<T>& m2);

	// Unary constant operators
    template <typename T> 
    inline const _xmat3<T> operator- (const _xmat3<T>& m);

    template <typename T> 
    inline const _xmat3<T> operator-- (const _xmat3<T>& m, int);

    template <typename T> 
    inline const _xmat3<T> operator++ (const _xmat3<T>& m, int);

} //namespace detail
} //namespace glm

#endif //__xmat3_h__
