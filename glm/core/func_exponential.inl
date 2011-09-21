///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref core
/// @file glm/core/func_exponential.inl
/// @date 2008-08-03 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    // pow
    template <typename genType>
    GLM_FUNC_QUALIFIER genType pow
	(
		genType const & x, 
		genType const & y
	)
    {
		GLM_STATIC_ASSERT(detail::type<genType>::is_float, "'pow' only accept floating-point input");

        return ::std::pow(x, y);
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec2<T> pow
	(
		detail::tvec2<T> const & x, 
		detail::tvec2<T> const & y
	)
    {
        return detail::tvec2<T>(
            pow(x.x, y.x),
            pow(x.y, y.y));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec3<T> pow
	(
		detail::tvec3<T> const & x, 
		detail::tvec3<T> const & y
	)
    {
        return detail::tvec3<T>(
            pow(x.x, y.x),
            pow(x.y, y.y),
            pow(x.z, y.z));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec4<T> pow
	(
		detail::tvec4<T> const & x, 
		detail::tvec4<T> const & y
	)
    {
        return detail::tvec4<T>(
            pow(x.x, y.x),
            pow(x.y, y.y),
            pow(x.z, y.z),
            pow(x.w, y.w));
    }

    // exp
    template <typename genType>
    GLM_FUNC_QUALIFIER genType exp
	(
		genType const & x
	)
    {
		GLM_STATIC_ASSERT(detail::type<genType>::is_float, "'exp' only accept floating-point input");

        return ::std::exp(x);
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec2<T> exp
	(
		detail::tvec2<T> const & x
	)
    {
        return detail::tvec2<T>(
            exp(x.x),
            exp(x.y));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec3<T> exp
	(
		detail::tvec3<T> const & x
	)
    {
        return detail::tvec3<T>(
            exp(x.x),
            exp(x.y),
            exp(x.z));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec4<T> exp
	(
		detail::tvec4<T> const & x
	)
    {
        return detail::tvec4<T>(
            exp(x.x),
            exp(x.y),
            exp(x.z),
            exp(x.w));
    }

    // log
    template <typename genType>
    GLM_FUNC_QUALIFIER genType log
	(
		genType const & x
	)
    {
		GLM_STATIC_ASSERT(detail::type<genType>::is_float, "'log' only accept floating-point input");

        return ::std::log(x);
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec2<T> log
	(
		detail::tvec2<T> const & x
	)
    {
        return detail::tvec2<T>(
            log(x.x),
            log(x.y));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec3<T> log
	(
		detail::tvec3<T> const & x
	)
    {
        return detail::tvec3<T>(
            log(x.x),
            log(x.y),
            log(x.z));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec4<T> log
	(
		detail::tvec4<T> const & x
	)
    {
        return detail::tvec4<T>(
            log(x.x),
            log(x.y),
            log(x.z),
            log(x.w));
    }

    //exp2, ln2 = 0.69314718055994530941723212145818f
    template <typename genType>
    GLM_FUNC_QUALIFIER genType exp2
	(
		genType const & x
	)
    {
		GLM_STATIC_ASSERT(detail::type<genType>::is_float, "'exp2' only accept floating-point input");

        return ::std::exp(genType(0.69314718055994530941723212145818) * x);
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec2<T> exp2
	(
		detail::tvec2<T> const & x
	)
    {
        return detail::tvec2<T>(
            exp2(x.x),
            exp2(x.y));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec3<T> exp2
	(
		detail::tvec3<T> const & x
	)
    {
        return detail::tvec3<T>(
            exp2(x.x),
            exp2(x.y),
            exp2(x.z));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec4<T> exp2
	(
		detail::tvec4<T> const & x
	)
    {
        return detail::tvec4<T>(
            exp2(x.x),
            exp2(x.y),
            exp2(x.z),
            exp2(x.w));
    }

    // log2, ln2 = 0.69314718055994530941723212145818f
    template <typename genType>
    GLM_FUNC_QUALIFIER genType log2
	(
		genType const & x
	)
    {
		GLM_STATIC_ASSERT(detail::type<genType>::is_float, "'log2' only accept floating-point input");

        return ::std::log(x) / genType(0.69314718055994530941723212145818);
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec2<T> log2
	(
		detail::tvec2<T> const & x
	)
    {
        return detail::tvec2<T>(
            log2(x.x),
            log2(x.y));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec3<T> log2
	(
		detail::tvec3<T> const & x
	)
    {
        return detail::tvec3<T>(
            log2(x.x),
            log2(x.y),
            log2(x.z));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec4<T> log2
	(
		detail::tvec4<T> const & x
	)
    {
        return detail::tvec4<T>(
            log2(x.x),
            log2(x.y),
            log2(x.z),
            log2(x.w));
    }

    // sqrt
    template <typename genType>
    GLM_FUNC_QUALIFIER genType sqrt
	(
		genType const & x
	)
    {
		GLM_STATIC_ASSERT(detail::type<genType>::is_float, "'sqrt' only accept floating-point input");

        return genType(::std::sqrt(x));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec2<T> sqrt
	(
		detail::tvec2<T> const & x
	)
    {
        return detail::tvec2<T>(
            glm::sqrt(x.x),
            glm::sqrt(x.y));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec3<T> sqrt
	(
		detail::tvec3<T> const & x
	)
    {
        return detail::tvec3<T>(
            glm::sqrt(x.x),
            glm::sqrt(x.y),
            glm::sqrt(x.z));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec4<T> sqrt
	(
		detail::tvec4<T> const & x
	)
    {
        return detail::tvec4<T>(
            glm::sqrt(x.x),
            glm::sqrt(x.y),
            glm::sqrt(x.z),
            glm::sqrt(x.w));
    }

    template <typename genType>
    GLM_FUNC_QUALIFIER genType inversesqrt
	(
		genType const & x
	)
    {
		GLM_STATIC_ASSERT(detail::type<genType>::is_float, "'inversesqrt' only accept floating-point input");

        return genType(1) / ::std::sqrt(x);
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec2<T> inversesqrt
	(
		detail::tvec2<T> const & x
	)
    {
        return detail::tvec2<T>(
            inversesqrt(x.x),
            inversesqrt(x.y));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec3<T> inversesqrt
	(
		detail::tvec3<T> const & x
	)
    {
        return detail::tvec3<T>(
            inversesqrt(x.x),
            inversesqrt(x.y),
            inversesqrt(x.z));
    }

    template <typename T>
    GLM_FUNC_QUALIFIER detail::tvec4<T> inversesqrt
	(
		detail::tvec4<T> const & x
	)
    {
        return detail::tvec4<T>(
            inversesqrt(x.x),
            inversesqrt(x.y),
            inversesqrt(x.z),
            inversesqrt(x.w));
    }

}//namespace glm
