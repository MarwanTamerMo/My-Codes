#include <iostream>

using namespace std;

int main() {

	int days;

	cin >> days;

	cout << days / 365 << " years" << endl; // To extract the years numbers 

	days = days % 365; // To extract the remaining days after getting the years

	cout << days / 30 << " months" << endl; // To extract the months number

	days = days % 30; // To extract the remaining days after getting the months

	cout << days << " days" << endl;



	return 0;
}