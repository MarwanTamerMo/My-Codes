#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	bool flag = false;
	int size = 0;
	cin >> size;

	long *arr = new long[size];
	long *arr2 = new long[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; ++i)
	{
		cin >> arr2[i];
	}

	sort(arr, arr + size);
	sort(arr2, arr2 + size);

	for (int i = 0; i < size; ++i)
	{
		flag = true;

		if (arr[i] != arr2[i])
		{
			flag = false;
			break;
		}
	}

	if (flag == true)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}

	delete[] arr;
	delete[] arr2;

	return 0;
}