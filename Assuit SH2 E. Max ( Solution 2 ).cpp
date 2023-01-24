#include <iostream>
#include <algorithm> // To use max_element() function

using namespace std;

int main() {

	int arr[100], size;

	cin >> size;

	for (int i = 0; i < size; ++i) {

		cin >> arr[i];
	}

	// Declaring a pointer to carry the adress of the return of max_element()

	// max_element function iterates the array elements then find the max number
	int* max = max_element(arr, arr + size);
											

	cout << *max << endl;

	return 0;
}
