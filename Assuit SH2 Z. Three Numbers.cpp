#include <iostream>

using namespace std;

int main()
{

	int k = 0, s = 0, counter = 0, z = 0;

	cin >> k >> s;

	for(int x = 0; x <= k; ++x)
	{
		for(int y = 0; y <= k; ++y)
		{
			z = s - x - y;

			if(z >= 0 && z <= k)
			{
				counter++;
			}

		}
	}

	cout << counter << endl;

	return 0;
}