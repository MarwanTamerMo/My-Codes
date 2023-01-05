#include <iostream>

using namespace std;

int main() {

	long n;

	cin >> n;

	if (n / 1000 % 2 == 0) { // To extract the first digit 

		cout << "EVEN";
	}
	else {

		cout << "ODD";

	}

	return 0;
}