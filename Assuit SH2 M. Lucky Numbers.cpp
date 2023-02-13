#include <iostream>
#include <regex>

using namespace std;

int main() {

	long min = 0, max = 0;
	bool found = false;

	cin >> min >> max;

	

	for (long i = min; i <= max; ++i) {

		string num = to_string(i);

		regex pattern("^[47]*$");

		if (regex_match(num, pattern) || i == 4 || i == 7) {

			found = true;

			cout << i << " ";
		}
		
	}

	if (found == false) {

		cout << -1;
	}


	return 0;
}