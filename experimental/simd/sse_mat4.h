#ifdef GLM_SSE_MAT4_H
#define GLM_SSE_MAT4_H

#include <xmmintrin.h>
#include <emmintrin.h>
#include "sse_vec4.h"

namespace glm{
namespace sse{

const __m128i maskX = _mm_set_epi32(0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
const __m128i maskY = _mm_set_epi32(0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000);
const __m128i maskZ = _mm_set_epi32(0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000);
const __m128i maskW = _mm_set_epi32(0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);

GLM_ALIGN(16) struct mat4
{
	enum ENoInit
	{
		NO_INIT
	};

	union
	{
		__m128 data[4];
	};

	mat4();
	mat4(ENoInit NoInit);
	mat4(float s);
	mat4(const vec4& x, const vec4& y, const vec4& z, const vec4& w);

	mat4& operator+=(const float s);

	mat4& operator+=(const mat4& m);
	mat4& operator*=(const mat4& m);

	void mat4::transpose();
};

__forceinline mat4::mat4()
{
	void* address = this;

	__asm
	{
		mov		esi, address
		xorps	xmm0, xmm0
		movaps	[esi+0x00], xmm0
		movaps	[esi+0x10], xmm0
		movaps	[esi+0x20], xmm0
		movaps	[esi+0x30], xmm0
	}
}

__forceinline mat4::mat4(ENoInit NoInit)
{}

__forceinline mat4::mat4(float s)
{
	void* address = this;

	__asm
	{
		mov		esi, address
		movss	xmm0, s
		shufps	xmm0, xmm0, 0	
		xorps	xmm1, xmm1
		movaps	[esi+0x00], xmm1
		movaps	[esi+0x10], xmm1
		movaps	[esi+0x20], xmm1
		movaps	[esi+0x30], xmm1
		movss	[esi+0x00], xmm0
		movss	[esi+0x14], xmm0
		movss	[esi+0x28], xmm0
		movss	[esi+0x3C], xmm0
	}
}

__forceinline mat4::mat4(const vec4& x, const vec4& y, const vec4& z, const vec4& w)
{
	void* address = this;

	__asm
	{
		mov		esi, address

		mov		edi, x
		movaps	xmm0, [edi]
		movaps	[esi+0x00], xmm0

		mov		edi, y
		movaps	xmm0, [edi]
		movaps	[esi+0x10], xmm0

		mov		edi, z
		movaps	xmm0, [edi]
		movaps	[esi+0x20], xmm0

		mov		edi, w
		movaps	xmm0, [edi]
		movaps	[esi+0x30], xmm0
	}
}

__forceinline mat4 operator+(const mat4& m, float s)
{
	__asm
	{
		movss	xmm1, s
		shufps	xmm1, xmm1, 0
		mov		esi, [m]

		movaps	xmm0, [esi+0x00]
		addps	xmm0, xmm1
		movaps	[esi+0x00], xmm0

		movaps	xmm0, [esi+0x10]
		addps	xmm0, xmm1
		movaps	[esi+0x10], xmm0

		movaps	xmm0, [esi+0x20]
		addps	xmm0, xmm1
		movaps	[esi+0x20], xmm0

		movaps	xmm0, [esi+0x30]
		addps	xmm0, xmm1
		movaps	[esi+0x30], xmm0
	}
}

__forceinline mat4 operator+(float s, const mat4& m)
{
	return m + s;
}

__forceinline mat4 operator-(const mat4& m, float s)
{
	__asm
	{
		movss	xmm1, s
		shufps	xmm1, xmm1, 0
		mov		esi, [m]

		movaps	xmm0, [esi+0x00]
		subps	xmm0, xmm1
		movaps	[esi+0x00], xmm0

		movaps	xmm0, [esi+0x10]
		subps	xmm0, xmm1
		movaps	[esi+0x10], xmm0

		movaps	xmm0, [esi+0x20]
		subps	xmm0, xmm1
		movaps	[esi+0x20], xmm0

		movaps	xmm0, [esi+0x30]
		subps	xmm0, xmm1
		movaps	[esi+0x30], xmm0
	}
}

__forceinline mat4 operator-(float s, const mat4& m)
{
	__asm
	{
		movss	xmm2, s
		shufps	xmm2, xmm2, 0
		mov		esi, [m]

		movaps	xmm0, [esi+0x00]
		movaps	xmm1, xmm2
		subps	xmm1, xmm0
		movaps	[esi+0x00], xmm1

		movaps	xmm0, [esi+0x10]
		movaps	xmm1, xmm2
		subps	xmm1, xmm0
		movaps	[esi+0x10], xmm1

		movaps	xmm0, [esi+0x20]
		movaps	xmm1, xmm2
		subps	xmm1, xmm0
		movaps	[esi+0x20], xmm1

		movaps	xmm0, [esi+0x30]
		movaps	xmm1, xmm2
		subps	xmm1, xmm0
		movaps	[esi+0x30], xmm1
	}
}

__forceinline mat4 operator*(const mat4& m, float s)
{
	__asm
	{
		movss	xmm1, s
		shufps	xmm1, xmm1, 0
		mov		esi, [m]

		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm1
		movaps	[esi+0x00], xmm0

		movaps	xmm0, [esi+0x10]
		mulps	xmm0, xmm1
		movaps	[esi+0x10], xmm0

		movaps	xmm0, [esi+0x20]
		mulps	xmm0, xmm1
		movaps	[esi+0x20], xmm0

		movaps	xmm0, [esi+0x30]
		mulps	xmm0, xmm1
		movaps	[esi+0x30], xmm0
	}
}

__forceinline mat4 operator*(float s, const mat4& m)
{
	return m * s;
}

__forceinline mat4 operator/(const mat4& m, float s)
{
	__asm
	{
		movss	xmm1, s
		shufps	xmm1, xmm1, 0
		mov		esi, [m]

		movaps	xmm0, [esi+0x00]
		divps	xmm0, xmm1
		movaps	[esi+0x00], xmm0

		movaps	xmm0, [esi+0x10]
		divps	xmm0, xmm1
		movaps	[esi+0x10], xmm0

		movaps	xmm0, [esi+0x20]
		divps	xmm0, xmm1
		movaps	[esi+0x20], xmm0

		movaps	xmm0, [esi+0x30]
		divps	xmm0, xmm1
		movaps	[esi+0x30], xmm0
	}
}

__forceinline mat4 operator/(float s, const mat4& m)
{
	__asm
	{
		movss	xmm2, s
		shufps	xmm2, xmm2, 0
		mov		esi, [m]

		movaps	xmm0, [esi+0x00]
		movaps	xmm1, xmm2
		divps	xmm1, xmm0
		movaps	[esi+0x00], xmm1

		movaps	xmm0, [esi+0x10]
		movaps	xmm1, xmm2
		divps	xmm1, xmm0
		movaps	[esi+0x10], xmm1

		movaps	xmm0, [esi+0x20]
		movaps	xmm1, xmm2
		divps	xmm1, xmm0
		movaps	[esi+0x20], xmm1

		movaps	xmm0, [esi+0x30]
		movaps	xmm1, xmm2
		divps	xmm1, xmm0
		movaps	[esi+0x30], xmm1
	}
}

__forceinline vec4 operator*(const mat4& m, const vec4& v)
{
	vec4 result(vec4::NO_INIT);

	// SSE2
	__asm
	{
		mov		esi, [m]
		mov		edi, [v]
		movaps	xmm4, [edi]

		movaps	xmm0, [esi+0x00]
		movaps	xmm1, [esi+0x10]
		movaps	xmm2, [esi+0x20]
		movaps	xmm3, [esi+0x30]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		mulps	xmm0, xmm5
		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		mulps	xmm1, xmm5
		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		mulps	xmm2, xmm5
		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	result, xmm0
	}

	return result;
}

__forceinline vec4 operator*(const vec4& v, const mat4& m)
{
	vec4 result(vec4::NO_INIT);

	// SSE1
	__asm
	{
		mov		esi, [m]
		mov		edi, [v]
		movaps	xmm4, [edi]			// xmm4: v[3], v[2], v[1], v[0]

		movaps	xmm0, [esi+0x00]	// xmm0: m[0][3], m[0][2], m[0][1], m[0][0]
		movaps	xmm1, [esi+0x10]	// xmm1: m[1][3], m[1][2], m[1][1], m[1][0]
		movaps	xmm2, [esi+0x20]	// xmm2: m[2][3], m[2][2], m[2][1], m[2][0]
		movaps	xmm3, [esi+0x30]	// xmm3: m[3][3], m[3][2], m[3][1], m[3][0]

		mulps	xmm0, xmm4			// xmm0: m[0][3]*v[3], m[0][2]*v[2], m[0][1]*v[1], m[0][0]*v[0]
		mulps	xmm1, xmm4			// xmm1: m[1][3]*v[3], m[1][2]*v[2], m[1][1]*v[1], m[1][0]*v[0]
		mulps	xmm2, xmm4			// xmm2: m[2][3]*v[3], m[2][2]*v[2], m[2][1]*v[1], m[2][0]*v[0]
		mulps	xmm3, xmm4			// xmm2: m[3][3]*v[3], m[3][2]*v[2], m[3][1]*v[1], m[3][0]*v[0]

		movaps	xmm4, xmm0			// xmm4: m[0][3]*v[3], m[0][2]*v[2], m[0][1]*v[1], m[0][0]*v[0]
		movhlps xmm0, xmm1			// xmm0: m[0][3]*v[3], m[0][2]*v[2], m[1][3]*v[3], m[1][2]*v[2]
		movlhps xmm1, xmm4			// xmm1: m[0][1]*v[1], m[0][0]*v[0], m[1][1]*v[1], m[1][0]*v[0]
		addps	xmm0, xmm1

		movaps	xmm5, xmm2
		movhlps xmm2, xmm3
		movlhps xmm3, xmm5
		addps	xmm2, xmm3

		movaps	xmm1, xmm0
		shufps	xmm0, xmm2, _MM_SHUFFLE(0, 2, 0, 2) //_MM_SHUFFLE(2, 0, 2, 0)
		shufps	xmm1, xmm2, _MM_SHUFFLE(1, 3, 1, 3) //_MM_SHUFFLE(3, 1, 3, 1)
		addps	xmm0, xmm1

		movaps	result, xmm0
	}

	return result;
}

// 289000
/*
inline mat4 operator*(const mat4& m, const mat4& n)
{
	mat4 result;
	void* adresse = &result;

	// SSE2
	__asm
	{
		mov		esi, m
		mov		edi, n
		mov		eax, adresse
		mov		ecx, 0x10
		mov		edx, 0x04

	next:
		movaps	xmm7, [edi]

		movaps	xmm0, [esi+0x00]
		movaps	xmm1, [esi+0x10]
		movaps	xmm2, [esi+0x20]
		movaps	xmm3, [esi+0x30]

		pshufd	xmm4, xmm7, _MM_SHUFFLE(0, 0, 0, 0)
		mulps	xmm0, xmm4
		
		pshufd	xmm4, xmm7, _MM_SHUFFLE(1, 1, 1, 1)
		mulps	xmm1, xmm4

		pshufd	xmm4, xmm7, _MM_SHUFFLE(2, 2, 2, 2)
		mulps	xmm2, xmm4

		pshufd	xmm4, xmm7, _MM_SHUFFLE(3, 3, 3, 3)
		mulps	xmm3, xmm4

		addps	xmm2, xmm3
		addps	xmm0, xmm1
		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, ecx
		add		eax, ecx
		dec		edx
		jnz		next
	}

	return result;
}
*/

// 288000
/*
inline mat4 operator*(const mat4& m, const mat4& n)
{
	mat4 result;
	void* adresse = &result;

	// SSE2
	__asm
	{
		mov		esi, m
		mov		edi, n
		mov		eax, adresse
		mov		ecx, 0x10
		mov		edx, 0x04

	next:
		movaps	xmm7, [edi]

		movaps	xmm0, [esi+0x00]
		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		mulps	xmm0, xmm5

		movaps	xmm1, [esi+0x10]
		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		mulps	xmm1, xmm5

		movaps	xmm2, [esi+0x20]
		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		mulps	xmm2, xmm5

		movaps	xmm3, [esi+0x30]
		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, ecx
		add		eax, ecx
		dec		edx
		jnz		next
	}

	return result;
}
*/
/*
// 290000
inline mat4 operator*(const mat4& m, const mat4& n)
{
	mat4 result;
	void* adresse = &result;

	// SSE2
	__asm
	{
		mov		esi, m
		mov		edi, n
		mov		eax, adresse
		mov		ecx, 0x10
		mov		edx, 0x04

		movaps	xmm7, [edi]

	next:
		pshufd	xmm4, xmm7, _MM_SHUFFLE(0, 0, 0, 0)
		pshufd	xmm5, xmm7, _MM_SHUFFLE(1, 1, 1, 1)
		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm4
		movaps	xmm1, [esi+0x10]
		mulps	xmm1, xmm5
		addps	xmm0, xmm1

		pshufd	xmm4, xmm7, _MM_SHUFFLE(2, 2, 2, 2)
		pshufd	xmm5, xmm7, _MM_SHUFFLE(3, 3, 3, 3)
		movaps	xmm2, [esi+0x20]
		mulps	xmm2, xmm4
		movaps	xmm3, [esi+0x30]
		mulps	xmm3, xmm5
		addps	xmm2, xmm3

		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, ecx
		add		eax, ecx
		dec		edx
		jnz		next
	}

	return result;
}
*/

/*
// 295000
inline mat4 operator*(const mat4& m, const mat4& n)
{
	mat4 result;
	void* adresse = &result;

	// SSE2
	__asm
	{
		mov		esi, m
		mov		edi, n
		mov		eax, adresse
		mov		ecx, 0x10
		mov		edx, 0x04

		movaps	xmm7, [edi]

	next:
		movaps	xmm0, [esi+0x00]
		movaps	xmm1, [esi+0x10]
		movaps	xmm2, [esi+0x20]
		movaps	xmm3, [esi+0x30]
		
		pshufd	xmm4, xmm7, _MM_SHUFFLE(0, 0, 0, 0)
		mulps	xmm0, xmm4
		pshufd	xmm5, xmm7, _MM_SHUFFLE(1, 1, 1, 1)
		mulps	xmm1, xmm5
		addps	xmm0, xmm1

		pshufd	xmm4, xmm7, _MM_SHUFFLE(2, 2, 2, 2)
		mulps	xmm2, xmm4
		pshufd	xmm5, xmm7, _MM_SHUFFLE(3, 3, 3, 3)
		mulps	xmm3, xmm5
		addps	xmm2, xmm3

		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, ecx
		add		eax, ecx
		dec		edx
		jnz		next
	}

	return result;
}
*/

/*
// 290000
inline mat4 operator*(const mat4& m, const mat4& n)
{
	mat4 result;
	void* adresse = &result;

	// SSE2
	__asm
	{
		mov		esi, m
		mov		edi, n
		mov		eax, adresse
		mov		ecx, 0x10
		mov		edx, 0x04

		movaps	xmm7, [edi]

	next:
		movaps	xmm0, [esi+0x00]
		movaps	xmm1, [esi+0x10]
		movaps	xmm2, [esi+0x20]
		movaps	xmm3, [esi+0x30]
		
		pshufd	xmm4, xmm7, _MM_SHUFFLE(0, 0, 0, 0)
		pshufd	xmm5, xmm7, _MM_SHUFFLE(1, 1, 1, 1)
		mulps	xmm0, xmm4
		mulps	xmm1, xmm5
		addps	xmm0, xmm1

		pshufd	xmm4, xmm7, _MM_SHUFFLE(2, 2, 2, 2)
		pshufd	xmm5, xmm7, _MM_SHUFFLE(3, 3, 3, 3)
		mulps	xmm2, xmm4
		mulps	xmm3, xmm5
		addps	xmm2, xmm3

		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, ecx
		add		eax, ecx
		dec		edx
		jnz		next
	}

	return result;
}
*/

/*
// 288000
inline mat4 operator*(const mat4& m, const mat4& n)
{
	mat4 result;
	void* adresse = &result;

	// SSE2
	__asm
	{
		mov		esi, m
		mov		edi, n
		mov		eax, adresse
		mov		ecx, 0x10
		mov		edx, 0x04

		movaps	xmm7, [edi]

	next:
		movaps	xmm0, [esi+0x00]
		movaps	xmm1, [esi+0x10]
		movaps	xmm2, [esi+0x20]
		movaps	xmm3, [esi+0x30]
		
		pshufd	xmm4, xmm7, _MM_SHUFFLE(0, 0, 0, 0)
		pshufd	xmm5, xmm7, _MM_SHUFFLE(1, 1, 1, 1)
		mulps	xmm0, xmm4
		mulps	xmm1, xmm5
		addps	xmm0, xmm1

		pshufd	xmm4, xmm7, _MM_SHUFFLE(2, 2, 2, 2)
		pshufd	xmm5, xmm7, _MM_SHUFFLE(3, 3, 3, 3)
		mulps	xmm2, xmm4
		mulps	xmm3, xmm5
		addps	xmm2, xmm3

		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, ecx
		add		eax, ecx
		dec		edx
		jnz		next
	}

	return result;
}
*/

/*
// 298000
inline mat4 operator*(const mat4& m, const mat4& n)
{
	mat4 result;
	void* adresse = &result;

	const int int0x10 = 0x10;

	// SSE2
	__asm
	{
		mov		esi, m
		mov		edi, n
		mov		eax, adresse
		mov		edx, int0x10

		// First column
		movaps	xmm4, [edi]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		movaps	xmm1, [esi+0x10]
		mulps	xmm1, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		movaps	xmm2, [esi+0x20]
		mulps	xmm2, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		movaps	xmm3, [esi+0x30]
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, edx
		add		eax, edx

		// Second column
		movaps	xmm4, [edi]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		movaps	xmm1, [esi+0x10]
		mulps	xmm1, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		movaps	xmm2, [esi+0x20]
		mulps	xmm2, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		movaps	xmm3, [esi+0x30]
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, edx
		add		eax, edx

		// Third column
		movaps	xmm4, [edi]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		movaps	xmm1, [esi+0x10]
		mulps	xmm1, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		movaps	xmm2, [esi+0x20]
		mulps	xmm2, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		movaps	xmm3, [esi+0x30]
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	[eax], xmm0

		add		edi, edx
		add		eax, edx

		// Forth column
		movaps	xmm4, [edi]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		movaps	xmm1, [esi+0x10]
		mulps	xmm1, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		movaps	xmm2, [esi+0x20]
		mulps	xmm2, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		movaps	xmm3, [esi+0x30]
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	[eax], xmm0
	}

	return result;
}
*/

// 294000
__forceinline mat4 operator*(const mat4& m, const mat4& n)
{
	mat4 result(mat4::NO_INIT);

	// SSE2
	__asm
	{
		mov		esi, m
		mov		edi, n

		// First column
		movaps	xmm4, [edi+0x00]

		movaps	xmm0, [esi+0x00]
		movaps	xmm1, [esi+0x10]
		movaps	xmm2, [esi+0x20]
		movaps	xmm3, [esi+0x30]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		mulps	xmm0, xmm5
		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		mulps	xmm1, xmm5
		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		mulps	xmm2, xmm5
		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	result[0x00], xmm0

		// Second column
		movaps	xmm4, [edi+0x10]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		movaps	xmm1, [esi+0x10]
		mulps	xmm1, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		movaps	xmm2, [esi+0x20]
		mulps	xmm2, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		movaps	xmm3, [esi+0x30]
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	result[0x10], xmm0

		// Third column
		movaps	xmm4, [edi+0x20]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		movaps	xmm1, [esi+0x10]
		mulps	xmm1, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		movaps	xmm2, [esi+0x20]
		mulps	xmm2, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		movaps	xmm3, [esi+0x30]
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	result[0x20], xmm0

		// Forth column
		movaps	xmm4, [edi+0x30]

		pshufd	xmm5, xmm4, _MM_SHUFFLE(0, 0, 0, 0)
		movaps	xmm0, [esi+0x00]
		mulps	xmm0, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(1, 1, 1, 1)
		movaps	xmm1, [esi+0x10]
		mulps	xmm1, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(2, 2, 2, 2)
		movaps	xmm2, [esi+0x20]
		mulps	xmm2, xmm5

		pshufd	xmm5, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
		movaps	xmm3, [esi+0x30]
		mulps	xmm3, xmm5

		addps	xmm0, xmm1
		addps	xmm2, xmm3
		addps	xmm0, xmm2

		movaps	result[0x30], xmm0
	}

	return result;
}

static const __m128 sign1010 = _mm_set_ps( 1.0f,-1.0f, 1.0f,-1.0f);
static const __m128 sign0101 = _mm_set_ps(-1.0f, 1.0f,-1.0f, 1.0f);
static const __m128i mask1010 = _mm_set_epi32(0x00000000, 0x80000000, 0x00000000, 0x80000000);
static const __m128i mask0101 = _mm_set_epi32(0x80000000, 0x00000000, 0x80000000, 0x00000000);

__forceinline mat4 inverse(const mat4& m)
{
	mat4 result(mat4::NO_INIT);

	vec4 m0a;
	vec4 m0b;
	vec4 m0c;

	vec4 m1a;
	vec4 m1b;
	vec4 m1c;

	vec4 m2a;
	vec4 m2b;
	vec4 m2c;

	vec4 m3a;
	vec4 m3b;
	vec4 m3c;

	__asm
	{
		mov			esi, m

		//////////////////////////////////////////////////////////////////////////////////////////////
		//R00 = +1 * m11*(m22*m33 - m32*m23) -1 * m12*(m23*m31 - m33*m21) +1 * m13*(m21*m32 - m31*m22)
		//R01 = -1 * m12*(m23*m30 - m33*m20) +1 * m13*(m20*m32 - m30*m22) -1 * m10*(m22*m33 - m32*m23)
		//R02 = +1 * m13*(m20*m31 - m30*m21) -1 * m10*(m21*m33 - m31*m23) +1 * m11*(m23*m30 - m33*m20)
		//R03 = -1 * m10*(m21*m32 - m31*m22) +1 * m11*(m22*m30 - m32*m20) -1 * m12*(m20*m31 - m30*m21)

		movaps		xmm6, [esi+20] // xmm6: m23, m22, m21, m20
		movaps		xmm7, [esi+30] // xmm7: m33, m32, m31, m30

		//////////////////////////////////////////////////////////////////////////////////////////////

		pshufd		xmm0, xmm6, _MM_SHUFFLE(1, 0, 3, 2) // xmm0: m21, m20, m23, m22 (movhlps optimization possible)
		pshufd		xmm1, xmm7, _MM_SHUFFLE(0, 3, 2, 1) // xmm1: m30, m33, m32, m31
		pshufd		xmm2, xmm6, _MM_SHUFFLE(0, 3, 2, 1) // xmm2: m20, m23, m22, m21
		pshufd		xmm3, xmm7, _MM_SHUFFLE(1, 0, 3, 2) // xmm3: m31, m30, m33, m32 (movhlps optimization possible)

		mulps		xmm0, xmm1 // xmm0: m21*m30, m20*m33, m23*m32, m22*m31
		mulps		xmm3, xmm2 // xmm2: m20*m31, m23*m30, m22*m33, m21*m32
		subps		xmm3, xmm0 // xmm2: m20*m31-m21*m30, m23*m30-m20*m33, m22*m33-m23*m32, m21*m32-m22*m31
		movaps		xmm4, xmm3 // xmm4: m20*m31-m21*m30, m23*m30-m20*m33, m22*m33-m23*m32, m21*m32-m22*m31

		//////////////////////////////////////////////////////////////////////////////////////////////

		pshufd		xmm0, xmm6, _MM_SHUFFLE(2, 1, 0, 3) // xmm0: m22, m21, m20, m23
		// Reuse xmm1: pshufd		xmm1, xmm7, _MM_SHUFFLE(0, 3, 2, 1) // xmm1: m30, m33, m32, m31
		// Reuse xmm2: pshufd		xmm2, xmm6, _MM_SHUFFLE(0, 3, 2, 1) // xmm2: m20, m23, m22, m21
		pshufd		xmm3, xmm7, _MM_SHUFFLE(2, 1, 0, 3) // xmm3: m32, m31, m30, m33

		mulps		xmm1, xmm0 // xmm1: m30*m22, m33*m21, m32*m20, m31*m23
		mulps		xmm2, xmm3 // xmm2: m20*m32, m23*m31, m22*m30, m21*m33
		subps		xmm1, xmm2 // xmm1: m30*m22-m20*m32, m33*m21-m23*m31, m32*m20-m22*m30, m31*m23-m21*m33
		movaps		xmm5, xmm2 // xmm5: m30*m22-m20*m32, m33*m21-m23*m31, m32*m20-m22*m30, m31*m23-m21*m33

		//////////////////////////////////////////////////////////////////////////////////////////////

		// Reuse xmm0: pshufd		xmm0, xmm6, _MM_SHUFFLE(2, 1, 0, 3) // xmm0: m22, m21, m20, m23
		pshufd		xmm1, xmm7, _MM_SHUFFLE(1, 0, 3, 2) // xmm1: m31, m30, m33, m32 (movhlps optimization possible)
		pshufd		xmm2, xmm6, _MM_SHUFFLE(1, 0, 3, 2) // xmm2: m21, m20, m23, m22 (movhlps optimization possible)
		// Reuse xmm3: pshufd		xmm3, xmm7, _MM_SHUFFLE(2, 1, 0, 3) // xmm3: m32, m31, m30, m33

		mulps		xmm0, xmm1 // xmm1: m22*m31, m21*m30, m20*m33, m23*m32
		mulps		xmm2, xmm3 // xmm2: m21*m32, m20*m31, m23*m30, m22*m33
		subps		xmm2, xmm0 // xmm2: m23*m32-m22*m33, m20*m33-m23*m30, m21*m30-m20*m31, m22*m31-m21*m32
		movaps		xmm6, xmm0 // xmm6: m23*m32-m22*m33, m20*m33-m23*m30, m21*m30-m20*m31, m22*m31-m21*m32

		//////////////////////////////////////////////////////////////////////////////////////////////

		movaps		xmm0, [esi+10] // m13, m12, m11, m10

		pshufd		xmm1, xmm0, _MM_SHUFFLE(2, 1, 0, 3)
		xorps		xmm1, mask1010 //-m12, m11,-m10, m13
		mulaps		xmm4, xmm1

		pshufd		xmm1, xmm0, _MM_SHUFFLE(1, 0, 3, 2) // (movhlps optimization possible)
		xorps		xmm1, mask0101 // m11,-m10, m13,-m12
		mulaps		xmm5, xmm1

		pshufd		xmm1, xmm0, _MM_SHUFFLE(0, 3, 2, 1)
		xorps		xmm1, mask1010 //-m10, m13,-m12, m10
		mulaps		xmm6, xmm1

		mulaps		xmm6, xmm5
		mulaps		xmm6, xmm4
		movaps		result[0x00], xmm6

		//////////////////////////////////////////////////////////////////////////////////////////////
		//R10 = -1 * m21*(m32*m03 – m02*m33) +1 * m22*(m33*m01 – m03*m31) –1 * m23*(m31*m02 – m01*m32)
		//R11 = +1 * m22*(m33*m00 – m03*m30) –1 * m23*(m30*m02 – m00*m32) +1 * m20*(m32*m03 – m02*m33)
		//R12 = -1 * m23*(m30*m01 – m00*m31) +1 * m20*(m31*m03 – m01*m33) -1 * m21*(m33*m00 – m03*m30)
		//R13 = +1 * m20*(m31*m02 – m01*m32) -1 * m21*(m32*m00 – m02*m30) +1 * m22*(m30*m01 – m00*m31)

		movaps		xmm6, [esi+00] // xmm6: m03, m02, m01, m00
		// Reuse xmm7 movaps		xmm7, [esi+30] // xmm7: m33, m32, m31, m30

		//////////////////////////////////////////////////////////////////////////////////////////////

		pshufd		xmm0, xmm6, _MM_SHUFFLE(0, 3, 2, 1) // xmm0: m00, m03, m02, m01 
		pshufd		xmm1, xmm7, _MM_SHUFFLE(1, 0, 3, 2) // xmm1: m31, m30, m33, m32 (movhlps optimization possible)
		pshufd		xmm2, xmm6, _MM_SHUFFLE(1, 0, 3, 2) // xmm2: m01, m00, m03, m02 (movhlps optimization possible)
		pshufd		xmm3, xmm7, _MM_SHUFFLE(0, 3, 2, 1) // xmm3: m30, m33, m32, m31 

		mulps		xmm0, xmm1 // xmm0: m31*m00, m30*m03, m33*m02, m32*m01
		mulps		xmm3, xmm2 // xmm3: m30*m01, m33*m00, m32*m03, m31*m02
		subps		xmm3, xmm0 // xmm3: m30*m01-m31*m00, m33*m00-m30*m03, m32*m03-m33*m02, m31*m02-m32*m01
		movaps		xmm4, xmm3 // xmm4: m30*m01-m31*m00, m33*m00-m30*m03, m32*m03-m33*m02, m31*m02-m32*m01

		//////////////////////////////////////////////////////////////////////////////////////////////

		// Reuse xmm0 pshufd		xmm0, xmm6, _MM_SHUFFLE(0, 3, 2, 1) // xmm0: m00, m03, m02, m01 
		pshufd		xmm1, xmm7, _MM_SHUFFLE(2, 1, 0, 3) // xmm1: m32, m31, m30, m33
		pshufd		xmm2, xmm6, _MM_SHUFFLE(2, 1, 0, 3) // xmm2: m02, m01, m00, m03 
		// Reuse xmm3 pshufd		xmm3, xmm7, _MM_SHUFFLE(0, 3, 2, 1) // xmm3: m30, m33, m32, m31 

		mulps		xmm0, xmm1 // xmm0: m00*m32, m03*m31, m02*m30, m01*m33 
		mulps		xmm3, xmm2 // xmm3: m30*m02, m33*m01, m32*m00, m31*m03
		subps		xmm0, xmm3 // xmm3: m00*m32-m30*m02, m03*m31-m33*m01, m02*m30-m32*m00, m01*m33-m31*m03
		movaps		xmm5, xmm0 // xmm4: m00*m32-m30*m02, m03*m31-m33*m01, m02*m30-m32*m00, m01*m33-m31*m03

		//////////////////////////////////////////////////////////////////////////////////////////////

		pshufd		xmm0, xmm6, _MM_SHUFFLE(3, 0, 3, 2) // xmm0: m01, m00, m03, m02 (movhlps optimization possible)
		// Reuse xmm1: pshufd		xmm1, xmm7, _MM_SHUFFLE(2, 1, 0, 3) // xmm1: m32, m31, m30, m33
		// Reuse xmm2: pshufd		xmm2, xmm6, _MM_SHUFFLE(2, 1, 0, 3) // xmm2: m02, m01, m00, m03 
		pshufd		xmm3, xmm7, _MM_SHUFFLE(3, 0, 3, 2) // xmm3: m31, m30, m33, m32 (movhlps optimization possible)

		mulps		xmm0, xmm1 // xmm0: m01*m32, m00*m31, m03*m30, m02*m33 
		mulps		xmm3, xmm2 // xmm3: m02*m31, m01*m30, m00*m33, m03*m32
		subps		xmm3, xmm0 // xmm3: m02*m31-m01*m32, m01*m30-m00*m31, m00*m33-m03*m30, m03*m32-m02*m33
		movaps		xmm6, xmm3 // xmm6: m02*m31-m01*m32, m01*m30-m00*m31, m00*m33-m03*m30, m03*m32-m02*m33

		//////////////////////////////////////////////////////////////////////////////////////////////

		movaps		xmm0, [esi+20] // m23, m22, m21, m20

		pshufd		xmm1, xmm0, _MM_SHUFFLE(2, 1, 0, 3)
		xorps		xmm1, mask0101 //-m22, m21,-m20, m23
		mulaps		xmm4, xmm1

		pshufd		xmm1, xmm0, _MM_SHUFFLE(1, 0, 3, 2) // (movhlps optimization possible)
		xorps		xmm1, mask1010 // m21,-m20, m23,-m22
		mulaps		xmm5, xmm1

		pshufd		xmm1, xmm0, _MM_SHUFFLE(0, 3, 2, 1)
		xorps		xmm1, mask0101 //-m20, m23,-m22, m21
		mulaps		xmm6, xmm1

		mulaps		xmm6, xmm5
		mulaps		xmm6, xmm4
		movaps		result[0x10], xmm6

		//////////////////////////////////////////////////////////////////////////////////////////////

		//R20 = +1 * m31*(m02*m13 - m12*m03) -1 * m32*(m03*m11 – m13*m01) +1 * m33*(m01*m12 - m11*m02)
		//R21 = -1 * m32*(m03*m10 - m13*m00) +1 * m33*(m00*m12 – m10*m02) -1 * m30*(m02*m13 - m12*m03)
		//R22 = +1 * m33*(m00*m11 - m10*m01) -1 * m30*(m01*m13 – m11*m03) +1 * m31*(m03*m10 - m13*m00)
		//R23 = -1 * m30*(m01*m12 - m11*m02) +1 * m31*(m02*m10 – m12*m00) -1 * m32*(m00*m11 - m10*m01)

		//Reuse xmm6: movaps		xmm6, [esi+00] // xmm6: m03, m02, m01, m00
		movaps		xmm7, [esi+10] // xmm7: m13, m12, m11, m10

		//////////////////////////////////////////////////////////////////////////////////////////////

		pshufd		xmm0, xmm6, _MM_SHUFFLE(1, 0, 3, 2) // xmm0: m11, m10, m13, m12 (movhlps optimization possible)
		pshufd		xmm1, xmm7, _MM_SHUFFLE(0, 3, 2, 1) // xmm1: m00, m03, m02, m01 
		pshufd		xmm2, xmm6, _MM_SHUFFLE(0, 3, 2, 1) // xmm2: m10, m13, m12, m11 
		pshufd		xmm3, xmm7, _MM_SHUFFLE(1, 0, 3, 2) // xmm3: m01, m00, m03, m02 (movhlps optimization possible)

		mulps		xmm0, xmm1 // xmm0: m11*m00, m10*m03, m13*m02, m12*m01
		mulps		xmm3, xmm2 // xmm3: m01*m10, m00*m13, m03*m12, m02*m11 
		subps		xmm3, xmm0 // xmm3: m11*m00-m01*m10, m10*m03-m00*m13, m13*m02-m03*m12, m12*m01-m02*m11
		movaps		xmm4, xmm3 // xmm4: m11*m00-m01*m10, m10*m03-m00*m13, m13*m02-m03*m12, m12*m01-m02*m11

		//////////////////////////////////////////////////////////////////////////////////////////////







		// Reuse xmm0 pshufd		xmm0, xmm6, _MM_SHUFFLE(0, 3, 2, 1) // xmm0: m00, m03, m02, m01 
		pshufd		xmm1, xmm7, _MM_SHUFFLE(2, 1, 0, 3) // xmm1: m32, m31, m30, m33
		pshufd		xmm2, xmm6, _MM_SHUFFLE(2, 1, 0, 3) // xmm2: m02, m01, m00, m03 
		// Reuse xmm3 pshufd		xmm3, xmm7, _MM_SHUFFLE(0, 3, 2, 1) // xmm3: m30, m33, m32, m31 

		mulps		xmm0, xmm1 // xmm0: m00*m32, m03*m31, m02*m30, m01*m33 
		mulps		xmm3, xmm2 // xmm3: m30*m02, m33*m01, m32*m00, m31*m03
		subps		xmm0, xmm3 // xmm3: m00*m32-m30*m02, m03*m31-m33*m01, m02*m30-m32*m00, m01*m33-m31*m03
		movaps		xmm5, xmm0 // xmm4: m00*m32-m30*m02, m03*m31-m33*m01, m02*m30-m32*m00, m01*m33-m31*m03

		//////////////////////////////////////////////////////////////////////////////////////////////

		pshufd		xmm0, xmm6, _MM_SHUFFLE(3, 0, 3, 2) // xmm0: m01, m00, m03, m02 (movhlps optimization possible)
		// Reuse xmm1: pshufd		xmm1, xmm7, _MM_SHUFFLE(2, 1, 0, 3) // xmm1: m32, m31, m30, m33
		// Reuse xmm2: pshufd		xmm2, xmm6, _MM_SHUFFLE(2, 1, 0, 3) // xmm2: m02, m01, m00, m03 
		pshufd		xmm3, xmm7, _MM_SHUFFLE(3, 0, 3, 2) // xmm3: m31, m30, m33, m32 (movhlps optimization possible)

		mulps		xmm0, xmm1 // xmm0: m01*m32, m00*m31, m03*m30, m02*m33 
		mulps		xmm3, xmm2 // xmm3: m02*m31, m01*m30, m00*m33, m03*m32
		subps		xmm3, xmm0 // xmm3: m02*m31-m01*m32, m01*m30-m00*m31, m00*m33-m03*m30, m03*m32-m02*m33
		movaps		xmm6, xmm3 // xmm6: m02*m31-m01*m32, m01*m30-m00*m31, m00*m33-m03*m30, m03*m32-m02*m33

		//////////////////////////////////////////////////////////////////////////////////////////////

		movaps		xmm0, [esi+20] // m23, m22, m21, m20

		pshufd		xmm1, xmm0, _MM_SHUFFLE(2, 1, 0, 3)
		xorps		xmm1, mask0101 //-m22, m21,-m20, m23
		mulaps		xmm4, xmm1

		pshufd		xmm1, xmm0, _MM_SHUFFLE(1, 0, 3, 2) // (movhlps optimization possible)
		xorps		xmm1, mask1010 // m21,-m20, m23,-m22
		mulaps		xmm5, xmm1

		pshufd		xmm1, xmm0, _MM_SHUFFLE(0, 3, 2, 1)
		xorps		xmm1, mask0101 //-m20, m23,-m22, m21
		mulaps		xmm6, xmm1

		mulaps		xmm6, xmm5
		mulaps		xmm6, xmm4
		movaps		result[0x10], xmm6

		//////////////////////////////////////////////////////////////////////////////////////////////


	}

	return result;
}

__forceinline mat4 transpose(const mat4& m)
{
	mat4 result(mat4::NO_INIT);

	__asm
	{
		mov			esi, m

		movaps		xmm4, [esi+0x00]
		movaps		xmm5, xmm4
		movaps		xmm6, [esi+0x10]

		unpcklps	xmm5, xmm6
		unpckhps	xmm4, xmm6
			
		movaps		xmm0, xmm5
		movhlps		xmm1, xmm5

		movaps		xmm2, xmm4
		movhlps		xmm3, xmm4

		movaps		xmm4, [esi+0x20]
		movaps		xmm5, xmm4
		movaps		xmm6, [esi+0x30]

		unpcklps	xmm5, xmm6
		unpckhps	xmm4, xmm6

		movlhps		xmm0, xmm5
		movlhps		xmm2, xmm4

		movhlps		xmm7, xmm5
		movhlps		xmm6, xmm4

		movlhps		xmm1, xmm7
		movlhps		xmm3, xmm6

		movaps		result[0x00], xmm0
		movaps		result[0x10], xmm1
		movaps		result[0x20], xmm2
		movaps		result[0x30], xmm3
	}

	return result;
}

__forceinline void mat4::transpose()
{
	void* address = this;

	__asm
	{
		mov			esi, address

		movaps		xmm4, [esi+0x00]
		movaps		xmm6, [esi+0x10]
		movaps		xmm5, xmm4

		unpcklps	xmm5, xmm6
		movaps		xmm0, xmm5
		movhlps		xmm1, xmm5

		unpckhps	xmm4, xmm6
		movaps		xmm2, xmm4
		movhlps		xmm3, xmm4

		movaps		xmm4, [esi+0x20]
		movaps		xmm6, [esi+0x30]
		movaps		xmm5, xmm4

		unpcklps	xmm5, xmm6
		movlhps		xmm0, xmm5
		movhlps		xmm2, xmm5
		movlhps		xmm1, xmm5

		unpckhps	xmm4, xmm6
		movlhps		xmm2, xmm4
		movhlps		xmm4, xmm4
		movlhps		xmm3, xmm4

		movaps		[esi+0x00], xmm0
		movaps		[esi+0x10], xmm1
		movaps		[esi+0x20], xmm2
		movaps		[esi+0x30], xmm3
	}
}


/*
inline mat4 transpose(const mat4& m)
{
	mat4 result;

	__asm
	{
		mov			esi, m

		movaps		xmm4, [esi+0x00]
		movaps		xmm5, xmm4
		movaps		xmm6, [esi+0x10]

		unpcklps	xmm5, xmm6
		unpckhps	xmm4, xmm6
			
		movaps		xmm0, xmm5
		movhlps		xmm1, xmm5

		movaps		xmm2, xmm4
		movhlps		xmm3, xmm4

		movaps		xmm4, [esi+0x20]
		movaps		xmm5, xmm4
		movaps		xmm6, [esi+0x30]

		unpcklps	xmm5, xmm6
		unpckhps	xmm4, xmm6

		movlhps		xmm0, xmm5
		movhlps		xmm7, xmm5
		movlhps		xmm1, xmm7

		movlhps		xmm2, xmm4
		movhlps		xmm6, xmm4
		movlhps		xmm3, xmm6

		movaps		result[0x00], xmm0
		movaps		result[0x10], xmm1
		movaps		result[0x20], xmm2
		movaps		result[0x30], xmm3
	}

	return result;
}
*/
}//namespace sse
}//namespace glm

void test_sse_mat4();

#endif//GLM_SSE_MAT4_H
