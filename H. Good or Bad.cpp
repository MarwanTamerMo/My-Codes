#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s;
	unsigned short t = 1;

	cin >> t;

	cin.ignore();

	while (t--)
	{
		unsigned short Zerocount = 0;
		unsigned short Onecount = 0;
		bool flag = false;

		getline(cin, s);

		for(size_t i = 0; i < s.size() - 2; ++i)
		{
			if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] =='1')
			{
				flag = true;
				break;
			}
			if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
			{
				flag = true;
				break;
			}
		}

		if (flag)
		{
			cout << "Good" << endl;
		}
		else
		{
			cout << "Bad" << endl;
		}

	}


	return 0;
}