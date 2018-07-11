/// @ref gtc_constants
/// @file glm/gtc/constants.hpp
///
/// @see core (dependence)
///
/// @defgroup gtc_constants GLM_GTC_constants
/// @ingroup gtc
///
/// Include <glm/gtc/constants.hpp> to use the features of this extension.
///
/// Provide a list of constants and precomputed useful values.

#pragma once

// Dependencies
#include "../detail/setup.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_GTC_constants extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_constants
	/// @{

	/// Return the epsilon constant for floating point types.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType epsilon();

	/// Return 0.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType zero();

	/// Return 1.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType one();

	/// Return the pi constant.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType pi();

	/// Return pi * 2.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType two_pi();

	/// Return square root of pi.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType root_pi();

	/// Return pi / 2.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType half_pi();

	/// Return pi / 2 * 3.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType three_over_two_pi();

	/// Return pi / 4.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType quarter_pi();

	/// Return 1 / pi.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType one_over_pi();

	/// Return 1 / (pi * 2).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType one_over_two_pi();

	/// Return 2 / pi.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType two_over_pi();

	/// Return 4 / pi.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType four_over_pi();

	/// Return 2 / sqrt(pi).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType two_over_root_pi();

	/// Return 1 / sqrt(2).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType one_over_root_two();

	/// Return sqrt(pi / 2).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType root_half_pi();

	/// Return sqrt(2 * pi).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType root_two_pi();

	/// Return sqrt(ln(4)).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType root_ln_four();

	/// Return e constant.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType e();

	/// Return Euler's constant.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType euler();

	/// Return sqrt(2).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType root_two();

	/// Return sqrt(3).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType root_three();

	/// Return sqrt(5).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType root_five();

	/// Return ln(2).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType ln_two();

	/// Return ln(10).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType ln_ten();

	/// Return ln(ln(2)).
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType ln_ln_two();

	/// Return 1 / 3.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType third();

	/// Return 2 / 3.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType two_thirds();

	/// Return the golden ratio constant.
	/// @see gtc_constants
	template<typename genType>
	GLM_FUNC_DECL GLM_CONSTEXPR_CXX11 genType golden_ratio();

	/// @}
} //namespace glm

#include "constants.inl"
