//Miau Miau               CSC5            Chapter 3, P. 147, #21
//
/***************************************************************
 * COMPUTE STOCK TRANSACTIONS
 * _____________________________________________________________
 * Calculate the price of buying shares of a stock, the selling 
 * price of those shares at a different price, the commission
 * paid to the broker, and the profit made.
 * _____________________________________________________________
 *
 * CONSTANTS
 *  COMMISSION    :  The percentage paid to the broker
 *
 * VARIABLES
 *  sharesBought  :  The number of shares bought
 *  priceBought   :  The price at which the stock is bought
 *  sharesSold    :  The number of shares sold
 *  priceSold     :  The price at which the stock is sold
 *
 * OUTPUT
 *  valueBought   :  The total price for buying the stock
 *  comBought     :  Commission paid from buying stock
 *  valueSold     :  The total price for selling the stock
 *  comSold       :  Commssion paid from selling stock
 *  profit        :  Difference of selling (positive) and buying 
 *                   with commissions (negative) 
 *
 **************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{	
	// Initialize variables
	// Constant
	float COMMISSION = 0.02;           // Commission percentage
	// Purchase
	int sharesBought = 1000;                   // Shares bought
	float priceBought = 32.87;       // Stock price when bought
	// Sell
	int sharesSold = 1000;                       // Shares sold
	float priceSold = 33.92;           // Stock price when sold
	// OUTPUT
	float valueBought;                     // Value of purchase
	float comBought;                // Commission from purchase
	float valueSold;                           // Value of sell
	float comSold;                      // Commission from sell
	float profit;           // Profit between purchase and sell
	
	// Value of stock purchase
	valueBought = sharesBought * priceBought;
	// Commission paid when purchasing
	comBought = valueBought * COMMISSION;
	
	// Value of stock sold
	valueSold = sharesSold * priceSold;
	// Commission paid when selling
	comSold = valueSold * COMMISSION;
	
	// Profit made
	profit = valueSold - valueBought - comBought - comSold;
	
	// Display stock information
	cout << setprecision(2) << fixed << right;
	cout << setw(28) << "Money to purchase: " << setw(8) << valueBought << endl;
	cout << setw(28) << "Commission from purchasing: " << setw(8) << comBought << endl;
	cout << setw(28) << "Money from selling: " << setw(8) << valueSold << endl;
	cout << setw(28) << "Commission from selling: " << setw(8) << comSold << endl;
	cout << setw(28) << "Profit from trading: " << setw(8) << profit << endl;

	return 0;
}
