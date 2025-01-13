#include "myheader.h"

/*-----------------------------------------------------------------------------*
 *  Appends a formatted report of "name", "id", and "balance" to the           *
 *  file "outFileName".                                                        *
 *-----------------------------------------------------------------------------*/
void PrintReportToFile(
		string outFileName,
		string name,
		int id,
		float balance
		)
{
	// Open output file in append mode
	ofstream outFile(outFileName.c_str(), ofstream::app);

	// output ID, Name, and Balance input
	outFile << left << fixed << setprecision(2) << setw(9) << id << setw(25)
			<< name	<< '$' << right	<< setw(10) << balance << endl;

	outFile.close();
}
