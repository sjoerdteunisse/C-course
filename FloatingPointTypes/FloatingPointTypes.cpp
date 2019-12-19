// FloatingPointTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x = 51222.25;
	float yy = 12333.25;

	cout << fixed << yy << endl;
	
	cout << x + yy << endl;
	cout << scientific << x + yy << endl;
	cout << sizeof(float) <<  endl;

	long double d = 123123123132312;
	cout << "size of long double " << sizeof(d) << endl;
	

	cout << setprecision(20) << x + yy << endl;

}
