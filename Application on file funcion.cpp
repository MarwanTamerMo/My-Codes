#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream info("Studentinfo.txt");

	string name;
	float gpa;
	
	info << "ID\t" << "Name\t" << "GPA\t\n";

	info << "------------------\n";

	for (int i = 1; i <= 5; i++) {

		cout << "Enter the information of the " << i << " student: ";

		cin >> name >> gpa;
		
		info << i << "\t" << name << "\t" << gpa << "\n";
	}


	info.close();










	return 0;
}
