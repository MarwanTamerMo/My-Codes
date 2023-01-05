#include <iostream>

using namespace std;

int main() {

	double x, y; // X represents the X CO-ORDINATE, Y represents Y CO-ORDINATE

	cin >> x >> y;

	if (x > 0) {

		if (y > 0) {

			cout << "Q1";

		}
		else if (y < 0) {

			cout << "Q4";

		}
		else {

			cout << "Eixo X"; // It means the point lies on the X-AXIS ( Y CO-ORDINATE = 0 )
		}
	
	}
	else if (x < 0) {

		if (y > 0) {

			cout << "Q2";

		}
		else if (y < 0) {

			cout << "Q3";
		}
		else {

			cout << "Eixo X"; 

		}
		
    }
	
	else if (y > 0 || y < 0 && x == 0) {

		cout << "Eixo Y";

	}
	else {

		cout << "Origem";
	}

	return 0;
}