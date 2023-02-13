#include <iostream>

using namespace std;

int main() {

	long n;
	bool prime = true;

	cin >> n;

	if (n == 1 || n == 0) {

		cout << "NO" << endl;
	}
	else {

		for (int i = 2; i <= n / 2; ++i) {

			if (n % i == 0) {

				prime = false;

				break;
			}

		}

		if (prime) {

			cout << "YES" << endl;
		}
		else {

			cout << "NO" << endl;
		}

	}

	return 0;
}