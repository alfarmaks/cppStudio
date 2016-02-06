//Was created by Maskym Bondar
//

#include "stdafx.h"
#include <list>
#include <iostream>

void getNumbers(long long &N){
	int i = 1;
	std::list<int> lst;
	while (N){
		lst.push_front(N % 10);
		N /= 10;
	}
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++, i++){
		std::cout << i << " цыфра равна " << *it << std::endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	long long N;
	std::cout << "Please, input some number: ";
	std::cin >> N;
	getNumbers(N);
	system("pause>>void");//Waiting when user press any key
	return 0;
}

