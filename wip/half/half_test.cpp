#include "precompiled.h"
#include "half_test.h"
#include "half.h"

void test_hdata()
{
	//dev::detail::hdata HdataA(dev::detail::_toFloat16(1.0f));
	//dev::detail::hdata HdataB(dev::detail::_toFloat16(2.0f));
	//float FloatA = float(dev::detail::_toFloat32(HdataA) + dev::detail::_toFloat32(HdataB));
	//float FloatB = _toFloat32(HdataA) + _toFloat32(HdataB);
	//float FloatC = _toFloat32(HdataA);
	//float FloatD = _toFloat32(HdataB);

	//dev::detail::_halfGTX HalfA(HdataA);
	//dev::detail::_halfGTX HalfB(HdataB);
	//float FloatE = float(HalfA);
	//float FloatF = float(HalfB);
	//dev::detail::_halfGTX HalfC(FloatE);
	//dev::detail::_halfGTX HalfD(FloatF);
	//float FloatG = float(HalfC);
	//float FloatH = float(HalfD);

	//dev::detail::_hvec2GTX hvec2A(HalfA, HalfB);
	//dev::detail::_hvec2GTX hvec2B(HalfC, HalfD);

	//HdataA = HalfA;
	//HdataB = 4.0f;
	//HdataB = 4.0;

	//float FloatI = float(dev::detail::_halfGTX(HdataA));
	//float FloatJ = float(dev::detail::_halfGTX(HdataB));

	int end = 0;
}

void test_half_full()
{
	test_hdata();
}
