

#include <iostream>
using namespace std;


int main()
{

	bool prime = true;

	int min, max, i;

	cout << " Hi, please enter the min and the max range of the numbers you want to check " << endl;

	cin >> min >> max;

	// Make sure the min is always less than the max
	
	while(min < max){

		prime = true;

		// 1 and 0 aren't prime

		if (min == 0 || min == 1) {

			prime = false;
		}

	// for loop to check the numbers

		for (i = 2; i <= min / 2; i++) {

			if (min % i == 0) {

				prime = false;

				break;
			}
		}
		    if (prime) 

				cout << min << " - ";

			min++;
	}	
	return 0;
}
