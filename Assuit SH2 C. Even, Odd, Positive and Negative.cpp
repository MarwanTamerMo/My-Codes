#include <iostream>

using namespace std;

int main() {

	long n,input;
	int even = 0, odd = 0, pos = 0, neg = 0;

	cin >> n;

	for (int i = 0; i < n; ++i) {

		cin >> input;

		if (input % 2 == 0) {

			even++;
		}
		else if (input % 2 != 0) {

			odd++;
		}
	    if (input < 0) {

			neg++;
		}
		else if (input > 0) {

			pos++;
		}

	}

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg << endl;

	return 0;
}