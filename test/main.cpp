///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-01-12
// Updated : 2006-12-03
// Licence : This source is under MIT License
// File    : main.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "precompiled.hpp"

#include <glm/gtc/matrix_operation.hpp>
#include <glm/gtx/simd_vec4.hpp>

#include <glm/core/intrinsic_common.hpp>
#include <glm/core/intrinsic_exponential.hpp>
#include <glm/core/intrinsic_geometric.hpp>
#include <glm/core/intrinsic_matrix.hpp>
#include <glm/core/intrinsic_trigonometric.hpp>
#include <glm/core/intrinsic_vector_relational.hpp>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/matrix_projection.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/bit.hpp>
#include <glm/gtx/inverse.hpp>
#include <glm/gtx/inverse_transpose.hpp>
#include <glm/gtx/fast_square_root.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtx/intersect.hpp>
#include <glm/gtx/matrix_operation.hpp>

#include <glm/gtx/integer.hpp>
#include <glm/gtx/random.hpp>
#include <glm/gtx/color_cast.hpp>
#include <glm/gtx/transform2.hpp>
#include <glm/gtx/gradient_paint.hpp>
#include <glm/gtx/perpendicular.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtx/rotate_vector.hpp>

#include "core.hpp"
#include "img.hpp"
#include "gtc.hpp"
#include "gtx.hpp"

#include <vector>

//namespace glm
//{
 //   using GLM_GTX_double_float;
 //   using GLM_GTX_inverse;
 //   using GLM_GTX_integer;
 //   using GLM_GTX_unsigned_int;
	//using GLM_GTX_bit;
//	using GLM_GTX_fast_square_root;
//	using GLM_GTX_number_precision;
//	using GLM_GTX_color_cast;
//	using GLM_GTX_quaternion;
//	using GLM_GTX_inverse_transpose;
//	using GLM_GTX_transform;
//	using GLM_GTX_transform2;
//	using GLM_GTX_intersect;
//	using GLM_GTX_random;
//	using GLM_GTX_gradient_paint;
//	using GLM_GTX_perpendicular;
	//using GLM_GTX_compatibility;
	//using GLM_GTX_quaternion;
	//using GLM_GTX_string_cast;
	//using GLM_GTX_fast_square_root;
	//using GLM_GTX_half_float;
	//using GLM_GTX_vector_angle;
	//using GLM_GTX_matrix_projection;
//}

unsigned int GetCpuCycle()  
{  
	unsigned int LowWord = 0;  
	unsigned int HighWord = 0;  
//	_asm
//	{
//		cpuid
//		// Insert Real Time Stamp Counter opcodes
//		_emit 0x0F
//		_emit 0x31
//		mov HighWord, edx
//		mov LowWord, eax
//	}
//	return ((__int64)(HighWord) << 32) + LowWord;
        return 0;
} 


//namespace wip
//{
//	inline glm::detail::fvec4SIMD rcp(glm::detail::fvec4SIMD const & v)
//	{
//		return glm::detail::fvec4SIMD(_mm_rcp_ps(v.Data));
//	}
//
//	inline glm::detail::fvec4SIMD sqrt(glm::detail::fvec4SIMD const & v)
//	{
//		return glm::detail::fvec4SIMD(_mm_sqrt_ps(v.Data));
//	}
//
//	inline glm::detail::fvec4SIMD inversesqrt(glm::detail::fvec4SIMD const & v)
//	{
//		return glm::detail::fvec4SIMD(_mm_rsqrt_ps(v.Data));
//	}
//
//	inline glm::detail::fvec4SIMD min(glm::detail::fvec4SIMD const & v1, glm::detail::fvec4SIMD const & v2)
//	{
//		return glm::detail::fvec4SIMD(_mm_min_ps(v1.Data, v2.Data));
//	}
//
//	inline glm::detail::fvec4SIMD max(glm::detail::fvec4SIMD const & v1, glm::detail::fvec4SIMD const & v2)
//	{
//		return glm::detail::fvec4SIMD(_mm_max_ps(v1.Data, v2.Data));
//	}
//}//namespace wip

void test_simd()
{
	glm::detail::fvec4SIMD v1(1.0f, 2.0f, 3.0f, 4.0f);
	glm::detail::fvec4SIMD v2(5.0f, 6.0f, 7.0f, 8.0f);

	bool end = true;
}

namespace a
{
	namespace b{}
}

namespace c = a::b;

//#include <glm/ext/virtrev/gl.hpp>

#include <cstdio>
#include <cstdlib>
#include <ctime>
//#include <windows.hpp>

//#include <boost/static_assert.hpp>

#ifdef min
#undef min
#endif

#ifdef max
#undef max
#endif

//#include "test/sse_vec4.h"
//#include "test/sse_mat4.h"

/*
inline float fastExp0(float x)
{
    return 1.0f + x + (x * x * 0.5f) + (x * x * x * 0.1666666667f) + (x * x * x * x * 0.041666667f) + (x * x * x * x * x * 0.008333333333f) + (x * x * x * x * x * x * 0.00138888888888f) + (x * x * x * x * x * x * x * 0.000198412698f) + (x * x * x * x * x * x * x * x * 0.0000248015873f);
}

inline float fastExp1(float x)
{
    float x2 = x * x;
    float x3 = x2 * x;
    float x4 = x3 * x;
    float x5 = x4 * x;
    float x6 = x5 * x;
    float x7 = x6 * x;
    float x8 = x7 * x;
    return 1.0f + x + (x2 * 0.5f) + (x3 * 0.1666666667f) + (x4 * 0.041666667f) + (x5 * 0.008333333333f) + (x6 * 0.00138888888888f) + (x7 * 0.000198412698f) + (x8 * 0.0000248015873f);
}

inline float fastExp2(float x)
{
    float x2 = x * x;
    float x3 = x2 * x;
    float x4 = x3 * x;
    float x5 = x4 * x;
    return 1.0f + x + (x2 * 0.5f) + (x3 * 0.1666666667f) + (x4 * 0.041666667f) + (x5 * 0.008333333333f);
}

inline float fastExp3(float x)
{
    return 1.0f + x * (1.0f + x * 0.5f * (1.0f + x * 0.3333333333f * (1.0f + x * 0.25 * (1.0f + x * 0.2f))));
}

inline float fastExp4(float x)
{
    if(x >= 0.0f && x <= 1.0f)
    {
        float x2 = x * x;
        float x3 = x2 * x;
        float x4 = x3 * x;
        float x5 = x4 * x;
        return 1.0f + x + (x2 * 0.5f) + (x3 * 0.1666666667f) + (x4 * 0.041666667f) + (x5 * 0.008333333333f);
    }
    else
    {
        float e = 2.718281828f;
        float IntegerPart = glm::floor(x);
        float FloatPart = x - IntegerPart;
        float z = e;

        for(int i = 1; i < int(IntegerPart); ++i)
            z *= e;

        float x2 = FloatPart * FloatPart;
        float x3 = x2 * FloatPart;
        float x4 = x3 * FloatPart;
        float x5 = x4 * FloatPart;
        return z * (1.0f + FloatPart + (x2 * 0.5f) + (x3 * 0.1666666667f) + (x4 * 0.041666667f) + (x5 * 0.008333333333f));
    }
}

__forceinline float fastExp5(float x)
{
    const float e = 2.718281828f;
    const float IntegerPart = glm::floor(x);
    const float FloatPart = x - IntegerPart;
    float z = 1.f;

    //for(int i = 0; i < int(IntegerPart); ++i)
    //    z *= e;

    const float x2 = FloatPart * FloatPart;
    const float x3 = x2 * FloatPart;
    const float x4 = x3 * FloatPart;
    const float x5 = x4 * FloatPart;
    return z * (1.0f + FloatPart + (x2 * 0.5f) + (x3 * 0.1666666667f) + (x4 * 0.041666667f) + (x5 * 0.008333333333f));
}

inline float fastLn0(float x)
{
    float y1 = (x - 1.0f) / (x + 1.0f);
    float y2 = y1 * y1;
    float y4 = y2 * y2;
    float y6 = y4 * y2;
    float y8 = y4 * y4;
    return 2.0f * y1 * (1.0f + y2 * 0.3333333333f + y4 * 0.2f + y6 * 0.1428571429f);// + y8 * 0.1111111111f);
}

inline float fastLn1(float x)
{
    float y1 = (x - 1.0f) / (x + 1.0f);
    float y2 = y1 * y1;
    return 2.0f * y1 * (1.0f + y2 * (0.3333333333f + y2 * (0.2f + y2 * 0.1428571429f)));
}
*/

using namespace std;
using namespace glm;

void subtitiution()
{
	//--------------------------------------------------------------------
	//AX=B
	mat4 L(0.f);
	mat4 U(0.f);
	mat4 A = mat4(
		vec4(4.f),
		vec4(4.f),
		vec4(4.f),
		vec4(4.f));

	for(int i=0;i < 4;i++)
	for(int j=0;j < 4;j++)
	{
		if(i>j)
			U[i][j]=0;
		else if(i==j)
			L[i][j]=1;
		else
			L[i][j]=0;
	}

	printf("A:\n");
	for(int j = 0; j < 4; ++j)
	{
		printf("(");
		for(int i = 0; i < 4; ++i)
			printf("%f ", A[j][i]);
		printf(")\n");
	}
	printf("\n");

	//Decomposition of A into L and U
	for(int i = 0; i < 4; ++i)
	for(int j = 0; j < 4; ++j)
	{
		float Sum = 0.f;
		if(i <= j)
		{
			for(int k = 0; k < 4; ++k)
				if(k != i)
					Sum += L[i][k] * U[k][j];
			U[i][j] = (A[i][j] - Sum);// / U[j][j];
		}
		else
		{
			for(int k = 0; k < 4; k++)
				if(k != j)
					Sum += L[i][k] * U[k][j];
			L[i][j] = (A[i][j] - Sum) / U[j][j];
		}
	}

	printf("L:\n");
	for(int j = 0; j < 4; ++j)
	{
		printf("(");
		for(int i = 0; i < 4; ++i)
			printf("%f ", L[j][i]);
		printf(")\n");
	}
	printf("\n");

	printf("U:\n");
	for(int j = 0; j < 4; ++j)
	{
		printf("(");
		for(int i = 0; i < 4; ++i)
			printf("%f ", U[j][i]);
		printf(")\n");
	}
	printf("\n");

	system("pause");
}

