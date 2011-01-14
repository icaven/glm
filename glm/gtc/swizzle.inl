namespace glm{
namespace gtc{
namespace swizzle
{
	template <typename T, template <typename> class vecType>
	inline T swizzle
	(	
		vecType<T> const & v,
		comp x
	)
	{
		assert(int(x) < int(typename vecType<T>::_size));
		return v[x];
	}

	template <typename T>
	inline detail::tvec2<T> swizzle
	(
		detail::tvec4<T> const & v,
		comp x, comp y
	)
	{
		return detail::tvec2<T>(
			v[x],
			v[y]);
	}

	template <typename T>
	inline detail::tvec3<T> swizzle
	(
		detail::tvec4<T> const & v,
		comp x, comp y, comp z
	)
	{
		return detail::tvec3<T>(
			v[x],
			v[y],
			v[z]);
	}

	template <typename T>
	inline detail::tvec4<T> swizzle
	(
		detail::tvec4<T> const & v,
		comp x, comp y, comp z, comp w
	)
	{
		return detail::tvec4<T>(v[x], v[y],	v[z], v[w]);
	}

	template <typename T>
	inline detail::tref4<T> swizzle
	(
		detail::tvec4<T> & v,
		comp x, comp y, comp z, comp w
	)
	{
		return detail::tref4<T>(v[x], v[y],	v[z], v[w]);
	}

	template <comp X>
	inline int swizzle
	(
		detail::tvec4<int> const & v
	)
	{
		return v[X];
	}

	template <comp X>
	inline float swizzle
	(
		detail::tvec4<float> const & v
	)
	{
		return v[X];
	}

	template <comp X, comp Y>
	inline detail::tvec2<int> swizzle
	(
		detail::tvec4<int> const & v
	)
	{
		return detail::tvec2<int>(v[X], v[Y]);
	}

	template <comp X, comp Y>
	inline detail::tvec2<float> swizzle
	(
		detail::tvec4<float> const & v
	)
	{
		return detail::tvec2<float>(v[X], v[Y]);
	}

	template <comp X, comp Y, comp Z>
	inline detail::tvec3<int> swizzle
	(
		detail::tvec4<int> const & v
	)
	{
		return detail::tvec3<int>(v[X], v[Y], v[Z]);
	}

	template <comp X, comp Y, comp Z>
	inline detail::tvec3<float> swizzle
	(
		detail::tvec4<float> const & v
	)
	{
		return detail::tvec3<float>(v[X], v[Y],	v[Z]);
	}

	template <comp X, comp Y, comp Z, comp W>
	inline detail::tvec4<int> swizzle
	(
		detail::tvec4<int> const & v
	)
	{
		return detail::tvec4<int>(v[X], v[Y], v[Z], v[W]);
	}

	template <comp X, comp Y, comp Z, comp W>
	inline detail::tvec4<float> swizzle
	(
		detail::tvec4<float> const & v
	)
	{
		return detail::tvec4<float>(v[X], v[Y],	v[Z], v[W]);
	}

}//namespace swizzle
}//namespace gtc
}//namespace glm
