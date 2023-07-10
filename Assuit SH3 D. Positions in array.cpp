#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int* arr1 = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr1[i] <= 10)
		{
			cout << "A[" << i << "]" << " = " << arr1[i] << endl;
		}
	}

	delete[] arr1;
	return 0;
}
