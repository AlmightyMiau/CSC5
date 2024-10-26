#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

bool isPrime (int number);

int main ()
{
	/****************************************************************
	* IDENTIFY PRIME NUMBERS                                        *
	*---------------------------------------------------------------*
	* This program searches from 1 to 100 to find prime numbers. It *
	* then outputs all prime numbers to an output file "22-out.txt".*
	*---------------------------------------------------------------*
	* INPUTS                                                        *
	*  minNum      : Lowest number to check                         *
	*  maxNum      : Highest number to check                        *
	*  output      : file to output to                              *
	****************************************************************/
	
	// Initialize variables
	// Inputs
	int minNum = 1;     // first number to check
	int maxNum = 100;   // last number to check
	
	// open output file
	ofstream output;
	output.open("22-out.txt");
	
	// Go through every number to check if they are prime
	for (int n = minNum; n < maxNum; n++) {
		if (isPrime(n)) {
			output << n << endl; // output number to file
		}
	}
	
	// close file and end program
	output.close();
	return 0;
}

bool isPrime (int number)
{
	// Don't check for 1 and the number
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false; // number is NOT prime
		}
	}
	return true; // number IS prime
}
