// UpperLetter.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	char a;
	std::cout << "Input letter in lower register" << std::endl;
	std::cin >> a;
	a = toupper(a);
	std::cout << "Your letter in upper register: " << a;
	system("pause>>void");

	return 0;
}

