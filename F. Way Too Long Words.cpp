#include <iostream>
#include <string>

using namespace std;

int main()
{

	string a;

	unsigned short t = 1;

	cin >> t;

	while (t--)
	{
		cin >> a;

		if (a.size() <= 10)
		{
			cout << a;
		}
		else
		{

			cout << a[0] << a.size() - 2 << a[a.size() - 1];
		}

		cout << endl;

	}

	return 0;
}