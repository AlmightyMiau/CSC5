/*******************************************************************************
 * Author        : Miau Miau                                                   *
 * Student ID    : 2973023                                                     *
 * Assignment #3 : Functions                                                   *
 * Class         : CSC-5                                                       *
 * Section       : MW 2:20PM - 5:30PM                                          *
 * Due Date      : 11/04/2024                                                  *
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


/*******************************************************************************
* COMPUTE SALE COSTS 		                                           *
*------------------------------------------------------------------------------*
* This Program takes as input the information of a sale. It takes              *
* account number, month, day, year, county, subtotal, and weight. It then      *
* calculates the discount based on the month, the sales tax based on county,   * 
* and the shipping cost based on weight. It displays an invoice with all       * 
* information, as well as the total of the sale.                               *
*------------------------------------------------------------------------------*
* INPUT															               *
*  Account number                                                              *
*  Month of sale                                                               *
*  Day of sale                                                                 *
*  Year of sale                                                                *
*  County of customer                                                          *
*  Subtotal of sale                                                            *
*  Shipping weight of product                                                  *
*															                   *
* OUTPUT														               *
*  Discount of sale based on month                                             *
*  Sales tax of sale based on county                                           *
*  Shipping cost based on shipping weight                                      *
*  Total cost of sale                                                          *
*******************************************************************************/

// Get sales information from the terminal
void GetSalesInfo(int& accNum, // Variable address of accNum
		int& month,            // Variable address of month
		int& day,              // Variable address of day
		int& year,             // Variable address of year
		char& county,          // Variable address of county
		float& subtotal,       // Variable address of subtotal
		int& weight);          // Variable address of weight

// Decide the discount based on month
float CalcDiscount(int month,  // Month of purchase
		float subtotal);       // Subtotal of purchase

// calculate sales tax based on county
float CalcSalesTax(char county,// County of purchase
		float subtotal,        // Subtotal of purchase
		float discount);       // Discount for purchase

// Calculate the shipping cost from weight
float CalcShipping(int weight);

// Output invoice to terminal
void OutputInvoice(int& accNum, int& month, int& day, int& year, char& county,
		float& subtotal, float& discount, float& tax, float& shipping);

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
	float discount;   // Discount based on month
	float tax;        // Sales tax based on county
	float shipping;   // Shipping cost based on weight
	
	// Output Class Header
	// Output class header
	cout << "********************************************************\n" <<
		"* Author        : Miau Miau                            *\n" <<
		"* Student ID    : 2973023                              *\n" <<
		"* Project #3    : Functions                            *\n" <<
		"* Class         : CSC-5                                *\n" <<
		"* Section       : MW 2:20PM - 5:30PM                   *\n" <<
		"* Due Date      : 11/4/2024                            *\n" <<
		"********************************************************\n\n";
	
	// Run multiple times (3)
	for (int i = 0; i < 3; i++) {

		// Get Sale info from user
		GetSalesInfo(accNum, month, day, year, county, subtotal, weight);

		// Calculate discount based on month
		discount = CalcDiscount(month, subtotal);

		// Calculate tax based on county
		tax = CalcSalesTax(county, subtotal, discount);

		// Calculate shipping based on weight
		shipping = CalcShipping(weight);

		// Display all data
		OutputInvoice(accNum, month, day, year, county, subtotal, discount,tax,
				shipping);
	}
	return 0;
}

// Get sales information from the terminal
void GetSalesInfo(int& accNum, int& month, int& day, int& year, char& county,
		float& subtotal, int& weight)
{
	// Get account number
	cout << "Please Enter your Account Number: ";
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
	cout << "Please Enter the County Code: ";
	cin >> county;

	// Get subtotal
	cout << "Please Enter the Sales Amount: ";
	cin >> subtotal;

	// Get shipping weight
	cout << "Please Enter the Weight: ";
	cin >> weight;
}

// Decide the discount based on month
float CalcDiscount(int month, float subtotal)
{
	float discount; // Discount value

	switch(month) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			discount = 5;
			break;
		case 6:
		case 7:
		case 8:
			discount = 10;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			discount = 15;
			break;
		default:
			discount = 0;
			break;
	}

	// Calculate discount as dollar value
	discount *= subtotal / 100;

	return discount;
}

// calculate sales tax based on county
float CalcSalesTax(char county, float subtotal, float discount)
{
	float tax = 0; // store the value of the tax

	switch(county) {
		// Orange County tax rate
		case 'o':
		case 'O':
			tax = 7.75;
			break;
		// San Diego County tax rate
		case 's':
		case 'S':
			tax = 8.25;
			break;
		// Los Angeles County tax rate
		case 'l':
		case 'L':
			tax = 8.00;
			break;
		// Not a valid county
		default:
			tax = 0;
			break;
	}

	// Calculate value of tax in dollars
	tax *= (subtotal - discount) / 100;

	return tax;
}

// Calculate the shipping cost from weight
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

// Output invoice to terminal
void OutputInvoice(int& accNum, int& month, int& day, int& year, char& county,
		float& subtotal, float& discount, float& tax, float& shipping) {
	// Calculate total cost
	float total = subtotal - discount + tax + shipping;

	// Generate long county name
	string countyLong;
	switch(county) {
			// Orange County tax rate
			case 'o':
			case 'O':
				countyLong = "Orange County";
				break;
			// San Diego County tax rate
			case 's':
			case 'S':
				countyLong = "San Diego County";
				break;
			// Los Angeles County tax rate
			case 'l':
			case 'L':
				countyLong = "Los Angeles County";
				break;
			// Not a valid county
			default:
				countyLong = "";
				break;
		}

	// Display all data
	cout << fixed << setprecision(2) << endl;
	cout << "ACCOUNT NUMBER" << setw(30) << "COUNTY" << endl;
	cout << setw(9) << accNum << setw(39) << countyLong << endl;
	cout << "\nDATE OF SALE: " << month << '/' << day << '/' << year << endl;
	cout << "\n\n";
	cout << left << setw(19) << "SALE AMOUNT: " << '$' << right << setw(8)
			<< subtotal << endl;
	cout << left << setw(19) << "DISCOUNT: " << '$' << right << setw(8)
			<< discount << endl;
	cout << left << setw(19) << "SALES TAX: " << '$' << right << setw(8)
			<< tax << endl;
	cout << left << setw(19) << "SHIPPING: " << '$' << right << setw(8)
			<< shipping << endl;
	cout << left << setw(19) << "TOTAL DUE: " << '$' << right << setw(8)
			<< total << endl;
	cout << "\n\n";
}