void LUDecompsition(
    const detail::tmat4x4<float>& m,
    detail::tmat4x4<float>& l,
    detail::tmat4x4<float>& u)
{
    for(int i = 0; i < 4; ++i)
        l[i][i] = 1.f;

    for(int j = 0; j < 4; ++j)
    {
        //for(int i = 0; i <= j; ++i)
        for(int i = 0; i < j; ++i)
        {
            u[j][i] = m[j][i];
            for(int k = 0; k < i - 1; ++k)
            //for(int k = 0; k < i; ++k)
                u[j][i] -= l[k][i] * u[j][k];
        }
        //for(int i = j + 1; i < 4; ++i)
        for(int i = j; i < 4; ++i)
        {
            l[j][i] = m[j][i];
            for(int k = 0; k < j - 1; ++k)
            //for(int k = 0; k < j; ++k)
                l[j][i] -= l[k][i] * u[j][k];
        }
    }
}

/*
ivec3& operator+=(const ivec3& v, const int s)
{
	ivec3 Result = v;
	Result.x &= s;
	Result.y &= s;
	Result.z &= s;
	return Result;
}
*/

void g()
{
	mat4 m = glm::inverse(mat4(4.0f));
}

void test_gtx_bit()
{
	int Number1 = 76;
	int NumberA = glm::highestBit(Number1);
	int NumberB = glm::highestBitValue(Number1);
	bool NumberC = glm::isPowerOfTwo(Number1);
	int NumberD = glm::powerOfTwoAbove(Number1);
	int NumberE = glm::powerOfTwoBelow(Number1);
	int NumberF = glm::powerOfTwoNearest(Number1);

	int Number2 = 256;
	int NumberG = glm::highestBit(Number2);
	int NumberH = glm::highestBitValue(Number2);
	bool NumberI = glm::isPowerOfTwo(Number2);
	int NumberJ = glm::powerOfTwoAbove(Number2);
	int NumberK = glm::powerOfTwoBelow(Number2);
	int NumberL = glm::powerOfTwoNearest(Number2);

	int NumberZ = 0;
}
/*
struct gni
{
    void constructor(short i)
    {
        data = i;
    }

    gni& assignement(const gni& i)
    {
        data = i.data;
        return *this;
    }

    short data;
}

union pouet
{
    pouet(detail::thalf x, detail::thalf y, detail::thalf z) :
        x(x), y(y), z(z)
    {}

    struct{detail::thalf x, y, z;};
    struct{detail::thalf r, g, b;};
    struct{detail::thalf s, t, q;};
};
*/

//#include GLM_EXTENSION(GLM_GTX_compatibility, glm::required);

vec4 mix_fpu(const vec4& x, const vec4& y, const vec4& a)
{
	return x * (vec4(1) - a) + y * a;
}

/*
namespace glm
{
	template<class T, int N>
	struct traits
	{
		typedef T value_type;
		typedef T* pointer;
		typedef T& reference;
		typedef std::size_t size_type;
		static const size_type value_size;
	};

	template<class T, int N>
	static const traits::size_type traits::value_size = N;

	template<class Type>
	struct traits<Type*>
	{
		typedef Type value_type;
		typedef Type* pointer;
		typedef Type& reference;
	};

	template<class Type>
	struct traits<const Type*>
	{
		typedef Type value_type;
		typedef const Type* pointer;
		typedef const Type& reference;
	};
}
*/

vec2 reference_swizzle(const vec3& a, const vec3& b)
{
	return vec2(0.0f);
}

//void test_random()
//{
//	float Value = gaussRand1GTX(1.0f, 2.0f);
//	detail::_xvecxGTX<8, float> vecN;
//	vecN = compRandGTX(vecN, vecN);
//}

void test_matrix()
{
//	glm::mat4 Transform = glm::translateGTX(
//		glm::rotateGTX(45.f, glm::core::func_geometric::normalize(glm::vec3(1))), glm::vec3(1, 2, 3));
	glm::vec3 Normalized = glm::normalize(glm::vec3(1));

	glm::mat4 Transform = glm::gtc::matrix_transform::translate(
		glm::gtc::matrix_transform::rotate(glm::mat4(1.0f), 45.f, Normalized), 
		glm::vec3(1, 2, 3));
	glm::mat4 TransformA = glm::inverse(Transform);
	glm::mat4 TransformB = glm::affineInverse(Transform);
	glm::mat4 End;
}

void test_vec4()
{
	{
		glm::vec4 v(1.0);
		glm::vec4 const* const pv = &v;
		glm::vec4 const& rv = v;

		//float const* pointer1 = &v;
		//float const* pointer2 = v;
		//float const* pointer3 = pv;
		//float const* pointer4 = &rv;
		//glm::vec4* p = &v;
		//glm::vec4 v6 = v + long(3);

		float const* pointer1 = &v[0];
	}
	//{
	//	glm::mat4 m;
	//	glm::mat4 const* const pm = &m;
	//	glm::mat4 const& rm = m;

	//	float const* pointer1 = &m;
	//	float const* pointer2 = m;
	//	float const* pointer3 = pm;
	//	float const* pointer4 = &rm;
	//}
}

void test_mat4(const glm::mat4& m)
{
	//glm::mat4 copy = m;
	//glLoadMatrix(GL_MODELVIEW, copy);
}

void test_string_cast()
{
	printf("Test string cast: %s\n", glm::string(glm::vec4(1, 2, 3, 4)).c_str());
}

void test_isPowerOfTwo()
{
	bool resultA = glm::isPowerOfTwo(unsigned(512));
	bool resultB = glm::isPowerOfTwo(unsigned(513));
	bool end = true;
}

//#include <glm/glw.hpp>
//
//void test_opengl_wrapper()
//{
//	glVertex(glm::vec3(1.0f));
//}

void fast_inverse()
{
	float one = fastInverseSqrt(1.0f);
	float two = fastInverseSqrt(2.0f);
	float result = 1.0f;
}

//void test_desk()
//{
//	typedef glm::detail::desc<glm::vec4>::value_type vec4_type;
//	vec4_type Test(1.0f);
//		
//	glm::detail::desc<glm::vec4>::size_type Size = glm::detail::desc<glm::vec4>::value_size();
//
//	int end = 0;
//}

//template <typename genType>
//genType TemplateFuncMin(const genType& Type1, const genType& Type2)
//{
//	genType Result;
//	for
//	(
//		glm::detail::desc<glm::vec4>::size_type i = glm::detail::desc<glm::vec4>::size_type(0);
//		i < glm::detail::desc<glm::vec4>::value_size;
//		++i
//	)
//	{
//		Result[i] = Type1[i] < Type2[i] ? Type1[i] : Type2[i];
//	}
//		
//	return Result;
//}
//
//void test_genType()
//{
//	glm::vec1 Result1 = TemplateFuncMin(glm::vec1(1), glm::vec1(2));
////	float ResultF = TemplateFuncMin(1.f, 2.f);
//	vec4 Result4 = TemplateFuncMin(glm::vec4(1), glm::vec4(2));
//
//	bool end = true;
//}

namespace test_ac
{
	struct C1
	{
		C1() :
			data(76)
		{}

		int data;
	};

	struct C2
	{
		C2(){}
		C2(const C1& c1) :
			data(c1.data)
		{}

		int data;
	};

	C2 operator+ (const C2& a, const C2& b)
	{
		C2 result;
		result.data = a.data + b.data;
		return result;
	}

}

void test_auto_cast()
{
	test_ac::C1 c1;
	test_ac::C2 c2 = c1;
	test_ac::C2 c3 = c2 + c1;

//
//	glm::vec3 Data = glm::vec2(1.f)._yxy();
}

template <typename genType> 
genType abs(const genType& v)
{
	genType Result;
	for(typename genType::size_type i = 0; i < genType::size_value; ++i)
		Result[i] = Result[i] < typename genType::value_type(0) ? -Result[i] : Result[i];
	return Result;
}

void test_quaternion()
{
	glm::vec3 tan(1.0f);
	glm::quat q;
	tan = glm::cross(q, tan);
}

void test_swizzle()
{
	glm::vec2 a(1, 2);
	glm::vec4 b = a.swizzle(X, Y, X, Y);
	glm::vec4 c(0);
	c.swizzle(X, Y, Z, W) = b.swizzle(X, Y, Z, W);

	//a.xyz = b.xyz;

	bool end = true;
}

void test_angle()
{
	//float angle1 = glm::angle(0.1f, 0.2f);
	float angle2 = glm::angle(glm::vec2(0.1f), glm::vec2(0.2f));

	return;
}

void test_half()
{
	hmat2 hmatrix1(half(1.f));
	hmat2 hmatrix2(half(2.f));
	hmat2 hmatrix3 = hmatrix1 + hmatrix2;
	half hscalar = hmatrix3[0].x;
	double fscalar = hscalar;

	hvec2::size_type Size = hvec2::value_size();

	return;
}

template <typename valType, profile proType>
valType func_profile(glm::detail::tvec3<valType> const & x, valType y)
{
	return glm::dot(x, glm::detail::tvec3<valType>(y));
}

template <>
float func_profile<float, fast>(glm::vec3 const & x, float y)
{
	return glm::dot(x, glm::vec3(y));
}

void test_profile()
{
	

}

//template <typename valType, int C, int R>
//class TestType
//{
//public:
//	TestType(valType const & x);
//};
//
//template <typename valType, int C, int R>
//TestType<valType, C, R>::TestType(valType const & x)
//{}
//
//template <typename valType>
//class TestType<valType, 4, 1>
//{
//public:
//	TestType(valType const & x);
//};
//
//template <typename valType>
//TestType<valType, 4, 1>::TestType(valType const & x)
//{}
//
//typedef TestType<float, 4, 1> _vec4;
//
//void test_type()
//{
//	_vec4 v(1.0);
//}

void test_fast_inverse()
{
	printf("fastInvSqrt(1.0f) : %f\n", fastInverseSqrt(1.0f));
	printf("fastInvSqrt(1.0f) : %f\n", inversesqrt(1.0f));
	printf("fastInvSqrt(76.0f) : %f\n", fastInverseSqrt(76.f));
	printf("fastInvSqrt(76.0f) : %f\n", inversesqrt(76.f));
	printf("fastInvSqrt(0.01f) : %f\n", fastInverseSqrt(0.01f));
	printf("fastInvSqrt(0.01f) : %f\n", inversesqrt(0.01f));
}

namespace ns_hint
{
	struct hint
	{};

	struct see : public hint
	{};

	struct see2 : public see
	{};

	template <typename vecType>
	vecType func(vecType const & v, hint)
	{
		return v * v;
	}

	template <typename vecType>
	vecType func(vecType const & v, see2)
	{
		return v * v;
	}

	template <typename valType, typename Hint = hint>
	struct vec4
	{
		vec4()
		{
			int i = 0;
		}

		valType data;
	};

	template <typename valType>
	struct vec4<valType, see2>
	{
		vec4()
		{
			int i = 0;
		}

		valType data;
	};

	//enum hint
	//{
	//	fast,
	//	nice,
	//	see,
	//	see2,
	//	see3,
	//	see4
	//};

	//template <typename vecType, hint Hint = see2>
	//vecType func(vecType const & v);

