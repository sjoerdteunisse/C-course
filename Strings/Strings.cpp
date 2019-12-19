#include <iostream>
//compiler dependent
#include  <string>

using namespace std;

int main()
{
	string val = "This is a string";
	string val2 = " conCat me";

	val += val2;
	val += " test";

	cout << val << endl;

	return 0;
}