// slicer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



int main()
{
	unsigned short int input;
	std::cin >> input;
	unsigned short int a_1, a_2, a_3, a_4;
	a_1 = input >> 12;
	a_2 = (input << 4);
	a_2 >>= 12;
	a_3 = (input << 8);
	a_3 >>= 12;
	a_4 = (input << 12);
	a_4 >>= 12;
	std::cout << a_1 << " " << a_2 << " " << a_3 << " " << a_4<<std::endl;
	std::system("pause");
    return 0;
}

