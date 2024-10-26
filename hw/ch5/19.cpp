#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	/****************************************************************
	* ANALYZE BUDGET   	                                            *
	*---------------------------------------------------------------*
	* This program asks for an amount budgeted for the month. It    *
	* then repeatedly asks for expenses, and keeps a running total. *
	* When '0' is entered, the program displays the amount the user *
	* is over or under budget, and stops running.                   *
	*---------------------------------------------------------------*
	* INPUTS	                                                    *
	*  budget   : The budget allocated for the month                *
	*  expense  : The newest expense                                *
	* OUTPUTS                                                       *
	*  total    : The total expended for the month                  *
	****************************************************************/
	
	// Initialize variables
	// Inputs
	float budget;
	float expense;
	// Output
	float total;
	
	// Ask for the budget
	cout << "Budget: ";
	cin >> budget;
	cout << budget << endl;
	cin.ignore();
	
	// Loop for expenses
	do {
		// Retrieve the next value
		cout << "Next expense: ";
		cin >> expense;
		cout << expense << endl;
		// Add expense to total
		total += expense;
	} while (expense != 0); // Use 0 as a sentinel value
	// Display the total
	cout << "Total: " << total << endl;
	// Display amount over or under budget 
	if (total > budget) { // Over budget
		cout << "Over budget by: $" << (total - budget) << endl;
	} else { // Under budget
		cout << "Under budget by: $" << (budget - total) << endl;
	}
	return 0;
}
