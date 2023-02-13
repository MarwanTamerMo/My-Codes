#include <iostream>

using namespace std;

int main() {

	int n;

	do {

		cin >> n;

		if (n == 1999) {

			cout << "Correct" << endl;
			break;
		}
		else {

			cout << "Wrong" << endl;
		}

	} while (n);

	return 0;
}