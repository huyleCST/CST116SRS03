// Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using std::endl;
int main()
{
	int i0, i1;
	double d0, d1;
	std::cin >> i0 >> i1 >> d0 >> d1;
	
	/*calculations*/
	

	/*Results*/
	/*Addition*/
	std::cout << "i0 + i1 == " << std::left << i0 + i1 << endl;
	std::cout << "i0 + i0 == " << std::left << i0 + d0 << endl;
	std::cout << "d0 + d1 == " << std::left << d0 + d1 << endl;
	std::cout << "\n" << endl;

	/*Subtraction*/
	std::cout << "i0 - i1 == " << std::left << i0 - i1 << endl;
	std::cout << "i0 - i0 == " << std::left << i0 - d0 << endl;
	std::cout << "d0 - d1 == " << std::left << d0 - d1 << endl;
	std::cout << "\n" << endl;

	/*Multiplication*/
	std::cout << "i0 x i1 == " << std::left << i0 * i1 << endl;
	std::cout << "i0 x i0 == " << std::left << i0 * d0 << endl;
	std::cout << "d0 x d1 == " << std::left << d0 * d1 << endl;
	std::cout << "\n" << endl;

	/*Division*/
	std::cout << "i0 / i1 == " << std::left << i0 / i1 << endl;
	std::cout << "i0 / i0 == " << std::left << i0 / d0 << endl;
	std::cout << "d0 / d1 == " << std::left << d0 / d1 << endl;
    return 0;
}

