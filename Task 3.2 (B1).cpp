#include <iostream>

using namespace std;

double power(double, int);

int main()
{
	double n;
	int p;

	cout << " Enter the value of the number: ";

	cin >> n;

	cout << " Enter the value of the power: ";

	cin >> p;

	
	n = power(n, p);

	cout << n;



	return 0;
}

double power(double n, int p)
{
	double result = 1;

	for(int i = 1; i <= p; ++i)
	{
		result *= n;
	}

	return result;

}