	//template <hint Hint = see2>
	//struct functor
	//{
	//	template <typename vecType>
	//	vecType operator() (vecType const & v) const
	//	{
	//		return v * v;
	//	}
	//};
}

void test_hint()
{
	glm::vec3 v1 = glm::vec3(2.0f);
	glm::vec3 v2 = ns_hint::func(v1, ns_hint::see());
//	ns_hint::vec4 v3;
//	ns_hint::vec4<see2> v4;
	//glm::vec3 v2 = ns_hint::functor<ns_hint::see2>()(v1);
	//glm::vec3 v2 = hint::func<glm::vec3>(v1);
}

void test_const_call
(
	glm::mat4 const & m, 
	glm::vec4 const & v
)
{
	float const & Value = m[0][0];
	glm::vec4 const & Vector = m[0];
	float const & VecRef = v[0];

	float const * const ValuePtr = &m[0][0];
	glm::vec4 const * const VectorPtr = &m[0];
	float const * VecPtr = &v[0];
}

void test_const()
{
	test_const_call(
		glm::mat4(1.0), 
		glm::vec4(1.0));
}

void test_transform()
{
	glm::vec2 QMin(-1024,+1024);
	//glm::vec2 QMax(+1024,-1024);
	glm::vec2 QMax(-1024 + 640, 1024);

	std::size_t const ValueSize = 6;
	glm::vec3 ValueOut[ValueSize];
	glm::vec3 ValueData[ValueSize];
	ValueData[0] = glm::vec3(QMin.x, QMin.y, 1);//(0, 0)
	ValueData[1] = glm::vec3(QMax.x, QMin.y, 1);//(1, 0)
	ValueData[2] = glm::vec3(QMax.x, QMax.y, 1);//(1, 1)
	ValueData[3] = glm::vec3(QMin.x, QMax.y, 1);//(0, 1)
	ValueData[4] = glm::vec3(QMin.x, QMax.y / 4.f, 1);//(0, 0.25f)
	ValueData[5] = glm::vec3(QMin.x / 4.f, QMax.y, 1);//(0.25f, 0.25f)

	glm::mat3 Q2Norm(1.0f);
	Q2Norm[0] = glm::vec3(
		1.0f / (QMax.x - QMin.x), 
		0.0f, 
		0.0f);
	Q2Norm[1] = glm::vec3(
		0.0f, 
		1.0f / (QMax.y - QMin.y), 
		0.0f);
	Q2Norm[2] = glm::vec3(
		- QMin.x / (QMax.x - QMin.x), 
		- QMin.y / (QMax.y - QMin.y), 
		1.0f);

	glm::vec2 FBMin(0, 0);
	glm::vec2 FBMax(640, 480);
	glm::mat3 Norm2FB(1.0f);
	Norm2FB[0] = glm::vec3(FBMax.x - FBMin.x, 0, 0);
	Norm2FB[1] = glm::vec3(0, FBMax.y - FBMin.y, 0);
	Norm2FB[2] = glm::vec3(0, 0, 1);

	for(std::size_t i = 0; i < ValueSize; ++i)
		ValueOut[i] = Norm2FB * Q2Norm * ValueData[i];

	bool End = true;
}

//namespace 
//{
//	template <typename valType>
//	valType radialGradient(
//		glm::detail::tvec2<valType> const & Center,
//		valType const & Radius,
//		glm::detail::tvec2<valType> const & Focal,
//		glm::detail::tvec2<valType> const & Position)
//	{
//		glm::detail::tvec2<valType> F = Focal - Center;
//		glm::detail::tvec2<valType> D = Position - Focal;
//
//		valType Numerator = (D.x * F.x + D.y * F.y) + glm::sqrt((Radius * Radius) * (D.x * D.x + D.y * D.y) - (D.x * F.y - D.y * F.x) * (D.x * F.y - D.y * F.x));
//		valType Denominator = (Radius * Radius) - (F.x * F.x + F.y * F.y);
//		return Numerator / Denominator;
//	}
//}

void test_radial()
{
	glm::vec2 Center(0);
	float Radius = 1.0f;
	glm::vec2 Focal(0);
	glm::vec2 PositionA(0);
	glm::vec2 PositionB(0, 1);
	glm::vec2 PositionC(1, 0);
	glm::vec2 PositionD(0.5f, 0.0f);

	float GradA = glm::radialGradient(Center, Radius, Focal, PositionA);
	float GradB = glm::radialGradient(Center, Radius, Focal, PositionB);
	float GradC = glm::radialGradient(Center, Radius, Focal, PositionC);
	float GradD = glm::radialGradient(Center, Radius, Focal, PositionD);

	bool End = true;
}

void test_quat()
{
	glm::quat q1(1.0f, glm::vec3(0));
	float Roll = glm::roll(q1);
}
//
//void _mm_add_ps(__m128 in1[4], __m128 in2[4], __m128 out[4])
//{
//	{
//		out[0] = _mm_add_ps(in1[0], in2[0]);
//		out[1] = _mm_add_ps(in1[1], in2[1]);
//		out[2] = _mm_add_ps(in1[2], in2[2]);
//		out[3] = _mm_add_ps(in1[3], in2[3]);
//	}
//}
//
//void _mm_sub_ps(__m128 in1[4], __m128 in2[4], __m128 out[4])
//{
//	{
//		out[0] = _mm_sub_ps(in1[0], in2[0]);
//		out[1] = _mm_sub_ps(in1[1], in2[1]);
//		out[2] = _mm_sub_ps(in1[2], in2[2]);
//		out[3] = _mm_sub_ps(in1[3], in2[3]);
//	}
//}
//
//inline __m128 _mm_mul_ps(__m128 m[4], __m128 v)
//{
//	__m128 v0 = _mm_shuffle_ps(v, v, _MM_SHUFFLE(0, 0, 0, 0));
//	__m128 v1 = _mm_shuffle_ps(v, v, _MM_SHUFFLE(1, 1, 1, 1));
//	__m128 v2 = _mm_shuffle_ps(v, v, _MM_SHUFFLE(2, 2, 2, 2));
//	__m128 v3 = _mm_shuffle_ps(v, v, _MM_SHUFFLE(3, 3, 3, 3));
//
//	__m128 m0 = _mm_mul_ps(m[0], v0);
//	__m128 m1 = _mm_mul_ps(m[1], v1);
//	__m128 m2 = _mm_mul_ps(m[2], v2);
//	__m128 m3 = _mm_mul_ps(m[3], v3);
//
//	__m128 a0 = _mm_add_ps(m0, m1);
//	__m128 a1 = _mm_add_ps(m2, m3);
//	__m128 a2 = _mm_add_ps(a0, a1);
//
//	return a2;
//}
//
//inline __m128 _mm_mul_ps(__m128 v, __m128 m[4])
//{
//	__m128 i0 = m[0];
//	__m128 i1 = m[1];
//	__m128 i2 = m[2];
//	__m128 i3 = m[3];
//
//	__m128 m0 = _mm_mul_ps(v, i0);
//	__m128 m1 = _mm_mul_ps(v, i1);
//	__m128 m2 = _mm_mul_ps(v, i2);
//	__m128 m3 = _mm_mul_ps(v, i3);
//
//	__m128 u0 = _mm_unpacklo_ps(m0, m1);
//	__m128 u1 = _mm_unpackhi_ps(m0, m1);
//	__m128 a0 = _mm_add_ps(u0, u1);
//
//	__m128 u2 = _mm_unpacklo_ps(m2, m3);
//	__m128 u3 = _mm_unpackhi_ps(m2, m3);
//	__m128 a1 = _mm_add_ps(u2, u3);
//
//	__m128 f0 = _mm_movelh_ps(a0, a1);
//	__m128 f1 = _mm_movehl_ps(a1, a0);
//	__m128 f2 = _mm_add_ps(f0, f1);
//
//	return f2;
//}
//
//inline void _mm_mul_ps(__m128 in1[4], __m128 in2[4], __m128 out[4])
//{
//	glm::uint64 TimeStart = GetCpuCycle();
//
//	{
//		__m128 e0 = _mm_shuffle_ps(in2[0], in2[0], _MM_SHUFFLE(0, 0, 0, 0));
//		__m128 e1 = _mm_shuffle_ps(in2[0], in2[0], _MM_SHUFFLE(1, 1, 1, 1));
//		__m128 e2 = _mm_shuffle_ps(in2[0], in2[0], _MM_SHUFFLE(2, 2, 2, 2));
//		__m128 e3 = _mm_shuffle_ps(in2[0], in2[0], _MM_SHUFFLE(3, 3, 3, 3));
//
//		__m128 m0 = _mm_mul_ps(in1[0], e0);
//		__m128 m1 = _mm_mul_ps(in1[1], e1);
//		__m128 m2 = _mm_mul_ps(in1[2], e2);
//		__m128 m3 = _mm_mul_ps(in1[3], e3);
//
//		__m128 a0 = _mm_add_ps(m0, m1);
//		__m128 a1 = _mm_add_ps(m2, m3);
//		__m128 a2 = _mm_add_ps(a0, a1);
//
//		out[0] = a2;
//	}
//
//	{
//		__m128 e0 = _mm_shuffle_ps(in2[1], in2[1], _MM_SHUFFLE(0, 0, 0, 0));
//		__m128 e1 = _mm_shuffle_ps(in2[1], in2[1], _MM_SHUFFLE(1, 1, 1, 1));
//		__m128 e2 = _mm_shuffle_ps(in2[1], in2[1], _MM_SHUFFLE(2, 2, 2, 2));
//		__m128 e3 = _mm_shuffle_ps(in2[1], in2[1], _MM_SHUFFLE(3, 3, 3, 3));
//
//		__m128 m0 = _mm_mul_ps(in1[0], e0);
//		__m128 m1 = _mm_mul_ps(in1[1], e1);
//		__m128 m2 = _mm_mul_ps(in1[2], e2);
//		__m128 m3 = _mm_mul_ps(in1[3], e3);
//
//		__m128 a0 = _mm_add_ps(m0, m1);
//		__m128 a1 = _mm_add_ps(m2, m3);
//		__m128 a2 = _mm_add_ps(a0, a1);
//
//		out[1] = a2;
//	}
//
//	{
//		__m128 e0 = _mm_shuffle_ps(in2[2], in2[2], _MM_SHUFFLE(0, 0, 0, 0));
//		__m128 e1 = _mm_shuffle_ps(in2[2], in2[2], _MM_SHUFFLE(1, 1, 1, 1));
//		__m128 e2 = _mm_shuffle_ps(in2[2], in2[2], _MM_SHUFFLE(2, 2, 2, 2));
//		__m128 e3 = _mm_shuffle_ps(in2[2], in2[2], _MM_SHUFFLE(3, 3, 3, 3));
//
//		__m128 m0 = _mm_mul_ps(in1[0], e0);
//		__m128 m1 = _mm_mul_ps(in1[1], e1);
//		__m128 m2 = _mm_mul_ps(in1[2], e2);
//		__m128 m3 = _mm_mul_ps(in1[3], e3);
//
//		__m128 a0 = _mm_add_ps(m0, m1);
//		__m128 a1 = _mm_add_ps(m2, m3);
//		__m128 a2 = _mm_add_ps(a0, a1);
//
//		out[2] = a2;
//	}
//
//	{
//		//(__m128&)_mm_shuffle_epi32(__m128i&)in2[0], _MM_SHUFFLE(3, 3, 3, 3))
//		__m128 e0 = _mm_shuffle_ps(in2[3], in2[3], _MM_SHUFFLE(0, 0, 0, 0));
//		__m128 e1 = _mm_shuffle_ps(in2[3], in2[3], _MM_SHUFFLE(1, 1, 1, 1));
//		__m128 e2 = _mm_shuffle_ps(in2[3], in2[3], _MM_SHUFFLE(2, 2, 2, 2));
//		__m128 e3 = _mm_shuffle_ps(in2[3], in2[3], _MM_SHUFFLE(3, 3, 3, 3));
//
//		__m128 m0 = _mm_mul_ps(in1[0], e0);
//		__m128 m1 = _mm_mul_ps(in1[1], e1);
//		__m128 m2 = _mm_mul_ps(in1[2], e2);
//		__m128 m3 = _mm_mul_ps(in1[3], e3);
//
//		__m128 a0 = _mm_add_ps(m0, m1);
//		__m128 a1 = _mm_add_ps(m2, m3);
//		__m128 a2 = _mm_add_ps(a0, a1);
//
//		out[3] = a2;
//	}
//
//	glm::uint64 TimeEnd = GetCpuCycle();
//
//	printf("Ticks mul: %d\n", TimeEnd - TimeStart);
//}
//
//inline void _mm_transpose_ps(__m128 const in[4], __m128 out[4])
//{
//    __m128 tmp0 = _mm_shuffle_ps(in[0], in[1], 0x44);
//    __m128 tmp2 = _mm_shuffle_ps(in[0], in[1], 0xEE);
//    __m128 tmp1 = _mm_shuffle_ps(in[2], in[3], 0x44);
//    __m128 tmp3 = _mm_shuffle_ps(in[2], in[3], 0xEE);
//
//    out[0] = _mm_shuffle_ps(tmp0, tmp1, 0x88);
//    out[1] = _mm_shuffle_ps(tmp0, tmp1, 0xDD);
//    out[2] = _mm_shuffle_ps(tmp2, tmp3, 0x88);
//    out[3] = _mm_shuffle_ps(tmp2, tmp3, 0xDD);
//}

