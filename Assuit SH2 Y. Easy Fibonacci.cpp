#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

	int n, t1 = 1, t2 = 0;
	long long fib = 0;

	cin >> n;

	if(n == 1)
	{
		cout << 0;

		return 0;
	}
	cout << 0 << " " << 1 << " ";

	for(int i = 0; i < n - 2 ; ++i) // 0 1 1 2 3
	{
		fib = t1 + t2; 

		t2 = t1; 

		t1 = fib; 

		cout << fib << " ";
	}


	return 0;
}