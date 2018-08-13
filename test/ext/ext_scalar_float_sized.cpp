#include <glm/ext/scalar_float_sized.hpp>

#if GLM_HAS_STATIC_ASSERT
	static_assert(sizeof(glm::float32) == 4, "float32 size isn't 4 bytes on this platform");

#	ifndef GLM_FORCE_SINGLE_ONLY
		static_assert(sizeof(glm::float64) == 8, "float64 size isn't 8 bytes on this platform");
#	endif
#endif

static int test_float_size()
{
	int Error = 0;

	Error += sizeof(glm::float32) == sizeof(float) ? 0 : 1;
	Error += sizeof(glm::float64) == sizeof(double) ? 0 : 1;

	return Error;
}

static int test_float_precision()
{
	int Error = 0;

	Error += sizeof(float) <= sizeof(double) ? 0 : 1;
	Error += sizeof(glm::float32) < sizeof(glm::float64) ? 0 : 1;

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_float_size();
	Error += test_float_precision();

	return Error;
}
