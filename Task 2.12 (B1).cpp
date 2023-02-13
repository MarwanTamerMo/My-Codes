#include <iostream>

using namespace std;

int main()
{

	float a, b, c, d;
	char ope, slash, choice;

	do
	{
		cout << " Please Enter the two fraction in this form (a/b) and the operation character between them\n (*, -, +, /): ";

		cin >> a >> slash >> b;

		cin >> ope;

		cin >> c >> slash >> d;

		if (ope == '*')
		{
			cout << " The result = " << (a * c) << '/' << (b * d) << endl;
		}
		else if (ope == '-')
		{
			cout << " The result = " << (a * d - b * c) << '/' << (b * d) << endl;
		}
		else if (ope == '/')
		{
			cout << " The result = " << (a * d) << '/' << (b * c) << endl;
		}
		else if (ope == '+')
		{
			cout << " The result = " << (a * d + b * c) << '/' << (b * d) << endl;
		}
		else
		{
			cout << " Sorry but we don't have this option right now ";
		}

		cout << " Do you want to do another operation? (y/n): ";
		cin >> choice;
		
	}
	while (choice == 'y' || choice == 'Y');

	return 0;
}