#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;


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
);


/*-----------------------------------------------------------------------------*
 *  Writes a report header into the file of "outFileName". The report consists *
 *  3 columns: ID #, Name, and Balance.                                        *
 *-----------------------------------------------------------------------------*/
void PrintHeaderToFile(
		string outFileName
);


/*-----------------------------------------------------------------------------*
 *  Searches through the array "names" of "length" number elements, looking    *
 *  for "search". If "search" is found, the index it is found is is returned.  *
 *  If "search" is not found, -1 is returned.                                  *
 *-----------------------------------------------------------------------------*/
int SearchForMatch(
		string* names,
		int length,
		string search
);


/*-----------------------------------------------------------------------------*
 *  Appends a formatted report of "name", "id", and "balance" to the           *
 *  file "outFileName".                                                        *
 *-----------------------------------------------------------------------------*/
void PrintReportToFile(
		string outFileName,
		string name,
		int id,
		float balance
);

#endif /* MYHEADER_H_ */
