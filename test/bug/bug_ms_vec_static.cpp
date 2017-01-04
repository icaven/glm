#define GLM_FORCE_SWIZZLE
#include <glm/vec2.hpp>

// Visual C++ has a bug generating the error: fatal error C1001: An internal error has occurred in the compiler.
glm::vec2 const Bar(1.f, 1.f);

int main()
{
	return 0;
}
