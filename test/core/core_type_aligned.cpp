#include <glm/glm.hpp>
/*
#define GLM_ALIGNED(x) __declspec(align(x))
#define GLM_ALIGNED_STRUCT(x) struct __declspec(align(x))

#define GLM_ALIGNED_STORAGE_TYPE_STRUCT(x) \
template <typename T> \
struct storage<T, x, true> { \
    GLM_ALIGNED_STRUCT(x) type { \
        uint8_t data[x]; \
    }; \
};

template <typename T, std::size_t size, bool aligned>
struct storage {
    typedef struct type {
        uint8_t data[size];
    } type;
};

GLM_ALIGNED_STORAGE_TYPE_STRUCT(1)
GLM_ALIGNED_STORAGE_TYPE_STRUCT(2)
GLM_ALIGNED_STORAGE_TYPE_STRUCT(4)
GLM_ALIGNED_STORAGE_TYPE_STRUCT(8)
GLM_ALIGNED_STORAGE_TYPE_STRUCT(16)
GLM_ALIGNED_STORAGE_TYPE_STRUCT(32)
GLM_ALIGNED_STORAGE_TYPE_STRUCT(64)
*/
int main() {
    size_t size1_aligned = sizeof(glm::detail::storage<int, 1, true>::type);
    size_t size2_aligned = sizeof(glm::detail::storage<int, 2, true>::type);
    size_t size4_aligned = sizeof(glm::detail::storage<int, 4, true>::type);
    size_t size8_aligned = sizeof(glm::detail::storage<int, 8, true>::type);
    size_t size16_aligned = sizeof(glm::detail::storage<int, 16, true>::type);
    size_t size32_aligned = sizeof(glm::detail::storage<int, 32, true>::type);
    size_t size64_aligned = sizeof(glm::detail::storage<int, 64, true>::type);
    size_t size128_aligned = sizeof(glm::detail::storage<int, 128, true>::type);

    size_t size1_unaligned = sizeof(glm::detail::storage<int, 1, false>::type);
    size_t size2_unaligned = sizeof(glm::detail::storage<int, 2, false>::type);
    size_t size4_unaligned = sizeof(glm::detail::storage<int, 4, false>::type);
    size_t size8_unaligned = sizeof(glm::detail::storage<int, 8, false>::type);
    size_t size16_unaligned = sizeof(glm::detail::storage<int, 16, false>::type);
    size_t size32_unaligned = sizeof(glm::detail::storage<int, 32, false>::type);
    size_t size64_unaligned = sizeof(glm::detail::storage<int, 64, false>::type);
    size_t size128_unaligned = sizeof(glm::detail::storage<int, 128, false>::type);

    size_t align1_aligned = alignof(glm::detail::storage<int, 1, true>::type);
    size_t align2_aligned = alignof(glm::detail::storage<int, 2, true>::type);
    size_t align4_aligned = alignof(glm::detail::storage<int, 4, true>::type);
    size_t align8_aligned = alignof(glm::detail::storage<int, 8, true>::type);
    size_t align16_aligned = alignof(glm::detail::storage<int, 16, true>::type);
    size_t align32_aligned = alignof(glm::detail::storage<int, 32, true>::type);
    size_t align64_aligned = alignof(glm::detail::storage<int, 64, true>::type);
    size_t align128_aligned = alignof(glm::detail::storage<int, 128, true>::type);

    size_t align1_unaligned = alignof(glm::detail::storage<int, 1, false>::type);
    size_t align2_unaligned = alignof(glm::detail::storage<int, 2, false>::type);
    size_t align4_unaligned = alignof(glm::detail::storage<int, 4, false>::type);
    size_t align8_unaligned = alignof(glm::detail::storage<int, 8, false>::type);
    size_t align16_unaligned = alignof(glm::detail::storage<int, 16, false>::type);
    size_t align32_unaligned = alignof(glm::detail::storage<int, 32, false>::type);
    size_t align64_unaligned = alignof(glm::detail::storage<int, 64, false>::type);
    size_t align128_unaligned = alignof(glm::detail::storage<int, 128, false>::type);

    // RESULTS
    // size1_aligned        1
    // size2_aligned        2
    // size4_aligned        4
    // size8_aligned        8
    // size16_aligned      16
    // size32_aligned      32
    // size64_aligned      64
    // size128_aligned    128
    // 
    // size1_unaligned      1
    // size2_unaligned      2
    // size4_unaligned      4
    // size8_unaligned      8
    // size16_unaligned    16
    // size32_unaligned    32
    // size64_unaligned    64
    // size128_unaligned  128
    // 
    // align1_aligned       1
    // align2_aligned       2
    // align4_aligned       4
    // align8_aligned       8
    // align16_aligned     16
    // align32_aligned     32
    // align64_aligned     64
    // align128_aligned     1
    // 
    // align1_unaligned     1
    // align2_unaligned     1
    // align4_unaligned     1
    // align8_unaligned     1
    // align16_unaligned    1
    // align32_unaligned    1
    // align64_unaligned    1
    // align128_unaligned   1
    
    return 0;
}
