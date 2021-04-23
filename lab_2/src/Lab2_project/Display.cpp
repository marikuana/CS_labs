#include "Display_module.h"

void Display::showResults()
{
	cout << std::setw(6) << "Time";
	cout << std::setw(7) << "X";
	cout << std::setw(7) << "Y";
	cout << std::setw(7) << "o1";
	cout << std::setw(7) << "o2";
	cout << std::setw(7) << "r1";
	cout << std::setw(7) << "r2" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << std::setw(6) << sc_time_stamp();
		cout << std::setw(7) << X.read();
		cout << std::setw(7) << Y.read();
		cout << std::setw(7) << o1.read();
		cout << std::setw(7) << o2.read();
		cout << std::setw(7) << r1.read();
		cout << std::setw(7) << r2.read() << endl;
		wait();
	}
	sc_stop();
}
