#include <iostream>

using namespace std;

int main()
{
	unsigned int rows = 0;
	int cols = 0;

	cin >> rows >> cols;

	int** arr = new int* [rows];

	for (unsigned int i = 0; i < rows; ++i)
	{
		arr[i] = new int[cols];
	}
	
	for (unsigned int i = 0; i < rows; ++i)
	{
		for (unsigned int j = 0; j < cols; ++j)
		{
			cin >> arr[i][j];
		}
	}

	for (unsigned int i = 0; i < rows; ++i)
	{
		for (int j = cols - 1; j >= 0; --j)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

	for (unsigned int i = 0; i < rows; ++i)
	{
		delete[] arr[i];
	}

	delete[] arr;

	return 0;
}