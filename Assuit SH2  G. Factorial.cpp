#include <iostream>

using namespace std;

int main() {

	int n = 0, tc;

	cin >> tc;

	while (tc--) {

		cin >> n;

		long long fact = 1;

		for (int k = 1; k <= n; ++k) {

			fact = fact * k;
	
		}
		cout << fact << endl;
	}

	return 0;
}