//void _mm_inverse_ps(__m128 const in[4], __m128 out[4])
//{
//	// Swp00 = _mm_shuffle_ps(in[1], in[2], _MM_SHUFFLE(2, 2, 2, 2));
//	// SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
//	// SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
//	// SubFactor06 = m[1][2] * m[3][3] - m[3][2] * m[1][3];
//	// SubFactor13 = m[1][2] * m[2][3] - m[2][2] * m[1][3];
//	//	+ (m[1][1] * SubFactor00 - m[1][2] * SubFactor01 + m[1][3] * SubFactor02),
//	//	- (m[0][1] * SubFactor00 - m[0][2] * SubFactor01 + m[0][3] * SubFactor02),
//	//	+ (m[0][1] * SubFactor06 - m[0][2] * SubFactor07 + m[0][3] * SubFactor08),
//	//	- (m[0][1] * SubFactor13 - m[0][2] * SubFactor14 + m[0][3] * SubFactor15),
//
//	__m128 Sfc00 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(1, 1, 1, 1));
//	__m128 Sfc0a = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(3, 2, 3, 2));
//	__m128 Sfc01 = _mm_shuffle_ps(Sfc0a, Sfc0a, _MM_SHUFFLE(2, 3, 1, 1));
//	__m128 Sfc02 = _mm_shuffle_ps(Sfc0a, Sfc0a, _MM_SHUFFLE(3, 2, 0, 0));
//	__m128 Sfc03 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(3, 3, 3, 3));
//
//	__m128 SfcM0 = _mm_mul_ps(Sfc00, Sfc01);
//	__m128 SfcM1 = _mm_mul_ps(Sfc02, Sfc03);
//	__m128 SfcM2 = _mm_sub_ps(SfcM0, SfcM1);
//	// SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
//	// SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
//	// SubFactor06 = m[1][2] * m[3][3] - m[3][2] * m[1][3];
//	// SubFactor13 = m[1][2] * m[2][3] - m[2][2] * m[1][3];
//	//	+ (m[1][1] * SubFactor00 - m[1][2] * SubFactor01 + m[1][3] * SubFactor02),
//	//	- (m[0][1] * SubFactor00 - m[0][2] * SubFactor01 + m[0][3] * SubFactor02),
//	//	+ (m[0][1] * SubFactor06 - m[0][2] * SubFactor07 + m[0][3] * SubFactor08),
//	//	- (m[0][1] * SubFactor13 - m[0][2] * SubFactor14 + m[0][3] * SubFactor15),
//
//	__m128 Swp00 = _mm_shuffle_ps(in[2], in[2], _MM_SHUFFLE(3, 0, 1, 2));
//	__m128 Swp01 = _mm_shuffle_ps(in[3], in[3], _MM_SHUFFLE(3, 3, 3, 3));
//	__m128 Swp02 = _mm_shuffle_ps(in[3], in[3], _MM_SHUFFLE(3, 0, 1, 2));
//	__m128 Swp03 = _mm_shuffle_ps(in[2], in[2], _MM_SHUFFLE(3, 3, 3, 3));
//
//	__m128 Swp04 = _mm_shuffle_ps(in[2], in[2], _MM_SHUFFLE(3, 0, 0, 1));
//	__m128 Swp05 = _mm_shuffle_ps(in[3], in[3], _MM_SHUFFLE(3, 1, 2, 2));
//	__m128 Swp06 = _mm_shuffle_ps(in[3], in[3], _MM_SHUFFLE(3, 0, 0, 1));
//	__m128 Swp07 = _mm_shuffle_ps(in[2], in[2], _MM_SHUFFLE(3, 1, 2, 2));
//
//	__m128 Swp08 = _mm_shuffle_ps(in[1], in[1], _MM_SHUFFLE(3, 0, 1, 2));
//	__m128 Swp09 = _mm_shuffle_ps(in[1], in[1], _MM_SHUFFLE(3, 3, 3, 3));
//	__m128 Swp10 = _mm_shuffle_ps(in[1], in[1], _MM_SHUFFLE(3, 0, 0, 1));
//	__m128 Swp11 = _mm_shuffle_ps(in[1], in[1], _MM_SHUFFLE(3, 1, 2, 2));
//
//	__m128 Mul00 = _mm_mul_ps(Swp00, Swp01);
//	__m128 Mul01 = _mm_mul_ps(Swp02, Swp03);
//	__m128 Fac00 = _mm_sub_ps(Mul00, Mul01);
//
//	//valType SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
//	//valType SubFactor01 = m[2][1] * m[3][3] - m[3][1] * m[2][3];
//	//valType SubFactor03 = m[2][0] * m[3][3] - m[3][0] * m[2][3];
//
//	__m128 Mul02 = _mm_mul_ps(Swp04, Swp05);
//	__m128 Mul03 = _mm_mul_ps(Swp06, Swp07);
//	__m128 Fac01 = _mm_sub_ps(Mul02, Mul03);
//	
//	//valType SubFactor02 = m[2][1] * m[3][2] - m[3][1] * m[2][2];
//	//valType SubFactor04 = m[2][0] * m[3][2] - m[3][0] * m[2][2];
//	//valType SubFactor05 = m[2][0] * m[3][1] - m[3][0] * m[2][1];
//
//	__m128 Mul04 = _mm_mul_ps(Swp08, Swp01);
//	__m128 Mul05 = _mm_mul_ps(Swp02, Swp09);
//	__m128 Fac02 = _mm_sub_ps(Mul04, Mul05);
//
//	//valType SubFactor06 = m[1][2] * m[3][3] - m[3][2] * m[1][3];
//	//valType SubFactor07 = m[1][1] * m[3][3] - m[3][1] * m[1][3];
//	//valType SubFactor09 = m[1][0] * m[3][3] - m[3][0] * m[1][3];
//
//	__m128 Mul06 = _mm_mul_ps(Swp10, Swp05);
//	__m128 Mul07 = _mm_mul_ps(Swp06, Swp11);
//	__m128 Fac03 = _mm_sub_ps(Mul06, Mul07);
//
//	//valType SubFactor08 = m[1][1] * m[3][2] - m[3][1] * m[1][2];
//	//valType SubFactor10 = m[1][0] * m[3][2] - m[3][0] * m[1][2];
//	//valType SubFactor12 = m[1][0] * m[3][1] - m[3][0] * m[1][1];
//
//	__m128 Mul08 = _mm_mul_ps(Swp08, Swp03);
//	__m128 Mul09 = _mm_mul_ps(Swp00, Swp09);
//	__m128 Fac04 = _mm_sub_ps(Mul08, Mul09);
//
//	//valType SubFactor13 = m[1][2] * m[2][3] - m[2][2] * m[1][3];
//	//valType SubFactor14 = m[1][1] * m[2][3] - m[2][1] * m[1][3];
//	//valType SubFactor16 = m[1][0] * m[2][3] - m[2][0] * m[1][3];
//
//	__m128 Mul10 = _mm_mul_ps(Swp10, Swp07);
//	__m128 Mul11 = _mm_mul_ps(Swp04, Swp11);
//	__m128 Fac05 = _mm_sub_ps(Mul10, Mul11);
//
//	//valType SubFactor15 = m[1][1] * m[2][2] - m[2][1] * m[1][2];
//	//valType SubFactor17 = m[1][0] * m[2][2] - m[2][0] * m[1][2];
//	//valType SubFactor18 = m[1][0] * m[2][1] - m[2][0] * m[1][1];
//
//	bool end = true;
//}

//template <typename valType> 
//inline detail::tmat4x4<valType> inverse
//(
//	detail::tmat4x4<valType> const & m
//)
//{

