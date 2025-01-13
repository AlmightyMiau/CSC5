#include "myheader.h"

/*-----------------------------------------------------------------------------*
 *  Writes a report header into the file of "outFileName". The report consists *
 *  3 columns: ID #, Name, and Balance.                                        *
 *-----------------------------------------------------------------------------*/
void PrintHeaderToFile(string outFileName)
{
	ofstream outFile(outFileName.c_str());

	// Output formatted header
	outFile << left << fixed << setprecision(2)
	        << setw(9) << "ID #" << setw(25) << "NAME"
			<< setw(11) << "BALANCE DUE" << endl
			<< "----     --------------------     -----------" << endl;

	outFile.close();
}
