#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	/****************************************************************
	* GENERATE ASCII TRIANGLES		                                *
	*---------------------------------------------------------------*
	* This program takes an integer as input and generates two      *
	* ASCII triangles of '+'s based on the input value.             *
	*---------------------------------------------------------------*
	* Inputs    													*
	*  symbol  : character used to display patterns                 *
	*  length  : side length of the square                          *
	****************************************************************/
	
	// Initialize variables
	// Inputs
	char symbol = '+';
	int length = 0;
	// Retrieve length value
	cout << "Length: ";
	cin >> length;
	cout << length << endl;
	
	// Verify input value
	if ((length <= 0) || (length > 15)) {
		cout << "Invalid side length" << endl;
		cout << "Side length must be a positive integer no greater ";
		cout << "than 15" << endl;
		return 0;
	}
	
	cout << endl; // Formatting
	
	// Generate the first triangle (pointing up)
	// Rows
	cout << "Pattern A" << endl;
	for (int i = 0; i < length; i++) {
		// Units per row
		for (int j = 0; j < (i + 1); j++) {
			cout << symbol;
		}
		// Start new row
		cout << endl;
	}
	
	cout << endl; // Formatting
	
	// Generate the second triangle (pointing down)
	// Rows
	cout << "Pattern B" << endl;
	for (int i = 0; i < length; i++) {
		// Units per row
		for (int j = length; j > i; j--) {
			cout << symbol;
		}
		// Start new row
		cout << endl;
	}
	
	return 0;
}
