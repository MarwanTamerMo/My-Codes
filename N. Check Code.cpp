#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1 = 0, num2 = 0;
	string code;
	long long counter = 0;
	bool flag = false, flag2 = false;

	cin >> num1 >> num2;
	long long size = num1 + num2 + 1;

	cin.ignore();
	getline(cin, code);

	if (code[num1] == '-')
	{
		flag2 = true;
	}

	for (int i = 0; i < size; ++i)
	{
		int conver = code[i] - '0';

		if (code[i] == 45)
		{
			continue;
		}
		if (conver < 10 && conver >= 0)
		{
			counter++;
		}	
	}

	if (counter == size - 1)
	{
		flag = true;
	}
	if (flag == true && flag2 == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}