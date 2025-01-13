/********************************************************
 * Author        : Miau Miau                            *
 * Student ID    : 2973023                              *
 * Lab #1        : Eclipse Lab                          *
 * Class         : CIS5                                 *
 * Section       : MW 2:20PM - 5:30PM                   *
 * Due Date      : 8/26/2024                            *
********************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	/*********************************
	* CONSTANTS						 *
	*--------------------------------*
	* PROGRAMMER : Programmer's Name *
	* CLASS : Student's Course       *
	* SECTION : Class Days and Time  *
	* LAB_NUM : Lab Number           *
	* LAB_NAME : Title of the Lab    *
	*********************************/
	const char PROGRAMMER[30] = "Miau Miau";
	const char CLASS[5] = "CIS5";
	const char SECTION[25] = "MW 2:20 - 5:30";
	const int LAB_NUM = 1;
	const char LAB_NAME[17] = "Eclipse Tutorial";

	cout << left;
	cout << "*********************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*********************************************\n\n";
	cout << right;
	
	return 0;
}
