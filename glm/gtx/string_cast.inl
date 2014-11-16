///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2006 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-04-27
// Updated : 2014-05-10
// Licence : This source is under MIT License
// File    : glm/gtx/string_cast.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <cstdarg>
#include <cstdio>

namespace glm{
namespace detail
{
	GLM_FUNC_QUALIFIER std::string format(const char* msg, ...)
	{
		std::size_t const STRING_BUFFER(4096);
		char text[STRING_BUFFER];
		va_list list;

		if(msg == 0)
			return std::string();

		va_start(list, msg);
#		if(GLM_COMPILER & GLM_COMPILER_VC)
			vsprintf_s(text, STRING_BUFFER, msg, list);
#		else//
			vsprintf(text, msg, list);
#		endif//
		va_end(list);

		return std::string(text);
	}

	static const char* True = "true";
	static const char* False = "false";

	template <typename T>
	struct prefix{};

	template <>
	struct prefix<float>
	{
		static char const * value() {return "";};
	};

	template <>
	struct prefix<double>
	{
		static char const * value() {return "d";};
	};

	template <>
	struct prefix<bool>
	{
		static char const * value() {return "b";};
	};

	template <>
	struct prefix<uint8_t>
	{
		static char const * value() {return "u8";};
	};

	template <>
	struct prefix<int8_t>
	{
		static char const * value() {return "i8";};
	};

	template <>
	struct prefix<uint16_t>
	{
		static char const * value() {return "u16";};
	};

	template <>
	struct prefix<int16_t>
	{
		static char const * value() {return "i16";};
	};

	template <>
	struct prefix<uint32_t>
	{
		static char const * value() {return "u";};
	};

	template <>
	struct prefix<int32_t>
	{
		static char const * value() {return "i";};
	};

	template <>
	struct prefix<uint64_t>
	{
		static char const * value() {return "u64";};
	};

	template <>
	struct prefix<int64_t>
	{
		static char const * value() {return "i64";};
	};

	template <template <typename, precision> class matType, typename T, precision P>
	struct compute_to_string
	{};

	template <precision P>
	struct compute_to_string<tvec1, bool, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tvec1<bool, P> const & x)
		{
			return detail::format("bvec1(%s)",
				x[0] ? detail::True : detail::False);
		}
	};

	template <precision P>
	struct compute_to_string<tvec2, bool, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tvec2<bool, P> const & x)
		{
			return detail::format("bvec2(%s, %s)",
				x[0] ? detail::True : detail::False,
				x[1] ? detail::True : detail::False);
		}
	};

	template <precision P>
	struct compute_to_string<tvec3, bool, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tvec3<bool, P> const & x)
		{
			return detail::format("bvec3(%s, %s, %s)",
				x[0] ? detail::True : detail::False,
				x[1] ? detail::True : detail::False,
				x[2] ? detail::True : detail::False);
		}
	};

	template <precision P>
	struct compute_to_string<tvec4, bool, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tvec4<bool, P> const & x)
		{
			return detail::format("bvec4(%s, %s, %s, %s)",
				x[0] ? detail::True : detail::False,
				x[1] ? detail::True : detail::False,
				x[2] ? detail::True : detail::False,
				x[3] ? detail::True : detail::False);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tvec1, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tvec1<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%svec1(%s)",
				PrefixStr,
				LiteralStr));

			return detail::format(FormatStr.c_str(), x[0]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tvec2, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tvec2<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%svec2(%s, %s)",
				PrefixStr,
				LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(), x[0], x[1]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tvec3, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tvec3<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%svec3(%s, %s, %s)",
				PrefixStr,
				LiteralStr, LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(), x[0], x[1], x[2]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tvec4, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tvec4<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%svec4(%s, %s, %s, %s)",
				PrefixStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(), x[0], x[1], x[2], x[3]);
		}
	};


	template <typename T, precision P>
	struct compute_to_string<tmat2x2, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat2x2<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat2x2((%s, %s), (%s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr,
				LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1],
				x[1][0], x[1][1]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tmat2x3, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat2x3<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat2x3((%s, %s, %s), (%s, %s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1], x[0][2],
				x[1][0], x[1][1], x[1][2]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tmat2x4, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat2x4<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat2x4((%s, %s, %s, %s), (%s, %s, %s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1], x[0][2], x[0][3],
				x[1][0], x[1][1], x[1][2], x[1][3]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tmat3x2, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat3x2<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat3x2((%s, %s), (%s, %s), (%s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr,
				LiteralStr, LiteralStr,
				LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1],
				x[1][0], x[1][1],
				x[2][0], x[2][1]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tmat3x3, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat3x3<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat3x3((%s, %s, %s), (%s, %s, %s), (%s, %s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1], x[0][2],
				x[1][0], x[1][1], x[1][2],
				x[2][0], x[2][1], x[2][2]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tmat3x4, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat3x4<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat3x4((%s, %s, %s, %s), (%s, %s, %s, %s), (%s, %s, %s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1], x[0][2], x[0][3],
				x[1][0], x[1][1], x[1][2], x[1][3],
				x[2][0], x[2][1], x[2][2], x[2][3]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tmat4x2, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat4x2<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat4x2((%s, %s), (%s, %s), (%s, %s), (%s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr,
				LiteralStr, LiteralStr,
				LiteralStr, LiteralStr,
				LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1],
				x[1][0], x[1][1],
				x[2][0], x[2][1],
				x[3][0], x[3][1]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tmat4x3, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat4x3<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat4x3((%s, %s, %s), (%s, %s, %s), (%s, %s, %s), (%s, %s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1], x[0][2],
				x[1][0], x[1][1], x[1][2],
				x[2][0], x[2][1], x[2][2],
				x[3][0], x[3][1], x[3][2]);
		}
	};

	template <typename T, precision P>
	struct compute_to_string<tmat4x4, T, P>
	{
		GLM_FUNC_QUALIFIER static std::string call(tmat4x4<T, P> const & x)
		{
			char const * PrefixStr = prefix<T>::value();
			char const * LiteralStr = std::numeric_limits<T>::is_iec559 ? "%f" : "%d";
			std::string FormatStr(detail::format("%smat4x4((%s, %s, %s, %s), (%s, %s, %s, %s), (%s, %s, %s, %s), (%s, %s, %s, %s))",
				PrefixStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr,
				LiteralStr, LiteralStr, LiteralStr, LiteralStr));

			return detail::format(FormatStr.c_str(),
				x[0][0], x[0][1], x[0][2], x[0][3],
				x[1][0], x[1][1], x[1][2], x[1][3],
				x[2][0], x[2][1], x[2][2], x[2][3],
				x[3][0], x[3][1], x[3][2], x[3][3]);
		}
	};
}//namespace detail

template <template <typename, precision> class matType, typename T, precision P>
GLM_FUNC_DECL std::string to_string(matType<T, P> const & x)
{
	return detail::compute_to_string<matType, T, P>::call(x);
}

}//namespace glm
