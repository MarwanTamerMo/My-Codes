#include <iostream>

using namespace std;

int main()
{
	char choice;
	float degree;

	cout << " Type 1 to convert Fahrenheit to Celsius,\f 2 to convert Celsius to Fahrenheit: ";
	cin >> choice;

	switch (choice)
	{

	case '1':
		cout << " Enter the temperature in fahrenheit: ";
		cin >> degree;

		cout << " In Celsius that's " << (degree - 32) * 5 / 9 << endl;
		break;

	case '2':

		cout << " Enter the temperature in celsius: ";
		cin >> degree;

		cout << " In fahrenheit that's " << (degree * 9 / 5) + 32 << endl;
		break;

	}



	return 0;
}