#include <iostream>
using namespace std;

void sumn(long long);

int main()
{
    long long n;

	cin >> n;

	sumn(n);

	return 0;
}

void sumn(long long n) {

    unsigned long long sum = 0;

	sum = (n * (n + 1)) / 2;

	cout << sum;
}