//inline __m128 _mm_dot_ps(__m128 v1, __m128 v2)
//{
//	__m128 mul0 = _mm_mul_ps(v1, v2);
//	__m128 swp0 = _mm_shuffle_ps(mul0, mul0, _MM_SHUFFLE(2, 3, 0, 1));
//	__m128 add0 = _mm_add_ps(mul0, swp0);
//	__m128 swp1 = _mm_shuffle_ps(add0, add0, _MM_SHUFFLE(0, 1, 2, 3));
//	__m128 add1 = _mm_add_ps(add0, swp1);
//	return add1;
//}
//
//inline void _mm_inverse_ps(__m128 const in[4], __m128 out[4])
//{
//	glm::uint64 TimeStart = GetCpuCycle();
//
//	__m128 Fac0;
//	{
//		//	valType SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
//		//	valType SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
//		//	valType SubFactor06 = m[1][2] * m[3][3] - m[3][2] * m[1][3];
//		//	valType SubFactor13 = m[1][2] * m[2][3] - m[2][2] * m[1][3];
//
//		__m128 Swp0a = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(3, 3, 3, 3));
//		__m128 Swp0b = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(2, 2, 2, 2));
//
//		__m128 Swp00 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(2, 2, 2, 2));
//		__m128 Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp03 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(3, 3, 3, 3));
//
//		__m128 Mul00 = _mm_mul_ps(Swp00, Swp01);
//		__m128 Mul01 = _mm_mul_ps(Swp02, Swp03);
//		Fac0 = _mm_sub_ps(Mul00, Mul01);
//
//		bool stop = true;
//	}
//
//	__m128 Fac1;
//	{
//		//	valType SubFactor01 = m[2][1] * m[3][3] - m[3][1] * m[2][3];
//		//	valType SubFactor01 = m[2][1] * m[3][3] - m[3][1] * m[2][3];
//		//	valType SubFactor07 = m[1][1] * m[3][3] - m[3][1] * m[1][3];
//		//	valType SubFactor14 = m[1][1] * m[2][3] - m[2][1] * m[1][3];
//
//		__m128 Swp0a = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(3, 3, 3, 3));
//		__m128 Swp0b = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(1, 1, 1, 1));
//
//		__m128 Swp00 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(1, 1, 1, 1));
//		__m128 Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp03 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(3, 3, 3, 3));
//
//		__m128 Mul00 = _mm_mul_ps(Swp00, Swp01);
//		__m128 Mul01 = _mm_mul_ps(Swp02, Swp03);
//		Fac1 = _mm_sub_ps(Mul00, Mul01);
//
//		bool stop = true;
//	}
//
//
//	__m128 Fac2;
//	{
//		//	valType SubFactor02 = m[2][1] * m[3][2] - m[3][1] * m[2][2];
//		//	valType SubFactor02 = m[2][1] * m[3][2] - m[3][1] * m[2][2];
//		//	valType SubFactor08 = m[1][1] * m[3][2] - m[3][1] * m[1][2];
//		//	valType SubFactor15 = m[1][1] * m[2][2] - m[2][1] * m[1][2];
//
//		__m128 Swp0a = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(2, 2, 2, 2));
//		__m128 Swp0b = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(1, 1, 1, 1));
//
//		__m128 Swp00 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(1, 1, 1, 1));
//		__m128 Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp03 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(2, 2, 2, 2));
//
//		__m128 Mul00 = _mm_mul_ps(Swp00, Swp01);
//		__m128 Mul01 = _mm_mul_ps(Swp02, Swp03);
//		Fac2 = _mm_sub_ps(Mul00, Mul01);
//
//		bool stop = true;
//	}
//
//	__m128 Fac3;
//	{
//		//	valType SubFactor03 = m[2][0] * m[3][3] - m[3][0] * m[2][3];
//		//	valType SubFactor03 = m[2][0] * m[3][3] - m[3][0] * m[2][3];
//		//	valType SubFactor09 = m[1][0] * m[3][3] - m[3][0] * m[1][3];
//		//	valType SubFactor16 = m[1][0] * m[2][3] - m[2][0] * m[1][3];
//
//		__m128 Swp0a = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(3, 3, 3, 3));
//		__m128 Swp0b = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(0, 0, 0, 0));
//
//		__m128 Swp00 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(0, 0, 0, 0));
//		__m128 Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp03 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(3, 3, 3, 3));
//
//		__m128 Mul00 = _mm_mul_ps(Swp00, Swp01);
//		__m128 Mul01 = _mm_mul_ps(Swp02, Swp03);
//		Fac3 = _mm_sub_ps(Mul00, Mul01);
//
//		bool stop = true;
//	}
//
//	__m128 Fac4;
//	{
//		//	valType SubFactor04 = m[2][0] * m[3][2] - m[3][0] * m[2][2];
//		//	valType SubFactor04 = m[2][0] * m[3][2] - m[3][0] * m[2][2];
//		//	valType SubFactor10 = m[1][0] * m[3][2] - m[3][0] * m[1][2];
//		//	valType SubFactor17 = m[1][0] * m[2][2] - m[2][0] * m[1][2];
//
//		__m128 Swp0a = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(2, 2, 2, 2));
//		__m128 Swp0b = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(0, 0, 0, 0));
//
//		__m128 Swp00 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(0, 0, 0, 0));
//		__m128 Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp03 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(2, 2, 2, 2));
//
//		__m128 Mul00 = _mm_mul_ps(Swp00, Swp01);
//		__m128 Mul01 = _mm_mul_ps(Swp02, Swp03);
//		Fac4 = _mm_sub_ps(Mul00, Mul01);
//
//		bool stop = true;
//	}
//
//	__m128 Fac5;
//	{
//		//	valType SubFactor05 = m[2][0] * m[3][1] - m[3][0] * m[2][1];
//		//	valType SubFactor05 = m[2][0] * m[3][1] - m[3][0] * m[2][1];
//		//	valType SubFactor12 = m[1][0] * m[3][1] - m[3][0] * m[1][1];
//		//	valType SubFactor18 = m[1][0] * m[2][1] - m[2][0] * m[1][1];
//
//		__m128 Swp0a = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(1, 1, 1, 1));
//		__m128 Swp0b = _mm_shuffle_ps(in[3], in[2], _MM_SHUFFLE(0, 0, 0, 0));
//
//		__m128 Swp00 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(0, 0, 0, 0));
//		__m128 Swp01 = _mm_shuffle_ps(Swp0a, Swp0a, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp02 = _mm_shuffle_ps(Swp0b, Swp0b, _MM_SHUFFLE(2, 0, 0, 0));
//		__m128 Swp03 = _mm_shuffle_ps(in[2], in[1], _MM_SHUFFLE(1, 1, 1, 1));
//
//		__m128 Mul00 = _mm_mul_ps(Swp00, Swp01);
//		__m128 Mul01 = _mm_mul_ps(Swp02, Swp03);
//		Fac5 = _mm_sub_ps(Mul00, Mul01);
//
//		bool stop = true;
//	}
//
//	__m128 SignA = _mm_set_ps( 1.0f,-1.0f, 1.0f,-1.0f);
//	__m128 SignB = _mm_set_ps(-1.0f, 1.0f,-1.0f, 1.0f);
//
//	// m[1][0]
//	// m[0][0]
//	// m[0][0]
//	// m[0][0]
//	__m128 Temp0 = _mm_shuffle_ps(in[1], in[0], _MM_SHUFFLE(0, 0, 0, 0));
//	__m128 Vec0 = _mm_shuffle_ps(Temp0, Temp0, _MM_SHUFFLE(2, 2, 2, 0));
//
//	// m[1][1]
//	// m[0][1]
//	// m[0][1]
//	// m[0][1]
//	__m128 Temp1 = _mm_shuffle_ps(in[1], in[0], _MM_SHUFFLE(1, 1, 1, 1));
//	__m128 Vec1 = _mm_shuffle_ps(Temp1, Temp1, _MM_SHUFFLE(2, 2, 2, 0));
//
//	// m[1][2]
//	// m[0][2]
//	// m[0][2]
//	// m[0][2]
//	__m128 Temp2 = _mm_shuffle_ps(in[1], in[0], _MM_SHUFFLE(2, 2, 2, 2));
//	__m128 Vec2 = _mm_shuffle_ps(Temp2, Temp2, _MM_SHUFFLE(2, 2, 2, 0));
//
//	// m[1][3]
//	// m[0][3]
//	// m[0][3]
//	// m[0][3]
//	__m128 Temp3 = _mm_shuffle_ps(in[1], in[0], _MM_SHUFFLE(3, 3, 3, 3));
//	__m128 Vec3 = _mm_shuffle_ps(Temp3, Temp3, _MM_SHUFFLE(2, 2, 2, 0));
//
//	// col0
//	// + (Vec1[0] * Fac0[0] - Vec2[0] * Fac1[0] + Vec3[0] * Fac2[0]),
//	// - (Vec1[1] * Fac0[1] - Vec2[1] * Fac1[1] + Vec3[1] * Fac2[1]),
//	// + (Vec1[2] * Fac0[2] - Vec2[2] * Fac1[2] + Vec3[2] * Fac2[2]),
//	// - (Vec1[3] * Fac0[3] - Vec2[3] * Fac1[3] + Vec3[3] * Fac2[3]),
//	__m128 Mul00 = _mm_mul_ps(Vec1, Fac0);
//	__m128 Mul01 = _mm_mul_ps(Vec2, Fac1);
//	__m128 Mul02 = _mm_mul_ps(Vec3, Fac2);
//	__m128 Sub00 = _mm_sub_ps(Mul00, Mul01);
//	__m128 Add00 = _mm_add_ps(Sub00, Mul02);
//	__m128 Inv0 = _mm_mul_ps(SignB, Add00);
//
//	// col1
//	// - (Vec0[0] * Fac0[0] - Vec2[0] * Fac3[0] + Vec3[0] * Fac4[0]),
//	// + (Vec0[0] * Fac0[1] - Vec2[1] * Fac3[1] + Vec3[1] * Fac4[1]),
//	// - (Vec0[0] * Fac0[2] - Vec2[2] * Fac3[2] + Vec3[2] * Fac4[2]),
//	// + (Vec0[0] * Fac0[3] - Vec2[3] * Fac3[3] + Vec3[3] * Fac4[3]),
//	__m128 Mul03 = _mm_mul_ps(Vec0, Fac0);
//	__m128 Mul04 = _mm_mul_ps(Vec2, Fac3);
//	__m128 Mul05 = _mm_mul_ps(Vec3, Fac4);
//	__m128 Sub01 = _mm_sub_ps(Mul03, Mul04);
//	__m128 Add01 = _mm_add_ps(Sub01, Mul05);
//	__m128 Inv1 = _mm_mul_ps(SignA, Add01);
//
//	// col2
//	// + (Vec0[0] * Fac1[0] - Vec1[0] * Fac3[0] + Vec3[0] * Fac5[0]),
//	// - (Vec0[0] * Fac1[1] - Vec1[1] * Fac3[1] + Vec3[1] * Fac5[1]),
//	// + (Vec0[0] * Fac1[2] - Vec1[2] * Fac3[2] + Vec3[2] * Fac5[2]),
//	// - (Vec0[0] * Fac1[3] - Vec1[3] * Fac3[3] + Vec3[3] * Fac5[3]),
//	__m128 Mul06 = _mm_mul_ps(Vec0, Fac1);
//	__m128 Mul07 = _mm_mul_ps(Vec1, Fac3);
//	__m128 Mul08 = _mm_mul_ps(Vec3, Fac5);
//	__m128 Sub02 = _mm_sub_ps(Mul06, Mul07);
//	__m128 Add02 = _mm_add_ps(Sub02, Mul08);
//	__m128 Inv2 = _mm_mul_ps(SignB, Add02);
//
//	// col3
//	// - (Vec1[0] * Fac2[0] - Vec1[0] * Fac4[0] + Vec2[0] * Fac5[0]),
//	// + (Vec1[0] * Fac2[1] - Vec1[1] * Fac4[1] + Vec2[1] * Fac5[1]),
//	// - (Vec1[0] * Fac2[2] - Vec1[2] * Fac4[2] + Vec2[2] * Fac5[2]),
//	// + (Vec1[0] * Fac2[3] - Vec1[3] * Fac4[3] + Vec2[3] * Fac5[3]));
//	__m128 Mul09 = _mm_mul_ps(Vec0, Fac2);
//	__m128 Mul10 = _mm_mul_ps(Vec1, Fac4);
//	__m128 Mul11 = _mm_mul_ps(Vec2, Fac5);
//	__m128 Sub03 = _mm_sub_ps(Mul09, Mul10);
//	__m128 Add03 = _mm_add_ps(Sub03, Mul11);
//	__m128 Inv3 = _mm_mul_ps(SignA, Add03);
//
//	__m128 Row0 = _mm_shuffle_ps(Inv0, Inv1, _MM_SHUFFLE(0, 0, 0, 0));
//	__m128 Row1 = _mm_shuffle_ps(Inv2, Inv3, _MM_SHUFFLE(0, 0, 0, 0));
//	__m128 Row2 = _mm_shuffle_ps(Row0, Row1, _MM_SHUFFLE(2, 0, 2, 0));
//
//	//	valType Determinant = m[0][0] * Inverse[0][0] 
//	//						+ m[0][1] * Inverse[1][0] 
//	//						+ m[0][2] * Inverse[2][0] 
//	//						+ m[0][3] * Inverse[3][0];
//	__m128 Det0 = _mm_dot_ps(in[0], Row2);
//
//	//	Inverse /= Determinant;
//	out[0] = _mm_div_ps(Inv0, Det0);
//	out[1] = _mm_div_ps(Inv1, Det0);
//	out[2] = _mm_div_ps(Inv2, Det0);
//	out[3] = _mm_div_ps(Inv3, Det0);
//
//	glm::uint64 TimeEnd = GetCpuCycle();
//
//	printf("Ticks inv: %d\n", TimeEnd - TimeStart);
//
//	bool stop = true;
//}

