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
	const int numbers[18] = {
	                   5658845, 4520125, 7895122, 8777541, 8451277, 
	                   1302850, 8080152, 4562555, 5552012, 5050552,
	                   7825877, 1250255, 1005231, 6545231, 3852085, 
	                   7576651, 7881200, 4581002
	};
	int sorted[18];
	int requested;
	int low = 0;
	int high = 17;
	int mid;

	// Sort numbers
	for (int i = 0; i < 18; i++) {
		int smallest = numbers[i];
		for (int j = i; j < 18; j++) {
			if (numbers[j] < smallest) {
				smallest = numbers[j];
			}
		}
		sorted[i] = smallest;
	}

	// Get account number
	cout << "Account number: ";
	cin >> requested;
	
	while (low <= high) {
                mid = ((high - low) / 2) + low;
                if (requested == sorted[mid]) {
                        cout << "Winner" << endl;
                        return 0;
                }

                if (requested > sorted[mid]) {
                        low = mid + 1;
                } else if (requested < sorted[mid]) {
                        high = mid - 1;
                }
        }


	cout << "Invalid" << endl;
	return 0;
}
