#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main ()
{
	/****************************************************************
	* GENERATE RANDOM NUMBER		                                *
	*---------------------------------------------------------------*
	* This program generates a random number (1-10). It then asks   *
	* the user to guess a number, and will continue asking until    *
	* the correct answer is guessed.                                *
	*---------------------------------------------------------------*
	* Inputs                                                        *
	*  numMin  : Minimum number                                     *
	*  numMax  : Maximum number                                     *
	*  input   : Number input by user                               *
	* Outputs                                                       *
	*  answer  : Generated random number                            *
	****************************************************************/
	
	// Initialize variables
	// Inputs
	const int numMin = 1;
	const int numMax = 5;
	int input;
	
	// Generate random number
	const int answer = time(0) % (numMax - numMin + 1);
	
	// Guessing loop
	while (input != answer) {
		// Retrieve next guess
		cout << "Next guess: ";
		cin >> input;
		cout << input << endl;
		if (input > answer) {
			cout << "Too high, try again." << endl;
		} else if (input < answer) {
			cout << "Too low, try again." << endl;
		} else {
			break;
		}
	}
	
	cout << "Correct" << endl;
	
	return 0;
}
