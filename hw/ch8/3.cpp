#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	/****************************************************************
	* FIND WINNING NUMBER                                           *
	*---------------------------------------------------------------*
	* This program takes as input a 5 digit lottery number,         *
	* searches through the list of numbers, and displays "winner"   *
	* if it is found and "invalid" if not                           *
	*---------------------------------------------------------------*
	* INPUTS                                                        *
	*  numbers   : Array of account numbers                         *
	*  winning   : Number entered into program                      *
	* OUTPUTS                                                       *
	*  winner    : Whether the number is winner or not              *
	****************************************************************/
	
	// Initialize variables
	// Inputs
	int numbers[10] = {13579, 26791, 26792, 33445, 55555, 62483,
	                   77777, 79422, 85647, 93121
	};
	int winning;
	int low = 0;
	int high = 9;
	int mid = high / 2;

	// Get account number
	cout << "Winning number: ";
	cin >> winning;
	
	while (low <= high) { 
		mid = ((high - low) / 2) + low;
		if (winning == numbers[mid]) {
			cout << "Winner" << endl;
			return 0;
		}
		
		if (winning > numbers[mid]) {
			low = mid + 1;
		} else if (winning < numbers[mid]) {
			high = mid - 1;
		}
	}

	cout << "No winner" << endl;
	return 0;
}
