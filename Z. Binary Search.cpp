#include <algorithm>
#include <iostream>

using namespace std;

int BinarySearch(int*, int, int, int);

int main()
{
	int size, queries, numberX, begin, end;

	cin >> size >> queries;

	int* arr = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + size);

	while (queries--)
	{
		cin >> numberX;
		begin = 0;
		end = size - 1;
		int flag = BinarySearch(arr, begin, end, numberX);

		if (flag != -1)
		{
			cout << "found" << endl;
		}
		else
		{
			cout << "not found" << endl;
		}
	}

	delete[] arr;
	return 0;
}

int BinarySearch(int arr[], int begin, int end, int x)
{
	while (begin <= end)
	{
		int middle = (begin + end) / 2;

		if (arr[middle] == x)
		{
			return middle;
		}
		if (arr[middle] > x)
		{
			end = middle - 1;
		}
		else
		{
			begin = middle + 1;
		}
	}

	return -1;
}
