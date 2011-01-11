///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2009-05-19
// Updated : 2009-05-19
// Licence : This source is under MIT License
// File    : glm/gtx/simd_mat4.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace detail
{
    inline fmat4x4SIMD::fmat4x4SIMD()
    {}

    inline fmat4x4SIMD::fmat4x4SIMD(float const & s)
    {
		this->Data[0] = fvec4SIMD(s, 0, 0, 0);
		this->Data[1] = fvec4SIMD(0, s, 0, 0);
		this->Data[2] = fvec4SIMD(0, 0, s, 0);
		this->Data[3] = fvec4SIMD(0, 0, 0, s);
    }

	inline fmat4x4SIMD::fmat4x4SIMD
	(
		float const & x0, float const & y0, float const & z0, float const & w0,
		float const & x1, float const & y1, float const & z1, float const & w1,
		float const & x2, float const & y2, float const & z2, float const & w2,
		float const & x3, float const & y3, float const & z3, float const & w3
	)
	{
		this->Data[0] = fvec4SIMD(x0, y0, z0, w0);
		this->Data[1] = fvec4SIMD(x1, y1, z1, w1);
		this->Data[2] = fvec4SIMD(x2, y2, z2, w2);
		this->Data[3] = fvec4SIMD(x3, y3, z3, w3);
	}

	inline fmat4x4SIMD::fmat4x4SIMD
	(
		fvec4SIMD const & v0,
		fvec4SIMD const & v1,
		fvec4SIMD const & v2,
		fvec4SIMD const & v3
	)
	{
		this->Data[0] = v0;
		this->Data[1] = v1;
		this->Data[2] = v2;
		this->Data[3] = v3;
	}

	inline fmat4x4SIMD::fmat4x4SIMD
	(
		tmat4x4<float> const & m
	)
	{
		this->Data[0] = fvec4SIMD(m[0]);
		this->Data[1] = fvec4SIMD(m[1]);
		this->Data[2] = fvec4SIMD(m[2]);
		this->Data[3] = fvec4SIMD(m[3]);
	}

	//////////////////////////////////////
	// Accesses

	inline fvec4SIMD & fmat4x4SIMD::operator[]
	(
		fmat4x4SIMD::size_type i
	)
	{
		assert(
			i >= fmat4x4SIMD::size_type(0) &&
			i < fmat4x4SIMD::col_size());

		return this->Data[i];
	}

	inline fvec4SIMD const & fmat4x4SIMD::operator[]
	(
		fmat4x4SIMD::size_type i
	) const
	{
		assert(
			i >= fmat4x4SIMD::size_type(0) &&
			i < fmat4x4SIMD::col_size());

		return this->Data[i];
	}

    //////////////////////////////////////////////////////////////
    // mat4 operators

    inline fmat4x4SIMD& fmat4x4SIMD::operator= 
	(
		fmat4x4SIMD const & m
	)
    {
		this->Data[0] = m[0];
		this->Data[1] = m[1];
		this->Data[2] = m[2];
		this->Data[3] = m[3];
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator+= 
	(
		fmat4x4SIMD const & m
	)
    {
		this->Data[0].Data = _mm_add_ps(this->Data[0].Data, m[0].Data);
		this->Data[1].Data = _mm_add_ps(this->Data[1].Data, m[1].Data);
		this->Data[2].Data = _mm_add_ps(this->Data[2].Data, m[2].Data);
		this->Data[3].Data = _mm_add_ps(this->Data[3].Data, m[3].Data);
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator-= 
	(
		fmat4x4SIMD const & m
	)
    {
		this->Data[0].Data = _mm_sub_ps(this->Data[0].Data, m[0].Data);
		this->Data[1].Data = _mm_sub_ps(this->Data[1].Data, m[1].Data);
		this->Data[2].Data = _mm_sub_ps(this->Data[2].Data, m[2].Data);
		this->Data[3].Data = _mm_sub_ps(this->Data[3].Data, m[3].Data);

        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator*= 
	(
		fmat4x4SIMD const & m
	)
    {
		sse_mul_ps(&this->Data[0].Data, &m.Data[0].Data, &this->Data[0].Data);
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator/= 
	(
		fmat4x4SIMD const & m
	)
    {
		__m128 Inv[4];
		sse_inverse_ps(&this->Data[0].Data, Inv);
		sse_mul_ps(&this->Data[0].Data, Inv, &this->Data[0].Data);
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator+= 
	(
		float const & s
	)
    {
		__m128 Operand = _mm_set_ps1(s);
		this->Data[0].Data = _mm_add_ps(this->Data[0].Data, Operand);
		this->Data[1].Data = _mm_add_ps(this->Data[1].Data, Operand);
		this->Data[2].Data = _mm_add_ps(this->Data[2].Data, Operand);
		this->Data[3].Data = _mm_add_ps(this->Data[3].Data, Operand);
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator-= 
	(
		float const & s
	)
    {
		__m128 Operand = _mm_set_ps1(s);
		this->Data[0].Data = _mm_sub_ps(this->Data[0].Data, Operand);
		this->Data[1].Data = _mm_sub_ps(this->Data[1].Data, Operand);
		this->Data[2].Data = _mm_sub_ps(this->Data[2].Data, Operand);
		this->Data[3].Data = _mm_sub_ps(this->Data[3].Data, Operand);
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator*= 
	(
		float const & s
	)
    {
		__m128 Operand = _mm_set_ps1(s);
		this->Data[0].Data = _mm_mul_ps(this->Data[0].Data, Operand);
		this->Data[1].Data = _mm_mul_ps(this->Data[1].Data, Operand);
		this->Data[2].Data = _mm_mul_ps(this->Data[2].Data, Operand);
		this->Data[3].Data = _mm_mul_ps(this->Data[3].Data, Operand);
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator/= 
	(
		float const & s
	)
    {
		__m128 Operand = _mm_div_ps(one, _mm_set_ps1(s));
		this->Data[0].Data = _mm_mul_ps(this->Data[0].Data, Operand);
		this->Data[1].Data = _mm_mul_ps(this->Data[1].Data, Operand);
		this->Data[2].Data = _mm_mul_ps(this->Data[2].Data, Operand);
		this->Data[3].Data = _mm_mul_ps(this->Data[3].Data, Operand);
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator++ ()
    {
		this->Data[0].Data = _mm_add_ps(this->Data[0].Data, one);
		this->Data[1].Data = _mm_add_ps(this->Data[1].Data, one);
		this->Data[2].Data = _mm_add_ps(this->Data[2].Data, one);
		this->Data[3].Data = _mm_add_ps(this->Data[3].Data, one);
        return *this;
    }

    inline fmat4x4SIMD & fmat4x4SIMD::operator-- ()
    {
		this->Data[0].Data = _mm_sub_ps(this->Data[0].Data, one);
		this->Data[1].Data = _mm_sub_ps(this->Data[1].Data, one);
		this->Data[2].Data = _mm_sub_ps(this->Data[2].Data, one);
		this->Data[3].Data = _mm_sub_ps(this->Data[3].Data, one);
        return *this;
    }

}//namespace detail

namespace gtx{
namespace simd_mat4
{
	inline detail::fmat4x4SIMD matrixCompMult
	(
		detail::fmat4x4SIMD const & x,
		detail::fmat4x4SIMD const & y
	)
	{
		//GLM_STATIC_ASSERT(0, "TODO");
	}

	inline detail::fmat4x4SIMD simd_transpose(detail::fmat4x4SIMD const & m)
	{
		detail::fmat4x4SIMD result;
		detail::sse_transpose_ps(&m[0].Data, &result[0].Data);
		return result;
	}

	inline float simd_determinant(detail::fmat4x4SIMD const & m)
	{
		//GLM_STATIC_ASSERT(0, "TODO");
	}

	inline detail::fmat4x4SIMD simd_inverse(detail::fmat4x4SIMD const & m)
	{
		detail::fmat4x4SIMD result;
		detail::sse_inverse_ps(&m[0].Data, &result[0].Data);
		return result;
	}
}//namespace simd_mat4
}//namespace gtx

}//namespace glm
