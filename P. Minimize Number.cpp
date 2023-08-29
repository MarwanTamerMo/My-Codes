#include <iostream>

using namespace std;

int main()
{
	unsigned short int size;
	cin >> size;

	unsigned long* arr = new unsigned long[size];

	unsigned short int maxop = 0;
	bool flag = true;

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	while (flag)
	{
		flag = true;

		unsigned short int counter = 0;

		for (int i = 0; i < size; ++i)
		{
			if (arr[i] % 2 == 0)
			{
				arr[i] /= 2;
				counter++;
			}
			else
			{
				flag = false;
				break;
			}
		}

		if (counter == size)
		{
			maxop++;
		}
		
	}

	cout << maxop;


	return 0;
}