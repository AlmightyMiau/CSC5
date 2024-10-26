#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	/****************************************************************
	* GENERATE LOTTERY NUMBERS                                      *
	*---------------------------------------------------------------*
	* This program takes as input 5 numbers from 0 through 9. It    * 
	* then generates a set of five random lottery numbers, and      *
	* compares the guesses with them. If all 5 are correct, a       *
	* message is displayed stating that the player won a grand      *
	* prize.                                                        *
	*---------------------------------------------------------------*
	* Inputs
	*  guesses  : player lottery guesses
	*  time     : system time to generate random numbers
	* Outputs
	*  lottery  : random lottery numbers
	*  correct  : number of correct guesses
	****************************************************************/
	
	// Constants
	const int MIN = 0;
	const int MAX = 9;
	
	// Inputs
	int guesses[5];  // Array of user guesses
	// Outputs
	int lottery[5];  // Array of lottery numbers
	int correct = 0; // Number of correct guesses
	
	// generate lottery numbers
	srand(time(nullptr)); // Seed rand
	for (int i = 0; i < 5; i++) {
		// Get a random number ranging from MIN to MAX
		lottery[i] = rand() % (MAX - MIN) + MIN; 
	}

	// Retrieve user guesses
	for (int i = 0; i < 5; i++) {
		// Retrieve user guess #(i + 1)
		cout << "Guess #" << i + 1 << ": ";
		cin >> guesses[i];
		cout << guesses[i] << endl;
	}
	
	// Compare lottery with guesses
	for (int i = 0; i < 5; i++) {
		// If the guess is the lottery number, it is correct
		if (guesses[i] == lottery[i]) {
			correct++;
		}
	}
	
	// Display information
	cout << "Lottery numbers: ";
	// Display lottery numbers
	for (int i = 0; i < 5; i++) {
		cout << lottery[i] << ' ';
	}
	cout << "\nCorrect numbers: " << correct << endl;
	// If all guesses are correct
	if (correct == 5) {
		cout << "You have won the grand prize!" << endl;
	}
	return 0;
}