//#include <intrin.h>

void test_mat4_mul()
{
/*
	{
		__m128 v1 = _mm_set_ps(3.0f, 2.0f, 1.0f, 0.0f);
		__m128 m0[4];
		m0[0] = _mm_set_ps(3.0f, 2.0f, 1.0f, 0.0f);
		m0[1] = _mm_set_ps(4.0f, 5.0f, 6.0f, 7.0f);
		m0[2] = _mm_set_ps(0.3f, 0.2f, 0.1f, 0.0f);
		m0[3] = _mm_set_ps(0.4f, 0.5f, 0.6f, 0.7f);

		__m128 v2 = _mm_mul_ps(v1, m0);

		bool stop = true;
	}
	{
		glm::vec4 v1(0.0f, 1.0f, 2.0f, 3.0f);

		glm::mat4 m0;
		m0[0] = glm::vec4(0.0f, 1.0f, 2.0f, 3.0f);
		m0[1] = glm::vec4(7.0f, 6.0f, 5.0f, 4.0f);
		m0[2] = glm::vec4(0.0f, 0.1f, 0.2f, 0.3f);
		m0[3] = glm::vec4(0.7f, 0.6f, 0.5f, 0.4f);
		glm::vec4 v2 = v1 * m0;

		bool stop = true;
	}
*/
	{
		__m128 a = _mm_setr_ps(0.0f, 1.0f, 2.0f, 3.0f);
		__m128 b = _mm_shuffle_ps(a, a, _MM_SHUFFLE(3, 2, 1, 0));
		
		bool stop = true;
	}

	{
		__m128 v1 = _mm_setr_ps(0.3f, 0.2f, 0.1f, 1.0f);
		__m128 m0[4];
		m0[0] = _mm_setr_ps(2.0f, 0.2f, 0.1f,-1.4f);
		m0[1] = _mm_setr_ps(0.5f, 2.0f, 0.3f,-1.2f);
		m0[2] = _mm_setr_ps(0.6f, 0.4f, 2.0f,-1.1f);
		m0[3] = _mm_setr_ps(1.4f, 1.2f, 1.1f, 1.0f);

		__m128 v2 = _mm_mul_ps(v1, m0);

		bool stop = true;
	}

	{
		glm::vec4 v1(0.3f, 0.2f, 0.1f, 1.0f);

		glm::mat4 m0;
		m0[0] = glm::vec4(2.0f, 0.2f, 0.1f,-1.4f);
		m0[1] = glm::vec4(0.5f, 2.0f, 0.3f,-1.2f);
		m0[2] = glm::vec4(0.6f, 0.4f, 2.0f,-1.1f);
		m0[3] = glm::vec4(1.4f, 1.2f, 1.1f, 1.0f);
		glm::vec4 v2 = v1 * m0;

		bool stop = true;
	}

	{
		glm::vec4 v1(1.0f, 0.5f,-0.5f,-1.0f);

		glm::mat4 m0;
		m0[0] = glm::vec4(2.0f,-1.0f,-1.0f, 4.0f);
		m0[1] = glm::vec4(2.0f, 1.0f, 4.0f, 1.0f);
		m0[2] = glm::vec4(2.0f, 4.0f, 1.0f, 1.0f);
		m0[3] = glm::vec4(4.0f, 1.0f, 1.0f, 1.0f);
		m0 = glm::transpose(m0);
		glm::vec4 v2 = m0 * v1;

		bool stop = true;
	}

	{
		glm::mat4 MatA;
		MatA[0] = glm::vec4(0.2f, 0.1f, 0.3f, 0.4f);
		MatA[1] = glm::vec4(1.0f, 0.3f, 0.2f, 0.3f);
		MatA[2] = glm::vec4(3.0f, 2.0f, 0.4f, 0.2f);
		MatA[3] = glm::vec4(4.0f, 3.0f, 2.0f, 1.0f);

		glm::mat4 InvA = glm::inverse(MatA);
		glm::mat4 IndA = MatA * InvA;
//		glm::mat4 InvB = glm::inverseOgre(MatA);
//		glm::mat4 IndB = MatA * InvB;
//		glm::mat4 InvD = glm::inverseSIMD(MatA);
//		glm::mat4 IndD = MatA * InvD;
//		glm::mat4 InvE = glm::inverseDev(MatA);
//		glm::mat4 IndE = MatA * InvE;

		__m128 MatC[4];
		MatC[0] = _mm_setr_ps(0.2f, 0.1f, 0.3f, 0.4f);
		MatC[1] = _mm_setr_ps(1.0f, 0.3f, 0.2f, 0.3f);
		MatC[2] = _mm_setr_ps(3.0f, 2.0f, 0.4f, 0.2f);
		MatC[3] = _mm_setr_ps(4.0f, 3.0f, 2.0f, 1.0f);
		__m128 InvC[4];
		_mm_inverse_ps(MatC, InvC);

		__m128 IndC[4];
		_mm_mul_ps(MatC, InvC, IndC);

		__m128 Mul2[4];
		_mm_mul_ps(MatC, MatC, Mul2);

 		bool stop = true;
	}

	{
		glm::dmat4 Mat;
		Mat[0] = glm::dvec4(0.0f, 1.0f, 2.0f, 3.0f);
		Mat[1] = glm::dvec4(0.1f, 1.1f, 2.1f, 3.1f);
		Mat[2] = glm::dvec4(0.2f, 1.2f, 2.2f, 3.2f);
		Mat[3] = glm::dvec4(0.3f, 1.3f, 2.3f, 3.3f);
		glm::dmat4 Inv = glm::inverse(Mat);
		glm::dmat4 Ind = Mat * Inv;

		glm::dmat4 MatB;
		MatB[0] = glm::dvec4(0.0f, 1.0f, 2.0f, 3.0f);
		MatB[1] = glm::dvec4(0.1f, 1.1f, 2.1f, 3.1f);
		MatB[2] = glm::dvec4(0.2f, 1.2f, 2.2f, 3.2f);
		MatB[3] = glm::dvec4(0.3f, 1.3f, 2.3f, 3.3f);
//		glm::dmat4 InvB = glm::inverseOgre(MatB);
//		glm::dmat4 IndB = MatB * InvB;

		bool stop = true;
	}

	{
		glm::mat3 Mat;
		Mat[0] = glm::vec3(0.0f, 1.0f, 2.0f);
		Mat[1] = glm::vec3(0.1f, 1.1f, 2.1f);
		Mat[2] = glm::vec3(0.2f, 1.2f, 2.2f);
		glm::mat3 Inv = glm::inverse(Mat);
		glm::mat3 Ind = Mat * Inv;

		bool stop = true;
	}

	bool stop = true;
}

void test_vec4_mul()
{
	glm::vec4 v1(1.0f, 2.0f, 3.0f, 4.0f);
	glm::mat4 m1;
	m1[0] = glm::vec4(1.0f, 2.0f, 3.0f, 4.0f) * 0.1f;
	m1[1] = glm::vec4(1.0f, 2.0f, 3.0f, 4.0f) * 0.2f;
	m1[2] = glm::vec4(1.0f, 2.0f, 3.0f, 4.0f) * 0.3f;
	m1[3] = glm::vec4(1.0f, 2.0f, 3.0f, 4.0f) * 0.4f;
	glm::vec4 vA = m1 * v1;
	glm::vec4 vC = v1 * m1;

	__m128 v2 = _mm_setr_ps(1.0f, 2.0f, 3.0f, 4.0f);
	__m128 m2[4];
	m2[0] = _mm_mul_ps(_mm_setr_ps(1.0f, 2.0f, 3.0f, 4.0f), _mm_set_ps1(0.1f));
	m2[1] = _mm_mul_ps(_mm_setr_ps(1.0f, 2.0f, 3.0f, 4.0f), _mm_set_ps1(0.2f));
	m2[2] = _mm_mul_ps(_mm_setr_ps(1.0f, 2.0f, 3.0f, 4.0f), _mm_set_ps1(0.3f));
	m2[3] = _mm_mul_ps(_mm_setr_ps(1.0f, 2.0f, 3.0f, 4.0f), _mm_set_ps1(0.4f));
	__m128 vB = _mm_mul_ps(m2, v2);
	__m128 vD = _mm_mul_ps(v2, m2);

	bool stop = true;
}

