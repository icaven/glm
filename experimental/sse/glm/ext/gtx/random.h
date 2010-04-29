///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2008 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-01-16
// Updated : 2007-08-30
// Licence : This source is under GNU LGPL licence
// File    : glm/gtx/random.h
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_vecx
// - GLM_GTX_half
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __glm_gtx_random__
#define __glm_gtx_random__

// Dependency:
#include "../../glm.h"
#include "../gtx/half.h"
#include "../gtx/vecx.h"

namespace glm
{
	template <typename T> T signedRand1GTX();                                                                           //!< Generate a random number in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	template <> __halfGTX signedRand1GTX();                                                                             //!< Generate a random number in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	template <> float signedRand1GTX();                                                                                 //!< Generate a random number in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	template <> double signedRand1GTX();                                                                                //!< Generate a random number in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec2<T> signedRand2GTX();                                                                   //!< Generate 2 random numbers in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec3<T> signedRand3GTX();                                                                   //!< Generate 3 random numbers in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec4<T> signedRand4GTX();                                                                   //!< Generate 4 random numbers in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	template <int N, typename T> detail::_xvecxGTX<N, T> signedRandGTX();                                                       //!< Generate N random numbers in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)

    template <typename T> detail::_xvec2<T> normalizedRand2GTX();                                                               //!< Generate a normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
    //template <> _xvec2<__halfGTX> normalizedRand2GTX();                                                                 //!< Generate a normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
    //template <> _xvec2<float> normalizedRand2GTX();                                                                     //!< Generate a normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
    //template <> _xvec2<double> normalizedRand2GTX();                                                                    //!< Generate a normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
	template <typename T> detail::_xvec2<T> normalizedRand2GTX(T Min, T Max);                                                   //!< Generate a scaled and normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)

    template <typename T> detail::_xvec3<T> normalizedRand3GTX();                                                               //!< Generate a normalized 3D vector regulary distribute on a sphere (From GLM_GTX_random extension)
    //template <> _xvec3<__halfGTX> normalizedRand3GTX();                                                                 //!< Generate a normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
    //template <> _xvec3<float> normalizedRand3GTX();                                                                     //!< Generate a normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
    //template <> _xvec3<double> normalizedRand3GTX();                                                                    //!< Generate a normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
    template <typename T> detail::_xvec3<T> normalizedRand3GTX(T Min, T Max);                                                   //!< Generate a scaled and normalized 3D vector regulary distribute on a sphere (From GLM_GTX_random extension)

	template <typename T> T compRand1GTX();                                                                             //!< Generate a random number in the interval [0, 1], according a linear distribution (From GLM_GTX_random extension)
	template <> __halfGTX compRand1GTX();                                                                               //!< Generate a random number in the interval [0, 1], according a linear distribution (From GLM_GTX_random extension)
	template <> float compRand1GTX();                                                                                   //!< Generate a random number in the interval [0, 1], according a linear distribution (From GLM_GTX_random extension)
	template <> double compRand1GTX();                                                                                  //!< Generate a random number in the interval [0, 1], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> T compRand1GTX(T Min, T Max);                                                                 //!< Generate a random number in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec2<T> compRand2GTX(T Min, T Max);                                                         //!< Generate 2 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec3<T> compRand3GTX(T Min, T Max);                                                         //!< Generate 3 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec4<T> compRand4GTX(T Min, T Max);                                                         //!< Generate 4 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	template <int N, typename T> detail::_xvecxGTX<N, T> compRandGTX(T Min, T Max);                                             //!< Generate N random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec2<T> compRand2GTX(const detail::_xvec2<T>& Min, const detail::_xvec2<T>& Max);                           //!< Generate 2 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec3<T> compRand3GTX(const detail::_xvec3<T>& Min, const detail::_xvec3<T>& Max);                           //!< Generate 3 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	template <typename T> detail::_xvec3<T> compRand4GTX(const detail::_xvec4<T>& Min, const detail::_xvec4<T>& Max);                           //!< Generate 4 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	template <int N, typename T> detail::_xvecxGTX<N, T> compRandGTX(const detail::_xvecxGTX<N, T>& Min, const detail::_xvecxGTX<N, T>& Max);   //!< Generate N random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)

