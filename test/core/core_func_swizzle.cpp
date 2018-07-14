#define GLM_FORCE_MESSAGES
#define GLM_FORCE_SWIZZLE
#include <glm/glm.hpp>

static int test_ivec2_swizzle()
{
	int Error = 0;

#	if GLM_SWIZZLE
	{
		glm::ivec2 A(1, 2);
		glm::ivec2 B = A.yx();
		glm::ivec2 C = B.yx();

		Error += A != B ? 0 : 1;
		Error += A == C ? 0 : 1;
	}
#	endif//GLM_SWIZZLE

#	if GLM_SWIZZLE == GLM_SWIZZLE_OPERATOR
	{
		glm::ivec2 A(1, 2);
		glm::ivec2 B = A.yx;
		glm::ivec2 C = A.yx;

		Error += A != B ? 0 : 1;
		Error += B == C ? 0 : 1;

		B.xy = B.yx;
		C.xy = C.yx;

		Error += B == C ? 0 : 1;

		glm::ivec2 D(0, 0);
		D.yx = A.xy;
		Error += A.yx() == D ? 0 : 1;

		glm::ivec2 E = A.yx;
		Error += E == D ? 0 : 1;
	}
#	endif//GLM_SWIZZLE

	return Error;
}

int test_ivec3_swizzle()
{
	int Error = 0;

#	if GLM_SWIZZLE == GLM_ENABLE
	{
		glm::ivec3 A(1, 2, 3);
		glm::ivec3 B = A.zyx();
		glm::ivec3 C = B.zyx();

		Error += A != B ? 0 : 1;
		Error += A == C ? 0 : 1;
	}
#	endif//GLM_SWIZZLE == GLM_ENABLE

#	if GLM_SWIZZLE == GLM_SWIZZLE_OPERATOR
	{
		glm::ivec3 A(1, 2, 3);
		glm::ivec2 B = A.yx;
		glm::ivec2 C = A.yx;

		Error += A.yx() == B ? 0 : 1;
		Error += B == C ? 0 : 1;

		B.xy = B.yx;
		C.xy = C.yx;

		Error += B == C ? 0 : 1;

		glm::ivec2 D(0, 0);
		D.yx = A.xy;

		Error += A.yx() == D ? 0 : 1;

		glm::ivec2 E(0, 0);
		E.xy = A.xy();

		Error += E == A.xy() ? 0 : 1;
		Error += E.xy() == A.xy() ? 0 : 1;
	}
#	endif//GLM_SWIZZLE

	return Error;
}

int test_ivec4_swizzle()
{
	int Error = 0;

#if GLM_SWIZZLE == GLM_ENABLE
	glm::ivec4 A(1, 2, 3, 4);
	glm::ivec4 B = A.wzyx();
	glm::ivec4 C = B.wzyx();

	Error += A != B ? 0 : 1;
	Error += A == C ? 0 : 1;
#endif//GLM_SWIZZLE == GLM_ENABLE

	return Error;
}

int test_vec4_swizzle()
{
	int Error = 0;

#if GLM_SWIZZLE == GLM_ENABLE
	glm::vec4 A(1, 2, 3, 4);
	glm::vec4 B = A.wzyx();
	glm::vec4 C = B.wzyx();

	Error += A != B ? 0 : 1;
	Error += A == C ? 0 : 1;

	float f = glm::dot(C.wzyx(), C.xyzw());
	Error += glm::abs(f - 20.f) < 0.01f ? 0 : 1;
#endif//GLM_SWIZZLE == GLM_ENABLE

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_ivec2_swizzle();
	Error += test_ivec3_swizzle();
	Error += test_ivec4_swizzle();
	Error += test_vec4_swizzle();

	return Error;
}



