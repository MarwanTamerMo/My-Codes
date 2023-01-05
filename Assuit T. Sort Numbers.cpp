#include <iostream>
#include <algorithm> // To Use the sort built-in function for faster and better solution

using namespace std;

void sort1(int arr[]); // Function prototype

int main() {

	int arr[3], orig[3]; // The array (arr) you will enter its elemnts and the array (orig) to store the original order of elements in (arr)

	// Loop to enter the desired values (elements)

	for (int i = 0; i <= 2; ++i) {

		cin >> arr[i];
		orig[i] = arr[i];
	}

	 sort1(arr); // Engineer-Defined function to sort the elemnts of the array (ascendingly) using built-in function sort

	cout << endl;

	//The loop to print the original order of elements in the array (arr)

	for (int i = 0; i <= 2; ++i) {

		cout << orig[i] << endl;
	}

	return 0;
}


// The defenition of the function 

void sort1(int arr[3]) {

	sort(arr, arr + 3);

	for (int i = 0; i <= 2; ++i) {

		cout << arr[i] << endl;

	}
	
}  
