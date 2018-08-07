#include <glm/ext/matrix_relational.hpp>
#include <glm/ext/matrix_float4x3.hpp>
#include <glm/ext/vector_float4.hpp>

int test_equal()
{
	int Error = 0;

	Error += glm::all(glm::equal(glm::mat4x3(1), glm::mat4x3(1), 0.001f)) ? 0 : 1;
	Error += glm::all(glm::equal(glm::mat4x3(1), glm::mat4x3(2), glm::vec4(0.001f))) ? 1 : 0;

	return Error;
}

int test_notEqual()
{
	int Error = 0;

	Error += !glm::any(glm::notEqual(glm::mat4x3(1), glm::mat4x3(1), 0.001f)) ? 0 : 1;
	Error += !glm::any(glm::notEqual(glm::mat4x3(1), glm::mat4x3(2), glm::vec4(0.001f))) ? 1 : 0;

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_equal();
	Error += test_notEqual();

	return Error;
}
