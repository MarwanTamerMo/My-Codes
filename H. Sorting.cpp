#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	bool swapped;

	for (int i = 0; i < size - 1; ++i)
	{
		swapped = false;

		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (arr[j + 1] < arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}

		if (!swapped)
		{
			break;
		}
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;

	return 0;
}
