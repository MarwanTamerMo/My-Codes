#include <iostream>

using namespace std;

int main()
{

	int size;

	cin >> size;

	long* arr = new long[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
		{
			arr[i] = 1;
		}
		else if(arr[i] < 0)
		{
			arr[i] = 2;
		}

		cout << arr[i] << " ";
	}


	return 0;
}