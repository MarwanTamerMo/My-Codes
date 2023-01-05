#include <iostream>

using namespace std;

int main()
{
	float a, b, c;

	cin >> a >> b;

	c = a / b;

	cout << "floor " << a << " / " << b << " = " << floor(c) << "\n";
	cout << "ceil " << a << " / " << b << " = " << ceil(c) << "\n";
	cout << "round " << a << " / " << b << " = " << round(c) << "\n";
}

