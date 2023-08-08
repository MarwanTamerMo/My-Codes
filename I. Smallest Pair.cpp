#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int test;
	int size;
	int counter = 0;

	cin >> test;
	

	while (test--)
	{
		cin >> size;

		int* arr = new int[size];
		int* resarr = new int[size * size];

		for (int i = 0; i < size; ++i)
		{
			cin >> arr[i];
		}

		counter = 0;
		int temp1 = 2;

		for (int i = 0; i < size; ++i)
		{
			int temp = i + 1;
			int temp2 = temp1;

			for (int j = 0; j < size - temp; ++j)
			{
				resarr[counter++] = arr[i] + arr[j + i + 1] + (temp2++) - temp;

			}

			temp1++;
		}

		int* min_elem = min_element(resarr, resarr + counter);

		cout << *min_elem;

		delete[] arr;
		delete[] resarr;
		cout << endl;
	}

	return 0;
}