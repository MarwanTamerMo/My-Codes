#include <iostream>

using namespace std;

int main() {

	int a, b;
	char sign;

	cin >> a >> sign >> b;

	if (sign == '>' && a > b) { // IF conditions to check if the entered argument is right mathematically or not

		cout << "Right";
	}
	else if (sign == '<' && a < b) {

		cout << "Right";
	}
	else if (sign == '=' && a == b) {

		cout << "Right";
	}
	else {

		cout << "Wrong";

	}




	return 0;

}