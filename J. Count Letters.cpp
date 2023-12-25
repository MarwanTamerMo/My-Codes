#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    unsigned short freq[256] = { 0 };
    bool encountered[256] = { false };

    getline(cin, s);

    for (unsigned int i = 0; i < s.size(); ++i)
    {
        if (encountered[s[i]] == false)
        {
            freq[s[i]]++;
            encountered[s[i]] = true;
        }
		else if(encountered[s[i]] == true)
		{
            freq[s[i]]++;
		}
    }

    for (unsigned short i = 0; i < 256; ++i)
    {
        if (encountered[i])
        {
            cout << static_cast<char>(i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}