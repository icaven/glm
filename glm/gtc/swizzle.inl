///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2013 G-Truc Creation (www.g-truc.net)
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
/// @ref gtc_swizzle
/// @file glm/gtc/swizzle.inl
/// @date 2011-01-15 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm
{
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER T swizzle
	(
		vecType<T, P> const & v,
		comp x
	)
	{
		assert(int(x) < int(vecType<T, P>::value_size));
		return v[x];
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER detail::tvec2<T, P> swizzle
	(
		vecType<T, P> const & v,
		comp x, comp y
	)
	{
		return detail::tvec2<T, P>(
			v[x],
			v[y]);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER detail::tvec3<T, P> swizzle
	(
		vecType<T, P> const & v,
		comp x, comp y, comp z
	)
	{
		return detail::tvec3<T, P>(
			v[x],
			v[y],
			v[z]);
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER detail::tvec4<T, P> swizzle
	(
		vecType<T, P> const & v,
		comp x, comp y, comp z, comp w
	)
	{
		return detail::tvec4<T, P>(v[x], v[y], v[z], v[w]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T& swizzle
	(
		detail::tvec4<T, P> & v,
		comp x
	)
	{
		return v[x];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tref2<T, P> swizzle
	(
		detail::tvec4<T, P> & v,
		comp x, comp y
	)
	{
		return detail::tref2<T, P>(v[x], v[y]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tref3<T, P> swizzle
	(
		detail::tvec4<T, P> & v,
		comp x, comp y, comp z
	)
	{
		return detail::tref3<T, P>(v[x], v[y], v[z]);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER detail::tref4<T, P> swizzle
	(
		detail::tvec4<T, P> & v,
		comp x, comp y, comp z, comp w
	)
	{
		return detail::tref4<T, P>(v[x], v[y], v[z], v[w]);
	}
}//namespace glm
