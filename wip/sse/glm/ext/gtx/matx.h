///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-02-21
// Updated : 2007-03-01
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/matx.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_vecx
// - GLM_GTX_matrix_selection
// - GLM_GTX_matrix_access
// - GLM_GTX_mul
// - GLM_GTX_inverse_transpose
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_matx__
#define __glm_gtx_matx__

// Dependency:
#include "../../glm.h"
#include "../gtx/vecx.h"

namespace glm{
namespace detail{

    template <int N, typename T = float> 
	class _xmatxGTX
    {
    private:
        // Data
        _xvecxGTX<N, T> value[N];

    public:
        _xmatxGTX<N, T> _inverse() const;

    public:
		typedef T value_type;
		typedef int size_type;
		static const size_type value_size;

        // Constructors
        _xmatxGTX();
        explicit _xmatxGTX(const T x);

        // Accesses
        _xvecxGTX<N, T>& operator[](int i) {return value[i];}
        const _xvecxGTX<N, T> & operator[](int i) const {return value[i];}
        operator T*() {return &value[0][0];}
        operator const T*() const {return &value[0][0];}

        // Unary updatable operators
        _xmatxGTX<N, T>& operator=  (const _xmatxGTX<N, T>& m);
        _xmatxGTX<N, T>& operator+= (const T s);
        _xmatxGTX<N, T>& operator+= (const _xmatxGTX<N, T>& m);
        _xmatxGTX<N, T>& operator-= (const T s);
        _xmatxGTX<N, T>& operator-= (const _xmatxGTX<N, T>& m);
        _xmatxGTX<N, T>& operator*= (const T s);
        _xmatxGTX<N, T>& operator*= (const _xmatxGTX<N, T>& m);
        _xmatxGTX<N, T>& operator/= (const T s);
        _xmatxGTX<N, T>& operator/= (const _xmatxGTX<N, T>& m);
        _xmatxGTX<N, T>& operator++ ();
        _xmatxGTX<N, T>& operator-- ();
    };

	// Binary operators
    template <int N, typename T>
    _xmatxGTX<N, T> operator+ (const _xmatxGTX<N, T>& m, const T s);

    template <int N, typename T> 
    _xmatxGTX<N, T> operator+ (const T s, const _xmatxGTX<N, T>& m);

    template <int N, typename T>
    _xvecxGTX<N, T> operator+ (const _xmatxGTX<N, T>& m, const _xvecxGTX<N, T>& v);

    template <int N, typename T>
    _xvecxGTX<N, T> operator+ (const _xvecxGTX<N, T>& v, const _xmatxGTX<N, T>& m);
 
    template <int N, typename T> 
    _xmatxGTX<N, T> operator+ (const _xmatxGTX<N, T>& m1, const _xmatxGTX<N, T>& m2);
    
    template <int N, typename T> 
    _xmatxGTX<N, T> operator- (const _xmatxGTX<N, T>& m, const T s);

    template <int N, typename T> 
    _xmatxGTX<N, T> operator- (const T s, const _xmatxGTX<N, T>& m);

    template <int N, typename T> 
    _xvecxGTX<N, T> operator- (const _xmatxGTX<N, T>& m, const _xvecxGTX<N, T>& v);

    template <int N, typename T> 
    _xvecxGTX<N, T> operator- (const _xvecxGTX<N, T>& v, const _xmatxGTX<N, T>& m);

    template <int N, typename T>
    _xmatxGTX<N, T> operator- (const _xmatxGTX<N, T>& m1, const _xmatxGTX<N, T>& m2);

    template <int N, typename T> 
    _xmatxGTX<N, T> operator* (const _xmatxGTX<N, T>& m, const T s);

    template <int N, typename T>
    _xmatxGTX<N, T> operator* (const T s, const _xmatxGTX<N, T>& m);

    template <int N, typename T>
    _xvecxGTX<N, T> operator* (const _xmatxGTX<N, T>& m, const _xvecxGTX<N, T>& v);

    template <int N, typename T>
    _xvecxGTX<N, T> operator* (const _xvecxGTX<N, T>& v, const _xmatxGTX<N, T>& m);

    template <int N, typename T>
    _xmatxGTX<N, T> operator* (const _xmatxGTX<N, T>& m1, const _xmatxGTX<N, T>& m2);

    template <int N, typename T>
    _xmatxGTX<N, T> operator/ (const _xmatxGTX<N, T>& m, const T s);

    template <int N, typename T>
    _xmatxGTX<N, T> operator/ (const T s, const _xmatxGTX<N, T>& m);

    template <int N, typename T>
    _xvecxGTX<N, T> operator/ (const _xmatxGTX<N, T>& m, const _xvecxGTX<N, T>& v);

    template <int N, typename T>
    _xvecxGTX<N, T> operator/ (const _xvecxGTX<N, T>& v, const _xmatxGTX<N, T>& m);

    template <int N, typename T>
    _xmatxGTX<N, T> operator/ (const _xmatxGTX<N, T>& m1, const _xmatxGTX<N, T>& m2);

	// Unary constant operators
    template <int N, typename T>
    const _xmatxGTX<N, T> operator- (const _xmatxGTX<N, T>& m);

