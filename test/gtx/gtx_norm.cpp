#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/norm.hpp>

int test_lMaxNorm()
{
	int Error(0);
	
	{
		float norm = glm::lMaxNorm(glm::vec3(-1, -2, -3));
		Error += glm::epsilonEqual(norm, 3.f, 0.00001f) ? 0 : 1;
	}

	{
		float norm = glm::lMaxNorm(glm::vec3(2, 3, 1));
		Error += glm::epsilonEqual(norm, 3.f, 0.00001f) ? 0 : 1;
	}

	return Error;
}

int main()
{
	int Error(0);

	Error += test_lMaxNorm();

	return Error;
}
