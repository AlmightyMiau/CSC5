//Ivy Fudge               CSC5            Chapter 3, P. 147, #18
//
/***************************************************************
 * CALCULATE SLICES PER PIZZA
 * _____________________________________________________________
 * This program calculates the number of slices in a pizza, 
 * where there are 14.125 sq inches per slice, and the diameter
 * is input by the user.
 * _____________________________________________________________
 *
 * CONSTANT
 *  SLICEAREA  :  Square inches per slice of pizza
 *  PI         :  Value of pi at precision 5
 *
 * INPUT
 *  diameter   :  Diameter of the pizza
 *
 * OUTPUT
 *  slices     :  Number of slices from the area of the pizza
 *
 **************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
    // Initialize variables
    const float SLICEAREA = 14.125;      // Sq inches per slice
    const float PI = 3.14159;                    // Value of pi
    float diameter;                  // Input diameter of pizza
    float slices;         // Output calculated number of slices
    
    // Retrieve the diameter from the user
    cout << "What is the diameter of your pizza in inches? ";
    cin >> diameter;
    
    // Compute slices in pizza
    // (pi * radius^2) / (area of slice) 
    slices = (PI * pow(diameter / 2, 2.0)) / SLICEAREA;
    
    // Display the number of slices in the pizza
    // Use one decimal place of precision
    cout << setprecision(1) << fixed;
    cout << "There are " << slices << " slices in your pizza\n";
    
    return 0;
}
