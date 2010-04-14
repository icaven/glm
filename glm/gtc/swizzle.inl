namespace glm{
namespace gtc{
namespace glm_gtc_swizzle
{
	template <typename T>
	inline typename tvec4<T>::value_type swizzle
	(	
		detail::tvec4<T> const & v,
		comp x
	) const
	{
		return v[x];
	}

	template <typename T>
	inline tvec2<T> tvec4<T>::swizzle
	(
		detail::tvec4<T> const & v,
		comp x, comp y
	) const
	{
		return tvec2<T>(
			(*this)[x],
			(*this)[y]);
	}

	template <typename T>
	inline tvec3<T> tvec4<T>::swizzle
	(
		detail::tvec4<T> const & v,
		comp x, comp y, comp z
	) const
	{
		return tvec3<T>(
			(*this)[x],
			(*this)[y],
			(*this)[z]);
	}

	template <typename T>
	inline tvec4<T> tvec4<T>::swizzle
	(
		detail::tvec4<T> const & v,
		comp x, comp y, comp z, comp w
	) const
	{
		return tvec4<T>(v[x], v[y],	v[z], v[w]);
	}

	template <typename T>
	inline tref4<T> swizzle
	(
		detail::tvec4<T> const & v,
		comp x, comp y, comp z, comp w
	)
	{
		return tref4<T>(v[x], v[y],	v[z], v[w]);
	}

}//namespace glm_gtc_swizzle
}//namespace gtc
}//namespace glm
