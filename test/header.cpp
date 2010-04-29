#include <glm/gtc/double_float.hpp>
#include <glm/gtc/half_float.hpp>
#include <glm/gtc/matrix_access.hpp>
#include <glm/gtc/matrix_operation.hpp>
#include <glm/gtc/matrix_projection.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/type_precision.hpp>

#include <glm/gtx/associated_min_max.hpp>
#include <glm/gtx/bit.hpp>
#include <glm/gtx/closest_point.hpp>
#include <glm/gtx/color_cast.hpp>
#include <glm/gtx/color_space.hpp>
#include <glm/gtx/color_space_YCoCg.hpp>
#include <glm/gtx/comparison.hpp>
#include <glm/gtx/compatibility.hpp>
#include <glm/gtx/component_wise.hpp>
#include <glm/gtx/epsilon.hpp>
#include <glm/gtx/euler_angles.hpp>
#include <glm/gtx/extend.hpp>
#include <glm/gtx/extented_min_max.hpp>
#include <glm/gtx/fast_exponential.hpp>
#include <glm/gtx/fast_square_root.hpp>
#include <glm/gtx/fast_trigonometry.hpp>
#include <glm/gtx/handed_coordinate_space.hpp>
#include <glm/gtx/inertia.hpp>
#include <glm/gtx/integer.hpp>
#include <glm/gtx/intersect.hpp>
#include <glm/gtx/inverse.hpp>
#include <glm/gtx/inverse_transpose.hpp>
#include <glm/gtx/log_base.hpp>
#include <glm/gtx/matrix_access.hpp>
#include <glm/gtx/matrix_cross_product.hpp>
#include <glm/gtx/matrix_major_storage.hpp>
#include <glm/gtx/matrix_projection.hpp>
#include <glm/gtx/matrix_query.hpp>
#include <glm/gtx/matrix_selection.hpp>
#include <glm/gtx/mixed_product.hpp>
#include <glm/gtx/norm.hpp>
#include <glm/gtx/normal.hpp>
#include <glm/gtx/normalize_dot.hpp>
#include <glm/gtx/number_precision.hpp>
#include <glm/gtx/optimum_pow.hpp>
#include <glm/gtx/orthonormalize.hpp>
#include <glm/gtx/perpendicular.hpp>
#include <glm/gtx/polar_coordinates.hpp>
#include <glm/gtx/projection.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtx/random.hpp>
#include <glm/gtx/raw_data.hpp>
#include <glm/gtx/reciprocal.hpp>
#include <glm/gtx/rotate_vector.hpp>
#include <glm/gtx/spline.hpp>
#include <glm/gtx/std_based_type.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/transform2.hpp>
#include <glm/gtx/type_ptr.hpp>
#include <glm/gtx/unsigned_int.hpp>
#include <glm/gtx/vector_access.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtx/vector_query.hpp>
#include <glm/gtx/verbose_operator.hpp>
//#include <glm/virtrev/address.hpp>
//#include <glm/virtrev/equal_operator.hpp>
//#include <glm/virtrev/gl.hpp>
//#include <glm/virtrev/xstream.hpp>

//#ifdef GCC

//template 
//<
//	std::size_t N, 
//	typename T, 
//	template
//	<
//		std::size_t, 
//		typename
//	> class C
//>
//struct trait
//{
//	typedef T value_type;
//	typedef std::size_t size_type;
//	static size_type const value_size;
//};
//
//template 
//<
//	std::size_t N, 
//	typename T, 
//	template
//	<
//		std::size_t N2, 
//		typename T2
//	> class C
//>
//typename trait<N, T, C>::size_type const trait<N, T, C>::value_size = N;
//
//template <std::size_t N, typename T>
//struct base : public trait<N, T, base>
//{
//	typename trait<N, T, base>::value_type Data[trait<N, T, base>::value_size];
//};
//
//template <typename T>
//struct base<4, T> : public trait<4, T, base>
//{
//	value_type Data[value_size];
//};

template <typename T>
struct test
{
	struct mem
	{
		T data;
	};
};

#if(defined(GLM_COMPILER) && !(GLM_COMPILER & GLM_COMPILER_VC))
int main()
{
	glm::quat q1 =  glm::angleAxis(45.f, glm::vec3(0, 0, 1));
}
#endif//(GLM_COMPILER == GLM_COMPILER_VC)
//#endif//GCC