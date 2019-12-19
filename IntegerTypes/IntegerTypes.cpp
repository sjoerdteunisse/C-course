// IntegerTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int valx = 99999999;

	std::cout << valx << std::endl;
	
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;

	cout << "Size of int:  " << sizeof(INT_MAX) << endl;


	unsigned int x = 123123123123;
	cout << x << endl;

	return 0;
}