	template <typename T> detail::_xvec2<T> vecRand2GTX();                                                                      //!< Generate a random normalized 2 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
    template <> detail::_xvec2<__halfGTX> vecRand2GTX();                                                                        //!< Generate a random normalized 2 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
    template <> detail::_xvec2<float> vecRand2GTX();                                                                            //!< Generate a random normalized 2 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
    template <> detail::_xvec2<double> vecRand2GTX();                                                                           //!< Generate a random normalized 2 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	template <typename T> detail::_xvec2<T> vecRand2GTX(T MinRadius, T MaxRadius);                                              //!< Generate a random normalized 2 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)

	template <typename T> detail::_xvec3<T> vecRand3GTX();                                                                      //!< Generate a random normalized 3 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	//template <> detail::_xvec3<__halfGTX> vecRand3GTX();                                                                        //!< Generate a random normalized 3 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	//template <> detail::_xvec3<float> vecRand3GTX();                                                                            //!< Generate a random normalized 3 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	//template <> detail::_xvec3<double> vecRand3GTX();                                                                           //!< Generate a random normalized 3 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec3<T> vecRand3GTX(T MinRadius, T MaxRadius);                                              //!< Generate a random normalized 3 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)

	template <typename T> detail::_xvec4<T> vecRand4GTX();                                                                      //!< Generate a random normalized 4 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
    template <> detail::_xvec4<__halfGTX> vecRand4GTX();                                                                        //!< Generate a random normalized 4 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
    template <> detail::_xvec4<float> vecRand4GTX();                                                                            //!< Generate a random normalized 4 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
    template <> detail::_xvec4<double> vecRand4GTX();                                                                           //!< Generate a random normalized 4 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec4<T> vecRand4GTX(T MinRadius, T MaxRadius);                                              //!< Generate a random normalized 4 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)

    template <typename T> T gaussRand1GTX(T mean, T std_deviation);																//!< Gererate a random floating number according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec2<T> gaussRand2GTX(T mean, T std_deviation);                                             //!< Gererate 2 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec3<T> gaussRand3GTX(T mean, T std_deviation);                                             //!< Gererate 3 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec4<T> gaussRand4GTX(T mean, T std_deviation);                                             //!< Gererate 4 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec2<T> gaussRand2GTX(const detail::_xvec2<T>& mean, T std_deviation);                              //!< Gererate 2 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec3<T> gaussRand3GTX(const detail::_xvec3<T>& mean, T std_deviation);                              //!< Gererate 3 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec4<T> gaussRand4GTX(const detail::_xvec4<T>& mean, T std_deviation);                              //!< Gererate 4 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec2<T> gaussRand2GTX(T  mean, const detail::_xvec2<T>& std_deviation);                             //!< Gererate 2 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec3<T> gaussRand3GTX(T  mean, const detail::_xvec3<T>& std_deviation);                             //!< Gererate 3 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec4<T> gaussRand4GTX(T  mean, const detail::_xvec4<T>& std_deviation);                             //!< Gererate 4 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec2<T> gaussRand2GTX(const detail::_xvec2<T>& mean, const detail::_xvec2<T>& std_deviation);               //!< Gererate 2 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec3<T> gaussRand3GTX(const detail::_xvec3<T>& mean, const detail::_xvec3<T>& std_deviation);               //!< Gererate 3 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
    template <typename T> detail::_xvec4<T> gaussRand4GTX(const detail::_xvec4<T>& mean, const detail::_xvec4<T>& std_deviation);               //!< Gererate 4 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)

