#include <iostream>

using namespace std;

int main() {

	int a, b; //Two Numbers
	char ope; //Operation symbol

	cin >> a >> ope >> b;

	if (ope == '*') {

		cout << unsigned long long int (a * b) << endl;
	}
	else if (ope == '/') {

		cout << int(a / b) << endl; // To print it without fractions 
									// Remove the casting [ int() ] to print it with fractions 

	}
	else if (ope == '+') {

		cout << a + b << endl;

	}
	else if (ope == '-') {

		cout << a - b << endl;

	}
	else {

		cout << "Invalid ope";
	}


	return 0;

}
