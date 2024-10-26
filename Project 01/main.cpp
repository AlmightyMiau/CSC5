/*******************************************************************************
 * Author        : Ivy Fudge                                                   *
 * Student ID    : 2973023                                                     *
 * Assignment #1 : Basic Input / Output                                        *
 * Class         : CIS5                                                        *
 * Section       : MW 2:20PM - 5:30PM                                          *
 * Due Date      : 9/16/2024                                                   *
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


/*******************************************************************************
* COMPUTE RETROACTIVE PAY                                                      *
*------------------------------------------------------------------------------*
* This program accepts as input an employee name, their current salary, and    *
* the percent increase and computes the new annual salary, the new monthly     *
* salary, and the retroactive pay due. The program will execute 3 times, each  *
* time prompting for new input and displaying the computed values for the      *
* given input.                                                                 *
*                                                                              *
* Computations are based on the assumption that input values are effective on  *
* January 1 and calculations are effective for July 1.	                       *
*------------------------------------------------------------------------------*
* INPUT                                                                        *
*   name            : Employee's full name                                     *
*   salaryCurrent   : Current annual salary                                    *
*   increase        : Percent increase due                                     *
*                                                                              *
* OUTPUT                                                                       *
*   salaryNew       : New salary after applying increase                       *
*   monthly         : New monthly salary                                       *
*   Owed            : Retroactive pay due                                      *
*******************************************************************************/


int main ()
{
    /***************************************************************************
    * CONSTANTS                                                                *
    *--------------------------------------------------------------------------*
    * MONTHS          : Total number of months                                 *
    * RETRO_MONTHS    : Months since increase                                  *
    ***************************************************************************/

	const int MONTHS = 12;       // Months in a year
	const int RETRO_MONTHS = 6;  // Months to be repaid

	// Repeat the code 3 times
	for (int i = 0; i < 3; i++) {
		// (re)initialize the variables
		string name;           // The name
		float salarycurrent;   // The current salary
		float increase;        // The salary increase
		float salarynew;       // The new salary
		float monthly;         // The (new) monthly salary
		float owed;            // The money to be repaid

		// Ask for and store the name
		cout << "What is your name?" << setw(18) << " ";
		getline(cin, name);
		// Ask for and store the current salary
		cout << "What is your current annual salary?" << setw(1) << " ";
		cin >> salarycurrent;
		// Ask for and store the salary increase
		cout << "What is your pay increase?" << setw(10) << " ";
		cin >> increase;

		// Calculate the new salary
		salarynew = (increase + 1) * salarycurrent;
		// Calculate the monthly salary
		monthly = salarynew / MONTHS;
		// Calculate the money to be repaid
		owed = (salarynew - salarycurrent) / (MONTHS / RETRO_MONTHS);

		// Display the salary data
		cout << fixed << setprecision(2);
		cout << "\n" << name << "'s SALARY INFORMATION" << endl;
		cout << "New Salary" << setw(5) << " " << "Monthly Salary" << setw(5);
		cout << " " << "Retroactive Pay" << endl;
		cout << right << setw(10) << showpoint << salarynew << setw(19);
		cout << monthly << setw(20) << owed << endl;
		cout << "\n<Press enter to continue>\n\n";
		cin.ignore();
		cin.get();
	}
	return 0;
}
