#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

	int size = 1, q = 1;

	cin >> size >> q;

	string s;

	s.resize(size);

	cin >> s;

	while (q--)
	{
		int l, r;
		char val;
		string qu;

		cin >> qu;
				 
		if (qu == "pop_back")
		{
			//size--;
			s.pop_back();
		}
		else if(qu == "back")
		{
			//cout << s[size - 1] << endl;
			cout << s.back() << endl;
		}
		else if(qu == "front")
		{
			//cout << s[0] << endl;
			cout << s.front() << endl;
		}
		else if(qu == "sort")
		{
			cin >> l >> r;

			sort(s.begin() + min(l,r) - 1, s.begin() + max(l,r));
		}
		else if(qu == "reverse")
		{
			cin >> l >> r;

			reverse(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
		}
		else if(qu == "substr")
		{
			cin >> l >> r;

			cout << s.substr(min(l, r) - 1, max(l, r) - min(l, r) + 1) << endl;
		}
		else if(qu == "print")
		{
			cin >> l;

			cout << s[l - 1] << endl;
		}
		else if(qu == "push_back")
		{
			cin >> val;
			s.push_back(val);
		}
	}

	return 0;
}