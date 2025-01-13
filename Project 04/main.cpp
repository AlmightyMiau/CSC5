/*******************************************************************************
 * Author        : Miau Miau                                                   *
 * Student ID    : 2973023                                                     *
 * Assignment #4 : Parallel Arrays                                             *
 * Class         : CSC-5                                                       *
 * Section       : MW 2:20PM - 5:30PM                                          *
 * Due Date      : 12/02/2024                                                  *
*******************************************************************************/

#include "myheader.h"

/*******************************************************************************
* SELECT RECORDS FROM FILE	 		                                           *
*------------------------------------------------------------------------------*
* This program takes as input the name of a file containing a list of names,   *
* id's, and balances, as well as the name of an output file, and a series of   *
* names to search the input file for. Found names will be put in the output    *
* file along with the account number and balance of each found name.           *
*------------------------------------------------------------------------------*
* INPUT															               *
*  inFile Name                                                                 *
*  outFile Name                                                                *
*  searched names                                                              *
*															                   *
* OUTPUT														               *
*  report header                                                               *
*  found names                                                                 *
*  id of found names                                                           *
*  balance of found names                                                      *
*  average balance of names found                                              *
*                                                                              *
*******************************************************************************/

int main() {
	string inFileName;        // Name of Input file
	int length = 0;           // Length of the input file, found dynamically
	string* names = nullptr;  // Array of names (Dynamically allocated)
	int* accNum = nullptr;    // Array of ID's (Dynamically allocated)
	float* balance = nullptr; // Array of balances (Dynamically allocated)
	string search;            // Current search query
	string outFileName;       // Name of Output file
	int index;                // Index returned by SearchForMatch()
	int found = 0;            // Number of names found
	float foundBal = 0;       // Total balance found

    // Get file name and determine the number of records in the input file
    cout << "What input file would you like to use? ";
    getline(cin, inFileName);

    ifstream inFile(inFileName.c_str());

    // Count the number of lines in the file (each record is 2 lines)
    string tempLine;
    while (getline(inFile, tempLine)) {
        length++;
    }
    length /= 2;  // Each record spans 2 lines
    inFile.close();

    // Dynamically allocate memory for the arrays
    names = new string[length];
    accNum = new int[length];
    balance = new float[length];


	// Prepare Arrays from Input file
	LoadArraysFromFile(inFileName, &names[0], &accNum[0], &balance[0], length);

	// Prepare Output file
	cout << "What output file would you like to use? ";
	getline(cin, outFileName);

	PrintHeaderToFile(outFileName);

	cout << endl; // Formatting

	// Loop for searching for names
	cout << "Who do you want to search for (enter done to exit): ";
	getline(cin, search);
	while (search.compare("done")) {
		index = SearchForMatch(&names[0], length, search);

		// Parse SearchForMatch() return value
		switch(index) {
			case -1:
				cout << search << " was not found." << endl;
				break;
			default:
				cout << "Found." << endl;
				found++;
				foundBal += balance[index];
				PrintReportToFile(outFileName, names[index],
						accNum[index], balance[index]);
		}
		cout << endl;
		cout << "Who do you want to search for (enter done to exit): ";
		getline(cin, search);
	}

	// Output average balance due to outfile
	ofstream outFile(outFileName.c_str(), ofstream::app);
	outFile << right << fixed << setprecision(2)
			<< setw(34) << "Average Balance Due: "
			<< '$' << setw(10) << (foundBal / found)
			<< endl;
	outFile.close();

	cout << endl;
	cout << "Thank you for using my program." << endl;

    // Free dynamically allocated memory
    delete[] names;
    delete[] accNum;
    delete[] balance;

	return 0;
}
