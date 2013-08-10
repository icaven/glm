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
/// @ref gtc_packing
/// @file glm/gtc/packing.inl
/// @date 2013-08-08 / 2013-08-08
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace glm
{
namespace detail
{
	glm::uint16 float2half(glm::uint32 const & f)
	{
		// 10 bits    =>                         EE EEEFFFFF
		// 11 bits    =>                        EEE EEFFFFFF
		// Half bits  =>                   SEEEEEFF FFFFFFFF
		// Float bits => SEEEEEEE EFFFFFFF FFFFFFFF FFFFFFFF
        
		// 0x00007c00 => 00000000 00000000 01111100 00000000
		// 0x000003ff => 00000000 00000000 00000011 11111111
		// 0x38000000 => 00111000 00000000 00000000 00000000
		// 0x7f800000 => 01111111 10000000 00000000 00000000
		// 0x00008000 => 00000000 00000000 10000000 00000000
		return
        ((f >> 16) & 0x8000) | // sign
        ((((f & 0x7f800000) - 0x38000000) >> 13) & 0x7c00) | // exponential
        ((f >> 13) & 0x03ff); // Mantissa
	}
    
	glm::uint16 float2packed11(glm::uint32 const & f)
	{
		// 10 bits    =>                         EE EEEFFFFF
		// 11 bits    =>                        EEE EEFFFFFF
		// Half bits  =>                   SEEEEEFF FFFFFFFF
		// Float bits => SEEEEEEE EFFFFFFF FFFFFFFF FFFFFFFF
        
		// 0x000007c0 => 00000000 00000000 00000111 11000000
		// 0x00007c00 => 00000000 00000000 01111100 00000000
		// 0x000003ff => 00000000 00000000 00000011 11111111
		// 0x38000000 => 00111000 00000000 00000000 00000000
		// 0x7f800000 => 01111111 10000000 00000000 00000000
		// 0x00008000 => 00000000 00000000 10000000 00000000
		return
        ((((f & 0x7f800000) - 0x38000000) >> 17) & 0x07c0) | // exponential
        ((f >> 17) & 0x003f); // Mantissa
	}
    
	glm::uint float2packed10(glm::uint const & f)
	{
		// 10 bits    =>                         EE EEEFFFFF
		// 11 bits    =>                        EEE EEFFFFFF
		// Half bits  =>                   SEEEEEFF FFFFFFFF
		// Float bits => SEEEEEEE EFFFFFFF FFFFFFFF FFFFFFFF
        
		// 0x0000001F => 00000000 00000000 00000000 00011111
		// 0x0000003F => 00000000 00000000 00000000 00111111
		// 0x000003E0 => 00000000 00000000 00000011 11100000
		// 0x000007C0 => 00000000 00000000 00000111 11000000
		// 0x00007C00 => 00000000 00000000 01111100 00000000
		// 0x000003FF => 00000000 00000000 00000011 11111111
		// 0x38000000 => 00111000 00000000 00000000 00000000
		// 0x7f800000 => 01111111 10000000 00000000 00000000
		// 0x00008000 => 00000000 00000000 10000000 00000000
		return
        ((((f & 0x7f800000) - 0x38000000) >> 18) & 0x03E0) | // exponential
        ((f >> 18) & 0x001f); // Mantissa
	}
    
	glm::uint half2float(glm::uint const & h)
	{
		return ((h & 0x8000) << 16) | ((( h & 0x7c00) + 0x1C000) << 13) | ((h & 0x03FF) << 13);
	}
    
    union uif
    {
        glm::uint i;
        float f;
    };
    
	glm::uint floatTo11bit(float x)
	{
		if(x == 0.0f)
			return 0;
		else if(glm::isnan(x))
			return ~0;
		else if(glm::isinf(x))
			return 0x1f << 6;
        
		uif Union;
		Union.f = x;
		return float2packed11(Union.i);
	}
    
	glm::uint floatTo10bit(float x)
	{
		if(x == 0.0f)
			return 0;
		else if(glm::isnan(x))
			return ~0;
		else if(glm::isinf(x))
			return 0x1f << 5;
        
		uif Union;
		Union.f = x;
		return float2packed10(Union.i);
	}
    
	glm::uint f11_f11_f10(float x, float y, float z)
	{
		return ((floatTo11bit(x) & ((1 << 11) - 1)) << 0) |  ((floatTo11bit(y) & ((1 << 11) - 1)) << 11) | ((floatTo10bit(z) & ((1 << 10) - 1)) << 22);
	}
}//namespace detail

	GLM_FUNC_QUALIFIER uint32 packF11F11F10(vec3 const & v)
    {
        return 
            ((detail::floatTo11bit(v.x) & ((1 << 11) - 1)) << 0) |
            ((detail::floatTo11bit(v.y) & ((1 << 11) - 1)) << 11) |
            ((detail::floatTo10bit(v.z) & ((1 << 10) - 1)) << 22);
    }
    
	GLM_FUNC_QUALIFIER vec3 unpackF11F11F10(uint32 const & v)
    {
    
    }

}//namespace glm
