#include <iostream>
#include <string>

using namespace std;

int main()
{

	string orig;

	getline(cin, orig);

	unsigned int revC = orig.size() - 1;

	bool flag = true;

	for (size_t i = 0; i < orig.size(); ++i)
	{
		if (orig[i] != orig[revC--])
		{
			flag = false;
			break;
		}
	}

	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}