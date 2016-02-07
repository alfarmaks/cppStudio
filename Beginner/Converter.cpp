// Converter.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	double value;
	std::cout << "\t\t\tConverter meters to kilometres\n\n";
	std::cout << "Please, input meters: ";
	std::cin >> value;
	std::cout << std::endl;
	std::cout.precision(3);
	std::cout << value << " meters will be " << value / 1000 << " kilometres";

	system("pause>>void");
	return 0;
}

