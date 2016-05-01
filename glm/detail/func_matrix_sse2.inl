#include "type_mat4x4.hpp"
#include "func_geometric.hpp"

namespace glm
{
	template <>
	GLM_FUNC_QUALIFIER tmat4x4<float, simd> inverse(tmat4x4<float, simd> const& m)
	{
		__m128 Fac0;
		{
			//	valType SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
			//	valType SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
			//	valType SubFactor06 = m[1][2] * m[3][3] - m[3][2] * m[1][3];
			//	valType SubFactor13 = m[1][2] * m[2][3] - m[2][2] * m[1][3];

			__m128 const Swp0a = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(3, 3, 3, 3));
			__m128 const Swp0b = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(2, 2, 2, 2));

			__m128 const Swp00 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(2, 2, 2, 2));
			__m128 const Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp03 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(3, 3, 3, 3));

			__m128 const Mul00 = _mm_mul_ps(Swp00, Swp01);
			__m128 const Mul01 = _mm_mul_ps(Swp02, Swp03);
			Fac0 = _mm_sub_ps(Mul00, Mul01);
		}

		__m128 Fac1;
		{
			//	valType SubFactor01 = m[2][1] * m[3][3] - m[3][1] * m[2][3];
			//	valType SubFactor01 = m[2][1] * m[3][3] - m[3][1] * m[2][3];
			//	valType SubFactor07 = m[1][1] * m[3][3] - m[3][1] * m[1][3];
			//	valType SubFactor14 = m[1][1] * m[2][3] - m[2][1] * m[1][3];

			__m128 const Swp0a = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(3, 3, 3, 3));
			__m128 const Swp0b = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(1, 1, 1, 1));

			__m128 const Swp00 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(1, 1, 1, 1));
			__m128 const Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp03 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(3, 3, 3, 3));

			__m128 const Mul00 = _mm_mul_ps(Swp00, Swp01);
			__m128 const Mul01 = _mm_mul_ps(Swp02, Swp03);
			Fac1 = _mm_sub_ps(Mul00, Mul01);
		}

		__m128 Fac2;
		{
			//	valType SubFactor02 = m[2][1] * m[3][2] - m[3][1] * m[2][2];
			//	valType SubFactor02 = m[2][1] * m[3][2] - m[3][1] * m[2][2];
			//	valType SubFactor08 = m[1][1] * m[3][2] - m[3][1] * m[1][2];
			//	valType SubFactor15 = m[1][1] * m[2][2] - m[2][1] * m[1][2];

			__m128 const Swp0a = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(2, 2, 2, 2));
			__m128 const Swp0b = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(1, 1, 1, 1));

			__m128 const Swp00 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(1, 1, 1, 1));
			__m128 const Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp03 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(2, 2, 2, 2));

			__m128 const Mul00 = _mm_mul_ps(Swp00, Swp01);
			__m128 const Mul01 = _mm_mul_ps(Swp02, Swp03);
			Fac2 = _mm_sub_ps(Mul00, Mul01);
		}

		__m128 Fac3;
		{
			//	valType SubFactor03 = m[2][0] * m[3][3] - m[3][0] * m[2][3];
			//	valType SubFactor03 = m[2][0] * m[3][3] - m[3][0] * m[2][3];
			//	valType SubFactor09 = m[1][0] * m[3][3] - m[3][0] * m[1][3];
			//	valType SubFactor16 = m[1][0] * m[2][3] - m[2][0] * m[1][3];

			__m128 const Swp0a = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(3, 3, 3, 3));
			__m128 const Swp0b = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(0, 0, 0, 0));

			__m128 const Swp00 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(0, 0, 0, 0));
			__m128 const Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp03 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(3, 3, 3, 3));

			__m128 const Mul00 = _mm_mul_ps(Swp00, Swp01);
			__m128 const Mul01 = _mm_mul_ps(Swp02, Swp03);
			Fac3 = _mm_sub_ps(Mul00, Mul01);
		}

		__m128 Fac4;
		{
			//	valType SubFactor04 = m[2][0] * m[3][2] - m[3][0] * m[2][2];
			//	valType SubFactor04 = m[2][0] * m[3][2] - m[3][0] * m[2][2];
			//	valType SubFactor10 = m[1][0] * m[3][2] - m[3][0] * m[1][2];
			//	valType SubFactor17 = m[1][0] * m[2][2] - m[2][0] * m[1][2];

			__m128 const Swp0a = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(2, 2, 2, 2));
			__m128 const Swp0b = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(0, 0, 0, 0));

			__m128 const Swp00 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(0, 0, 0, 0));
			__m128 const Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp03 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(2, 2, 2, 2));

			__m128 const Mul00 = _mm_mul_ps(Swp00, Swp01);
			__m128 const Mul01 = _mm_mul_ps(Swp02, Swp03);
			Fac4 = _mm_sub_ps(Mul00, Mul01);
		}

		__m128 Fac5;
		{
			//	valType SubFactor05 = m[2][0] * m[3][1] - m[3][0] * m[2][1];
			//	valType SubFactor05 = m[2][0] * m[3][1] - m[3][0] * m[2][1];
			//	valType SubFactor12 = m[1][0] * m[3][1] - m[3][0] * m[1][1];
			//	valType SubFactor18 = m[1][0] * m[2][1] - m[2][0] * m[1][1];

			__m128 const Swp0a = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(1, 1, 1, 1));
			__m128 const Swp0b = _mm_shuffle_ps(m[3].data, m[2].data, _MM_SHUFFLE(0, 0, 0, 0));

			__m128 const Swp00 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(0, 0, 0, 0));
			__m128 const Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
			__m128 const Swp03 = _mm_shuffle_ps(m[2].data, m[1].data, _MM_SHUFFLE(1, 1, 1, 1));

			__m128 const Mul00 = _mm_mul_ps(Swp00, Swp01);
			__m128 const Mul01 = _mm_mul_ps(Swp02, Swp03);
			Fac5 = _mm_sub_ps(Mul00, Mul01);
		}

		__m128 const SignA = _mm_set_ps( 1.0f,-1.0f, 1.0f,-1.0f);
		__m128 const SignB = _mm_set_ps(-1.0f, 1.0f,-1.0f, 1.0f);

		// m[1][0]
		// m[0][0]
		// m[0][0]
		// m[0][0]
		__m128 const Temp0 = _mm_shuffle_ps(m[1].data, m[0].data, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 const Vec0 = _mm_shuffle_ps(Temp0, Temp0, _MM_SHUFFLE(2, 2, 2, 0));

		// m[1][1]
		// m[0][1]
		// m[0][1]
		// m[0][1]
		__m128 const Temp1 = _mm_shuffle_ps(m[1].data, m[0].data, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 const Vec1 = _mm_shuffle_ps(Temp1, Temp1, _MM_SHUFFLE(2, 2, 2, 0));

		// m[1][2]
		// m[0][2]
		// m[0][2]
		// m[0][2]
		__m128 const Temp2 = _mm_shuffle_ps(m[1].data, m[0].data, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 const Vec2 = _mm_shuffle_ps(Temp2, Temp2, _MM_SHUFFLE(2, 2, 2, 0));

		// m[1][3]
		// m[0][3]
		// m[0][3]
		// m[0][3]
		__m128 const Temp3 = _mm_shuffle_ps(m[1].data, m[0].data, _MM_SHUFFLE(3, 3, 3, 3));
		__m128 const Vec3 = _mm_shuffle_ps(Temp3, Temp3, _MM_SHUFFLE(2, 2, 2, 0));

		// col0
		// + (Vec1[0] * Fac0[0] - Vec2[0] * Fac1[0] + Vec3[0] * Fac2[0]),
		// - (Vec1[1] * Fac0[1] - Vec2[1] * Fac1[1] + Vec3[1] * Fac2[1]),
		// + (Vec1[2] * Fac0[2] - Vec2[2] * Fac1[2] + Vec3[2] * Fac2[2]),
		// - (Vec1[3] * Fac0[3] - Vec2[3] * Fac1[3] + Vec3[3] * Fac2[3]),
		__m128 const Mul00 = _mm_mul_ps(Vec1, Fac0);
		__m128 const Mul01 = _mm_mul_ps(Vec2, Fac1);
		__m128 const Mul02 = _mm_mul_ps(Vec3, Fac2);
		__m128 const Sub00 = _mm_sub_ps(Mul00, Mul01);
		__m128 const Add00 = _mm_add_ps(Sub00, Mul02);
		__m128 const Inv0 = _mm_mul_ps(SignB, Add00);

		// col1
		// - (Vec0[0] * Fac0[0] - Vec2[0] * Fac3[0] + Vec3[0] * Fac4[0]),
		// + (Vec0[0] * Fac0[1] - Vec2[1] * Fac3[1] + Vec3[1] * Fac4[1]),
		// - (Vec0[0] * Fac0[2] - Vec2[2] * Fac3[2] + Vec3[2] * Fac4[2]),
		// + (Vec0[0] * Fac0[3] - Vec2[3] * Fac3[3] + Vec3[3] * Fac4[3]),
		__m128 const Mul03 = _mm_mul_ps(Vec0, Fac0);
		__m128 const Mul04 = _mm_mul_ps(Vec2, Fac3);
		__m128 const Mul05 = _mm_mul_ps(Vec3, Fac4);
		__m128 const Sub01 = _mm_sub_ps(Mul03, Mul04);
		__m128 const Add01 = _mm_add_ps(Sub01, Mul05);
		__m128 const Inv1 = _mm_mul_ps(SignA, Add01);

		// col2
		// + (Vec0[0] * Fac1[0] - Vec1[0] * Fac3[0] + Vec3[0] * Fac5[0]),
		// - (Vec0[0] * Fac1[1] - Vec1[1] * Fac3[1] + Vec3[1] * Fac5[1]),
		// + (Vec0[0] * Fac1[2] - Vec1[2] * Fac3[2] + Vec3[2] * Fac5[2]),
		// - (Vec0[0] * Fac1[3] - Vec1[3] * Fac3[3] + Vec3[3] * Fac5[3]),
		__m128 const Mul06 = _mm_mul_ps(Vec0, Fac1);
		__m128 const Mul07 = _mm_mul_ps(Vec1, Fac3);
		__m128 const Mul08 = _mm_mul_ps(Vec3, Fac5);
		__m128 const Sub02 = _mm_sub_ps(Mul06, Mul07);
		__m128 const Add02 = _mm_add_ps(Sub02, Mul08);
		__m128 const Inv2 = _mm_mul_ps(SignB, Add02);

		// col3
		// - (Vec1[0] * Fac2[0] - Vec1[0] * Fac4[0] + Vec2[0] * Fac5[0]),
		// + (Vec1[0] * Fac2[1] - Vec1[1] * Fac4[1] + Vec2[1] * Fac5[1]),
		// - (Vec1[0] * Fac2[2] - Vec1[2] * Fac4[2] + Vec2[2] * Fac5[2]),
		// + (Vec1[0] * Fac2[3] - Vec1[3] * Fac4[3] + Vec2[3] * Fac5[3]));
		__m128 const Mul09 = _mm_mul_ps(Vec0, Fac2);
		__m128 const Mul10 = _mm_mul_ps(Vec1, Fac4);
		__m128 const Mul11 = _mm_mul_ps(Vec2, Fac5);
		__m128 const Sub03 = _mm_sub_ps(Mul09, Mul10);
		__m128 const Add03 = _mm_add_ps(Sub03, Mul11);
		__m128 const Inv3 = _mm_mul_ps(SignA, Add03);

		__m128 const Row0 = _mm_shuffle_ps(Inv0, Inv1, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 const Row1 = _mm_shuffle_ps(Inv2, Inv3, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 const Row2 = _mm_shuffle_ps(Row0, Row1, _MM_SHUFFLE(2, 0, 2, 0));

		//	valType Determinant = m[0][0] * Inverse[0][0] 
		//						+ m[0][1] * Inverse[1][0] 
		//						+ m[0][2] * Inverse[2][0] 
		//						+ m[0][3] * Inverse[3][0];
		__m128 const Det0 = detail::dot_ps(m[0].data, Row2);
		__m128 const Rcp0 = _mm_rcp_ps(Det0);
		//__m128 Rcp0 = _mm_div_ps(one, Det0);
		//	Inverse /= Determinant;

		tmat4x4<float, simd> Result(uninitialize);
		Result[0].data = _mm_mul_ps(Inv0, Rcp0);
		Result[1].data = _mm_mul_ps(Inv1, Rcp0);
		Result[2].data = _mm_mul_ps(Inv2, Rcp0);
		Result[3].data = _mm_mul_ps(Inv3, Rcp0);
		return Result;
	}
}//namespace glm
