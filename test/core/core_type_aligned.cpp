#include <glm/glm.hpp>
#if GLM_HAS_ALIGNOF
#	include <type_traits>
#endif

int test_aligned()
{
	int Error = 0;

	GLM_STATIC_ASSERT(sizeof(glm::vec4) == 4 * sizeof(float), "Invalid sizeof");

	size_t size1_aligned = sizeof(glm::detail::storage<1, int, true>::type);
	Error += size1_aligned == sizeof(int) * 1 ? 0 : 1;
	size_t size2_aligned = sizeof(glm::detail::storage<2, int, true>::type);
	Error += size2_aligned == sizeof(int) * 2 ? 0 : 1;
	size_t size4_aligned = sizeof(glm::detail::storage<4, int, true>::type);
	Error += size4_aligned == sizeof(int) * 4 ? 0 : 1;

#	if GLM_HAS_ALIGNOF

	size_t align1_aligned = alignof(glm::detail::storage<1, int, true>::type);
	Error += align1_aligned == 4 ? 0 : 1;
	size_t align2_aligned = alignof(glm::detail::storage<2, int, true>::type);
	Error += align2_aligned == 8 ? 0 : 1;
	size_t align4_aligned = alignof(glm::detail::storage<4, int, true>::type);
	Error += align4_aligned == 16 ? 0 : 1;

#	endif //GLM_HAS_ALIGNOF

	return Error;
}

int test_unaligned()
{
	int Error = 0;

#	if GLM_HAS_ALIGNOF

	size_t align1_unaligned = alignof(glm::detail::storage<1, int, false>::type);
	Error += align1_unaligned == sizeof(int) ? 0 : 1;
	size_t align2_unaligned = alignof(glm::detail::storage<2, int, false>::type);
	Error += align2_unaligned == sizeof(int) ? 0 : 1;
	size_t align3_unaligned = alignof(glm::detail::storage<3, int, false>::type);
	Error += align3_unaligned == sizeof(int) ? 0 : 1;
	size_t align4_unaligned = alignof(glm::detail::storage<4, int, false>::type);
	Error += align4_unaligned == sizeof(int) ? 0 : 1;

#	endif //GLM_HAS_ALIGNOF

	return Error;
}

int main()
{
	int Error = 0;

	Error += test_aligned();
	Error += test_unaligned();

	return Error;
}
