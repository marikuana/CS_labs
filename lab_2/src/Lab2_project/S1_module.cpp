#include "S1_module.h"

int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

void S1::calculate()
{
	o1 = X.read() < Y.read() ? X.read() - Y.read() : Y.read() - X.read();
	o2 = Y.read() > 0 ? factorial(Y.read()) : factorial(X.read());
}