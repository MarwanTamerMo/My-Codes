// Multplication Table from 1 to 12 

#include <iostream>

using namespace std;

int main() {

	int n;
	long long mult;

	cin >> n;

	for (int i = 1; i <= 12; ++i) {

		cout << n << " * " << i << " = " << n * i << endl;


	}

	return 0;

}