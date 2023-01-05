#include <iostream>

using namespace std;

int main() {

    long long a, b, c, d;
	unsigned long long int mult_result; // Long long variable for the multiplication result

	cin >> a >> b >> c >> d; // Prompt the user to enter the four numbers 
	
	a = a % 100; // Get the last two digits from each number
	b = b % 100;
	c = c % 100;
	d = d % 100;

	mult_result = a * b * c * d; // Multiply them all

	if (mult_result % 100 < 10) { // Because the problem wants the output to be two numbers not one number

		cout << '0' << mult_result % 100 << endl; // %100 To print the last two digits only of the result

	}
	else {

		cout << mult_result % 100 << endl; 
	}
	
	return 0;

}