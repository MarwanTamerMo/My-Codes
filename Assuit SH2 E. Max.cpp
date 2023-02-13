#include <iostream>

using namespace std;

int main() {

	int n, arr[1000] = { 0 }, min, max;

	cin >> n;
	
	// Input array elements 

	for (int i = 0; i < n; ++i) {

		cin >> arr[i];
	}

	// Assuming that the max number = the first elemnt in the array. ( You can add 'min' variable and equals it to the first element in the array also to get the min number )
	max = arr[0];

	// Iterate through the elements of the array 
	for (int i = 0; i < n; ++i) {

		if (arr[i] > max) {

			max = arr[i];
		}
	}

	cout << max << endl;

	return 0;
}