#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime (int number);

int main ()
{
	/****************************************************************
	* IDENTIFY PRIME NUMBER			                                *
	*---------------------------------------------------------------*
	* This program accepts as input an integer. It then checks      *
	* whether it is prime, and outputs a message stating so.        *
	*---------------------------------------------------------------*
	* INPUTS                                                        *
	*  number  : number input by user                               *
	****************************************************************/
	
	// Initialize variables
	// Inputs
	int number = 0;
	
	// Retrieve number
	cout << "number: ";
	cin >> number;
	cout << number << endl;
	
	if (isPrime(number)) {
		cout << number << " is a prime number" << endl;
	} else {
		cout << number << " is not a prime number" << endl;
	}
	
	return 0;
}

bool isPrime (int number)
{
	// Skip 1
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false; // number is NOT prime
		}
	}
	return true; // number IS prime
}
