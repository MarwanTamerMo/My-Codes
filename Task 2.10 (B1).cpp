#include <iostream>

using namespace std;

int main()
{

	int years = 0;
	float interest, final,initial;

	cout << "Please enter the initial amount: ";

	cin >> initial;

	cout << "Please enter the final expected amount: ";

	cin >> final;
	
	cout << "Please enter the fixed interest rate: ";

	cin >> interest;

	if(initial > final)
	{
		cout << " I think you want to invest not to lose money?? I hope so";

		return 0;
	}
	while (final >= initial)
	{

		final = final - (final * (interest / 100));

		years++;
	}

	cout << years;

	return 0;
}