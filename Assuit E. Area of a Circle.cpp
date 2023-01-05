#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define PI 3.141592653

int main(){

	float r;
	double area;

	cin >> r;

	area = PI * pow(r, 2);

	cout << setprecision(11) << area << endl;

	return 0;

}