#include <iostream>
#include <iomanip>
using namespace std;

int genChoice (int time);

int charToInt (char letter);

int displayChoice (int choice);

int winner (int a, int b);

int main ()
{
	/****************************************************************
	* PLAY ROCK PAPER SCISSORS                                      *
	*---------------------------------------------------------------*
	* This program accepts as input a choice of either "rock"       *
	* "paper" or "scissors". The program generates a random choice  *
	* at the beginning, and decides who won the game. Who wins is   *
	* based on rock > scissors, scissors > paper, and paper > rock. *
	* The program then displays who won, or if there is a draw.     * 
	*---------------------------------------------------------------*
	* INPUTS                                                        *
	*  choice1      : 'r'                                           *
	*  choice2      : 'p'                                           *
	*  choice3      : 's'                                           *
	*  userChoice   : choice made by user (char)                    *
	* OUTPUTS                                                       *
	*  compChoice   : choice made by the program (int)              *
	****************************************************************/
	
	// Initialize variables
	// Input
	char choice1 = 'r';      // First choice  "rock"
	char choice2 = 'p';      // Second choice "paper"
	char choice3 = 's';      // Third choice  "scissors"
	char userChoiceChar[10]; // User's choice
	// Output
	int compChoice;          // Program's choice
	int userChoice;          // User's choice converted to int
	
	// Generate computer choice
	compChoice = genChoice(time(NULL));
	
	// Retrieve input
	cout << "What do you choose? ";
	cin >> userChoiceChar;
	cout << userChoiceChar << endl;
	
	// Convert user input to int
	userChoice = charToInt(userChoiceChar[0]);
	
	// Display computer choice
	displayChoice(compChoice);
	
	// Display the outcome
	winner(compChoice, userChoice);
	
	return 0;
}

// Generate a choice
int genChoice (int time)
{
	// generate program's choice
	return (time % 3 + 1);
}

// Convert user choice into an int
int charToInt (char letter)
{
	// convert into int
	switch (letter) {
		case 'R':
		case 'r':
			return 1;
			break;
		case 'P':
		case 'p':
			return 2;
			break;
		case 'S':
		case 's':
			return 3;
			break;
		default: // Invalid choice
			return 0;
	}
}

// Display computer choice
int displayChoice (int choice)
{
	cout << "Program chose: ";
	if (choice == 1) {
		cout << "rock" << endl;
	} else if (choice == 2) {
		cout << "paper" << endl;
	} else {
		cout << "scissors" << endl;
	}
	return 0;
}

/* 
Determines whether comp or user wins
*/
int winner (int comp, int user)
{
	if (comp == user) { // Same choice: draw
		cout << "Draw, play again" << endl;
	} else if (
		(comp == 1 && user == 3) || // rock vs scissors
		(comp == 2 && user == 1) || // paper vs rock
		(comp == 3 && user == 2)    // scissors vs paper
	) { // Computer wins
		cout << "Computer wins" << endl;
	} else { // User wins
		cout << "User Wins" << endl;
	}
	return 0;
}
