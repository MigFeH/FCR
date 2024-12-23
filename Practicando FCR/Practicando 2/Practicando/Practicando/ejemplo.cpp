#include <iostream>

using std::cout;
using std::endl;
using std:: cin;


void set23(int& number)
{
	number = 23;
}

int main()
{
	//cout << "Hello World!" << endl;
	//cout << "Integer: " << 3 << " Floating-point: " << 4.5 << endl;

	//int i;

	//cout << "Input an integer: ";
	//cin >> i;

	//signed int a = 23;
	//int b = -5;
	
	//cout << "a: " << a << " b: " << b << endl;

	//if (a < b)
	//{
		//cout << "a less than b" << endl;
	//}

	int i = 10;

	set23(i);
	cout << "Now i contains: " << i << endl;

	return 0;
}