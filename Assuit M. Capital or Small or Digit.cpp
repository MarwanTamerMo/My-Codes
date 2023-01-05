#include <iostream>

using namespace std;

int main() {

	char a;

	cin >> a;

	if (isdigit(a)) { // isdigit() to check if the input is digit or not

		cout << "IS DIGIT" << endl;
	}
	else if (isalpha(a)) { // isalpha() to check if the input is a letter or not

		cout << "ALPHA" << endl;

		if (isupper(a)) { // isupper() to check if the letter is UPPERCASE or not

			cout << "IS CAPITAL"; // UPPERCASE
		}
		else if (islower(a)) { //islowr() to check if the letter is lowercase or not
			
			cout << "IS SMALL"; // LOWERCASE

		}
	}
	else {

		cout << a << " Neither a DIGIT nor a LETTER" << endl;
	}

	return 0;

}