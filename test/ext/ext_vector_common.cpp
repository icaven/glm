#include <glm/ext/vector_common.hpp>
#include <glm/ext/vector_bool1.hpp>
#include <glm/ext/vector_bool1_precision.hpp>
#include <glm/ext/vector_bool2.hpp>
#include <glm/ext/vector_bool2_precision.hpp>
#include <glm/ext/vector_bool3.hpp>
#include <glm/ext/vector_bool3_precision.hpp>
#include <glm/ext/vector_bool4.hpp>
#include <glm/ext/vector_bool4_precision.hpp>

#include <glm/ext/vector_float1.hpp>
#include <glm/ext/vector_float1_precision.hpp>
#include <glm/ext/vector_float2.hpp>
#include <glm/ext/vector_float2_precision.hpp>
#include <glm/ext/vector_float3.hpp>
#include <glm/ext/vector_float3_precision.hpp>
#include <glm/ext/vector_float4.hpp>
#include <glm/ext/vector_float4_precision.hpp>
#include <glm/ext/vector_double1.hpp>
#include <glm/ext/vector_double1_precision.hpp>
#include <glm/ext/vector_double2.hpp>
#include <glm/ext/vector_double2_precision.hpp>
#include <glm/ext/vector_double3.hpp>
#include <glm/ext/vector_double3_precision.hpp>
#include <glm/ext/vector_double4.hpp>
#include <glm/ext/vector_double4_precision.hpp>
#include <glm/ext/vector_relational.hpp>
#include <glm/ext/scalar_constants.hpp>
#include <glm/vector_relational.hpp>
#include <glm/common.hpp>

template <typename vecType>
static int test_min()
{
	typedef typename vecType::value_type T;

	int Error = 0;

	vecType const N(static_cast<T>(0));
	vecType const B(static_cast<T>(1));
	Error += glm::all(glm::equal(glm::min(N, B), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(B, N), N, glm::epsilon<T>())) ? 0 : 1;

	vecType const C(static_cast<T>(2));
	Error += glm::all(glm::equal(glm::min(N, B, C), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(B, N, C), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(C, N, B), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(C, B, N), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(B, C, N), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(N, C, B), N, glm::epsilon<T>())) ? 0 : 1;

	vecType const D(static_cast<T>(3));
	Error += glm::all(glm::equal(glm::min(D, N, B, C), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(B, D, N, C), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(C, N, D, B), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(C, B, D, N), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(B, C, N, D), N, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::min(N, C, B, D), N, glm::epsilon<T>())) ? 0 : 1;

	return Error;
}

template <typename vecType>
static int test_min_nan()
{
	typedef typename vecType::value_type T;

	int Error = 0;

	vecType const A(static_cast<T>(0));
	vecType const B(static_cast<T>(1));
	vecType const N(A / A);
	Error += glm::all(glm::isnan(glm::min(N, B))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(B, N))) ? 0 : 1;

	vecType const C(static_cast<T>(2));
	Error += glm::all(glm::isnan(glm::min(N, B, C))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(B, N, C))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(C, N, B))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(C, B, N))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(B, C, N))) ? 0 : 1;
	Error += glm::all(glm::isnan(glm::min(N, C, B))) ? 0 : 1;

	vecType const D(static_cast<T>(3));
	Error += !glm::all(glm::isnan(glm::min(D, N, B, C))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(B, D, N, C))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(C, N, D, B))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(C, B, D, N))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::min(B, C, N, D))) ? 0 : 1;
	Error += glm::all(glm::isnan(glm::min(N, C, B, D))) ? 0 : 1;

	return Error;
}

template <typename vecType>
static int test_max()
{
	typedef typename vecType::value_type T;

	int Error = 0;

	vecType const N(static_cast<T>(0));
	vecType const B(static_cast<T>(1));
	Error += glm::all(glm::equal(glm::max(N, B), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(B, N), B, glm::epsilon<T>())) ? 0 : 1;

	vecType const C(static_cast<T>(2));
	Error += glm::all(glm::equal(glm::max(N, B, C), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(B, N, C), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(C, N, B), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(C, B, N), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(B, C, N), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(N, C, B), C, glm::epsilon<T>())) ? 0 : 1;

	vecType const D(static_cast<T>(3));
	Error += glm::all(glm::equal(glm::max(D, N, B, C), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(B, D, N, C), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(C, N, D, B), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(C, B, D, N), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(B, C, N, D), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::max(N, C, B, D), D, glm::epsilon<T>())) ? 0 : 1;

	return Error;
}

