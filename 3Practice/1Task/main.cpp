#include <iostream>
#include "eq2.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); 

	eq2 u1(2, -53, 12);
	eq2 u2(-3, -35, 14);
	eq2 u3;

	u3 = u1 + u2;

	cout << "Первое  -> " << u1.find_X() << "\n";
	cout << "Второе  -> " << u2.find_X() << "\n";
	cout << "Третье -> " << u3.find_X() << "\n";

	double ARG = 5;

	cout << "Значение первого при  X = " << ARG << " -> " << u1.find_Y(ARG) << "\n";
	cout << "Значение второго при  X = " << ARG << " -> " << u2.find_Y(ARG) << "\n";
	cout << "Значение третьего при X = " << ARG << " -> " << u3.find_Y(ARG) << "\n";

	return 0;
}
