#include <glm/gtc/constants.hpp>
#include <glm/ext/scalar_relational.hpp>
#include <glm/ext/vector_relational.hpp>
#include <glm/ext/vector_dvec1.hpp>
#include <glm/ext/vector_dvec1_precision.hpp>
#include <glm/ext/vector_dvec2.hpp>
#include <glm/ext/vector_dvec3.hpp>
#include <glm/ext/vector_dvec4.hpp>

template <typename genType>
static int test_operators()
{
	int Error = 0;

	{
		genType const A(1);
		genType const B(1);

		genType const C = A + B;
		Error += glm::all(glm::equal(C, genType(2), glm::epsilon<double>())) ? 0 : 1;

		genType const D = A - B;
		Error += glm::all(glm::equal(D, genType(0), glm::epsilon<double>())) ? 0 : 1;

		genType const E = A * B;
		Error += glm::all(glm::equal(E, genType(1), glm::epsilon<double>())) ? 0 : 1;

		genType const F = A / B;
		Error += glm::all(glm::equal(F, genType(1), glm::epsilon<double>())) ? 0 : 1;
	}

	return Error;
}

template <typename genType>
static int test_ctor()
{
	int Error = 0;

	glm::dvec1 const A = genType(1);

	glm::dvec1 const E(genType(1));
	Error += glm::all(glm::equal(A, E, glm::epsilon<double>())) ? 0 : 1;

	glm::dvec1 const F(E);
	Error += glm::all(glm::equal(A, F, glm::epsilon<double>())) ? 0 : 1;

	genType const B = genType(1);
	genType const G(glm::dvec2(1));
	Error += glm::all(glm::equal(B, G, glm::epsilon<double>())) ? 0 : 1;

	genType const H(glm::dvec3(1));
	Error += glm::all(glm::equal(B, H, glm::epsilon<double>())) ? 0 : 1;

	genType const I(glm::dvec4(1));
	Error += glm::all(glm::equal(B, I, glm::epsilon<double>())) ? 0 : 1;

	return Error;
}

template <typename genType>
static int test_size()
{
	int Error = 0;

	Error += sizeof(glm::dvec1) == sizeof(genType) ? 0 : 1;
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

	Error += all(equal(A, B, glm::epsilon<double>())) ? 0 : 1;
	Error += any(notEqual(A, C, glm::epsilon<double>())) ? 0 : 1;

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

	Error += test_operators<glm::dvec1>();
	Error += test_operators<glm::lowp_dvec1>();
	Error += test_operators<glm::mediump_dvec1>();
	Error += test_operators<glm::highp_dvec1>();

	Error += test_ctor<glm::dvec1>();
	Error += test_ctor<glm::lowp_dvec1>();
	Error += test_ctor<glm::mediump_dvec1>();
	Error += test_ctor<glm::highp_dvec1>();

	Error += test_size<glm::dvec1>();
	Error += test_size<glm::lowp_dvec1>();
	Error += test_size<glm::mediump_dvec1>();
	Error += test_size<glm::highp_dvec1>();

	Error += test_relational<glm::dvec1>();
	Error += test_relational<glm::lowp_dvec1>();
	Error += test_relational<glm::mediump_dvec1>();
	Error += test_relational<glm::highp_dvec1>();

	Error += test_constexpr<glm::dvec1>();
	Error += test_constexpr<glm::lowp_dvec1>();
	Error += test_constexpr<glm::mediump_dvec1>();
	Error += test_constexpr<glm::highp_dvec1>();

	return Error;
}
