#include <iostream>
#include <cmath>

using namespace std;

float circarea(float);

int main()
{
	float radius,area;

	cin >> radius;

	area = circarea(radius);

	cout << area;



	return 0;
}


float circarea(float radius)
{
	float area;

	area = 3.14159 * pow(radius, 2);

	return area;

}
