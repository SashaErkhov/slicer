// slicer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



int main()
{
	char c;
	std::cin >> c;
	if ('0'<=c and c <= '9')
	{
		std::cout << (c-48) <<std::endl;
	}
	else
	{
		std::cout << (c - 55)<<std::endl;
	}




	//std::cout << int('0') << std::endl;//48
	//std::cout << int('9') << std::endl;//57
	//std::cout << int('A') << std::endl;//65
	//std::cout << int('F') << std::endl;//70

	//unsigned short int input=0xABC;
	////std::cin >> input;
	//int a = 0;
	//for (int i = 0; i != (sizeof(input) * 2); ++i)
	//{
	//	a = (input >> (sizeof(input) * 8 - 4 - i * 4)) & 15;
	//	if (0 <= a and a <= 9)
	//	{
	//		std::cout << a << std::endl;
	//	}
	//	else if (a >= 10)
	//	{
	//		std::cout << char(a + 55) << std::endl;
	//	}
	//}




	/*unsigned short int a_1, a_2, a_3, a_4;
	a_1 = input >> 12;
	a_2 = (input << 4);
	a_2 >>= 12;
	a_3 = (input << 8);
	a_3 >>= 12;
	a_4 = (input << 12);
	a_4 >>= 12;
	std::cout << a_1 << " " << a_2 << " " << a_3 << " " << a_4<<std::endl;*/
	std::system("pause");
    return 0;
}

