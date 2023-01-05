#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	char ope, equal;

	cin >> a >> ope >> b >> equal >> c;

	if (ope == '+') {
		
		if (a + b == c) {

			cout << "Yes";
		}
		else {

			cout << a + b;
		}
	}
	else if (ope == '-') {

		if (a - b == c) {

			cout << "Yes";
		}
		else {

			cout << a - b;
		}
	}
	else if (ope == '*') {

		if (a * b == c) {

			cout << "Yes";
		}
		else {

			cout << a * b;
		}

	}

	return 0;
}