#include <iostream>

using namespace std;

int main()
{

	unsigned long long arr[53];

	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i < 53; ++i) 
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	unsigned short int n;
	cin >> n;

	cout << arr[n - 1];


	return 0;
}