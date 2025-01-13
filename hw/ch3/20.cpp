//Miau Miau               CSC5            Chapter 3, P. 147, #20
//
/**************************************************************
 * COMPUTE SIN, COS, TANGENT OF ANGLE
 * _____________________________________________________________
 * This program calculates the sin, cosin, and tangent values of
 * the angle (in radians) input by the user.
 * _____________________________________________________________
 *
 * INPUT
 *  angle       :  angle in radians
 *
 * OUTPUT
 *  sin(angle)  :  sin of the angle
 *  cos(angle)  :  cosin of the angle
 *  tan(angle)  :  tangent of the angle
 *
 **************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	// Initialize the variables
	float angle; // Input angle in radians
	
	// Retrieve angle from user
	cout << "What is the angle in radians? ";
	cin >> angle;
	
	// Output the sin, cos, and tan of angle
	cout << setprecision(4) << fixed;
	cout << "Sin of angle: " << sin(angle) << endl;
	cout << "Cosin of angle: " << cos(angle) << endl;
	cout << "Tangent of angle: " << tan(angle) << endl;

	return 0;
}
