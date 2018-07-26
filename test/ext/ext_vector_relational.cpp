#include <glm/ext/vector_relational.hpp>
#include <glm/vec2.hpp>
#include <glm/mat4x3.hpp>

int test_equal()
{
	int Error = 0;

	Error += glm::equal(1.01f, 1.02f, 0.1f) ? 0 : 1;
	Error += glm::all(glm::equal(glm::vec2(1.01f), glm::vec2(1.02f), 0.1f)) ? 0 : 1;
	Error += glm::all(glm::equal(glm::vec2(1.01f), glm::vec2(1.02f), glm::vec2(0.1f))) ? 0 : 1;

	Error += !glm::equal(1.01f, 1.02f, 0.001f) ? 0 : 1;
	Error += !glm::any(glm::equal(glm::vec2(1.01f), glm::vec2(1.02f), 0.001f)) ? 0 : 1;
	Error += !glm::any(glm::equal(glm::vec2(1.01f), glm::vec2(1.02f), glm::vec2(0.001f))) ? 0 : 1;

	Error += glm::all(glm::equal(glm::mat4x3(1), glm::mat4x3(1), 0.001f)) ? 0 : 1;
	Error += glm::all(glm::equal(glm::mat4x3(1), glm::mat4x3(2), glm::vec4(0.001f))) ? 1 : 0;
	Error += glm::all(glm::equal(glm::mat4x3(1), glm::mat4x3(1))) ? 0 : 1;

	return Error;
}

int test_notEqual()
{
	int Error = 0;

	Error += glm::notEqual(1.01f, 1.02f, 0.001f) ? 0 : 1;
	Error += glm::all(glm::notEqual(glm::vec2(1.01f), glm::vec2(1.02f), 0.001f)) ? 0 : 1;
	Error += glm::all(glm::notEqual(glm::vec2(1.01f), glm::vec2(1.02f), glm::vec2(0.001f))) ? 0 : 1;

	Error += !glm::notEqual(1.01f, 1.02f, 0.1f) ? 0 : 1;
	Error += !glm::any(glm::notEqual(glm::vec2(1.01f), glm::vec2(1.02f), 0.1f)) ? 0 : 1;
	Error += !glm::any(glm::notEqual(glm::vec2(1.01f), glm::vec2(1.02f), glm::vec2(0.1f))) ? 0 : 1;

	Error += !glm::any(glm::notEqual(glm::mat4x3(1), glm::mat4x3(1), 0.001f)) ? 0 : 1;
	Error += !glm::any(glm::notEqual(glm::mat4x3(1), glm::mat4x3(2), glm::vec4(0.001f))) ? 1 : 0;
	Error += !glm::any(glm::notEqual(glm::mat4x3(1), glm::mat4x3(1))) ? 0 : 1;

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_equal();
	Error += test_notEqual();

	return Error;
}
