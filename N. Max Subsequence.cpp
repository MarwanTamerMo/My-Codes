#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s;

	unsigned int n = 1;
	unsigned int maxsub = 1;

	cin >> n;
	cin >> s;

	for (size_t i = 0; i < n - 1; ++i)
	{
		if (s[i] != s[i + 1])
		{
			maxsub++;
		}
	}


	cout << maxsub;

	return 0;
}