template <typename vecType>
static int test_max_nan()
{
	typedef typename vecType::value_type T;

	int Error = 0;

	vecType const A(static_cast<T>(0));
	vecType const B(static_cast<T>(1));
	vecType const N(A / A);
	
	Error += glm::all(glm::isnan(glm::max(N, B))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(B, N))) ? 0 : 1;

	vecType const C(static_cast<T>(2));
	Error += glm::all(glm::isnan(glm::max(N, B, C))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(B, N, C))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(C, N, B))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(C, B, N))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(B, C, N))) ? 0 : 1;
	Error += glm::all(glm::isnan(glm::max(N, C, B))) ? 0 : 1;

	vecType const D(static_cast<T>(3));
	Error += !glm::all(glm::isnan(glm::max(D, N, B, C))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(B, D, N, C))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(C, N, D, B))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(C, B, D, N))) ? 0 : 1;
	Error += !glm::all(glm::isnan(glm::max(B, C, N, D))) ? 0 : 1;
	Error += glm::all(glm::isnan(glm::max(N, C, B, D))) ? 0 : 1;

	return Error;
}

template <typename vecType>
static int test_fmin()
{
	typedef typename vecType::value_type T;

	int Error = 0;

	vecType const A(static_cast<T>(0));
	vecType const B(static_cast<T>(1));
	Error += glm::all(glm::equal(glm::fmin(A / A, B), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(B, A / A), B, glm::epsilon<T>())) ? 0 : 1;

	vecType const C(static_cast<T>(2));
	Error += glm::all(glm::equal(glm::fmin(A / A, B, C), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(B, A / A, C), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(C, A / A, B), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(C, B, A / A), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(B, C, A / A), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(A / A, C, B), B, glm::epsilon<T>())) ? 0 : 1;

	vecType const D(static_cast<T>(3));
	Error += glm::all(glm::equal(glm::fmin(D, A / A, B, C), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(B, D, A / A, C), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(C, A / A, D, B), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(C, B, D, A / A), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(B, C, A / A, D), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmin(A / A, C, B, D), B, glm::epsilon<T>())) ? 0 : 1;

	return Error;
}

template <typename vecType>
static int test_fmax()
{
	typedef typename vecType::value_type T;

	int Error = 0;

	vecType const A(static_cast<T>(0));
	vecType const B(static_cast<T>(1));
	Error += glm::all(glm::equal(glm::fmax(A / A, B), B, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(B, A / A), B, glm::epsilon<T>())) ? 0 : 1;

	vecType const C(static_cast<T>(2));
	Error += glm::all(glm::equal(glm::fmax(A / A, B, C), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(B, A / A, C), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(C, A / A, B), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(C, B, A / A), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(B, C, A / A), C, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(A / A, C, B), C, glm::epsilon<T>())) ? 0 : 1;

	vecType const D(static_cast<T>(3));
	Error += glm::all(glm::equal(glm::fmax(D, A / A, B, C), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(B, D, A / A, C), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(C, A / A, D, B), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(C, B, D, A / A), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(B, C, A / A, D), D, glm::epsilon<T>())) ? 0 : 1;
	Error += glm::all(glm::equal(glm::fmax(A / A, C, B, D), D, glm::epsilon<T>())) ? 0 : 1;

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_min<glm::vec3>();
	Error += test_min<glm::vec2>();
	Error += test_min_nan<glm::vec3>();
	Error += test_min_nan<glm::vec2>();

	Error += test_max<glm::vec3>();
	Error += test_max<glm::vec2>();
	Error += test_max_nan<glm::vec3>();
	Error += test_max_nan<glm::vec2>();

	Error += test_fmin<glm::vec3>();
	Error += test_fmin<glm::vec2>();

	Error += test_fmax<glm::vec3>();
	Error += test_fmax<glm::vec2>();

	return Error;
}
