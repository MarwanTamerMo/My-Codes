#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{

	// 1.Define variables

	int n_trials, m_trials;
	int score, g_timeout;
	int width, length;
	int area, user_ans;
	int table_size;

	time_t user_time, user_timeout;

	// 2.Initialize variables 

	g_timeout = 5;
	table_size = 5;
	m_trials = 5;
	n_trials = 0;
	score = 0;


	// 3.Change random based on time 

	srand(time(0));

	// 4. Print game instructions 

	cout << "\t\t --- Welcome to my first game --- \n";
	cout << "\t\t Make your vision and caclulate the area shape in 5 Secs \n";
	cout << "\n\n Press any key to start the game ";

	cin.get();

	do {

		//  Start drawing random shapes ( Rectangles or Squares )

		width = rand() % table_size + 2;
		length = rand() % table_size + 2;
		area = length * width;

		n_trials++;

		// Draw a little bit down on the screen

		cout << "\n\n";

		// Draw the shape

		for (int i = 0; i < length; i++) {

			for (int j = 0; j < width; j++) {

				cout << "# ";


			}

			cout << "\n";

		}

		// Set start time

		user_time = time(0);

		// Ask the user for the answer
		cout << "Area = ";
		cin >> user_ans;

		// Set end time and thr time taken to calculate

		user_timeout = time(0) - user_time;

			cout << "You take " << user_timeout << "secs to answer....\n";

		// Compare answer and add to their score

		if (user_ans == area && user_timeout <= g_timeout) {

			score++;
			cout << "\t Your answer is correct and in time \n";
		}

		else if (user_ans != area) {

			cout << "\t Wrong answer\n";

		}
		else {

			cout << "\t Timeout :|, try faster \n";

		}

		// Clear screen

		Sleep(3000);
		system("cls");

		for (int i = 3; i > 0; i--) {

			cout << "\n\t Continue in " << i << "secs....\n";

			Sleep(1000);

			system("cls");


		}

	} while (n_trials < m_trials); // Checking number of trials


	// Game over and print score

	cout << "\t\t Game Over \n";
	cout << " \t\t Your score is : " << (float(score) / m_trials) * 100 << "% \n";



	return 0;
}