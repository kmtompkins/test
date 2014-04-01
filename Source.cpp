#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	while (true)
	{
		string function;
		int n1;
		int n2;

		cout << "What function would you like to use:";
		cin >> function;

		if (function == "multiply")
		{
			cout << "Imput the number you would like to multiply:";
			cin >> n1;
			cout << "Imput the number you would like to multiply by:";
			cin >> n2;
			cout << "The answer for " << n1 << "*" << n2 << " " << "equals:" << n1*n2 << endl;
			cout << endl;
			cout << endl;
			continue;
		}
		else if (function == "divide")
		{
			cout << "Imput the number you would like to divide:";
			cin >> n1;
			cout << "Imput the number you would like to divide by:";
			cin >> n2;
			cout << "The answer for " << n1 << "/" << n2 << " " << "equals:" << n1/n2 << endl;
			cout << endl;
			cout << endl;
			continue;
		}
		else if (function == "add")
		{
			cout << "Imput the number you would like to add:";
			cin >> n1;
			cout << "Imput the number you would like to add by:";
			cin >> n2;
			cout << "The answer for " << n1 << "+" << n2 << " " << "equals:" << n1+n2 << endl;
			cout << endl;
			cout << endl;
			continue;
		}
		else if (function == "subtract")
		{
			cout << "Imput the number you would like to subtract:";
			cin >> n1;
			cout << "Imput the number you would like to subtract by:";
			cin >> n2;
			cout << "The answer for " << n1 << "-" << n2 << " " << "equals:" << n1-n2 << endl;
			cout << endl;
			cout << endl;
			continue;
		}
		else if (function == "square")
		{
			cout << "Imput the number you would like to square:";
			cin >> n1;
			cout << "The answer for " << n1 << " " << "squared " << "is:" << n1*n1 << endl;
			cout << endl;
			cout << endl;
			continue;
		}
		else if (function == "squareroot")
		{
			cout << "Imput the number you would like to square root:";
			cin >> n1;
			cout << "The answer for " << "the square root of " << n1 << " is:" << sqrt(n1) << endl;
			cout << endl;
			cout << endl;
			continue;
		}
		else
		{
			cout << "That is none of the choices please try again" << endl;
			cout << "Try using" << endl << "multiply, divide, add, subtract, square, squareroot" << endl;
			cout << endl;
			cout << endl;
			continue;
		}
	}
}