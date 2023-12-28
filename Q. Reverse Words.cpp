#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s;

	getline(cin, s);

	unsigned int z = 0;
	unsigned int i = 0;


	while (z <= s.size() && i < s.size())
	{
		if (s[z] == ' ' || s[z] == '\0')
		{
			reverse(s.begin() + i, s.begin() + z);
			i = z + 1;
		}
		z++;
	}

	cout << s;

	return 0;
}