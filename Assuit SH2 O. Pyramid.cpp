#include <iostream>

using namespace std;

int main() {

	int rows, columns;

	cin >> rows;

	for (int i = 1; i <= rows; ++i) {

		for (int k = 1; k <= i; ++k) {

			cout << '*';
		}

		cout << endl;
	}

	return 0;
}