#include <iostream>

using namespace std;

int main()
{

	int size = 0, pairs = 0;

	cin >> size >> pairs;

	int* arr = new int[size];
	long long* prefix_sum = new long long[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];

		if (i == 0)
		{
			prefix_sum[i] = arr[i];
		}
		else
		{
			prefix_sum[i] = prefix_sum[i - 1] + arr[i];

		}
	}

	while (pairs--)
	{
		unsigned int l, r;

		cin >> l >> r;

		l -= 1;
		r -= 1;

		long long sum = 0;

		if (l == 0)
		{
			sum += prefix_sum[r];
		}
		else
		{
			sum += prefix_sum[r] - prefix_sum[l - 1];
		}

		cout << sum << endl;
	}

	delete[] arr;

	return 0;
}
