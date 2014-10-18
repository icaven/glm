///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
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
/// @file glm/core/type_tvec4.inl
/// @date 2008-08-23 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm
{
#ifdef GLM_FORCE_SIZE_FUNC
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR size_t tvec4<T, P>::size() const
	{
		return 4;
	}
#else
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR length_t tvec4<T, P>::length() const
	{
		return 4;
	}
#endif

	//////////////////////////////////////
	// Accesses

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T & tvec4<T, P>::operator[](length_t i)
	{
		assert(i >= 0 && static_cast<detail::component_count_t>(i) < detail::component_count(*this));
		return (&x)[i];
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T const & tvec4<T, P>::operator[](length_t i) const
	{
		assert(i >= 0 && static_cast<detail::component_count_t>(i) < detail::component_count(*this));
		return (&x)[i];
	}

	//////////////////////////////////////
	// Implicit basic constructors

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4() :
		x(0),
		y(0),
		z(0),
		w(0)
	{}

#if (GLM_HAS_UNRESTRICTED_UNIONS || GLM_HAS_ANONYMOUS_UNION) && (GLM_ARCH & GLM_ARCH_SSE2)
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, lowp>::tvec4() :
		data(_mm_setzero_ps())
	{}
	
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, mediump>::tvec4() :
		data(_mm_setzero_ps())
	{}
#endif
	
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec4<T, P> const & v) :
		x(v.x),
		y(v.y),
		z(v.z),
		w(v.w)
	{}

#if (GLM_HAS_UNRESTRICTED_UNIONS || GLM_HAS_ANONYMOUS_UNION) && (GLM_ARCH & GLM_ARCH_SSE2)
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, lowp>::tvec4(tvec4<float, lowp> const & v) :
		data(v.data)
	{}
	
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, mediump>::tvec4(tvec4<float, mediump> const & v) :
		data(v.data)
	{}
#endif

	template <typename T, precision P>
	template <precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec4<T, Q> const & v) :
		x(v.x),
		y(v.y),
		z(v.z),
		w(v.w)
	{}

	//////////////////////////////////////
	// Explicit basic constructors

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(ctor)
	{}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(T const & s) :
		x(s),
		y(s),
		z(s),
		w(s)
	{}

#if (GLM_HAS_UNRESTRICTED_UNIONS || GLM_HAS_ANONYMOUS_UNION) && (GLM_ARCH & GLM_ARCH_SSE2)
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, lowp>::tvec4(float const & s) :
		data(_mm_set1_ps(s))
	{}
	
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, mediump>::tvec4(float const & s) :
		data(_mm_set1_ps(s))
	{}
#endif
	
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(T const & a, T const & b, T const & c, T const & d) :
		x(a),
		y(b),
		z(c),
		w(d)
	{}

#if (GLM_HAS_UNRESTRICTED_UNIONS || GLM_HAS_ANONYMOUS_UNION) && (GLM_ARCH & GLM_ARCH_SSE2)
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, lowp>::tvec4(float const & a, float const & b, float const & c, float const & d) :
		data(_mm_set_ps(d, c, b, a))
	{}
	
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, mediump>::tvec4(float const & a, float const & b, float const & c, float const & d) :
		data(_mm_set_ps(d, c, b, a))
	{}
