#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for(int j = 1; j <= 200; ++j)
	{
		cout << setw(5) << n * j;

		if (j % 10 == 0)
		{
			cout << endl;
		}


	}

	return 0;
}