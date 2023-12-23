#include <iostream>
#include <string>

using namespace std;

int main()
{

	string a;

	getline(cin, a);

	unsigned long long sum = 0;

	for (size_t i = 0; i < a.size(); ++i)
	{
		sum += a[i] - '0';
	}

	cout << sum;

	return 0;
}