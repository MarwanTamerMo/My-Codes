#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s;

	getline(cin, s);

	for (char& i : s)
	{
		if (i == ',')
		{
			i = 32;
		}
		else if(i - '0' <= 42 && i - '0' >= 17)
		{
			i += 32;
		}
		else if(i == 32)
		{
			i = 32;
		}
		else
		{
			i -= 32;
		}
	}

	cout << s;

	return 0;
}