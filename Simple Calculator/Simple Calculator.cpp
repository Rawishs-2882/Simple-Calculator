// Simple Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float a, b;
	char oper = '0';
	float res = 0;
	cout << "Enter first number" << endl;
	cin >> a;
	cout << "Enter second number" << endl;
	cin >> b;
	cout << "Enter operator from ' +, -, *, / '" << endl;
	cin >> oper;
	if (oper == '+')
	{
		res = a + b;
		cout << a << "+" << b << "=" << res << endl;
	}
	else if (oper == '-')
	{
		res = a - b;
		cout << a << "-" << b << "=" << res << endl;
	}
	if (oper == '*')
	{
		res = a * b;
		cout << a << "*" << b << "=" << res << endl;

	}
	else if (oper == '/')
	{
		res = a / b;
		cout << a << "/" << b << "=" << res << endl;
	}
	system("pause");
	return 0;
}