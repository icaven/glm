///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-01-15
// Updated : 2011-01-15
// Licence : This source is under MIT License
// File    : glm/gtc/swizzle.inl
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace gtc{
namespace swizzle{

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


template <typename T>
inline T& swizzle
(
	detail::tvec4<T> & v,
	comp x
)
{
	return v[x];
}

template <typename T>
inline detail::tref2<T> swizzle
(
	detail::tvec4<T> & v,
	comp x, comp y
)
{
	return detail::tref2<T>(v[x], v[y]);
}

template <typename T>
inline detail::tref3<T> swizzle
(
	detail::tvec4<T> & v,
	comp x, comp y, comp z
)
{
	return detail::tref3<T>(v[x], v[y],	v[z]);
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

template <comp x>
inline float& swizzle
(
	detail::tvec4<float> & v
)
{
	return v[x];
}

template <comp x>
inline int& swizzle
(
	detail::tvec4<int> & v
)
{
	return v[x];
}

template <comp x, comp y>
inline detail::tref2<float> swizzle
(
	detail::tvec4<float> & v
)
{
	return detail::tref2<float>(v[x], v[y]);
}

template <comp x, comp y>
inline detail::tref2<int> swizzle
(
	detail::tvec4<int> & v
)
{
	return detail::tref2<int>(v[x], v[y]);
}

template <comp x, comp y, comp z>
inline detail::tref3<float> swizzle
(
	detail::tvec4<float> & v
)
{
	return detail::tref3<float>(v[x], v[y],	v[z]);
}
	
template <comp x, comp y, comp z>
inline detail::tref3<int> swizzle
(
	detail::tvec4<int> & v
)
{
	return detail::tref3<int>(v[x], v[y], v[z]);
}

template <comp x, comp y, comp z, comp w>
inline detail::tref4<float> swizzle
(
	detail::tvec4<float> & v
)
{
	return detail::tref4<float>(v[x], v[y],	v[z], v[w]);
}

template <comp x, comp y, comp z, comp w>
inline detail::tref4<int> swizzle
(
	detail::tvec4<int> & v
)
{
	return detail::tref4<int>(v[x], v[y],	v[z], v[w]);
}

}//namespace swizzle
}//namespace gtc
}//namespace glm
