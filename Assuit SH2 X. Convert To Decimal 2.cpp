#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int t, ones = 0;
	long long n = 0, decimal = 0;

	cin >> t;

	while(t--)
	{
		ones = 0;
		decimal = 0;
		cin >> n;

		while(n > 0)
		{

			if(n % 2 != 0)
			{
				ones++;
			}

			n /= 2;

		}

		for (int i = ones; i > 0; --i)
		{

			decimal += (1 * pow(2, i - 1));
		}

		cout << decimal << endl;

	}


	return 0;
}