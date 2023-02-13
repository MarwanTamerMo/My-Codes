#include <iostream>

using namespace std;

int main() {

	int t = 1;
	long n1, n2, sum = 0;

	cin >> t;

	while (t--) {

		cin >> n1 >> n2;

		sum = 0;

		if (n2 > n1) {

			swap(n2, n1);
		}

		for (int i = n2 + 1; i < n1; ++i) {

			if (i % 2 == 0) {

				continue;
			}
			else {

				sum += i;
			}
		}

		cout << sum << endl;

	}

	return 0;
}