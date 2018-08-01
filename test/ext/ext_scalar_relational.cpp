#include <glm/ext/scalar_relational.hpp>

int test_equal()
{
	int Error = 0;

	Error += glm::equal(1.01f, 1.02f, 0.1f) ? 0 : 1;
	Error += !glm::equal(1.01f, 1.02f, 0.001f) ? 0 : 1;

	return Error;
}

int test_notEqual()
{
	int Error = 0;

	Error += glm::notEqual(1.01f, 1.02f, 0.001f) ? 0 : 1;
	Error += !glm::notEqual(1.01f, 1.02f, 0.1f) ? 0 : 1;

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_equal();
	Error += test_notEqual();

	return Error;
}
