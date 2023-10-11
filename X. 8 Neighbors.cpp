#include <iostream>

using namespace std;

int main()
{

	int rows = 0, cols = 0;

	cin >> rows >> cols;

	char arr[101][101];

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin >> arr[i][j];
		}
	}

	unsigned int counter = 0;
	int Xrow = 0, Xcol = 0;

	cin >> Xrow >> Xcol;

	Xrow -= 1;
	Xcol -= 1;

	if (arr[Xrow][Xcol - 1] != '.' &&
		arr[Xrow][Xcol + 1] != '.' &&
		arr[Xrow - 1][Xcol] != '.' &&
		arr[Xrow + 1][Xcol] != '.' &&
		arr[Xrow - 1][Xcol - 1] != '.' &&
		arr[Xrow + 1][Xcol + 1] != '.' &&
		arr[Xrow - 1][Xcol + 1] != '.' &&
		arr[Xrow + 1][Xcol - 1] != '.' 
		)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}

	return 0;
}