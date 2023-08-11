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

	int index = 0;
	int smallest = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
			index = i;
		}
	}

	int freq = 0;

	for (index; index < size; ++index)
	{
		if (smallest == arr[index])
		{
			freq++;
		}
	}

	if (freq % 2 != 0)
	{
		cout << "Lucky";
	}
	else
	{
		cout << "Unlucky";
	}

	return 0;
}