#include <iostream>

using namespace std;

int main() {

	int rows, cloumns;

	cin >> rows;

	for (int i = 1; i <= rows; ++i) {

		for (int k = rows; k >= i; --k) {

			cout << '*';
		}

		cout << endl;
	}

	return 0;
}