#include "precompiled.h"
#include "sse_vec4.h"
/*
void test_shufps(const glm::sse::vec4& v1, const glm::sse::vec4& v2)
{
	glm::sse::vec4 Result0;
	__asm
	{
		mov		esi, v1
		mov		edi, v2
		movaps	xmm0, [esi]
		movaps	xmm1, [edi]
		shufps	xmm0, xmm1, _MM_SHUFFLE(3, 2, 1, 0)
		movaps	Result0, xmm0
	}

	glm::sse::vec4 Result1;
	__asm
	{
		mov		esi, v1
		mov		edi, v2
		movaps	xmm2, [esi]
		movaps	xmm3, [edi]
		pshufd	xmm2, xmm3, _MM_SHUFFLE(3, 2, 1, 0)
		movaps	Result1, xmm2
	}

	glm::sse::vec4 end;
}

void test_sse_vec4()
{
	test_shufps(
		glm::sse::vec4(1.0f, 2.0f, 3.0f, 4.0f),
		glm::sse::vec4(5.0f, 6.0f, 7.0f, 8.0f));

	glm::sse::vec4 v0;
	glm::sse::vec4 v1(76.f);
	glm::sse::vec4 v2(5.f, 1.f, 2.f, 3.f);
	v2 += v1;
	glm::sse::vec4 v3 = v2;
	glm::sse::vec4 v4(1.0f);
	float dot = glm::sse::dot(v4, v1);
	++v4;
	glm::sse::vec4 v5 = -v4;
	glm::sse::vec4 v6(2.f);
	glm::sse::vec4 v7 = glm::sse::cross(v2, v6);
	glm::vec3 v8 = glm::cross(glm::vec3(5.f, 1.f, 2.f), glm::vec3(2.f));
	//printf("vec4(%f, %f, %f, %f)\n", v4.x, v4.y, v4.z, v4.w);
	glm::sse::vec4 v9 = glm::sse::normalize(glm::sse::vec4(1.0f, 1.0f, 1.0f, 0.0f));
	glm::sse::vec4 vx;
}
*/