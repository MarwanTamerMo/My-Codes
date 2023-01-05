#include <iostream>

using namespace std;

int main() {

	signed long long a, b, c, max = 0, min = 0;

	cin >> a >> b >> c;

	if (a >= b && a >= c) {

		max = a;

	}
	else if (b >= a && b >= c) {

		max = b;

	}
	else if (c >= a && c >= b) {

		max = c;

	}

	if (a <= b && a <= c) {

		min = a;

	}
	else if (b <= a && b <= c) {

		min = b;

	}
	else if (c <= a && c <= b) {

		min = c;

	}

	cout << min << " " << max;

	return 0;
}
