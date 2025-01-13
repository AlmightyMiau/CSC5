#include "myheader.h"

/*-----------------------------------------------------------------------------*
 * Reads lines of "inFileName" into the parallel arrays of "names", "accNum",  *
 * and "balance", up to twice "length" in lines. Pattern of data in            *
 * "inFileName" is 1 line of a string, then an int and a float, which are      *
 * seperated by a space.                                                       *
 *-----------------------------------------------------------------------------*/
void LoadArraysFromFile(
		string inFileName,
		string* names,
		int* accNum,
		float* balance,
		int length
		)
{
	ifstream inFile(inFileName.c_str());

	// Go through the infile and put each line into its respective array
	for (int i = 0; i < length; i++) {
		getline(inFile, names[i]);
		inFile >> accNum[i] >> balance[i];
		inFile.ignore();
	}

	inFile.close();
}
