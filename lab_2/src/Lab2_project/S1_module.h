#pragma once
#include "systemc.h"

struct S1 : sc_module
{
	sc_in<int> X{ "S1_X" };
	sc_in<int> Y{ "S1_Y" };
	sc_in<bool> CLK{ "S1_CLK" };
	sc_out<int> o1{ "S1_o1" };
	sc_out<int> o2{ "S1_o2" };

	void calculate();

	SC_CTOR(S1)
	{
		SC_METHOD(calculate);
		sensitive << CLK.pos();
	}
};
