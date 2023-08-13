#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	int minidx = 0;
	int maxidx = 0;
	int* maxnum = max_element(arr, arr + size);
	int* minnum = min_element(arr, arr + size);

	for (int i = 0; i < size; ++i)
	{
		if (*maxnum == arr[i])
		{
			maxidx = i;
		}
		else if(*minnum == arr[i])
		{
			minidx = i;
		}
	}

	swap(arr[maxidx], arr[minidx]);

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;

	return 0;
}