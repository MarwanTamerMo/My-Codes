#include <iostream>

using namespace std;

int main() {

	int numbers, n;
	char s;

	cin >> s;
	cin >> n;

	for (int i = 0; i < n; ++i) {

		cin >> numbers; 

		for (int k = 0; k < numbers; ++k) {

				cout << s;
		}
		
		cout << endl;
	}

	return 0;
}