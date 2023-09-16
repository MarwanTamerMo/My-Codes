#include <iostream>

using namespace std;

int main()
{
	unsigned int rows = 2;
	unsigned int columns = 2;

	cin >> rows;
	cin >> columns;

	int** arr = new int*[rows];

	for (unsigned int i = 0; i < rows; ++i)
	{
		arr[i] = new int[columns];
	}

	for (unsigned int i = 0; i < rows; ++i)
	{
		for (unsigned int j = 0; j < columns; ++j)
		{
			cin >> arr[i][j];
		}
	}

	unsigned int x;
	cin >> x;
	bool flag = false;

	for (unsigned int i = 0; i < rows; ++i)
	{
		flag = false;

		for (unsigned int j = 0; j < columns; ++j)
		{
			if (x == arr[i][j])
			{
				flag = true;
				break;
			}
		}

		if (flag == true)
		{
			break;
		}
	}

	if (flag == true)
	{
		cout << "will not take number";
	}
	else
	{
		cout << "will take number";
	}

	for (unsigned int i = 0; i < rows; ++i)
	{
		delete[] arr[i];
	}

	delete[] arr;

	return 0;
}