#endif
	
	//////////////////////////////////////
	// Conversion scalar constructors

	template <typename T, precision P>
	template <typename A, typename B, typename C, typename D>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(A const & a, B const & b, C const & c, D const & d) :
		x(static_cast<T>(a)),
		y(static_cast<T>(b)),
		z(static_cast<T>(c)),
		w(static_cast<T>(d))
	{}

	template <typename T, precision P>
	template <typename A, typename B, typename C, typename D>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec1<A, P> const & a, tvec1<B, P> const & b, tvec1<C, P> const & c, tvec1<D, P> const & d) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(c.x)),
		w(static_cast<T>(d.x))
	{}

	//////////////////////////////////////
	// Conversion vector constructors

	template <typename T, precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec2<A, Q> const & a, B const & b, C const & c) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(b)),
		w(static_cast<T>(c))
	{}

	template <typename T, precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec2<A, Q> const & a, tvec1<B, Q> const & b, tvec1<C, Q> const & c) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(b.x)),
		w(static_cast<T>(c.x))
	{}

	template <typename T, precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(A const & s1, tvec2<B, Q> const & v, C const & s2) :
		x(static_cast<T>(s1)),
		y(static_cast<T>(v.x)),
		z(static_cast<T>(v.y)),
		w(static_cast<T>(s2))
	{}

	template <typename T, precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec1<A, Q> const & a, tvec2<B, Q> const & b, tvec1<C, Q> const & c) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(b.y)),
		w(static_cast<T>(c.x))
	{}

	template <typename T, precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(A const & s1, B const & s2, tvec2<C, Q> const & v) :
		x(static_cast<T>(s1)),
		y(static_cast<T>(s2)),
		z(static_cast<T>(v.x)),
		w(static_cast<T>(v.y))
	{}

	template <typename T, precision P>
	template <typename A, typename B, typename C, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec1<A, Q> const & a, tvec1<B, Q> const & b, tvec2<C, Q> const & c) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(c.x)),
		w(static_cast<T>(c.y))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec3<A, Q> const & a, B const & b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(a.z)),
		w(static_cast<T>(b))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec3<A, Q> const & a, tvec1<B, Q> const & b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(a.z)),
		w(static_cast<T>(b.x))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(A const & a, tvec3<B, Q> const & b) :
		x(static_cast<T>(a)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(b.y)),
		w(static_cast<T>(b.z))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec1<A, Q> const & a, tvec3<B, Q> const & b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(b.x)),
		z(static_cast<T>(b.y)),
		w(static_cast<T>(b.z))
	{}

	template <typename T, precision P>
	template <typename A, typename B, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec2<A, Q> const & a, tvec2<B, Q> const & b) :
		x(static_cast<T>(a.x)),
		y(static_cast<T>(a.y)),
		z(static_cast<T>(b.x)),
		w(static_cast<T>(b.y))
	{}

	template <typename T, precision P>
	template <typename U, precision Q>
	GLM_FUNC_QUALIFIER tvec4<T, P>::tvec4(tvec4<U, Q> const & v) :
		x(static_cast<T>(v.x)),
		y(static_cast<T>(v.y)),
		z(static_cast<T>(v.z)),
		w(static_cast<T>(v.w))
	{}

	//////////////////////////////////////
	// Unary arithmetic operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator=(tvec4<T, P> const & v)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
		this->w = v.w;
		return *this;
	}

#if (GLM_HAS_UNRESTRICTED_UNIONS || GLM_HAS_ANONYMOUS_UNION) && (GLM_ARCH & GLM_ARCH_SSE2)
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, lowp> & tvec4<float, lowp>::operator= (tvec4<float, lowp> const & v)
	{
		this->data = v.data;
		return *this;
	}
	
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, mediump> & tvec4<float, mediump>::operator= (tvec4<float, mediump> const & v)
	{
		this->data = v.data;
		return *this;
	}
