#include <iostream>
#include <iomanip> //To use setprecision() function to specify how many floating points (Decimal points) to show in the decimal part
#include <cmath>   // To use pow() function

using namespace std;

#define PI 3.141592653 // Just an add-on from me

int main(){

	float r;
	double area;

	cin >> r;

	area = PI * pow(r, 2);

	cout << setprecision(11) << area << endl;

	return 0;

}