void test_mat4_tick()
{
	__m128 MatC[4];
	MatC[0] = _mm_setr_ps(0.2f, 0.1f, 0.3f, 0.4f);
	MatC[1] = _mm_setr_ps(1.0f, 0.3f, 0.2f, 0.3f);
	MatC[2] = _mm_setr_ps(3.0f, 2.0f, 0.4f, 0.2f);
	MatC[3] = _mm_setr_ps(4.0f, 3.0f, 2.0f, 1.0f);

	int CPUInfo[4];
	int InfoType;

	for(std::size_t i = 0; i < 10; ++i)
	{
		__m128 InvC[4];
		__m128 IndC[4];

		{
//			__cpuid(CPUInfo, InfoType);
//			__rdtsc();
//			__cpuid(CPUInfo, InfoType);
//			__rdtsc();
//			__cpuid(CPUInfo, InfoType);
			
			//glm::uint64 ClockStart = GetCpuCycle();
			_mm_inverse_ps(MatC, InvC);
			//glm::uint64 ClockEnd = GetCpuCycle();
			//printf("inv: %d\n", ClockEnd - ClockStart);
		}

		{
//			__cpuid(CPUInfo, InfoType);
//			__rdtsc();
//			__cpuid(CPUInfo, InfoType);
//			__rdtsc();
//			__cpuid(CPUInfo, InfoType);

			//glm::uint64 ClockStart = GetCpuCycle();
				_mm_mul_ps(MatC, InvC, IndC);
			//glm::uint64 ClockEnd = GetCpuCycle();
			//printf("mul: %d\n", ClockEnd - ClockStart);
		}
	}
}

int firstBit(int Binary)
{
	for(std::size_t i = 0; i < 32; ++i)
		if(Binary & (1 << i))
			return i;
	assert(0);
	return 0;			
}

void test_exp_golomb()
{
	//0 => 1 => 1
	//1 => 10 => 010
	//2 => 11 => 011
	//3 => 100 => 00100
	//4 => 101 => 00101
	//5 => 110 => 00110
	//6 => 111 => 00111
	//7 => 1000 => 0001000
	//8 => 1001 => 0001001

	// - Take the number in binary except for the last k digits 
	// and add 1 to it (arithmetically). Write this down.
	// - Count the bits written, subtract one, 
	// - Write that number of starting zero bits preceding the previous bit string.
	// - Write the last k bits in binary.

	std::size_t Bit00 = glm::highestBit(0);
	std::size_t Bit01 = glm::highestBit(1);
	std::size_t Bit02 = glm::highestBit(2);
	std::size_t Bit04 = glm::highestBit(4);
	std::size_t Bit08 = glm::highestBit(8);
	std::size_t Bit16 = glm::highestBit(16);
	std::size_t Bit32 = glm::highestBit(32);

	std::vector<glm::uint32> Size(256);
	std::vector<glm::uint32> Data(256);
	std::vector<glm::uint32> Conv(256);

	for(std::size_t i = 0; i < 256; ++i)
	{
		glm::uint32 Binary = i + 1;
		glm::uint32 HighestBit = glm::highestBit(Binary);
		glm::uint32 CodeSize = (HighestBit << 1) + 1;
		glm::uint32 Swift = 32 - CodeSize;
		glm::uint32 Temp = glm::bitRevert(Binary << Swift);
		//glm::uint32 Temp = Binary << Swift;

		Data[i] = Temp;
		Size[i] = HighestBit * 2 + 1;

		printf("Binary(%d, %d): ", Swift, CodeSize);
		for(std::size_t k = 0; k < 32; ++k)
			printf("%d", glm::uint32((Binary & (1 << k)) != 0));
		printf(" (%d)\n", Binary);

		printf("Temp(%d, %d)  : ", Swift, CodeSize);
		for(std::size_t k = 0; k < 32; ++k)
			printf("%d", glm::uint32((Temp & (1 << k)) != 0));
		printf(" (%d)\n", Temp);

		printf("Value(%d): ", i);
		for(std::size_t k = 0; k < 8; ++k)
			printf("%d", glm::uint32((i & (1 << k)) != 0));
		printf("; ");

		printf("Code: ");
		for(std::size_t k = 0; k < Size[i]; ++k)
			printf("%d", glm::uint32((Data[i] & (1 << k)) != 0));
		printf("\n");

		{
			glm::uint32 Temp = Data[i];
			glm::uint32 CodeSize2 = (firstBit(Temp) << 1) + 1;
			glm::uint32 Swift2 = 32 - CodeSize2;
			glm::uint32 Binary = glm::bitRevert(Temp) >> Swift2;
			Conv[i] = Binary - 1;
		}

		printf("Conv  (%d, %d): ", Swift, CodeSize);
		for(std::size_t k = 0; k < 32; ++k)
			printf("%d", glm::uint32((Conv[i] & (1 << k)) != 0));
		printf(" (%d)\n\n", Conv[i]);

		bool stop = true;
	}

	bool stop = true;
}
/*
int main(int argc, char* argv[])
{
	test_mat4_mul();
	test_exp_golomb();
	//test_mat4_tick();
	test_quat();
	test_simd();
	test_transform();
	test_const();
	test_radial();
	test_vec4_mul();

	glm::uint LowestBit = glm::lowestBit(8);

	glm::test::main_core_func_common();
	glm::test::main_core_func_exponential();
	glm::test::main_core_func_geometric();
	glm::test::main_core_func_matrix();
	glm::test::main_core_func_noise();
	glm::test::main_core_func_trigonometric();
	glm::test::main_core_func_vector_relational();
	glm::test::main_gtx_intesect();

	{
		glm::vec3 Normal(1, 0, 0);

		glm::vec3 x = glm::rotate<glm::vec3::value_type>(glm::vec3(1,0,0),180.f,Normal);
		glm::vec3 y = glm::rotate<glm::vec3::value_type>(glm::vec3(1,1,0),180.f,Normal);

		bool Stop = true;
	}

	glm::mat4 m1 = glm::inverseTranspose(
		glm::gtc::matrix_transform::translate(
			glm::gtc::matrix_transform::rotate(
				glm::mat4(1.0f),	
				90.f, 
				glm::normalize(glm::vec3(1.0f, 0.5f, 0.2f))),
			glm::vec3(1.f, 2.f, 3.f)));

	glm::mat4 m2 = glm::transpose(
		glm::inverse(
			glm::gtc::matrix_transform::translate(
				glm::gtc::matrix_transform::rotate(
					glm::mat4(1.0f),
					90.f, 
					glm::normalize(glm::vec3(1.0f, 0.5f, 0.2f))),
				glm::vec3(1.f, 2.f, 3.f))));

	test_hint();
	test_fast_inverse();
	//test_type();
	test_profile();
//	glm::greaterThan();
	test_angle();

	test_half();
	test_swizzle();

	test::main_vec2();

	test_quaternion();
	test_auto_cast();

	//detail::test_half_type();

	glm::vec2 Result = glm::perp(glm::vec2(1.0, 0.0), glm::vec2(0.0, 1.0));

//	test_genType();
//	test_desk();
	//radians(1);

	glm::mat4 LookAt = glm::lookAt(glm::vec3(1), glm::vec3(1), glm::vec3(1));

	fast_inverse();
	test_string_cast();
	test_isPowerOfTwo();

	{
		float fast0 = glm::fastLength(glm::vec3(1.0f));
		float fast1 = 0.0f;
	}

	vec4 v76 = 1.f * vec4(1.0f);

	test_matrix();
	//test_random();
	//test_sse_vec4();
	//test_sse_mat4();

	{
		float f1 = glm::mix(100.f, 1000.f, 0.5f);
		vec3 f2 = glm::mix(vec3(100.f), vec3(1000.f), 0.5f);
		ivec3 f3 = glm::mix(ivec3(100), ivec3(1000), 0.5f);
		ivec3 f4 = glm::mix(ivec3(100), ivec3(1000), vec3(0.5f));
	}

	{
		mat4 Projection = glm::frustum(-1.0f, 1.0f, -1.0f, 1.0f, 0.1f, 1.0f);

		//glm_traits<glm::vec3>::value_type vec(1.0f);
	}

	{
		glm::vec2 v1(1.0f);
		glm::vec2 v2(2.0f);
		glm::vec2 v3(3.0f);

//		v1.xy += v2 + v3.xy;
	}

	{
		bool b = true;
		glm::vec4 v4(b);
	}

	{
		glm::quat q1;
		q1 = glm::inverse(q1);
	}

	//test_cast();
	//test_half_full();

	//test_sse();
    //__hvec2GTX Pouet;
    //pouet Pouet(1, 2, 3);
	glm::dmat4 dm = glm::dmat4(1.0);
	glm::mat4 fm1 = glm::mat4(dm);
	glm::mat4 fm2(dm);
	//glm::hmat4 hm = glm::hmat4(1.0);
	//glm::mat4 fm3(hm);
	//glm::dmat4 dm2(hm);

	{
		glm::quat q1;
		glm::vec4 v1;
		glm::vec4 r1;
		r1 = q1 * v1;

		r1++;
		//q1 = glm::absGTX(q1);
	}

	{
		glm::vec3 v1(1.0f);
		++v1;
		v1++;
	}

	{
		glm::vec4 v1(1.0f);
		--v1;
		v1--;
	}

	{
		glm::vec4 v1(1.0f);
		++v1;
		v1++;
	}

	{
		ivec3 testVec = ivec3(3,35,4);
		const ivec3 testVec2 = ivec3(13,15,14);
		//testVec = testVec2.zyx;
		//testVec = testVec2.xyy;
		//testVec = testVec2.rrr;
		//ivec4 textVec4 = testVec2.zzxx;
		//ivec2 textVec2 = testVec2.gr;

        //half h1 = half(1.0f);
        //hvec2 hv2 = hvec2(h1);
        //hvec3 hv3 = hvec3(h1);
        //hvec4 hv4 = hvec4(h1);
	}

	vec2 Stuff = glm::mix(vec2(1), vec2(0), 0.5f);

	test_gtx_bit();

	vec2 Max = glm::max(vec2(0.f), vec2(1.f));
	vec2 Truc = radians(vec2(1));
//		ivec3 v(1);
//		v = operator &=((1 << 0));

		ivec3 v(1);
		v &= (1 << 0);


	vec4 Color = glm::f32_rgba_cast<glm::uint32>(glm::uint32(0));

	vec3 Normal = glm::normalizedRand3<float>();
	//__hvec3GTX hCos = cos(__hvec3GTX(1.0f));
	//__hvec3GTX hNormal = normalizedRand3<detail::thalf>();

	//quat Quat;
	//Quat = sqrt(Quat);

#if(defined(GLM_SWIZZLE) && GLM_SWIZZLE & GLM_SWIZZLE_FUNC)
    vec4 ColorRGBA = vec4(1.0, 0.5, 0.0, 1.0)._xyzw();
#endif//GLM_SWIZZLE

	hvec2 v1(1.0f, 2.0f);
	hvec2 v2(3.0f, 4.0f);
	v2 = v1;
	v2 += half(1.0f);
	v2 += detail::thalf(1.0f);
	v2 = v1 - v2;
	half hcos1 = glm::cos(half(1.0));
	hvec2 hcos2 = glm::cos(hvec2(1.0));

	//test_associated_min_max();

    system("pause");
    return 0;
}
*/

