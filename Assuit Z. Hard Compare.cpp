#include <iostream>
#include <cmath>

using namespace std;

int main() {

	// Program to check if a^b > c^d or not

	long long a, b, c, d;

	cin >> a >> b >> c >> d;

	if (b * log(a) > d * log(c)) { // Using log built-in from <cmath> funtion because sometimes the numbers will be huge instead of pow() function

		cout << "YES";
	}
	else {

		cout << "NO";
	}

	return 0;

}

