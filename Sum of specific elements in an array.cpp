#include <iostream>

using namespace std;

void check(int arr[], int sum);

int main() {

	int arr[8], sum;
	string choice;

	cout << " Please enter 8 numbers to store them in an array \n";

	// Loop to check insert array numbers

	for (int i = 0; i <= 7; i++) {

		cout << "Number " << i << " is: ";

		cin >> arr[i];


	}

	do {
		cout << " Please enter the expected sum of array elemnts: ";

		cin >> sum;

		check(arr, sum);

		cout << " Do you want to check again? Enter ('y' for Yes or 'n' for No)";

		cin >> choice;
		
	} while (choice == "y" || choice == "Y");

	cout << "Thanks :)";


	return 0;

}


void check(int arr[], int sum)
{
	//Nested loop to check if the sum wanted can be obtained from the array
	int csum = 0;

	for (int i = 0; i <= 7; i++) {

		for (int j = (i + 1); j < 8; j++) {

			csum = arr[i] + arr[j];

			if (csum == sum) {

				cout << "The indices of the array elemnts that satisfy your desired sum are: " << i << " and " << j << "\n";
				break;

			}
	
		}
	
	}

	if (csum != sum) {

		cout << " Can't find your desired sum :(\n";
	}
}