    template <int N, typename T>
    const _xmatxGTX<N, T> operator-- (const _xmatxGTX<N, T>& m, int);

    template <int N, typename T>
    const _xmatxGTX<N, T> operator++ (const _xmatxGTX<N, T>& m, int);

}//namespace detail

	// Extension functions
	template <int N, typename T> detail::_xmatxGTX<N, T> matrixCompMultGTX(const detail::_xmatxGTX<N, T>& x, const detail::_xmatxGTX<N, T>& y); //!< Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (from GLM_GTX_matx extension)
	template <int N, typename T> detail::_xmatxGTX<N, T> outerProductGTX(const detail::_xvecxGTX<N, T>& c, const detail::_xvecxGTX<N, T>& r);   //!< Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (from GLM_GTX_matx extension)
	template <int N, typename T> detail::_xmatxGTX<N, T> transposeGTX(const detail::_xmatxGTX<N, T>& x);										//!< Returns the transposed matrix of x. (from GLM_GTX_matx extension)
	
	template <int N, typename T> T determinantGTX(const detail::_xmatxGTX<N, T>& m);													//!< Returns the determinant of a 2 * 2 matrix. (from GLM_GTX_matx extension)
	template <int N, typename T> detail::_xmatxGTX<N, T> inverseTransposeGTX(const detail::_xmatxGTX<N, T> & m);                        //!< Compute the inverse of a transformation 4x4 matrix (From GLM_GTX_matx extension)

	template <int N, typename T> void columnGTX(detail::_xmatxGTX<N, T>& m, int ColIndex, const detail::_xvecxGTX<N, T>& v);            //!< Set a specific column to a matrix (From GLM_GTX_matx extension)
	template <int N, typename T> void rowGTX(detail::_xmatxGTX<N, T>& m, int RowIndex, const detail::_xvecxGTX<N, T>& v);               //!< Set a specific row to a matrix (From GLM_GTX_matx extension)

	template <int N, typename T> detail::_xvecxGTX<N, T> columnGTX(const detail::_xmatxGTX<N, T>& m, int ColIndex);                     //!< Get a specific column to a matrix (From GLM_GTX_matx extension)
	template <int N, typename T> detail::_xvecxGTX<N, T> rowGTX(const detail::_xmatxGTX<N, T>& m, int RowIndex);                        //!< Get a specific row to a matrix (From GLM_GTX_matx extension)

    namespace gtx
    {
		//! GLM_GTX_matx extension: - Work in progress - NxN matrix types.
        namespace matx
        {
	        // Matrix Functions
	        template <int N, typename T> inline detail::_xmatxGTX<N, T> matrixCompMult(const detail::_xmatxGTX<N, T>& x, const detail::_xmatxGTX<N, T>& y){return matrixCompMult(x, y);}    //!< Multiply matrix x by matrix y component-wise, i.e., result[i][j] is the scalar product of x[i][j] and y[i][j]. (from GLM_GTX_matx extension)
	        template <int N, typename T> inline detail::_xmatxGTX<N, T> outerProduct(const detail::_xvecxGTX<N, T>& c, const detail::_xvecxGTX<N, T>& r){return outerProductGTX(c, r);}     //!< Treats the first parameter c as a column vector and the second parameter r as a row vector and does a linear algebraic matrix multiply c * r. (from GLM_GTX_matx extension)
	        template <int N, typename T> inline detail::_xmatxGTX<N, T> transpose(const detail::_xmatxGTX<N, T>& x){return transposeGTX(x);}												//!< Returns the transposed matrix of x. (from GLM_GTX_matx extension)
        	
	        template <int N, typename T> inline T determinant(const detail::_xmatxGTX<N, T>& m){return determinantGTX(m);}															//!< Returns the determinant of a 2 * 2 matrix. (from GLM_GTX_matx extension)
	        template <int N, typename T> inline detail::_xmatxGTX<N, T> inverseTranspose(const detail::_xmatxGTX<N, T>& m){return inverseTransposeGTX(m);}                          //!< Compute the inverse of a transformation 4x4 matrix (From GLM_GTX_matx extension)

	        template <int N, typename T> inline void column(detail::_xmatxGTX<N, T>& m, int ColIndex, const detail::_xvecxGTX<N, T>& v){setColumnGTX(m, v);}                        //!< Set a specific column to a matrix (From GLM_GTX_matx extension)
	        template <int N, typename T> inline void row(detail::_xmatxGTX<N, T>& m, int RowIndex, const detail::_xvecxGTX<N, T>& v){setRowGTX(m, v);}                              //!< Set a specific row to a matrix (From GLM_GTX_matx extension)

	        template <int N, typename T> inline detail::_xvecxGTX<N, T> column(const detail::_xmatxGTX<N, T>& m, int ColIndex){return column(m, ColIndex);}                         //!< Get a specific column to a matrix (From GLM_GTX_matx extension)
	        template <int N, typename T> inline detail::_xvecxGTX<N, T> row(const detail::_xmatxGTX<N, T>& m, int RowIndex){return row(m, RowIndex);}                               //!< Get a specific row to a matrix (From GLM_GTX_matx extension)
        }
    }
}

#define GLM_GTX_matx namespace gtx::matx

#include "matx.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_matx;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_matx__
