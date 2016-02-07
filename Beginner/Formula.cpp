// Formula.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, f;
	long long x;
	std::cout << "Please, input a, b, f" << std::endl;
	//Input a
	std::cout << "a = "; 
	std::cin >> a;
	//Input b
	std::cout << "b = ";
	std::cin >> b;
	//Input f
	std::cout << "f =";
	std::cin >> f;
	//Calculating using formula after
	std::cout << "Calculating using formula: x = (a + b - f / a) + f * a * a - (a + b)" << std::endl << "x = ";
	std::cout << ((a + b - f / a) + f * a * a - (a + b));
	system("pause>>void");//Waiting when user press any key
	return 0;
}

