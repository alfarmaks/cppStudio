// int_to_char.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	bool flag = false;
	for (int i = 0; i < 2; i++){
		std::cout << char(201 - i);
		for (int j = 0; j < 6; j++){
			std::cout << char(203 - i);
		}
		std::cout << char(187 + i) << std::endl;
	}
	system("pause>>void");
	return 0;
}

