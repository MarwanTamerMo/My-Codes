#include <iostream>
#include <string>

using namespace std;

int main()
{

	unsigned int wordscount = 0;
	string s;

	getline(cin, s);

	bool inWord = false;

	if (!s.empty())
	{
		for (const char i : s)
		{
			if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
			{
				if (!inWord)
				{
					++wordscount;
					inWord = true;
				}
			}
			else
			{
				inWord = false;
			}
		}
		
	}

	cout << wordscount;

	return 0;
}