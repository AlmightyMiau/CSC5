/*******************************************************************************
 * Author        : Ivy Fudge                                                   *
 * Student ID    : 2973023                                                     *
 * Assignment #2 : Repetition & Switch Statement                               *
 * Class         : CIS5                                                        *
 * Section       : MW 2:20PM - 5:30PM                                          *
 * Due Date      : 10/07/2024                                                  *
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


/*******************************************************************************
* COMPUTE AVERAGE GRADE SCORE 		                                           *
*------------------------------------------------------------------------------*
* This program accepts letter grades as input. It will loop until an exit      *
* character is input (x). It averages the grade values and displays it. It     *
* then loops 3 times, making new sets of grades each time. Each letter that is *
* input is validated to ensure only proper values are processed.               *
*------------------------------------------------------------------------------*
* INPUT															               *
*   letter       : Input grade letter                                          *
*   APOINTS      : Points for an A grade                                       *
*   BPOINTS      : Points for an B grade                                       *
*   CPOINTS      : Points for an C grade                                       *
*   DPOINTS      : Points for an D grade                                       *
*   FPOINTS      : Points for an F grade                                       *
*															                   *
* OUTPUT														               *
*   accumulator  : total score for grades added                                *
*   counter      : counter for how many grades are added                       *
*   average      : average of grade scores                                     *
*******************************************************************************/


int main ()
{
	// Initialize variables
	// Inputs
	char letter;                // Input grade letter
	const float A_POINTS = 4.0; // Points for an A grade
	const float B_POINTS = 3.0; // Points for an B grade
	const float C_POINTS = 2.0; // Points for an C grade
	const float D_POINTS = 1.0; // Points for an D grade
	const float F_POINTS = 0.0; // Points for an F grade
	// Outputs
	float accumulator = 0.0;    // total score for grades added
	int counter = 0;            // counter for how many grades are added
	float average = 0.0;        // average of grade scores

	// Output class header
	cout << "********************************************************\n" <<
		"* Author        : Ivy Fudge                            *\n" <<
		"* Student ID    : 2973023                              *\n" <<
		"* Assignment #1 : Basic Input / Output                 *\n" <<
		"* Class         : CIS5                                 *\n" <<
		"* Section       : MW 2:20PM - 5:30PM                   *\n" <<
		"* Due Date      : 9/16/2024                            *\n" <<
		"********************************************************\n\n";

	// Loop 3 times
	for (int i = 0; i < 3; i++) {
		// Reinitialize variables
		letter = ' ';
		accumulator = 0.0;
		counter = 0;

		// List test number
		cout << "TEST #" << (i + 1) << ":\n\n";

		// Ask for the next letter
		cout << "\tEnter Letter Grade (enter 'X' to exit): ";
		// Retrieve the next letter
		cin >> letter;
		cin.ignore();

		// Loop until the exit char is input
		while (letter != 'x' && letter != 'X') {
			// Switch statement for processing letters
			switch(letter) {
				// For an A grade
				case 'A':
				case 'a':
					accumulator += A_POINTS; // add A score to total
					counter++;               // increment the counter
					break;

				// For a B grade
				case 'B':
				case 'b':
					accumulator += B_POINTS; // add B score to total
					counter++;               // increment the counter
					break;

				// For a C grade
				case 'C':
				case 'c':
					accumulator += C_POINTS; // add C score to total
					counter++;               // increment the counter
					break;

				// For a D grade
				case 'D':
				case 'd':
					accumulator += D_POINTS; // add D score to total
					counter++;               // increment the counter
					break;

				// For a F grade
				case 'F':
				case 'f':
					accumulator += F_POINTS; // add F score to total
					counter++;               // increment the counter
					break;

				// On X, quit the program
				case 'X':
				case 'x':
					break;

				default: // Invalid letter
					cout << "\n\tInvalid letter grade, please try again\n\n";
					break;
			}
			// Ask for the next letter
			cout << "\tEnter Letter Grade (enter 'X' to exit): ";
			// Retrieve the next letter
			cin >> letter;
			cin.ignore();
		}
		if (accumulator > 0) {
			// Average the grade scores
			average = accumulator / counter;

			// Display the average scores
			cout << fixed << setprecision(0) << endl;
			cout << "Total Grade Points: " << accumulator << endl;
			cout << setprecision(2) << "GPA: " << average << "\n\n\n";
		}
	}


	return 0;
}
