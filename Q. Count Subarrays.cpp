#include <iostream>

using namespace std;

int main()
{
	unsigned short int t;
	cin >> t;

	while (t--)
	{
		unsigned short int size;
		cin >> size;

		unsigned short int subcount = size;

		int* arr = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> arr[i];
		}

		unsigned short int i = 0;
		unsigned short int z = 0;

		while (true)
		{
			if (z == size - 1)
			{
				break;
			}

			if (arr[i] > arr[i + 1])
			{
				z++;
				i = z;
				continue;
			}

			subcount++;
			i++;

			if (i == size - 1)
			{
				z++;
				i = z;
			}
		}

		cout << subcount << endl;

		delete[] arr;
	}

	return 0;
}