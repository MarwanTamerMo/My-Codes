#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;

	cin >> s;

	char arr[1001][1001];

	int row = 0, column = 0, rcount = 0, lcount = 0, counter = 0;

	for (char i : s)
	{
		if (i == 'L')
		{
			arr[row][column++] = i;
			lcount++;
		}
		else
		{
			arr[row][column++] = i;
			rcount++;
		}

		if (rcount == lcount && lcount > 0)
		{
			row++;
			column = 0;
			rcount = 0;
			lcount = 0;
			counter++;
		}
	}

	cout << counter << endl;

	for (size_t i = 0; i < 1001; ++i)
	{
		if (arr[i][0] != 'R' && arr[i][0] != 'L')
		{
			break;
		}

		for (size_t j = 0; j < 1001; ++j)
		{
			if (arr[i][j] != 'R' && arr[i][j] != 'L')
			{
				break;
			}
			cout << arr[i][j];
		}

		cout << endl;
	}

	return 0;
}