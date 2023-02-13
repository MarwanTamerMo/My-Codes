#include <iostream>

using namespace std;

int main() {

	long long n1, n2, numbers, sum = 0;

	while(cin >> n1 >> n2) {

		sum = 0; //To intialize the sum every iteration to calc the sum of the new two numbers entered in each iteration

		if (n2 > n1) { // To make sure n1 is always bigger than n2 or vice versa as you prefer

			swap(n2, n1);
		}

	    if (n1 <= 0 || n2 <= 0) { // Break if one of them is = 0 pr a negative number

			break;
		}

		for (numbers = n2; numbers <= n1; ++numbers) { // Printing all the nummbers between n1 and n2 and calc their the sum

			cout << numbers << " ";

			sum = sum + numbers;
		}

		cout << " sum =" << sum;

		cout << endl;
	}

	return 0;
}