#define CPUID __asm __emit 0fh __asm __emit 0a2h
#define RDTSC __asm __emit 0fh __asm __emit 031h

unsigned test_sse() 
{
	glm::mat4 MatA;
	MatA[0] = glm::vec4(0.2f, 0.1f, 0.3f, 0.4f);
	MatA[1] = glm::vec4(1.0f, 0.3f, 0.2f, 0.3f);
	MatA[2] = glm::vec4(3.0f, 2.0f, 0.4f, 0.2f);
	MatA[3] = glm::vec4(4.0f, 3.0f, 2.0f, 1.0f);
	glm::mat4 MulA;
	glm::mat4 InvA;
	unsigned cycles;

	__m128 MatC[4];
	MatC[0] = _mm_setr_ps(0.2f, 0.1f, 0.3f, 0.4f);
	MatC[1] = _mm_setr_ps(1.0f, 0.3f, 0.2f, 0.3f);
	MatC[2] = _mm_setr_ps(3.0f, 2.0f, 0.4f, 0.2f);
	MatC[3] = _mm_setr_ps(4.0f, 3.0f, 2.0f, 1.0f);
	__m128 MatR[4];
/*
	__asm 
	{
		pushad

		CPUID
		RDTSC
		mov cycles, eax

		popad
	}
*/
	//MulA = MatA * MatA;
	//_mm_mul_ps(MatC, MatC, MatR);
	//InvA = glm::inverse(MatA);
	//_mm_inverse_ps(MatC, MatR);
	_mm_inverse_fast_ps(MatC, MatR);
	//glm::mat4 IndA = MatA * InvA;
	//glm::mat4 InvB = glm::inverseOgre(MatA);
	//glm::mat4 IndB = MatA * InvB;
//		glm::mat4 InvD = glm::inverseSIMD(MatA);
//		glm::mat4 IndD = MatA * InvD;
//		glm::mat4 InvE = glm::inverseDev(MatA);
//		glm::mat4 IndE = MatA * InvE;

	//__m128 MatC[4];
	//MatC[0] = _mm_setr_ps(0.2f, 0.1f, 0.3f, 0.4f);
	//MatC[1] = _mm_setr_ps(1.0f, 0.3f, 0.2f, 0.3f);
	//MatC[2] = _mm_setr_ps(3.0f, 2.0f, 0.4f, 0.2f);
	//MatC[3] = _mm_setr_ps(4.0f, 3.0f, 2.0f, 1.0f);
	//__m128 InvC[4];
	//_mm_inverse_ps(MatC, InvC);

	//__m128 IndC[4];
	//_mm_mul_ps(MatC, InvC, IndC);

	//__m128 Mul2[4];
	//_mm_mul_ps(MatC, MatC, Mul2);
/*
	__asm 
	{
		pushad

		CPUID
		RDTSC
		sub eax, cycles
		mov cycles, eax

		popad
	}
*/
	return cycles;
}

unsigned test_mat4_translate()
{
	glm::mat4 MatA;
	MatA[0] = glm::vec4(0.2f, 0.1f, 0.3f, 0.4f);
	MatA[1] = glm::vec4(1.0f, 0.3f, 0.2f, 0.3f);
	MatA[2] = glm::vec4(3.0f, 2.0f, 0.4f, 0.2f);
	MatA[3] = glm::vec4(4.0f, 3.0f, 2.0f, 1.0f);
	glm::mat4 Transform;

	__m128 MatC[4];
	MatC[0] = _mm_setr_ps(0.2f, 0.1f, 0.3f, 0.4f);
	MatC[1] = _mm_setr_ps(1.0f, 0.3f, 0.2f, 0.3f);
	MatC[2] = _mm_setr_ps(3.0f, 2.0f, 0.4f, 0.2f);
	MatC[3] = _mm_setr_ps(4.0f, 3.0f, 2.0f, 1.0f);
	__m128 MatR[4];
	float v[] = {1, 2, 3};

	unsigned cycles;
/*
	__asm 
	{
		pushad

		CPUID
		RDTSC
		mov cycles, eax

		popad
	}
*/
	_mm_rotate_ps(MatC, 45.f, v, MatR);
	//Transform = glm::rotate(MatA, 45.f, glm::vec3(1, 2, 3));
/*
	__asm 
	{
		pushad

		CPUID
		RDTSC
		sub eax, cycles
		mov cycles, eax

		popad
	}
*/
	return cycles;
}

void test_vec4_simd()
{
	glm::vec4SIMD v1(1.0f, 2.0f, 3.0f, 4.0f);
	glm::vec4SIMD v2(5.0f, 6.0f, 7.0f, 8.0f);
	glm::vec4SIMD v3 = v1 + v2;

	bool end = true;
}

bool main_test()
{
	bool Result = true;

	Result = Result && glm::test::main_bug();
	assert(Result);
	Result = Result && glm::test::main_type_half();
	assert(Result);
	Result = Result && glm::test::main_img();
	assert(Result);

	return true;
}
/*
template<template <typename valType> genType>
valType templateTemplateParameter(genType const & v)
{
	valType Result = valType(0);
	for(typename gentype::size_type i = 0; i < genType::value_size(); ++i)
	{
		Result += v[i];
	}
	return Result;
}
*/
template<class T> 
class A1 
{
	int x;
};

template<template<class T> class U> 
class B1
{

};

//#include <glm/glm.hpp>
//void computeFaceNormals(mesh & Mesh)
//{
//	for(mesh::iteractor it = Mesh.Faces.begin(); it != Mesh.Faces.end(); ++it)
//	{
//		glm::vec3 const & a = Mesh.Points[it->Vertices[0].Index].Position;
//		glm::vec3 const & b = Mesh.Points[it->Vertices[1].Index].Position;
//		glm::vec3 const & c = Mesh.Points[it->Vertices[2].Index].Position;
//		it->Normal = glm::normalize(glm::cross(c - a, b - a));
//	}
//}

template <std::size_t N, typename T>
struct vecBase
{
	typedef T value_type;
	typedef std::size_t size_type;
	static size_type const value_size;
};

template <std::size_t N, typename T>
typename vecBase<N, T>::size_type const vecBase<N, T>::value_size = N;

template <std::size_t N, typename T>
struct vecDEV : public vecBase<N, T>
{
	typedef T value_type;
};

template <typename T>
struct vecDEV<4, T> : public vecBase<4, T>
{
	value_type Data[value_size];
};

void main_core_func_integer()
{
	std::size_t ValueA = 1;
	std::size_t ValueB = glm::bitfieldReverse(ValueA);
	assert(ValueA != ValueB);
	std::size_t ValueC = glm::bitfieldReverse(ValueB);
	assert(ValueA == ValueC);

	bool stop = 76;
}

int main() 
{
	float MuxesA = glm::log2(136.f) * 136.f * 2.f;
	float MuxesB = glm::log2(120.f) * 120.f * 2.f;
	float Ratio = MuxesB * 100 / MuxesA;

	B1<A1> c;	
	//templateTemplateParameter<glm::detail::tvec3>();
	main_core_func_integer();
	
	assert(main_test());

	glm::test::main_core_func_common();
	glm::test::main_core_func_exponential();
	glm::test::main_core_func_geometric();
	glm::test::main_core_func_matrix();
	glm::test::main_core_func_noise();
	glm::test::main_core_func_trigonometric();
	glm::test::main_core_func_vector_relational();
	glm::test::main_gtx_intesect();

	//test_sse_vec4();
	//test_sse_mat4();
	test_vec4_simd();

	glm::quat q;
	glm::vec3 v;

	glm::vec3 w = glm::cross(q, v);
	glm::vec3 u = glm::cross(v, q);

	unsigned int base, base1, base2, base3, base4, base5;
	unsigned int clock;

	// Warm up cpuid & rdtsc

	/*

	*/
/*
	__asm
	{
		pushad;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base1, eax;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base2, eax;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base3, eax;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base4, eax;

		cpuid;
		rdtsc;
		mov		clock, eax;
		cpuid;
		rdtsc;
		sub		eax, clock;
		mov		base5, eax;

		popad;
	}
*/
	base = base1;
	if (base > base2)
		base = base2;
	if (base > base3)
		base = base3;
	if (base > base4)
		base = base4;
	if (base > base5)
		base = base5;

	{
		const unsigned size = 16;
		unsigned cycles[size];
		for(unsigned i = 0; i < size; ++i)
			cycles[i] = test_mat4_translate();//test_sse();

		// By the second or third run, both data and instruction
		// cache effects should have been eliminated, and results
		// will be consistent.

		printf("SSE\nBase : %d\n", base);
		printf("Cycle counts:\n");
		for(unsigned i = 0; i < size; ++i)
			printf("%d\n", cycles[i] - base);
	}

	glm::mat4 m(1.0);
	glm::mat4 m1 = m + 2.0f;

	system("pause");
}

//#include <glm/glm.hpp> // vec3, vec4, ivec4, mat4
//#include <glm/gtc/matrix_projection.hpp> // glm::perspective
//#include <glm/gtc/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale
//#include <glm/gtx/type_ptr.hpp> // glm::value_ptr
//
//glm::vec4 const ClearColor(glm::vec3(0.0f), 1.0f);
//glm::ivec4 const Viewport(0, 0, 640, 480);
//
//void render()
//{
//	glClearColor(ClearColor.r, ClearColor.g, ClearColor.b, ClearColor.a);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glViewport(Viewport.x, Viewport.y, Viewport.z, Viewport.w);
//
//	glm::mat4 Projection = glm::perspective(45.0f, 4.0f / 3.0f, 0.1f, 100.0f);
//	glm::mat4 ViewTranslate = glm::translate(glm::vec3(0.0f, 0.0f, -4.0f));
//	glm::mat4 ViewRotateX = glm::rotate(ViewTranslate, 45.0f, glm::vec3(-1.0f, 0.0f, 0.0f));
//	glm::mat4 View = glm::rotate(ViewRotateX, 45.0f, glm::vec3(0.0f, 1.0f, 0.0f));
//	glm::mat4 Model = glm::scale(glm::mat4(1.0f), glm::vec3(0.5f));
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadMatrixf(glm::value_ptr(Projection));
//
//	glMatrixMode(GL_MODELVIEW);
//	glLoadMatrixf(glm::value_ptr(View * Model));
//}
