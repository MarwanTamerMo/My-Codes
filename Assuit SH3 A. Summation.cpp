#include <iostream>

using namespace std;

int main()
{
	long size;
	long long sum = 0;

	cin >> size;

	long long *arr = new long long[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	if (sum < 0)
	{
		sum *= -1;
		cout << sum;
	}
	else
	{
		cout << sum;
	}

	delete[]arr;

	return 0;
}