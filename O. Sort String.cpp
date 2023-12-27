#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned int size = 1;
	unsigned int freq[26] = { 0 };

	char c;

	cin >> size;

	for (size_t i = 0; i < size; ++i)
	{
		cin >> c;
		freq[c - 'a']++;
	}

	for (size_t i = 0; i < 26; ++i)
	{
		while (freq[i] != 0)
		{
			cout << static_cast<char>(i + 'a');
			freq[i]--;
		}
	}

	return 0;
}