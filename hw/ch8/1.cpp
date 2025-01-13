#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	/****************************************************************
	* FIND ACCOUNT NUMBER                                           *
	*---------------------------------------------------------------*
	* This program takes as input a 6 digit account number,         *
	* searches through the list of numbers, and displays "valid" if *
	* it is found and "invalid" if not.                             *
	*---------------------------------------------------------------*
	* INPUTS                                                        *
	*  numbers   : Array of account numbers                         *
	*  requested : Number entered into program                      *
	* OUTPUTS                                                       *
	*  valid     : Whether the number is valid or not               *
	****************************************************************/
	
	// Initialize variables
	// Inputs
	int numbers[18] = {
	                   5658845, 4520125, 7895122, 8777541, 8451277, 
	                   1302850, 8080152, 4562555, 5552012, 5050552,
	                   7825877, 1250255, 1005231, 6545231, 3852085, 
	                   7576651, 7881200, 4581002
	};
	int requested;

	// Get account number
	cout << "Account number: ";
	cin >> requested;
	
	for (int i = 0; i < 18; i++) {
		if (requested == numbers[i]) {
			cout << "Valid" << endl;
			return 0;
		}
	}

	cout << "Invalid" << endl;
	return 0;
}
