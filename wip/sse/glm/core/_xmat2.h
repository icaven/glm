///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-27
// Updated : 2007-03-01
// Licence : This source is under GNU LGPL licence
// File    : _xmat2.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __mat2x2_h__
#define __mat2x2_h__

namespace glm{
namespace detail{

    template <typename T> class _xvec2;
    template <typename T> class _xmat3;
    template <typename T> class _xmat4;
    template <typename T> class _xmat2x4;
	template <typename T> class _xmat2x3;
    template <typename T> class _xmat3x2;
    template <typename T> class _xmat3x4;
    template <typename T> class _xmat4x2;
    template <typename T> class _xmat4x3;

	//!< \brief Template for 2 * 2 matrix of floating-point numbers.
    template <typename T> 
	class _xmat2
    {
    private:
        // Data 
        _xvec2<T> value[2];

    public:
        _xmat2<T> _inverse() const;

    public:
		typedef T value_type;
		typedef _xvec2<T> col_type;
		typedef _xvec2<T> row_type;
		typedef int size_type;
		static const size_type value_size;
		static const size_type col_size;
		static const size_type row_size;

        // Constructors
	    _xmat2();
	    _xmat2(const _xmat2<T>& m);

        explicit _xmat2(const T x);
        explicit _xmat2(const T x1, const T y1, 
                        const T x2, const T y2);
	    explicit _xmat2(const _xvec2<T> & v1, 
                        const _xvec2<T> & v2);

		// Conversions
		template <typename U> 
		explicit _xmat2(const _xmat2<U>& m);

		explicit _xmat2(const _xmat3<T>& x);
        explicit _xmat2(const _xmat4<T>& x);
        explicit _xmat2(const _xmat2x3<T>& x);
        explicit _xmat2(const _xmat3x2<T>& x);
        explicit _xmat2(const _xmat2x4<T>& x);
        explicit _xmat2(const _xmat4x2<T>& x);
        explicit _xmat2(const _xmat3x4<T>& x);
        explicit _xmat2(const _xmat4x3<T>& x);

        //explicit _xmat2(const T* a);
        // GL_GTX_euler_angles
        //explicit _xmat2(const _xvec2<T> & angles);

        // Accesses
        _xvec2<T>& operator[](int i) {return value[i];}
        const _xvec2<T> & operator[](int i) const {return value[i];}
		// operator T*() {return &value[0][0];}
		// operator const T*() const {return &value[0][0];}
		operator T*() {return (T*)this;}
        operator const T*() const {return (const T*)this;}

        // Unary updatable operators
        _xmat2<T>& operator=(const _xmat2<T>& m);
        _xmat2<T>& operator+=(const T s);
	    _xmat2<T>& operator+=(const _xmat2<T>& m);
        _xmat2<T>& operator-=(const T s);
	    _xmat2<T>& operator-=(const _xmat2<T>& m);
	    _xmat2<T>& operator*=(const T s);
	    _xmat2<T>& operator*= (const _xmat2<T>& m);
        _xmat2<T>& operator/= (const T s);
	    _xmat2<T>& operator/= (const _xmat2<T>& m);
        _xmat2<T>& operator++ ();
	    _xmat2<T>& operator-- ();

        const _xmat2<T> operator- () const;
        const _xmat2<T> operator++ (int n) const;
        const _xmat2<T> operator-- (int n) const;
    };

	// Binary operators
    template <typename T> 
    inline _xmat2<T> operator+ (const _xmat2<T>& m, const T s);

    template <typename T> 
    inline _xmat2<T> operator+ (const T s, const _xmat2<T>& m);

    template <typename T> 
    inline _xvec2<T> operator+ (const _xmat2<T>& m, const _xvec2<T>& v);

    template <typename T> 
    inline _xvec2<T> operator+ (const _xvec2<T>& v, const _xmat2<T>& m);
  
    template <typename T> 
    inline _xmat2<T> operator+ (const _xmat2<T>& m1, const _xmat2<T>& m2);
    
    template <typename T> 
    inline _xmat2<T> operator- (const _xmat2<T>& m, const T s);

    template <typename T> 
    inline _xmat2<T> operator- (const T s, const _xmat2<T>& m);

    template <typename T> 
    inline _xvec2<T> operator- (const _xmat2<T>& m, const _xvec2<T>& v);

    template <typename T> 
    inline _xvec2<T> operator- (const _xvec2<T>& v, const _xmat2<T>& m);

    template <typename T> 
    inline _xmat2<T> operator- (const _xmat2<T>& m1, const _xmat2<T>& m2);

    template <typename T> 
    inline _xmat2<T> operator* (const _xmat2<T>& m, const T s);

    template <typename T> 
    inline _xmat2<T> operator* (const T s, const _xmat2<T>& m);

    template <typename T> 
    inline _xvec2<T> operator* (const _xmat2<T>& m, const _xvec2<T>& v);

    template <typename T> 
    inline _xvec2<T> operator* (const _xvec2<T>& v, const _xmat2<T>& m);

    template <typename T> 
    inline _xmat2<T> operator* (const _xmat2<T>& m1, const _xmat2<T>& m2);

    template <typename T> 
    inline _xmat2<T> operator/ (const _xmat2<T>& m, const T s);

    template <typename T> 
    inline _xmat2<T> operator/ (const T s, const _xmat2<T>& m);

    template <typename T> 
    inline _xvec2<T> operator/ (const _xmat2<T>& m, const _xvec2<T>& v);

    template <typename T> 
    inline _xvec2<T> operator/ (const _xvec2<T>& v, const _xmat2<T>& m);

    template <typename T> 
    inline _xmat2<T> operator/ (const _xmat2<T>& m1, const _xmat2<T>& m2);

	// Unary constant operators
    template <typename T> 
    inline const _xmat2<T> operator- (const _xmat2<T>& m);

    template <typename T> 
    inline const _xmat2<T> operator-- (const _xmat2<T>& m, int);

    template <typename T> 
    inline const _xmat2<T> operator++ (const _xmat2<T>& m, int);

} //namespace detail
} //namespace glm

#endif //__mat2x2_h__
