/// @file test/gtc/gtc_type_aligned.cpp

#define GLM_FORCE_ALIGNED
#include <glm/gtc/type_aligned.hpp>

struct my_vec4_packed
{
	glm::uint32 a;
	glm::vec4 b;
};
GLM_STATIC_ASSERT(sizeof(my_vec4_packed) == sizeof(glm::uint32) + sizeof(glm::vec4), "glm::vec4 packed is not correct");

struct my_vec4_aligned
{
	glm::uint32 a;
	glm::aligned_vec4 b;
};
GLM_STATIC_ASSERT(sizeof(my_vec4_aligned) == sizeof(glm::aligned_vec4) * 2, "glm::vec4 aligned is not correct");

struct my_dvec4_packed
{
	glm::uint64 a;
	glm::dvec4 b;
};
GLM_STATIC_ASSERT(sizeof(my_dvec4_packed) == sizeof(glm::uint64) + sizeof(glm::dvec4), "glm::dvec4 packed is not correct");

struct my_dvec4_aligned
{
	glm::uint64 a;
	glm::aligned_dvec4 b;
};
GLM_STATIC_ASSERT(sizeof(my_dvec4_aligned) == sizeof(glm::aligned_dvec4) * 2, "glm::dvec4 aligned is not correct");

struct my_ivec4_packed
{
	glm::uint32 a;
	glm::ivec4 b;
};
GLM_STATIC_ASSERT(sizeof(my_ivec4_packed) == sizeof(glm::uint32) + sizeof(glm::ivec4), "glm::ivec4 packed is not correct");

struct my_ivec4_aligned
{
	glm::uint32 a;
	glm::aligned_ivec4 b;
};
GLM_STATIC_ASSERT(sizeof(my_ivec4_aligned) == sizeof(glm::aligned_ivec4) * 2, "glm::ivec4 aligned is not correct");

struct my_u8vec4_packed
{
	glm::uint32 a;
	glm::u8vec4 b;
};
GLM_STATIC_ASSERT(sizeof(my_u8vec4_packed) == sizeof(glm::uint32) + sizeof(glm::u8vec4), "glm::u8vec4 packed is not correct");

int main()
{
	int Error = 0;

	my_vec4_aligned GNA;
	my_dvec4_aligned GNI;

	std::size_t A0 = sizeof(my_dvec4_aligned);
	std::size_t B0 = sizeof(my_dvec4_packed);
	std::size_t C0 = sizeof(glm::aligned_dvec4);

	std::size_t A1 = sizeof(my_vec4_aligned);
	std::size_t B1 = sizeof(my_vec4_packed);
	std::size_t C1 = sizeof(glm::aligned_vec4);

	return Error;
}
