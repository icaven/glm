#include <glm/gtc/constants.hpp>
#include <glm/ext/vector_relational.hpp>
#include <glm/ext/vector_vec1.hpp>
#include <glm/ext/vector_vec1_precision.hpp>
#include <glm/vector_vec2.hpp>
#include <glm/vector_vec3.hpp>
#include <glm/vector_vec4.hpp>

template <typename genType>
static int test_operators()
{
	int Error = 0;

	{
		genType const A(1);
		genType const B(1);

		genType const C = A + B;
		Error += glm::all(glm::equal(C, genType(2), glm::epsilon<float>())) ? 0 : 1;

		genType const D = A - B;
		Error += glm::all(glm::equal(D, genType(0), glm::epsilon<float>())) ? 0 : 1;

		genType const E = A * B;
		Error += glm::all(glm::equal(E, genType(1), glm::epsilon<float>())) ? 0 : 1;

		genType const F = A / B;
		Error += glm::all(glm::equal(F, genType(1), glm::epsilon<float>())) ? 0 : 1;
	}

	return Error;
}

template <typename genType>
static int test_ctor()
{
	int Error = 0;

	glm::vec1 const A = genType(1);

	glm::vec1 const E(genType(1));
	Error += glm::all(glm::equal(A, E, glm::epsilon<float>())) ? 0 : 1;

	glm::vec1 const F(E);
	Error += glm::all(glm::equal(A, F, glm::epsilon<float>())) ? 0 : 1;

	genType const B = genType(1);
	genType const G(glm::vec2(1));
	Error += glm::all(glm::equal(B, G, glm::epsilon<float>())) ? 0 : 1;

	genType const H(glm::vec3(1));
	Error += glm::all(glm::equal(B, H, glm::epsilon<float>())) ? 0 : 1;

	genType const I(glm::vec4(1));
	Error += glm::all(glm::equal(B, I, glm::epsilon<float>())) ? 0 : 1;

	return Error;
}

template <typename genType>
static int test_size()
{
	int Error = 0;

	Error += sizeof(glm::vec1) == sizeof(genType) ? 0 : 1;
	Error += genType().length() == 1 ? 0 : 1;
	Error += genType::length() == 1 ? 0 : 1;

	return Error;
}

template <typename genType>
static int test_relational()
{
	int Error = 0;

	genType const A(1);
	genType const B(1);
	genType const C(0);

	Error += all(equal(A, B, glm::epsilon<float>())) ? 0 : 1;
	Error += any(notEqual(A, C, glm::epsilon<float>())) ? 0 : 1;

	return Error;
}

template <typename genType>
static int test_constexpr()
{
#	if GLM_CONFIG_CONSTEXP == GLM_ENABLE
		static_assert(genType::length() == 1, "GLM: Failed constexpr");
#	endif

	return 0;
}

int main()
{
	int Error = 0;

	Error += test_operators<glm::vec1>();
	Error += test_operators<glm::lowp_vec1>();
	Error += test_operators<glm::mediump_vec1>();
	Error += test_operators<glm::highp_vec1>();

	Error += test_ctor<glm::vec1>();
	Error += test_ctor<glm::lowp_vec1>();
	Error += test_ctor<glm::mediump_vec1>();
	Error += test_ctor<glm::highp_vec1>();

	Error += test_size<glm::vec1>();
	Error += test_size<glm::lowp_vec1>();
	Error += test_size<glm::mediump_vec1>();
	Error += test_size<glm::highp_vec1>();

	Error += test_relational<glm::vec1>();
	Error += test_relational<glm::lowp_vec1>();
	Error += test_relational<glm::mediump_vec1>();
	Error += test_relational<glm::highp_vec1>();

	Error += test_constexpr<glm::vec1>();
	Error += test_constexpr<glm::lowp_vec1>();
	Error += test_constexpr<glm::mediump_vec1>();
	Error += test_constexpr<glm::highp_vec1>();

	return Error;
}