	namespace gtx
	{
		//! GLM_GTX_random extension: Generate random number from varius distribution methods
		namespace random
		{
            template <typename T> inline T signedRand1(){return signedRand1GTX<T>();}                                                                                   //!< Generate a random number in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <> inline __halfGTX signedRand1(){return signedRand1GTX<__halfGTX>();}                                                                             //!< Generate a random number in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <> inline float signedRand1(){return signedRand1GTX<float>();}                                                                                     //!< Generate a random number in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <> inline double signedRand1(){return signedRand1GTX<double>();}                                                                                   //!< Generate a random number in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec2<T> signedRand2(){return signedRand2GTX<T>();}                                                                           //!< Generate 2 random numbers in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec3<T> signedRand3(){return signedRand3GTX<T>();}                                                                           //!< Generate 3 random numbers in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec4<T> signedRand4(){return signedRand4GTX<T>();}                                                                           //!< Generate 4 random numbers in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <int N, typename T> inline detail::_xvecxGTX<N, T> signedRand(){return signedRandGTX<N, T>();}                                                             //!< Generate N random numbers in the interval [-1, 1], according a linear distribution (From GLM_GTX_random extension)

			template <typename T> detail::_xvec2<T> normalizedRand2(){return normalizedRand2GTX<T>();}                                                                          //!< Generate a normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
			template <typename T> detail::_xvec2<T> normalizedRand2(T Min, T Max){return normalizedRand2GTX(Min, Max);}                                                         //!< Generate a scaled and normalized 2D vector regulary distribute on a circle (From GLM_GTX_random extension)
			template <typename T> detail::_xvec3<T> normalizedRand3(){return normalizedRand3GTX<T>();}                                                                          //!< Generate a normalized 3D vector regulary distribute on a sphere (From GLM_GTX_random extension)
			template <typename T> detail::_xvec3<T> normalizedRand3(T Min, T Max){return normalizedRand3GTX(Min, Max);}                                                         //!< Generate a scaled and normalized 3D vector regulary distribute on a sphere (From GLM_GTX_random extension)

	        template <typename T> inline T compRand1(){return compRand1GTX<T>();}                                                                                       //!< Generate a random number in the interval [0, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <> inline __halfGTX compRand1(){return compRand1GTX<__halfGTX>();}                                                                                 //!< Generate a random number in the interval [0, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <> inline float compRand1(){return compRand1GTX<float>();}                                                                                         //!< Generate a random number in the interval [0, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <> inline double compRand1(){return compRand1GTX<double>();}                                                                                       //!< Generate a random number in the interval [0, 1], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline T compRand1(T Min, T Max){return compRand1GTX(Min, Max);}                                                                      //!< Generate a random number in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec2<T> compRand2(T Min, T Max){return compRand2GTX(Min, Max);}                                                              //!< Generate 2 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec3<T> compRand3(T Min, T Max){return compRand3GTX(Min, Max);}                                                              //!< Generate 3 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec4<T> compRand4(T Min, T Max){return compRand4GTX(Min, Max);}                                                              //!< Generate 4 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	        template <int N, typename T> inline detail::_xvecxGTX<N, T> compRand(T Min, T Max){return compRand(Min, Max);}                                                      //!< Generate N random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec2<T> compRand2(const detail::_xvec2<T>& Min, const detail::_xvec2<T>& Max){return compRand2GTX(Min, Max);}                                //!< Generate 2 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec3<T> compRand3(const detail::_xvec3<T>& Min, const detail::_xvec3<T>& Max){return compRand3GTX(Min, Max);}                                //!< Generate 3 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec3<T> compRand4(const detail::_xvec4<T>& Min, const detail::_xvec4<T>& Max){return compRand4GTX(Min, Max);}                                //!< Generate 4 random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)
	        template <int N, typename T> inline detail::_xvecxGTX<N, T> compRand(const detail::_xvecxGTX<N, T>& Min, const detail::_xvecxGTX<N, T>& Max){return compRandGTX(Min, Max);}         //!< Generate N random numbers in the interval [Min, Max], according a linear distribution (From GLM_GTX_random extension)

