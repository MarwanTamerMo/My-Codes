#include <iostream>

using namespace std;

int main() {

	int guests, chairs,arrangements = 1;

	cin >> guests;

	cin >> chairs;

	if(guests < chairs)
	{
		cout << "guests' number can't be less than chairs' number ";
		return 0;
	}
	
	for(int i = 0; i < chairs; ++i)
	{
		arrangements *= (guests - i); // 6*1 (6 * (i - 0) ) 6*1*5 (6 * 5 * (i - 1) )
	}

	cout << arrangements / (guests - chairs + 1);


	return 0;
}