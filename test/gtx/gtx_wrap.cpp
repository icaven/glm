#include <glm/gtx/wrap.hpp>
#include <glm/gtc/epsilon.hpp>

namespace clamp
{
	int test()
	{
		int Error(0);

		float A = glm::clamp(0.5f);
		Error += glm::epsilonEqual(A, 0.5f, 0.00001f) ? 0 : 1;

		float B = glm::clamp(0.0f);
		Error += glm::epsilonEqual(B, 0.0f, 0.00001f) ? 0 : 1;

		float C = glm::clamp(1.0f);
		Error += glm::epsilonEqual(C, 1.0f, 0.00001f) ? 0 : 1;

		float D = glm::clamp(-0.5f);
		Error += glm::epsilonEqual(D, 0.0f, 0.00001f) ? 0 : 1;

		float E = glm::clamp(1.5f);
		Error += glm::epsilonEqual(E, 1.0f, 0.00001f) ? 0 : 1;

		return Error;
	}
}//namespace clamp

namespace repeat
{
	int test()
	{
		int Error(0);

		float A = glm::repeat(0.5f);
		Error += glm::epsilonEqual(A, 0.5f, 0.00001f) ? 0 : 1;

		float B = glm::repeat(0.0f);
		Error += glm::epsilonEqual(B, 0.0f, 0.00001f) ? 0 : 1;

		float C = glm::repeat(1.0f);
		Error += glm::epsilonEqual(C, 0.0f, 0.00001f) ? 0 : 1;

		float D = glm::repeat(-0.5f);
		Error += glm::epsilonEqual(D, 0.5f, 0.00001f) ? 0 : 1;

		float E = glm::repeat(1.5f);
		Error += glm::epsilonEqual(E, 0.5f, 0.00001f) ? 0 : 1;

		float F = glm::repeat(0.9f);
		Error += glm::epsilonEqual(F, 0.9f, 0.00001f) ? 0 : 1;

		return Error;
	}
}//namespace repeat

namespace mirrorClamp
{
	int test()
	{
		int Error(0);

		float A = glm::mirrorClamp(0.5f);
		Error += glm::epsilonEqual(A, 0.5f, 0.00001f) ? 0 : 1;

		float B = glm::mirrorClamp(0.0f);
		Error += glm::epsilonEqual(B, 0.0f, 0.00001f) ? 0 : 1;

		float C = glm::mirrorClamp(1.1f);
		Error += glm::epsilonEqual(C, 0.1f, 0.00001f) ? 0 : 1;

		float D = glm::mirrorClamp(-0.5f);
		Error += glm::epsilonEqual(D, 0.5f, 0.00001f) ? 0 : 1;

		float E = glm::mirrorClamp(1.5f);
		Error += glm::epsilonEqual(E, 0.5f, 0.00001f) ? 0 : 1;

		float F = glm::mirrorClamp(0.9f);
		Error += glm::epsilonEqual(F, 0.9f, 0.00001f) ? 0 : 1;

		float G = glm::mirrorClamp(3.1f);
		Error += glm::epsilonEqual(G, 0.1f, 0.00001f) ? 0 : 1;

		float H = glm::mirrorClamp(-3.1f);
		Error += glm::epsilonEqual(H, 0.1f, 0.00001f) ? 0 : 1;

		float I = glm::mirrorClamp(-0.9f);
		Error += glm::epsilonEqual(I, 0.9f, 0.00001f) ? 0 : 1;

		return Error;
	}
}//namespace mirrorClamp

namespace mirrorRepeat
{
	int test()
	{
		int Error(0);

		float A = glm::mirrorRepeat(0.5f);
		Error += glm::epsilonEqual(A, 0.5f, 0.00001f) ? 0 : 1;

		float B = glm::mirrorRepeat(0.0f);
		Error += glm::epsilonEqual(B, 0.0f, 0.00001f) ? 0 : 1;

		float C = glm::mirrorRepeat(1.0f);
		Error += glm::epsilonEqual(C, 1.0f, 0.00001f) ? 0 : 1;

		float D = glm::mirrorRepeat(-0.5f);
		Error += glm::epsilonEqual(D, 0.5f, 0.00001f) ? 0 : 1;

		float E = glm::mirrorRepeat(1.5f);
		Error += glm::epsilonEqual(E, 0.5f, 0.00001f) ? 0 : 1;

		float F = glm::mirrorRepeat(0.9f);
		Error += glm::epsilonEqual(F, 0.9f, 0.00001f) ? 0 : 1;

		float G = glm::mirrorRepeat(3.0f);
		Error += glm::epsilonEqual(G, 1.0f, 0.00001f) ? 0 : 1;

		float H = glm::mirrorRepeat(-3.0f);
		Error += glm::epsilonEqual(H, 1.0f, 0.00001f) ? 0 : 1;

		float I = glm::mirrorRepeat(-1.0f);
		Error += glm::epsilonEqual(I, 1.0f, 0.00001f) ? 0 : 1;

		return Error;
	}
}//namespace mirrorRepeat

int main()
{
	int Error(0);

	Error += clamp::test();
	Error += repeat::test();
	Error += mirrorClamp::test();
	Error += mirrorRepeat::test();

	return Error;
}
