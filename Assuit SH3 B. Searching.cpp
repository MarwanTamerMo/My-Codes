#include <iostream>

using namespace std;

int main()
{

	long size;
	long long num;
	bool flag = false;

	cin >> size;

	long long *arr = new long long[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	cin >> num;

	for (int i = 0; i < size; ++i)
	{
		if (num == arr[i])
		{
			cout << i << endl;
			flag = true;
			break;
		}
	}

	if (flag == false)
	{
		cout << -1 << endl;
	}

	delete[] arr;

	return 0;
}