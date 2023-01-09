#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {

	int arr[3];

	for (int i = 0; i <= 2; ++i) {

		cin >> arr[i];
	}

	sort(arr, arr + 3);

	for (int i = 0; i <= 2; ++i) {

		cout << arr[i] << endl;

	}

	cout << endl;

	sort(arr, arr + 3, greater<int>());

	for (int i = 0; i <= 2; ++i) {

		cout << arr[i] << endl;

	}



	return 0;

}