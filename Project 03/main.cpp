/*******************************************************************************
 * Author        : Ivy Fudge                                                   *
 * Student ID    : 2973023                                                     *
 * Assignment #2 : Repetition & Switch Statement                               *
 * Class         : CIS5                                                        *
 * Section       : MW 2:20PM - 5:30PM                                          *
 * Due Date      : 10/07/2024                                                  *
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


/*******************************************************************************
* COMPUTE AVERAGE GRADE SCORE 		                                           *
*------------------------------------------------------------------------------*
* Start main.
* 	Call GetSalesInfo with pointers to needed variables.
* 		Gets account, month, day, year, county code, subtotal, weight.
* 	Call CalcDiscount, passing through month.
* 		Returns the proper discount for the sale.
* 	Call CalcSalesTax, passing through county.
* 		Returns the proper sales tax for the county.
* 	Call CalcShipping, passing through weight.
* 		Returns shipping price for the weight.
* 	Call OutputInvoice.
* 		Outputs an invoice to the terminal output.
* 		Invoice is account, date, subtotal, discount, tax, shipping, total
*------------------------------------------------------------------------------*
* INPUT															               *
*
*															                   *
* OUTPUT														               *
*
*******************************************************************************/

// Get sales information from the terminal
void GetSalesInfo(int& accNum,
		int& month,
		int& day,
		int& year,
		char& county,
		float& subtotal,
		int& weight);

// Decide the discount based on month
int CalcDiscount(int month);

// calculate sales tax based on county
float CalcSalesTax(char county);

// Calculate the shipping cost from weight
float CalcShipping(int weight);

int main ()
{
	// Initialize variables
	// Inputs
	int accNum;       // Account number of the user
	int month;        // Month of the sale
	int day;          // Month of the sale
	int year;         // Month of the sale
	char county;      // Code of the county
	float subtotal;   // Subtotal of the sale
	int weight;       // Shipping weight
	// Outputs
	int discount;     // Discount based on month
	float tax;        // Sales tax based on county

	GetSalesInfo(accNum, month, day, year, county, subtotal, weight);

	discount = CalcDiscount(month);

	tax = CalcSalesTax(county);

	return 0;
}

void GetSalesInfo(int& accNum, int& month, int& day, int& year, char& county,
		float& subtotal, int& weight)
{
	// Get account number
	cout << "Account number: ";
	cin >> accNum;

	// Get date
	cout << "Please Enter the Sales Date. " << endl;
	cout << "Enter Month: ";
	cin >> month;
	cout << "Enter Day: ";
	cin >> day;
	cout << "Enter Year: ";
	cin >> year;

	// Get county code
	cout << "County code: ";
	cin >> county;

	// Get subtotal
	cout << "Subtotal: ";
	cin >> subtotal;

	// Get shipping weight
	cout << "Shipping weight: ";
	cin >> weight;
}

int CalcDiscount(int month)
{
	switch(month) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return 5;
		case 6:
		case 7:
		case 8:
			return 10;
		case 9:
		case 10:
		case 11:
		case 12:
			return 15;
		default:
			return 0;
	}

	return 0;
}

float CalcSalesTax(char county)
{
	switch(county) {
		case 'o':
		case 'O':
			return 7.75;
		case 's':
		case 'S':
			return 8.25;
		case 'l':
		case 'L':
			return 8.00;
		default:
			return 0;
	}

	return 0;
}

float CalcShipping(int weight) {
	float cost = 5.00;

	if (weight > 25) {
		if (weight <= 50) {
			cost += (weight - 25) * 0.10;
		} else {
			cost += 2.50 + (weight - 50) * 0.07;
		}
	}

	return cost;
}
