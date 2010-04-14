///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-10-01
// Updated : 2006-10-01
// Licence : This source is under GNU LGPL licence
// File    : _mat4x2.h
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __mat4x2_h__
#define __mat4x2_h__

namespace glm{
namespace detail{

    template <typename T> class _xvec3;
    template <typename T> class _xvec4;
    template <typename T> class _xmat2;
    template <typename T> class _xmat3;
    template <typename T> class _xmat4;
    template <typename T> class _xmat2x3;
    template <typename T> class _xmat3x2;
    template <typename T> class _xmat2x4;
    template <typename T> class _xmat3x4;
    template <typename T> class _xmat4x3;

    //!< \brief Template for 4 * 2 matrix of floating-point numbers.
    template <typename T> 
    class _xmat4x2
    {
    private:
        // Data
        _xvec2<T> value[4];

    public:
		typedef T value_type;
		typedef _xvec4<T> col_type;
		typedef _xvec2<T> row_type;
		typedef int size_type;
		static const size_type col_size;
		static const size_type row_size;

        // Constructors
        _xmat4x2();
        explicit _xmat4x2(const T x);
        explicit _xmat4x2(
            const T x0, const T y0,
            const T x1, const T y1,
            const T x2, const T y2,
            const T x3, const T y3);
        explicit _xmat4x2(
            const _xvec2<T>& v0, 
            const _xvec2<T>& v1,
            const _xvec2<T>& v2,
            const _xvec2<T>& v3);

        // Conversions
		template <typename U> 
		explicit _xmat4x2(const _xmat4x2<U>& m);
		
		explicit _xmat4x2(const _xmat2<T>& x);
        explicit _xmat4x2(const _xmat3<T>& x);
        explicit _xmat4x2(const _xmat4<T>& x);
        explicit _xmat4x2(const _xmat2x3<T>& x);
        explicit _xmat4x2(const _xmat3x2<T>& x);
        explicit _xmat4x2(const _xmat2x4<T>& x);
        explicit _xmat4x2(const _xmat4x3<T>& x);
        explicit _xmat4x2(const _xmat3x4<T>& x);

        // Accesses
        _xvec2<T>& operator[](int i) {return value[i];}
        const _xvec2<T> & operator[](int i) const {return value[i];}
		// operator T*() {return &value[0][0];}
		// operator const T*() const {return &value[0][0];}
		operator T*() {return (T*)this;}
        operator const T*() const {return (const T*)this;}

        // Unary updatable operators
        _xmat4x2<T>& operator= (const _xmat4x2<T>& m);
        _xmat4x2<T>& operator+= (const T s);
        _xmat4x2<T>& operator+= (const _xmat4x2<T>& m);
        _xmat4x2<T>& operator-= (const T s);
        _xmat4x2<T>& operator-= (const _xmat4x2<T>& m);
        _xmat4x2<T>& operator*= (const T s);
        _xmat4x2<T>& operator*= (const _xmat2x4<T>& m);
        _xmat4x2<T>& operator/= (const T s);
/* ToDo
        _xmat4x2<T>& operator/= (const _xmat2x4<T>& m);
*/
        _xmat4x2<T>& operator++ ();
        _xmat4x2<T>& operator-- ();

        // Unary constant operators
        const _xmat4x2<T> operator- () const;
        const _xmat4x2<T> operator++ (int n) const;
        const _xmat4x2<T> operator-- (int n) const;
    };

    // Binary operators
    template <typename T> 
    _xmat4x2<T> operator+ (const _xmat4x2<T>& m, const T s);
    
    template <typename T> 
    _xmat4x2<T> operator+ (const _xmat4x2<T>& m1, const _xmat4x2<T>& m2);
    
    template <typename T> 
    _xmat4x2<T> operator- (const _xmat4x2<T>& m, const T s);

    template <typename T> 
    _xmat4x2<T> operator- (const _xmat4x2<T>& m1, const _xmat4x2<T>& m2);

    template <typename T> 
    _xmat4x2<T> operator* (const _xmat4x2<T>& m, const T s);

    template <typename T> 
    _xmat4x2<T> operator* (const T s, const _xmat4x2<T>& m);

    template <typename T>
    _xvec2<T> operator* (const _xmat4x2<T>& m, const _xvec4<T>& v);

    template <typename T> 
    _xmat4<T> operator* (const _xvec2<T>& v, const _xmat4x2<T>& m);
/* ToDo
    template <typename T> 
    _xmat2<T> operator* (const _xmat4x2<T>& m1, const _xmat2x4<T>& m2);
*/
    template <typename T> 
    _xmat4x2<T> operator/ (const _xmat4x2<T>& m, const T s);

    template <typename T> 
    _xmat4x2<T> operator/ (const T s, const _xmat4x2<T>& m);
/* ToDo
    template <typename T> 
    _xvec2<T> operator/ (const _xmat4x2<T>& m, const _xvec4<T>& v);

    template <typename T> 
    _xvec4<T> operator/ (const _xvec2<T>& v, const _xmat4x2<T>& m);

    template <typename T> 
    _xmat2<T> operator/ (const _xmat4x2<T>& m1, const _xmat2x4<T>& m2);
*/

} //namespace detail
} //namespace glm

#endif //__mat4x2_h__
