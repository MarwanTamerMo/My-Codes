#include <iostream>

using namespace std;

int main() {

	long n, evens[100000], counter = 0; // Array and counter defined to store the even numbers in an array 

	cin >> n;

	for (int i = 1; i <= n; ++i) {

		if (i % 2 == 0) {

			evens[counter] = i; // Store the value in the array

			counter++; // Increment the counter to store the next value in the next index of the array

		}
	}

	if (counter == 0) {

		cout << -1; // No even numbers
	}
	else {

		for (int i = 0; i < counter; ++i) {

			cout << evens[i] << endl;
		}
	}

	return 0;
}