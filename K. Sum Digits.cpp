#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num;
	int size;

	cin >> size;

	cin.ignore();
	getline(cin, num);

	long long sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += num[i] - '0';
	}

	cout << sum;

	return 0;
}