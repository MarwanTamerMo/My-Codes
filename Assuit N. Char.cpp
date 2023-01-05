#include <iostream>
#include <cctype>

using namespace std;

int main() {

	char a,ret; // Entered char , Returned value storage

	cin >> a;

	if (isupper(a)) { // isupper to check if it's in UPPERCASE 

		ret = tolower(a); // tolower() to make it in lowercase
		
		cout << ret << endl;

	}
	else {

		ret = toupper(a); // toupper() to make it in UPPERCASE

		cout << ret << endl;
	}

	return 0;

}