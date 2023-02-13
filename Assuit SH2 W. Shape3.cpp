#include <iostream>

using namespace std;

int main()
{

	int rows;

	cin >> rows;

	for(int i = 1; i <= rows; ++i)
	{
		for(int k = 0; k < rows - i; ++k)
		{
			cout << " ";
		}
		for(int j = 1; j <= (2 * i) - 1; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = rows; i >= 1; --i)

	{
		for(int k = 0; k < rows - i; ++k)
		{
			cout << " ";
		}
		for(int j = (2 * i) - 1; j > 0; --j)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}