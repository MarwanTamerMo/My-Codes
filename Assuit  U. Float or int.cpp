#include <iostream>
#include <cmath> //To use modf() built-in function

using namespace std;

int main() {

	double n, int_part, frac_part;

	cin >> n;

	int n1 = int(n); // To store the integer part

	float n2 = float(n); // To store the float (decimal) part

	if (n == n1) {

		frac_part = modf(n, &int_part); // modf() function extracts the decimal or float value and store it then store the integer part in the address given

		cout << "int" << " " << int_part;

	}
	else {
		frac_part = modf(n, &int_part);

		cout << "float" << " " << int_part << " " << frac_part;
	}


	return 0;

}