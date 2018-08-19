#define GLM_FORCE_INLINE
#include <glm/ext/matrix_float4x4.hpp>
#include <glm/ext/matrix_transform.hpp>
#include <glm/ext/vector_float4.hpp>
#if GLM_CONFIG_SIMD == GLM_ENABLE
#include <glm/gtc/type_aligned.hpp>
#include <vector>
#include <chrono>
#include <cstdio>

template <typename matType, typename vecType>
static void test_mat_mul_vec(matType const& M, std::vector<vecType> const& I, std::vector<vecType>& O)
{
	for (std::size_t i = 0, n = I.size(); i < n; ++i)
		O[i] = M * I[i];
}

template <typename matType, typename vecType>
static int launch_mat_mul_vec(std::size_t Samples)
{
	typedef typename vecType::value_type T;

	static const matType Transform(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

	{
		std::vector<vecType> I(Samples);
		std::vector<vecType> O(Samples);

		for(std::size_t i = 0; i < Samples; ++i)
			I[i] = vecType(static_cast<T>(i)) * vecType(0.01, 0.02, 0.03, 0.05);

		std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
		test_mat_mul_vec<matType, vecType>(Transform, I, O);
		std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

		return static_cast<int>(std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count());
	}
}

template <typename matType, typename vecType>
static void test_vec_mul_mat(matType const& M, std::vector<vecType> const& I, std::vector<vecType>& O)
{
	for (std::size_t i = 0, n = I.size(); i < n; ++i)
		O[i] = I[i] * M;
}

template <typename matType, typename vecType>
static int launch_vec_mul_mat(std::size_t Samples)
{
	typedef typename vecType::value_type T;

	static const matType Transform(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

	std::vector<vecType> I(Samples);
	std::vector<vecType> O(Samples);

	for(std::size_t i = 0; i < Samples; ++i)
		I[i] = vecType(static_cast<T>(i)) * vecType(0.01, 0.02, 0.03, 0.05);

	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	test_vec_mul_mat<matType, vecType>(Transform, I, O);
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

	return static_cast<int>(std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count());
}

template <typename matType>
static void test_mat_mul_mat(matType const& M, std::vector<matType> const& I, std::vector<matType>& O)
{
	for (std::size_t i = 0, n = I.size(); i < n; ++i)
		O[i] = M * I[i];
}

template <typename matType>
static int launch_mat_mul_mat(std::size_t Samples)
{
	typedef typename matType::value_type T;

	static const matType Transform(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

	std::vector<matType> I(Samples);
	std::vector<matType> O(Samples);

	for(std::size_t i = 0; i < Samples; ++i)
		I[i] = matType(0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05) * static_cast<T>(i);

	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	test_mat_mul_mat<matType>(Transform, I, O);
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

	return static_cast<int>(std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count());
}

template <typename matType>
static void test_mat_div_mat(matType const& M, std::vector<matType> const& I, std::vector<matType>& O)
{
	for (std::size_t i = 0, n = I.size(); i < n; ++i)
		O[i] = M / I[i];
}

template <typename matType>
static int launch_mat_div_mat(std::size_t Samples)
{
	typedef typename matType::value_type T;
	
	static const matType Transform(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

	std::vector<matType> I(Samples);
	std::vector<matType> O(Samples);

	for(std::size_t i = 0; i < Samples; ++i)
		I[i] = matType(0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05, 0.01, 0.02, 0.03, 0.05) * static_cast<T>(i);

	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	test_mat_div_mat<matType>(Transform, I, O);
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

	return static_cast<int>(std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count());
}

int main()
{
	std::size_t const Samples = 50000;

	printf("\nmat4 * vec4\n");
	printf("- dmat4 * dvec4 duration %d us\n", launch_mat_mul_vec<glm::dmat4, glm::dvec4>(Samples));
	printf("- dmat4 * dvec4 (SIMD) duration %d us\n", launch_mat_mul_vec<glm::aligned_dmat4, glm::aligned_dvec4>(Samples));
	printf("- mat4 * vec4 duration %d us\n", launch_mat_mul_vec<glm::mat4, glm::vec4>(Samples));
	printf("- mat4 * vec4 (SIMD) duration %d us\n", launch_mat_mul_vec<glm::aligned_mat4, glm::aligned_vec4>(Samples));

	printf("\nvec4 * mat4\n");
	printf("- dvec4 * dmat4 duration %d us\n", launch_vec_mul_mat<glm::dmat4, glm::dvec4>(Samples));
	printf("- dvec4 * dmat4 (SIMD) duration %d us\n", launch_vec_mul_mat<glm::aligned_dmat4, glm::aligned_dvec4>(Samples));
	printf("- vec4 * mat4 duration %d us\n", launch_vec_mul_mat<glm::mat4, glm::vec4>(Samples));
	printf("- vec4 * mat4 (SIMD) duration %d us\n", launch_vec_mul_mat<glm::aligned_mat4, glm::aligned_vec4>(Samples));

	printf("\nmat4 * mat4\n");
	printf("- dmat4 * dmat4 duration %d us\n", launch_mat_mul_mat<glm::dmat4>(Samples));
	printf("- dmat4 * dmat4 (SIMD) duration %d us\n", launch_mat_mul_mat<glm::aligned_dmat4>(Samples));
	printf("- mat4 * mat4 duration %d us\n", launch_mat_mul_mat<glm::mat4>(Samples));
	printf("- mat4 * mat4 (SIMD) duration %d us\n", launch_mat_mul_mat<glm::aligned_mat4>(Samples));

	printf("\nmat4 / mat4\n");
	printf("- dmat4 / dmat4 duration %d us\n", launch_mat_div_mat<glm::dmat4>(Samples));
	printf("- dmat4 / dmat4 (SIMD) duration %d us\n", launch_mat_div_mat<glm::aligned_dmat4>(Samples));
	printf("- mat4 / mat4 duration %d us\n", launch_mat_div_mat<glm::mat4>(Samples));
	printf("- mat4 / mat4 (SIMD) duration %d us\n", launch_mat_div_mat<glm::aligned_mat4>(Samples));

	return 0;
}

#else

int main()
{
	return 0;
}

#endif
