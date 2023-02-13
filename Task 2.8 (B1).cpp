#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	char choice;
	int pounds, pounds1, total_sh = 0, total_pen = 0;
	int shillings, pence, shillings1, pence1;
	

	do
	{
		cout << " Enter the first amount: \x9c";
		cin >> pounds;

		cin.ignore();

		cin >> shillings;

		cin.ignore();

		cin >> pence;


		cout << " Enter the second amount: \x9c";
		cin >> pounds1;

		cin.ignore();

		cin >> shillings1;

		cin.ignore();

		cin >> pence1;

		total_pen = pence + pence1;

		while (total_pen > 11)
		{
			shillings++;

			total_pen -= 12;
		}

		total_sh = shillings + shillings1;

		while(total_sh > 19)
		{
				pounds++;

				total_sh -= 20;

		}
		

		cout << " Total is " << (pounds + pounds1) << '.' << total_sh << '.' << total_pen << endl;

		cout << " Do you wish to continue (y/n)? " << endl;

		cin >> choice;
	}
	while (choice == 'y' || choice == 'Y');


	return 0;
}