#ifndef GLM_SSE_VEC4_H
#define GLM_SSE_VEC4_H

#include <xmmintrin.h>
#include <emmintrin.h>

namespace glm{
namespace sse{

#define GLM_SHUFFLE(fp3,fp2,fp1,fp0) (((fp3) << 6) | ((fp2) << 4) | ((fp1) << 2) | ((fp0)))

const __m128 zero = _mm_setzero_ps();
const __m128 one = _mm_set_ps1(1.0f);
const __m128 two = _mm_set_ps1(2.0f);
const __m128 three = _mm_set_ps1(3.0f);
const __m128 pouet = _mm_set_ps(2.0f, 4.0f, 6.0f, 8.0f);

#define GLM_ALIGN(x) __declspec(align(x))

GLM_ALIGN(16) struct vec4
{
	enum ENoInit
	{
		NO_INIT
	};

	union
	{
		__m128 data;
		struct{float x, y, z, w;};
		float array[4];
	};

	vec4();
	vec4(ENoInit NoInit);
	vec4(float s);
	vec4(float x, float y, float z, float w);
	vec4(float v[4]);

	vec4& operator+=(const float s);

	vec4& operator+=(const vec4& v);
	vec4& operator*=(const vec4& v);

	vec4& operator++();
};

__forceinline vec4::vec4()
{
	void* address = this;

	__asm
	{
		mov		eax, [address]
		xorps	xmm0, xmm0
		movaps	[eax], xmm0
	}
}

__forceinline vec4::vec4(ENoInit NoInit)
{}

__forceinline vec4::vec4(float s)
{
	void* address = this;

	__asm
	{
		mov		esi, [address]
		movss	xmm0, s
		shufps	xmm0, xmm0, 0	
		movaps	[esi], xmm0
	}
}

__forceinline vec4::vec4(float x, float y, float z, float w)
{
	void* address = this;

	__asm
	{
		mov			esi, address
		movss		xmm0, x
		movss		xmm1, y
		movss		xmm2, z
		movss		xmm3, w
		unpcklps	xmm0, xmm1
		unpcklps	xmm2, xmm3
		movlhps		xmm0, xmm2
		movaps		[esi], xmm0
	}
}

__forceinline vec4::vec4(float v[4])
{
	void* address = this;

	__asm
	{
		mov		eax, [address]
		mov		ebx, [v]
		movups	xmm0, [ebx]
		movaps	[eax], xmm0
	}
}

__forceinline vec4& vec4::operator+=(const float s)
{
	void* address = this;

	__asm
	{
		mov		eax, [address]
		movss	xmm1, s
		shufps	xmm1, xmm1, 0
		movaps	xmm0, [eax]
		addps	xmm0, xmm1	
		movaps	[eax], xmm0
	}

	return *this;	
}

__forceinline vec4& vec4::operator+=(const vec4& v)
{
	void* address = this;

	__asm
	{
		mov		eax, [address]
		mov		ebx, [v]
		movaps	xmm0, [eax]
		addps	xmm0, [ebx]	
		movaps	[eax], xmm0
	}

	return *this;
}

__forceinline vec4& vec4::operator*=(const vec4& v)
{
	void* address = this;

	__asm
	{
		mov		esi, address
		mov		edi, v
		movaps	xmm0, esi
		mulps	xmm0, edi	
		movaps	[esi], xmm0
	}

	return *this;
}

__forceinline vec4& vec4::operator++()
{
	void* address = this;

	__asm
	{
		mov		eax, [address]
		movaps	xmm0, [eax]
		addps	xmm0, one	
		movaps	[eax], xmm0
	}

	return *this;  
}

__forceinline const vec4 operator- (const vec4& v)
{
	vec4 result(vec4::NO_INIT);

	__asm
	{
		mov		esi, v
		xorps	xmm0, xmm0
		subps	xmm0, [esi]	
		movaps	result, xmm0
	}

	result;
}

__forceinline vec4 cross(const vec4& v1, const vec4& v2)
{
	vec4 result(vec4::NO_INIT);

	__asm
	{
		mov		esi, v1
		mov		edi, v2
		movaps	xmm0, [esi]
		movaps	xmm1, [edi]
		shufps	xmm0, xmm0, _MM_SHUFFLE(3, 0, 2, 1)
		movaps	xmm2, xmm0
		shufps	xmm0, xmm0, _MM_SHUFFLE(3, 1, 0, 2)
		shufps	xmm1, xmm1, _MM_SHUFFLE(3, 0, 2, 1)
		movaps	xmm3, xmm1
		shufps	xmm1, xmm1, _MM_SHUFFLE(3, 1, 0, 2)
		mulps	xmm0, xmm3
		mulps	xmm1, xmm2
		subps	xmm0, xmm1
		movaps	result, xmm0
	}

	return result;
}

__forceinline float dot(const vec4& v1, const vec4& v2)
{
	float result;

	// All component processed
	//__asm
	//{
	//	mov		esi, v1
	//	mov		edi, v2
	//	movaps	xmm0, [esi]
	//	movaps	xmm1, [edi]
	//	mulps	xmm0, xmm1
	//	movaps	xmm1, xmm0
	//	shufps	xmm0, xmm0, _MM_SHUFFLE(2, 3, 0, 1)
	//	addps	xmm0, xmm1
	//	movaps	xmm1, xmm0
	//	shufps	xmm0, xmm0, _MM_SHUFFLE(0, 1, 2, 3)
	//	addps	xmm0, xmm1
	//	movss	result, xmm0
	//}

	// SSE
	__asm
	{
		mov		esi, v1
		mov		edi, v2
		movaps	xmm0, [esi]		// w1, z1, y1, x1
		mulps	xmm0, [edi]		// w1 * w2, z1 * z2, y1 * y2, x1 * x2
		movhlps	xmm1, xmm0		// XX, XX, w1 * w2, z1 * z2
		addps	xmm0, xmm1		// XX, XX, y1 * y2 + w1 * w2, x1 * x2 + z1 * z2
		pshufd	xmm1, xmm0, 1	// XX, XX, XX, y1 * y2 + w1 * w2
		addss	xmm0, xmm1		// y1 * y2 + w1 * w2 + x1 * x2 + z1 * z2
		movss	result, xmm0
	}

	// SSE 3

	// SSE 4.1
	//__asm
	//{
	//	mov		esi, v1
	//	mov		edi, v2
	//	movaps	xmm0, [esi]
	//	dpps	xmm0, [edi]
	//	movss	result, xmm0
	//}

	return result;
}

__forceinline vec4 normalize(const vec4& v)
{
	vec4 result(vec4::NO_INIT);

	__asm
	{
		mov		esi, v
		movaps	xmm2, [esi]
		movaps	xmm0, xmm2
		mulps	xmm0, xmm0
		movaps	xmm1, xmm0
		shufps	xmm0, xmm0, _MM_SHUFFLE(2, 3, 0, 1)
		addps	xmm0, xmm1
		movaps	xmm1, xmm0
		shufps	xmm0, xmm0, _MM_SHUFFLE(0, 1, 2, 3)
		addps	xmm0, xmm1
		rsqrtps	xmm0, xmm0
		mulps	xmm2, xmm0
		movaps	result, xmm2
	}

	return result;
}

}//namespace sse
}//namespace glm

void test_sse_vec4();

#endif//GLM_SSE_VEC4_H
