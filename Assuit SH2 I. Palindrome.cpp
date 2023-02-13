#include <iostream>

using namespace std;

int main() {

	//Declaring n for the input number and 'reamin' for the remainder value and 'rev' for the reversal and 'on' for original number to be stored 
	long long n, remain, rev = 0, on;

	cin >> n;
	
	on = n;

	// While loop to reverse the input number using an algorithm

	while (n != 0) {

		remain = n % 10;

		rev = (rev * 10) + remain;

		n /= 10;
	}

	// Checking if the reversed number (rev) is equal to the original number (on) or not ( A palindrome number or not )

	if (rev == on) {

		cout << rev << endl;

		cout << "YES" << endl;
	}
	else {

		cout << rev << endl;

		cout << "NO" << endl;
	}
	return 0;
}