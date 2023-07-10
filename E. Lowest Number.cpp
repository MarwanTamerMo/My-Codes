#include <iostream>

using namespace std;

int main()
{
	int size = 0;
	int index = 0;

	cin >> size;

	int* arr1 = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr1[i];
	}

	int lownum = arr1[0];

	for (int i = 0; i < size; ++i)
	{
		if (arr1[i] < lownum)
		{
			lownum = arr1[i];
			index = i;
		}
	}

	cout << lownum << " " << index + 1;

	delete[] arr1;

	return 0;
}