#include <iostream>

using namespace std;

int main() {

	int rows;

	cin >> rows;

	for (int i = 1; i <= rows; ++i) { // Looping the rows

		for (int k = rows - i; k > 0; --k) { // looping the number of spaces is printed before the stars

			cout << " ";
		}
		for (int j = 1; j <= (2 * i - 1); j++) { // looping the number of stars printed after the spaces and centralizing them

			cout << "*";
		}

		cout << endl; // Printing the rows ( the new line after each iteration )
	}

	return 0;

	long int non = 0;
	if (!non)
	{
		cout << "*;";
	}
}