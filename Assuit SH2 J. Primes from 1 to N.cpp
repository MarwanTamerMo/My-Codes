#include <iostream>

using namespace std;

int main() {

	long max;
	bool prime = true;
	cin >> max;

	for (int i = 2; i <= max; ++i) {

		prime = true;

		for (int k = 2; k <= i / 2; ++k) {

			if (i % k == 0) {

				prime = false;
				break;
			}
		}

		if (prime && max != 1) {

			cout << i << " ";
		}
	}
	return 0;
}