///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2007-02-22
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/color_space.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm
{
    template <typename T> 
    inline detail::_xvec3<T> rgbColorGTX(const detail::_xvec3<T>& color)
    {
		detail::_xvec3<T> hsv = color;
        detail::_xvec3<T> rgb;

	    if(hsv.y == T(0))
		    // achromatic (grey)
            rgb = detail::_xvec3<T>(hsv.z);
	    else
	    {
            T sector = floor(hsv.x / T(60));
			T frac = (hsv.x / T(60)) - sector;
            // factorial part of h
            T o = hsv.z * (T(1) - hsv.y);
            T p = hsv.z * (T(1) - hsv.y * frac);
            T q = hsv.z * (T(1) - hsv.y * (T(1) - frac));

            switch(int(sector))
            {
            default:
            case 0:
                rgb.r = hsv.z;
                rgb.g = q;
                rgb.b = o;
                break;
            case 1:
                rgb.r = p;
                rgb.g = hsv.z;
                rgb.b = o;
                break;
            case 2:
                rgb.r = o;
                rgb.g = hsv.z;
                rgb.b = q;
                break;
            case 3:
                rgb.r = o;
                rgb.g = p;
                rgb.b = hsv.z;
                break;
            case 4:
                rgb.r = q; 
                rgb.g = o; 
                rgb.b = hsv.z;
                break;
			case 5:
                rgb.r = hsv.z; 
                rgb.g = o; 
                rgb.b = p;
                break;
            }
	    }

		return rgb;
    }

    template <typename T> 
    inline detail::_xvec3<T> hsvColorGTX(const detail::_xvec3<T>& rgb)
    {
        detail::_xvec3<T> hsv = rgb;
	    float Min   = min(min(rgb.r, rgb.g), rgb.b);
	    float Max   = max(max(rgb.r, rgb.g), rgb.b);
	    float Delta = Max - Min;

	    hsv.z = Max;                               
    	
	    if(Max != T(0))
	    {
		    hsv.y = Delta / hsv.z;    
			T h = T(0);

		    if(rgb.r == Max)
			    // between yellow & magenta
			    h = T(0) + T(60) * (rgb.g - rgb.b) / Delta;
		    else if(rgb.g == Max)
			    // between cyan & yellow
			    h = T(120) + T(60) * (rgb.b - rgb.r) / Delta;
		    else
			    // between magenta & cyan
			    h = T(240) + T(60) * (rgb.r - rgb.g) / Delta;
            
		    if(h < T(0)) 
                hsv.x = h + T(360);
			else
				hsv.x = h;
	    }
	    else
	    {
		    // If r = g = b = 0 then s = 0, h is undefined
		    hsv.y = T(0);
		    hsv.x = T(0);
	    }

		return hsv;
    }

	template <typename T> 
	inline detail::_xmat4<T> saturationGTX(const T s)
	{
		detail::_xvec3<T> rgbw = detail::_xvec3<T>(T(0.2126), T(0.7152), T(0.0722));

		T col0 = (T(1) - s) * rgbw.r;
		T col1 = (T(1) - s) * rgbw.g;
		T col2 = (T(1) - s) * rgbw.b;

		detail::_xmat4<T> result(T(1));
		result[0][0] = col0 + s;
		result[0][1] = col0;
		result[0][2] = col0;
		result[1][0] = col1;
		result[1][1] = col1 + s;
		result[1][2] = col1;
		result[2][0] = col2;
		result[2][1] = col2;
		result[2][2] = col2 + s;
		return result;
	}

	template <typename T> 
	inline detail::_xvec3<T> saturationGTX(const T s, const detail::_xvec3<T>& color)
	{
		return detail::_xvec3<T>(saturationGTX(s) * detail::_xvec4<T>(color, T(0)));
	}

	template <typename T> 
	inline detail::_xvec4<T> saturationGTX(const T s, const detail::_xvec4<T>& color)
	{
		return saturationGTX(s) * color;
	}

	template <typename T> 
	inline T luminosityGTX(const detail::_xvec3<T>& color)
	{
		const detail::_xvec3<T> tmp = detail::_xvec3<T>(0.33, 0.59, 0.11);
		return dot(color, tmp);
	}
}