	        template <typename T> inline detail::_xvec2<T> vecRand2(){return vecRand2GTX<T>();}                                                                                 //!< Generate a random normalized 2 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec2<T> vecRand2(T MinRadius, T MaxRadius){return vecRand2GTX(MinRadius, MaxRadius);}                                        //!< Generate a random normalized 2 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec3<T> vecRand3(){return vecRand3GTX<T>();}                                                                                 //!< Generate a random normalized 3 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec3<T> vecRand3(T MinRadius, T MaxRadius){return vecRand3GTX(MinRadius, MaxRadius);}                                        //!< Generate a random normalized 3 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec4<T> vecRand4(){return vecRand4GTX<T>();}                                                                                 //!< Generate a random normalized 4 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)
	        template <typename T> inline detail::_xvec4<T> vecRand4(T MinRadius, T MaxRadius){return vecRand4GTX(MinRadius, MaxRadius);}                                        //!< Generate a random normalized 4 component vector. It's a spherical uniform distribution. (From GLM_GTX_random extension)

            template <typename T> inline T gaussRand1(T mean, T std_deviation){return gaussRand1GTX<T>(mean, std_deviation);}                                           //!< Gererate a random floating number according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec2<T> gaussRand2(T mean, T std_deviation){return gaussRand2GTX<T>(mean, std_deviation);}                                   //!< Gererate 2 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec3<T> gaussRand3(T mean, T std_deviation){return gaussRand3GTX<T>(mean, std_deviation);}                                   //!< Gererate 3 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec4<T> gaussRand4(T mean, T std_deviation){return gaussRand4GTX<T>(mean, std_deviation);}                                   //!< Gererate 4 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec2<T> gaussRand2(const detail::_xvec2<T>& mean, T std_deviation){return gaussRand2GTX<T>(mean, std_deviation);}                    //!< Gererate 2 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec3<T> gaussRand3(const detail::_xvec3<T>& mean, T std_deviation){return gaussRand3GTX<T>(mean, std_deviation);}                    //!< Gererate 3 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec4<T> gaussRand4(const detail::_xvec4<T>& mean, T std_deviation){return gaussRand4GTX<T>(mean, std_deviation);}                    //!< Gererate 4 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec2<T> gaussRand2(T  mean, const detail::_xvec2<T>& std_deviation){return gaussRand2GTX<T>(mean, std_deviation);}                   //!< Gererate 2 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec3<T> gaussRand3(T  mean, const detail::_xvec3<T>& std_deviation){return gaussRand3GTX<T>(mean, std_deviation);}                   //!< Gererate 3 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec4<T> gaussRand4(T  mean, const detail::_xvec4<T>& std_deviation){return gaussRand4GTX<T>(mean, std_deviation);}                   //!< Gererate 4 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec2<T> gaussRand2(const detail::_xvec2<T>& mean, const detail::_xvec2<T>& std_deviation){return gaussRand2GTX<T>(mean, std_deviation);}     //!< Gererate 2 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec3<T> gaussRand3(const detail::_xvec3<T>& mean, const detail::_xvec3<T>& std_deviation){return gaussRand3GTX<T>(mean, std_deviation);}     //!< Gererate 3 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
            template <typename T> inline detail::_xvec4<T> gaussRand4(const detail::_xvec4<T>& mean, const detail::_xvec4<T>& std_deviation){return gaussRand4GTX<T>(mean, std_deviation);}     //!< Gererate 4 random floating numbers according a Gauss distribution. (From GLM_GTX_random extension)
		}
	}
}

#define GLM_GTX_random namespace gtx::random

#include "random.inl"

#ifdef GLM_GTX_INCLUDED
namespace glm{using GLM_GTX_random;}
#endif//GLM_GTX_INCLUDED

#endif//__glm_gtx_random__
