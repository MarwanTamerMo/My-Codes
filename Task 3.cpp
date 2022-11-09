
#include <iostream>

using namespace std;

int main()
{
	int number,i;

	bool prime = true;

	cout << " Please enter number to check if it is prime or not ";

	cin >> number;
	// 0 and 1 aren't prime numbers
	if (number == 0 || number == 1) {

		prime = false;
	}
	// Checking the number

	for (i = 2; i <= number/2; i++) {

		if (number % i == 0) {

			prime = false;
			
			break;

		}

	    if (prime) {
			cout << number << " " << " is a prime number ";

		}
		else {
			cout << " invalid entry " << endl;
		}

		break;

	}

	return 0;

}


