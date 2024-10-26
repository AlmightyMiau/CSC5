#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	/****************************************************************
	* IDENTIFY LARGE AND SMALL NUMBERS                              *
	*---------------------------------------------------------------*
	* This program takes as input 10 integers. It then finds the    * 
	* largest and smallest value, and display them accordingly      *
	*---------------------------------------------------------------*
	* Inputs
	*  numbers  : array of input numbers
	* Outputs
	*  largest  : largest number input
	*  smallest : smallest number input
	****************************************************************/
	
	// Initialize variables
	// Inputs
	int numbers[10];
	// Outputs
	int largest = 0;
	int smallest = 0;

	// Retrieve input numbers
	for (int i = 0; i < 10; i++) {
		cout << "#" << i << ": ";
		cin >> numbers[i];
		cout << numbers[i] << endl;
	}

	// Find smallest and largest
	largest = numbers[0];
	smallest = numbers[0];
	for (int i = 0; i < 10; i++) {
		if (numbers[i] < smallest) {
			smallest = numbers[i];
		} else if (numbers[i] > largest) {
			largest = numbers[i];
		}
	}

	// Display information
	cout << fixed;
	cout << "Largest number: " << largest << endl;
	cout << "Smallest number: " << smallest << endl;
	
	return 0;
}
