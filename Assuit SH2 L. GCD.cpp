#include <iostream>

using namespace std;

int main() {

	long n1, n2, gcd = 0;

	cin >> n1 >> n2;

	// Making sure n2 is always bigger than n1

	if (n1 > n2) {

		int temp = n2;
		n2 = n1;
		n1 = temp;
	}

	for (int i = 1; i <= n2; ++i) {

		if (n1 % i == 0 && n2 % i == 0) {

			gcd = i;
		}
	}

	cout << gcd << endl;

	return 0;
}