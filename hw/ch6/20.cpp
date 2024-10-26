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
	* This program accepts as input the number of transactions. It  *
	* then repeatedly asks for the number of shares, the purchase   *
	* price per share, the purchase commission paid, the sale price *
	* per share, and the sale commission paid. The function then    *
	* displays the total profit or loss from series of transactions.*
	*---------------------------------------------------------------*
	* INPUTS                                                        *
	*  actions    : number of transactions                          *
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
	int actions = 0;       // Number of transactions
	int shares = 0;        // Number of shares
	float buyPrice = 0.0;  // Purchase price of shares
	float buyCom = 0.0;    // Purchase commission paid
	float salePrice = 0.0; // Sale price of shares
	float saleCom = 0.0;   // Sale commission paid
	// Outputs
	float profit = 0.0;    // Profit of transaction
	
	// Retrieve inputs
	// transactions
	cout << "Number of transactions: ";
	cin >> actions;
	cout << actions << "\n\n";
	
	// formatting
	cout << fixed << setprecision(2);
	
	for (int i = 0; i < actions; i++) {
		// Label set of data
		cout << setw(18) << "Set #" << i + 1 << endl;
		// Retrieve inputs
		// shares
		cout << left << setw(26) << "Shares: ";
		cin >> shares;
		cout << right << setw(5) << shares << endl;
		// buyPrice
		cout << left << setw(26) << "Purchase price of shares: ";
		cin >> buyPrice;
		cout << right << setw(8) << buyPrice << endl;
		// buyCom
		cout << left << setw(26) << "Purchase commission: ";
		cin >> buyCom;
		cout << right << setw(5) << buyCom << endl;
		// salePrice
		cout << left << setw(26) << "Sale price of shares: ";
		cin >> salePrice;
		cout << right << setw(8) << salePrice << endl;
		// saleCom
		cout << left << setw(26) << "Sale commission: ";
		cin >> saleCom;
		cout << right << setw(5) << saleCom << endl;
		
		// Find the profit of the transaction
		profit += stockProfit(
			shares, buyPrice, buyCom, salePrice, saleCom
		);
		
		// Profit of sale
		cout << left << setw(26) << "Sale profit: ";
		cout << right << setw(8) << stockProfit(
			shares, buyPrice, buyCom, salePrice, saleCom
		) << endl;
		
		// formatting
		cout << '\n';
	}
	
	// Decide if it is a profit or loss
	if (profit >= 0) {
		cout << left << setw(26) << "Profit from sale is: ";
	} else {
		cout << left << setw(26) << "Loss from sale is: ";
	}
	
	// Display the profit value
	cout << right << setw(8) << profit << endl;
	
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
