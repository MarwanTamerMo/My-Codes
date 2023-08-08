#include <iostream>

using namespace std;

int main()
{

	int size = 0;
	cin >> size;

	int* arr1 = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr1[i];
	}

	for (--size; size >= 0; --size)
	{
		cout << arr1[size] << " ";
	}

	delete[] arr1;

	return 0;
}