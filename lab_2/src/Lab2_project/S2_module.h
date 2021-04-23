#pragma once
#include "systemc.h"

struct S2 : sc_module
{
	sc_in<int> a{ "S2_a" };
	sc_in<int> b{ "S2_b" };
	sc_in<bool> CLK{ "S2_CLK" };
	sc_out<int> r1{ "S2_r1" };
	sc_out<int> r2{ "S2_r2" };

	void calculate();

	SC_CTOR(S2)
	{
		SC_METHOD(calculate);
		sensitive << CLK.pos();
	}
};
