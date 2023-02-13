#include <iostream>

using namespace std;

int main() {

	long int remainder = 0, t = 1;

	string n;

	cin >> t;



	while (t--) {
		
		cin >> n;

		for (int i = n.size() - 1; i >= 0; --i) {

			cout << n[i] << " ";
		}

		cout << endl;
	}

	return 0;
}