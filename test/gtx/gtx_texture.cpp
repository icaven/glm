#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/texture.hpp>

int main()
{
	int Error = 0;

	Error += clamp::test();

	return Error;
}
