#include <iostream>
#include <iomanip>
using namespace std;

// Displays the board 
void DisplayBoard(const char board[3][3]);

// Checks if someone has won
char IsWon(const char board[3][3]); 

// Checks the board to see if there is a tie, and returns true if so
bool IsTie(const char arr[3][3]);

int main ()
{
	/****************************************************************
	* PLAY TIC TAC TOE                                              *
	*---------------------------------------------------------------*
	* This program takes as input the row and column of the         *
	* player's choice, alternating between player one and player 2. *
	* When there is a three in a row, or a tie match, the game ends *
	* and the winner is announced.
	*---------------------------------------------------------------*
	* Inputs
	*  board   : Array holding the state of the board
	*  row     : Row of the current move
	*  col     : Column of the current move
	* Outputs
	*  winner  : Id of the winner, or blank if no won won yet
	*  tie     : Whether the board is in a tie state
	****************************************************************/
		
	// Initialize variables
	// Inputs
	char board[3][3];   // Array holding the state of the board
	int row = 0;        // Row of the current move
	int col = 0;        // Column of the current
	// Outputs
	char winner = ' ';  // Id of the winner 
	bool tie = false;   // Whether there's a tie or not

	// Initialize board with *
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = '*';
		}
	}

	// loop while no winner
	while (winner == ' ' && tie == false) {
	
		// Display board
		DisplayBoard(board);
	
		// Player 1 choice X
		cout << "Player 1 row:";
		cin >> row;
		cout << "Player 1 col:";
		cin >> col;

		// Write choice to board
		board[row - 1][col - 1] = 'X';

		// Display board
		DisplayBoard(board);
	
		// Player 2 choice X
		cout << "Player 2 row:";
		cin >> row;
		cout << "Player 2 col:";
		cin >> col;

		// Write choice to board
		board[row - 1][col - 1] = 'O';
	
		// Is there a winner?
		winner = IsWon(board);

		// Tie
		tie = IsTie(board);

		// No winner yet, keep going
	}
	
	// Declare winner 
	if (winner == 'X' || winner == 'x') {
		cout << "The winner is player 1" << endl;
	} else if (winner == 'O' || winner == 'o') {
		cout << "The winner is player 2" << endl;
	} else {
		cout << "It's a tie" << endl;
	}

	return 0;
}

void DisplayBoard(const char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << ' ';
		}
		cout << endl;
	}
}

char IsWon(const char board[3][3]) {
	// Full row win 
	for (int i = 0; i < 3; i++) {
		if (board[i][0] != '*' && 
		    board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
			return board[i][0];
		}
	}
	// Full column win
	for (int j = 0; j < 3; j++) {
		if (board[0][j] != '*' && 
		    board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
			return board[0][j];
		}
	}
	// Full diagonal win
	if (board[1][1] != '*' && (
	    board[0][0] == board[1][1] && board[1][1] == board[2][2] ||
	    board[0][2] == board[1][1] && board[1][1] == board[2][0])) 
	{
		return board[1][1];
	}
	return ' ';
}

bool IsTie(const char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == '*') {
				return false;
			}
		}
	}
	return true;
}
