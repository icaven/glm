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
/// @file glm/core/func_packing.inl
/// @date 2010-03-17 / 2011-06-15
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm{

GLM_FUNC_QUALIFIER detail::uint32 packUnorm2x16(detail::tvec2<detail::float32> const & v)
{
	detail::uint16 A((detail::uint16)round(clamp(v.x, 0.0f, 1.0f) * 65535.0f));
	detail::uint16 B((detail::uint16)round(clamp(v.y, 0.0f, 1.0f) * 65535.0f));
	return detail::uint32((B << 16) | A);
}

GLM_FUNC_QUALIFIER detail::uint32 packUnorm4x8(detail::tvec4<detail::float32> const & v)
{
		detail::uint8 A((detail::uint8)round(clamp(v.x, 0.0f, 1.0f) * 255.0f));
		detail::uint8 B((detail::uint8)round(clamp(v.y, 0.0f, 1.0f) * 255.0f));
		detail::uint8 C((detail::uint8)round(clamp(v.z, 0.0f, 1.0f) * 255.0f));
		detail::uint8 D((detail::uint8)round(clamp(v.w, 0.0f, 1.0f) * 255.0f));
		return detail::uint32((D << 24) | (C << 16) | (B << 8) | A);
}

GLM_FUNC_QUALIFIER detail::uint32 packSnorm4x8(detail::tvec4<detail::float32> const & v)
{
		detail::uint8 A((detail::uint8)round(clamp(v.x,-1.0f, 1.0f) * 255.0f));
		detail::uint8 B((detail::uint8)round(clamp(v.y,-1.0f, 1.0f) * 255.0f));
		detail::uint8 C((detail::uint8)round(clamp(v.z,-1.0f, 1.0f) * 255.0f));
		detail::uint8 D((detail::uint8)round(clamp(v.w,-1.0f, 1.0f) * 255.0f));
		return detail::uint32((D << 24) | (C << 16) | (B << 8) | A);
}

GLM_FUNC_QUALIFIER detail::tvec2<detail::float32> unpackUnorm2x16(detail::uint32 const & p)
{
	detail::uint16 A(detail::uint16(p >> 0));
	detail::uint16 B(detail::uint16(p >> 16));
	return detail::tvec2<detail::float32>(
		A * 1.0f / 65535.0f, 
		B * 1.0f / 65535.0f);
}

GLM_FUNC_QUALIFIER detail::tvec4<detail::float32> unpackUnorm4x8(detail::uint32 const & p)
{
	detail::uint8 A(detail::uint8(p >> 0));
	detail::uint8 B(detail::uint8(p >> 8));
	detail::uint8 C(detail::uint8(p >> 16));
	detail::uint8 D(detail::uint8(p >> 24));
	return detail::tvec4<detail::float32>(
		A * 1.0f / 255.0f, 
		B * 1.0f / 255.0f,
		C * 1.0f / 255.0f,
		D * 1.0f / 255.0f);
}

GLM_FUNC_QUALIFIER detail::tvec4<detail::float32> unpackSnorm4x8(detail::uint32 const & p)
{
	detail::uint8 A(detail::uint8(p >> 0));
	detail::uint8 B(detail::uint8(p >> 8));
	detail::uint8 C(detail::uint8(p >> 16));
	detail::uint8 D(detail::uint8(p >> 24));
	return clamp(detail::tvec4<detail::float32>(
		A * 1.0f / 127.0f, 
		B * 1.0f / 127.0f,
		C * 1.0f / 127.0f,
		D * 1.0f / 127.0f), -1.0f, 1.0f);
}

GLM_FUNC_QUALIFIER double packDouble2x32(detail::tvec2<detail::uint32> const & v)
{
	return *(double*)&v;
}

GLM_FUNC_QUALIFIER detail::tvec2<detail::uint32> unpackDouble2x32(double const & v)
{
	return *(detail::tvec2<detail::uint32>*)&v;
}

}//namespace glm
