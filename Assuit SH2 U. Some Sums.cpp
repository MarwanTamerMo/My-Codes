#include <iostream>

using namespace std;

int main() {

	int n, a = 0, b = 0, check = 0, remain = 0, temp;
	long long sum = 0;

	cin >> n >> a >> b;

	for(int i = 1; i <= n; ++i) {

		check = 0;

		if(i / 10 == 0)
		{
			if(i >= a && i <= b)
			{
				sum += i;
			}
		}
		else
		{
			temp = i;

			while(temp)
			{
				remain = temp % 10;

				check += remain;

				temp /= 10;

			}
		}
		if(check >= a && check <= b)
		{
			sum += i;
		}
	}

	cout << sum;

	return 0;
}