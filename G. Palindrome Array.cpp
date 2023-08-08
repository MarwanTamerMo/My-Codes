#include <iostream>

using namespace std;

int main()
{
	int size;
	int size2 = 0;
	cin >> size;

	int* arr1 = new int[size];
	int* arr2 = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr1[i];
	}

	bool flag = true;

	for (--size; size >= 0; --size)
	{
		arr2[size2++] = arr1[size];
	}

	for (int i = 0; i < size2; ++i)
	{
		if (arr1[i] != arr2[i])
		{
			flag = false;
			break;
		}
	}

	if (flag == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	delete[] arr1;
	delete[] arr2;
	return 0;
}
