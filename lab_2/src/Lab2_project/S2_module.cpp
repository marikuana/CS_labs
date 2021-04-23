#include "S2_module.h"

void S2::calculate()
{
	if (a)
		r1.write(b.read() / a.read());
	else
		r1.write(1);
	if (b)
		r2.write(a.read() / b.read());
	else
		r2.write(1);
}
