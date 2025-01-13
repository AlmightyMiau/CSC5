//Miau Miau               CSC5            Chapter 3, P. 147, #18
//
/***************************************************************
 * CALCULATE PIZZAS PER PEOPLE
 * _____________________________________________________________
 * This program calculates the number of pizzas needed for a 
 * party, where each person eats 4 slices, there are 14.125 sq 
 * inches per slice, and the diameter and number of people is 
 * input by the user.
 * 
 * _____________________________________________________________
 *
 * CONSTANT
 *	SLICEAREA  :  Square inches per slice of pizza
 *  PPLSLICES  :  Number of slices eaten by each person
 *  PI         :  Value of pi at precision 5
 *
 * INPUT
 *  diameter   :  Diameter of the pizza
 *  people     :  Number of people
 *
 * OUTPUT
 *  pizzas     :  Number of pizzas needed
 *
 **************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	// Initialize variables
	// CONSTANTS
	const float PI = 3.14159;                    // Value of pi
	const float SLICEAREA = 14.125;      // Sq inches per slice
	const int PPLSLICES = 4;         // Slices eaten per person
	// INPUTS
	float diameter;                  // Input diameter of pizza
	int people;                       // Input number of people
	// INTERMEDIATES
	float slices;                 // number of slices per pizza
	// OUTPUTS
	float pizzas;                    // Number of pizzas needed
	
	// Retrieve the diameter from the user
	cout << "What is the diameter of your pizza in inches? ";
	cin >> diameter;
	// Retrieve number of peopl from user
	cout << "How many people are at the party? ";
	cin >> people;
	
	// Compute slices per pizza
	// (pi * radius^2) / (area of slice) 
	slices = (PI * pow(diameter / 2, 2.0)) / SLICEAREA;
	
	// Compute pizzas needed
	// pizzas = ((slices/person) / (slices/pizza)) * (people)
	pizzas = (PPLSLICES / slices) * people;
	
	// Display the number of pizzas needed
	// Use one decimal place of precision
	cout << setprecision(1) << fixed;
	cout << "You need " << pizzas << " pizzas\n";
	
	return 0;
}
