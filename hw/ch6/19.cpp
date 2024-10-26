#include <iostream>
#include <iomanip>
using namespace std;

float stockProfit(
	int shares,
	float buyPrice,
	float buyCom,
	float salePrice, 
	float saleCom
);

int main ()
{
	/****************************************************************
	* CALCULATE STOCK PROFIT                                        *
	*---------------------------------------------------------------*
	* This program accepts as input the number of shares, the       *
	* purchase price per share, the purchase commission paid, the   *
	* sale price per share, and the sale commission paid. The       *
	* function then displays the profit or loss from the sale of    *
	* the stock.                                                    *
	*---------------------------------------------------------------*
	* INPUTS                                                        *
	*  shares     : number of shares                                *
	*  buyPrice   : price of shares at purchase                     *
	*  buyCom     : price of commission of purchase                 *
	*  salePrice  : price of shares at sale                         *
	*  saleCom    : price of commission of sale                     *
	*                                                               *
	* OUTPUTS                                                       *
	*  profit     : profit (or loss) from transaction               *
	****************************************************************/
	
	// Initialize variables
	// Inputs
	int shares = 0;        // Number of shares
	float buyPrice = 0.0;  // Purchase price of shares
	float buyCom = 0.0;    // Purchase commission paid
	float salePrice = 0.0; // Sale price of shares
	float saleCom = 0.0;   // Sale commission paid
	// Outputs
	float profit = 0.0;    // Profit of transaction
	
	// Retrieve inputs
	// shares
	cout << "Shares: ";
	cin >> shares;
	cout << shares << endl;
	// buyPrice
	cout << "Purchase price of shares: ";
	cin >> buyPrice;
	cout << buyPrice << endl;
	// buyCom
	cout << "Purchase commission: ";
	cin >> buyCom;
	cout << buyCom << endl;
	// salePrice
	cout << "Sale price of shares: ";
	cin >> salePrice;
	cout << salePrice << endl;
	// saleCom
	cout << "Sale commission: ";
	cin >> saleCom;
	cout << saleCom << endl;
	
	// Find the profit of the transaction
	profit = stockProfit(shares, buyPrice, buyCom, salePrice, saleCom);
	
	// Decide if it is a profit or loss
	if (profit >= 0) {
		cout << "Profit from sale is: ";
	} else {
		cout << "Loss from sale is: ";
	}
	
	// Display the profit value
	cout << fixed << setprecision(2) << profit << endl;
	
	return 0;
}

// Finds the profit (positive) or loss (negative) from the sale of stocks
float stockProfit (
	int shares,
	float buyPrice,
	float buyCom,
	float salePrice, 
	float saleCom
	)
{
	float profit = (
		((shares * salePrice) - saleCom) - 
		((shares * buyPrice) + buyCom)
	);
	
	return profit;
}