#endif

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator=(tvec4<U, P> const & v)
	{
		this->x = static_cast<T>(v.x);
		this->y = static_cast<T>(v.y);
		this->z = static_cast<T>(v.z);
		this->w = static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator+=(U s)
	{
		this->x += static_cast<T>(s);
		this->y += static_cast<T>(s);
		this->z += static_cast<T>(s);
		this->w += static_cast<T>(s);
		return *this;
	}

#if (GLM_HAS_UNRESTRICTED_UNIONS || GLM_HAS_ANONYMOUS_UNION) && (GLM_ARCH & GLM_ARCH_SSE2)
	template <>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<float, lowp> & tvec4<float, lowp>::operator+=(U s)
	{
		this->data = _mm_add_ps(this->data, _mm_set_ps1(static_cast<float>(s)));
		return *this;
	}

	template <>
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, lowp> & tvec4<float, lowp>::operator+=<float>(float s)
	{
		this->data = _mm_add_ps(this->data, _mm_set_ps1(s));
		return *this;
	}

	template <>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<float, mediump> & tvec4<float, mediump>::operator+=(U s)
	{
		this->data = _mm_add_ps(this->data, _mm_set_ps1(static_cast<float>(s)));
		return *this;
	}

	template <>
	template <>
	GLM_FUNC_QUALIFIER tvec4<float, mediump> & tvec4<float, mediump>::operator+=<float>(float s)
	{
		this->data = _mm_add_ps(this->data, _mm_set_ps1(s));
		return *this;
	}
#endif

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator+=(tvec1<U, P> const & s)
	{
		this->x += static_cast<T>(s);
		this->y += static_cast<T>(s);
		this->z += static_cast<T>(s);
		this->w += static_cast<T>(s);
		return *this;
	}

#if (GLM_HAS_UNRESTRICTED_UNIONS || GLM_HAS_ANONYMOUS_UNION) && (GLM_ARCH & GLM_ARCH_SSE2)
	template <>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<float, lowp> & tvec4<float, lowp>::operator+=(tvec1<U, lowp> const & s)
	{
		this->data = _mm_add_ps(this->data, _mm_set_ps1(static_cast<float>(s)));
		return *this;
	}

	template <>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<float, mediump> & tvec4<float, mediump>::operator+=(tvec1<U, mediump> const & s)
	{
		this->data = _mm_add_ps(this->data, _mm_set_ps1(static_cast<float>(s)));
		return *this;
	}
#endif

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator+=(tvec4<U, P> const & v)
	{
		this->x += static_cast<T>(v.x);
		this->y += static_cast<T>(v.y);
		this->z += static_cast<T>(v.z);
		this->w += static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator-=(U s)
	{
		this->x -= static_cast<T>(s);
		this->y -= static_cast<T>(s);
		this->z -= static_cast<T>(s);
		this->w -= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator-=(tvec1<U, P> const & v)
	{
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.x);
		this->z -= static_cast<T>(v.x);
		this->w -= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator-=(tvec4<U, P> const & v)
	{
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.y);
		this->z -= static_cast<T>(v.z);
		this->w -= static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator*=(U s)
	{
		this->x *= static_cast<T>(s);
		this->y *= static_cast<T>(s);
		this->z *= static_cast<T>(s);
		this->w *= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator*=(tvec1<U, P> const & v)
	{
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.x);
		this->z *= static_cast<T>(v.x);
		this->w *= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator*=(tvec4<U, P> const & v)
	{
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.y);
		this->z *= static_cast<T>(v.z);
		this->w *= static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator/=(U s)
	{
		this->x /= static_cast<T>(s);
		this->y /= static_cast<T>(s);
		this->z /= static_cast<T>(s);
		this->w /= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator/=(tvec1<U, P> const & v)
	{
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.x);
		this->z /= static_cast<T>(v.x);
		this->w /= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator/=(tvec4<U, P> const & v)
	{
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.y);
		this->z /= static_cast<T>(v.z);
		this->w /= static_cast<T>(v.w);
		return *this;
	}

	//////////////////////////////////////
	// Increment and decrement operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator++()
	{
		++this->x;
		++this->y;
		++this->z;
		++this->w;
		return *this;
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator--()
	{
		--this->x;
		--this->y;
		--this->z;
		--this->w;
		return *this;
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> tvec4<T, P>::operator++(int)
	{
		tvec4<T, P> Result(*this);
		++*this;
		return Result;
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> tvec4<T, P>::operator--(int)
	{
		tvec4<T, P> Result(*this);
		--*this;
		return Result;
	}

	//////////////////////////////////////
	// Unary bit operators

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator%=(U s)
	{
		this->x %= static_cast<T>(s);
		this->y %= static_cast<T>(s);
		this->z %= static_cast<T>(s);
		this->w %= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator%=(tvec1<U, P> const & v)
	{
		this->x %= static_cast<T>(v.x);
		this->y %= static_cast<T>(v.x);
		this->z %= static_cast<T>(v.x);
		this->w %= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator%=(tvec4<U, P> const & v)
	{
		this->x %= static_cast<T>(v.x);
		this->y %= static_cast<T>(v.y);
		this->z %= static_cast<T>(v.z);
		this->w %= static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator&=(U s)
	{
		this->x &= static_cast<T>(s);
		this->y &= static_cast<T>(s);
		this->z &= static_cast<T>(s);
		this->w &= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator&=(tvec1<U, P> const & v)
	{
		this->x &= static_cast<T>(v.x);
		this->y &= static_cast<T>(v.x);
		this->z &= static_cast<T>(v.x);
		this->w &= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator&=(tvec4<U, P> const & v)
	{
		this->x &= static_cast<T>(v.x);
		this->y &= static_cast<T>(v.y);
		this->z &= static_cast<T>(v.z);
		this->w &= static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator|=(U s)
	{
		this->x |= static_cast<T>(s);
		this->y |= static_cast<T>(s);
		this->z |= static_cast<T>(s);
		this->w |= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator|=(tvec1<U, P> const & v)
	{
		this->x |= static_cast<T>(v.x);
		this->y |= static_cast<T>(v.x);
		this->z |= static_cast<T>(v.x);
		this->w |= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator|=(tvec4<U, P> const & v)
	{
		this->x |= static_cast<T>(v.x);
		this->y |= static_cast<T>(v.y);
		this->z |= static_cast<T>(v.z);
		this->w |= static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator^=(U s)
	{
		this->x ^= static_cast<T>(s);
		this->y ^= static_cast<T>(s);
		this->z ^= static_cast<T>(s);
		this->w ^= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator^=(tvec1<U, P> const & v)
	{
		this->x ^= static_cast<T>(v.x);
		this->y ^= static_cast<T>(v.x);
		this->z ^= static_cast<T>(v.x);
		this->w ^= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator^=(tvec4<U, P> const & v)
	{
		this->x ^= static_cast<T>(v.x);
		this->y ^= static_cast<T>(v.y);
		this->z ^= static_cast<T>(v.z);
		this->w ^= static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator<<=(U s)
	{
		this->x <<= static_cast<T>(s);
		this->y <<= static_cast<T>(s);
		this->z <<= static_cast<T>(s);
		this->w <<= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator<<=(tvec1<U, P> const & v)
	{
		this->x <<= static_cast<T>(v.x);
		this->y <<= static_cast<T>(v.x);
		this->z <<= static_cast<T>(v.x);
		this->w <<= static_cast<T>(v.x);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator<<=(tvec4<U, P> const & v)
	{
		this->x <<= static_cast<T>(v.x);
		this->y <<= static_cast<T>(v.y);
		this->z <<= static_cast<T>(v.z);
		this->w <<= static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator>>=(U s)
	{
		this->x >>= static_cast<T>(s);
		this->y >>= static_cast<T>(s);
		this->z >>= static_cast<T>(s);
		this->w >>= static_cast<T>(s);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator>>=(tvec1<U, P> const & v)
	{
		this->x >>= static_cast<T>(v.x);
		this->y >>= static_cast<T>(v.y);
		this->z >>= static_cast<T>(v.z);
		this->w >>= static_cast<T>(v.w);
		return *this;
	}

	template <typename T, precision P>
	template <typename U> 
	GLM_FUNC_QUALIFIER tvec4<T, P> & tvec4<T, P>::operator>>=(tvec4<U, P> const & v)
	{
		this->x >>= static_cast<T>(v.x);
		this->y >>= static_cast<T>(v.y);
		this->z >>= static_cast<T>(v.z);
		this->w >>= static_cast<T>(v.w);
		return *this;
	}

	//////////////////////////////////////
	// Boolean operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator==(tvec4<T, P> const & v1, tvec4<T, P> const & v2)
	{
		return (v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z) && (v1.w == v2.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool operator!=(tvec4<T, P> const & v1, tvec4<T, P> const & v2)
	{
		return (v1.x != v2.x) || (v1.y != v2.y) || (v1.z != v2.z) || (v1.w != v2.w);
	}

	//////////////////////////////////////
	// Binary arithmetic operators

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator+ 
	(
		tvec4<T, P> const & v, 
		T const & s
	)
	{
		return tvec4<T, P>(
			v.x + s,
			v.y + s,
			v.z + s,
			v.w + s);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator+ 
	(
		T const & s, 
		tvec4<T, P> const & v
	)
	{
		return tvec4<T, P>(
			s + v.x,
			s + v.y,
			s + v.z,
			s + v.w);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator+ 
	(
		tvec4<T, P> const & v1, 
		tvec4<T, P> const & v2
	)
	{
		return tvec4<T, P>(
			v1.x + v2.x,
			v1.y + v2.y,
			v1.z + v2.z,
			v1.w + v2.w);
	}

	//operator-
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator- 
	(
		tvec4<T, P> const & v, 
		T const & s
	)
	{
		return tvec4<T, P>(
			v.x - s,
			v.y - s,
			v.z - s,
			v.w - s);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator- 
	(
		T const & s, 
		tvec4<T, P> const & v
	)
	{
		return tvec4<T, P>(
			s - v.x,
			s - v.y,
			s - v.z,
			s - v.w);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator- 
	(
		tvec4<T, P> const & v1, 
		tvec4<T, P> const & v2
	)
	{
		return tvec4<T, P>(
			v1.x - v2.x,
			v1.y - v2.y,
			v1.z - v2.z,
			v1.w - v2.w);
	}

	//operator*
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator* 
	(
		tvec4<T, P> const & v, 
		T const & s
	)
	{
		return tvec4<T, P>(
			v.x * s,
			v.y * s,
			v.z * s,
			v.w * s);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator* 
	(
		T const & s, 
		tvec4<T, P> const & v
	)
	{
		return tvec4<T, P>(
			s * v.x,
			s * v.y,
			s * v.z,
			s * v.w);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator*
	(
		tvec4<T, P> const & v1, 
		tvec4<T, P> const & v2
	)
	{
		return tvec4<T, P>(
			v1.x * v2.x,
			v1.y * v2.y,
			v1.z * v2.z,
			v1.w * v2.w);
	}

	//operator/
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator/
	(
		tvec4<T, P> const & v, 
		T const & s
	)
	{
		return tvec4<T, P>(
			v.x / s,
			v.y / s,
			v.z / s,
			v.w / s);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator/
	(
		T const & s, 
		tvec4<T, P> const & v
	)
	{
		return tvec4<T, P>(
			s / v.x,
			s / v.y,
			s / v.z,
			s / v.w);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator/
	(
		tvec4<T, P> const & v1, 
		tvec4<T, P> const & v2
	)
	{
		return tvec4<T, P>(
			v1.x / v2.x,
			v1.y / v2.y,
			v1.z / v2.z,
			v1.w / v2.w);
	}

	// Unary constant operators
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator-
	(
		tvec4<T, P> const & v
	)
	{
		return tvec4<T, P>(
			-v.x, 
			-v.y, 
			-v.z, 
			-v.w);
	}

	//////////////////////////////////////
	// Binary bit operators

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator%(tvec4<T, P> const & v, T const & s)
	{
		return tvec4<T, P>(
			v.x % s,
			v.y % s,
			v.z % s,
			v.w % s);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator%(tvec4<T, P> const & v, tvec1<T, P> const & s)
	{
		return tvec4<T, P>(
			v.x % s.x,
			v.y % s.x,
			v.z % s.x,
			v.w % s.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator%(T const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s % v.x,
			s % v.y,
			s % v.z,
			s % v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator%(tvec1<T, P> const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s.x % v.x,
			s.x % v.y,
			s.x % v.z,
			s.x % v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator%(tvec4<T, P> const & v1, tvec4<T, P> const & v2)
	{
		return tvec4<T, P>(
			v1.x % v2.x,
			v1.y % v2.y,
			v1.z % v2.z,
			v1.w % v2.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator&(tvec4<T, P> const & v, T const & s)
	{
		return tvec4<T, P>(
			v.x & s,
			v.y & s,
			v.z & s,
			v.w & s);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator&(tvec4<T, P> const & v, tvec1<T, P> const & s)
	{
		return tvec4<T, P>(
			v.x & s.x,
			v.y & s.x,
			v.z & s.x,
			v.w & s.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator&(T const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s & v.x,
			s & v.y,
			s & v.z,
			s & v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator&(tvec1<T, P> const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s.x & v.x,
			s.x & v.y,
			s.x & v.z,
			s.x & v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator&(tvec4<T, P> const & v1, tvec4<T, P> const & v2)
	{
		return tvec4<T, P>(
			v1.x & v2.x,
			v1.y & v2.y,
			v1.z & v2.z,
			v1.w & v2.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator|(tvec4<T, P> const & v, T const & s)
	{
		return tvec4<T, P>(
			v.x | s,
			v.y | s,
			v.z | s,
			v.w | s);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator|(tvec4<T, P> const & v, tvec1<T, P> const & s)
	{
		return tvec4<T, P>(
			v.x | s.x,
			v.y | s.x,
			v.z | s.x,
			v.w | s.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator|(T const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s | v.x,
			s | v.y,
			s | v.z,
			s | v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator|(tvec1<T, P> const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s.x | v.x,
			s.x | v.y,
			s.x | v.z,
			s.x | v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator|(tvec4<T, P> const & v1, tvec4<T, P> const & v2)
	{
		return tvec4<T, P>(
			v1.x | v2.x,
			v1.y | v2.y,
			v1.z | v2.z,
			v1.w | v2.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator^(tvec4<T, P> const & v, T const & s)
	{
		return tvec4<T, P>(
			v.x ^ s,
			v.y ^ s,
			v.z ^ s,
			v.w ^ s);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator^(tvec4<T, P> const & v, tvec1<T, P> const & s)
	{
		return tvec4<T, P>(
			v.x ^ s.x,
			v.y ^ s.x,
			v.z ^ s.x,
			v.w ^ s.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator^(T const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s ^ v.x,
			s ^ v.y,
			s ^ v.z,
			s ^ v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator^(tvec1<T, P> const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s.x ^ v.x,
			s.x ^ v.y,
			s.x ^ v.z,
			s.x ^ v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator^(tvec4<T, P> const & v1, tvec4<T, P> const & v2)
	{
		return tvec4<T, P>(
			v1.x ^ v2.x,
			v1.y ^ v2.y,
			v1.z ^ v2.z,
			v1.w ^ v2.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator<<(tvec4<T, P> const & v, T const & s)
	{
		return tvec4<T, P>(
			v.x << s,
			v.y << s,
			v.z << s,
			v.w << s);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator<<(tvec4<T, P> const & v, tvec1<T, P> const & s)
	{
		return tvec4<T, P>(
			v.x << s.x,
			v.y << s.x,
			v.z << s.x,
			v.w << s.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator<<(T const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s << v.x,
			s << v.y,
			s << v.z,
			s << v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator<<(tvec1<T, P> const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s.x << v.x,
			s.x << v.y,
			s.x << v.z,
			s.x << v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator<<(tvec4<T, P> const & v1, tvec4<T, P> const & v2)
	{
		return tvec4<T, P>(
			v1.x << v2.x,
			v1.y << v2.y,
			v1.z << v2.z,
			v1.w << v2.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator>>(tvec4<T, P> const & v, T const & s)
	{
		return tvec4<T, P>(
			v.x >> s,
			v.y >> s,
			v.z >> s,
			v.w >> s);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator>>(tvec4<T, P> const & v, tvec1<T, P> const & s)
	{
		return tvec4<T, P>(
			v.x >> s.x,
			v.y >> s.x,
			v.z >> s.x,
			v.w >> s.x);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator>>(T const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s >> v.x,
			s >> v.y,
			s >> v.z,
			s >> v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator>>(tvec1<T, P> const & s, tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			s.x >> v.x,
			s.x >> v.y,
			s.x >> v.z,
			s.x >> v.w);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER tvec4<T, P> operator>>(tvec4<T, P> const & v1, tvec4<T, P> const & v2)
	{
		return tvec4<T, P>(
			v1.x >> v2.x,
			v1.y >> v2.y,
			v1.z >> v2.z,
			v1.w >> v2.w);
	}

	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER tvec4<T, P> operator~(tvec4<T, P> const & v)
	{
		return tvec4<T, P>(
			~v.x,
			~v.y,
			~v.z,
			~v.w);
	}
}//namespace glm
