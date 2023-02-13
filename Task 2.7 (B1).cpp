#include <iostream>

using namespace std;

int main()
{
	float years, intial, percent;

	cout << " Enter initial amount: ";
	cin >> intial;

	cout << " Enter number of years: ";
	cin >> years;

	cout << " Enter interest rate (percent per year): ";
	cin >> percent;

	for(int i = 1; i <= years; ++i)
	{
		intial = intial + (intial * percent / 100);

	}

	cout << "At the end of 10 years, you will have " << intial << endl;



	return 0;
}