#define GLM_FORCE_INLINE
#include <glm/ext/matrix_float4x4.hpp>
#include <glm/ext/matrix_transform.hpp>
#include <glm/ext/matrix_relational.hpp>
#include <glm/ext/vector_float4.hpp>
#if GLM_CONFIG_SIMD == GLM_ENABLE
#include <glm/gtc/type_aligned.hpp>
#include <vector>
#include <chrono>
#include <cstdio>

template <typename matType>
static void test_mat_mul_mat(matType const& M, std::vector<matType> const& I, std::vector<matType>& O)
{
	for (std::size_t i = 0, n = I.size(); i < n; ++i)
		O[i] = M * I[i];
}

template <typename matType>
static int launch_mat_mul_mat(std::vector<matType>& O, matType const& Transform, matType const& Scale, std::size_t Samples)
{
	typedef typename matType::value_type T;

	std::vector<matType> I(Samples);
	O.resize(Samples);

	for(std::size_t i = 0; i < Samples; ++i)
		I[i] = Scale * static_cast<T>(i);

	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	test_mat_mul_mat<matType>(Transform, I, O);
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

	return static_cast<int>(std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count());
}

static int comp_mat_mul_mat(std::size_t Samples)
{
	int Error = 0;

	glm::mat4 const Transform(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	glm::mat4 const Scale(0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05);

	std::vector<glm::mat4> Mat4SISD;
	printf("mat4 * mat4 (SISD) duration %d us\n", launch_mat_mul_mat<glm::mat4>(Mat4SISD, Transform, Scale, Samples));

	std::vector<glm::aligned_mat4> Mat4SIMD;
	printf("mat4 * mat4 (SIMD) duration %d us\n", launch_mat_mul_mat<glm::aligned_mat4>(Mat4SIMD, Transform, Scale, Samples));

	for(std::size_t i = 0; i < Samples; ++i)
		Error += glm::all(glm::equal(Mat4SISD[i], Mat4SIMD[i], 0.001)) ? 0 : 1;

	return Error;
}

int main()
{
	std::size_t const Samples = 100000;

	int Error = 0;
	Error += comp_mat_mul_mat(Samples);

	return Error;
}

#else

int main()
{
	return 0;
}

#endif
