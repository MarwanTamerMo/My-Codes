#include <iostream>

using namespace std;

int main() {

	int l1, r1, l2, r2; // Declaring the variables for the start boundaries and the end boundaries of the two ranges

	cin >> l1 >> r1 >> l2 >> r2; // l stands for the beginning ( l1 = First boundary ) of the range, r for the ends

	int inter_start = max(l1, l2); // Using max and min built-in functions to find the maximum and the minimum of the start and end boundaries
	int inter_end = min(r1, r2);

	if (inter_start > inter_end) { // There's no intersection

		cout << "-1";

	}
	else { // There's an intersection

		cout << inter_start << " " << inter_end;
	}

	return 0;
}