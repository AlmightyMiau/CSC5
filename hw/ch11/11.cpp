#include <iostream>
#include <iomanip>
using namespace std;

struct MonthlyBudget {
	float housing;
	float utilities;
	float household;
	float transportation;
	float food;
	float medical;
	float insurance;
	float entertainment;
	float clothing;
	float misc;
};

void GetUserExpenses (MonthlyBudget *user); 

void DisplayReport (MonthlyBudget* standard, MonthlyBudget* user);

int main ()
{
	/****************************************************************
	* [TITLE]                                                       *
	*---------------------------------------------------------------*
	* [DESCRIPTION]                                                 *
	*---------------------------------------------------------------*
	* [CONSTANTS]                                                   *
	****************************************************************/
	
	MonthlyBudget standard;
	MonthlyBudget user;

	// Set the standard budget 
	standard.housing = 500.00;
	standard.utilities = 150.00;
	standard.household = 65.00;
	standard.transportation = 50.00;
	standard.food = 250.00;
	standard.medical = 30.00;
	standard.insurance = 100.00;
	standard.entertainment = 150.00;
	standard.clothing = 75.00;
	standard.misc = 50.00;

	GetUserExpenses(&user);

	DisplayReport(&standard, &user);

	return 0;

}

void GetUserExpenses (MonthlyBudget *user) {
	// Get each of the values in the MonthlyBudget struct
	// Housing
	cout << "Housing: ";
	cin >> user->housing;
	cout << user->housing << endl;
	// Utilities
	cout << "Utilities: ";
	cin >> user->utilities;
	cout << user->utilities << endl;
	// Household
	cout << "Household: ";
	cin >> user->household;
	cout << user->household << endl;
	// Transportation
	cout << "Transportation: ";
	cin >> user->transportation;
	cout << user->transportation << endl;
	// Food
	cout << "Food: ";
	cin >> user->food;
	cout << user->food << endl;
	// Medical
	cout << "Medical: ";
	cin >> user->medical;
	cout << user->medical << endl;
	// Insurance
	cout << "Insurance: ";
	cin >> user->insurance;
	cout << user->insurance << endl;
	// Entertainment
	cout << "Entertainment: ";
	cin >> user->entertainment;
	cout << user->entertainment << endl;
	// Clothing
	cout << "Clothing: ";
	cin >> user->clothing;
	cout << user->clothing << endl;
	// Miscellanious
	cout << "Miscellanious: ";
	cin >> user->misc;
	cout << user->misc << endl;
	
}

void DisplayReport (MonthlyBudget* standard, MonthlyBudget* user) {
	// Report Header
	cout << left << fixed << setprecision(2) << endl;
	cout << "______________________________________________" << endl;
	cout << setw(12) << "| Subject" << setw(10) << "| Budget" << setw(10) << 
		"| Current" << setw(8) << "| Over/Under" << " |" << endl;
	cout << "|--------------------------------------------|" << endl;

	// Display Budget Information
	// housing
	cout << left << setw(12) << "| Housing" << '|' << right << setw(8) << standard->housing << " |" << setw(8) << user->housing << " |" << setw(11);
	((standard->housing == user->housing) ? (cout << "equal") : ((standard->housing > user->housing) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// utilities
	cout << left << setw(12) << "| Utilities" << '|' << right << setw(8) << standard->utilities << " |" << setw(8) << user->utilities << " |" << setw(11);
	((standard->utilities == user->utilities) ? (cout << "equal") : ((standard->utilities > user->utilities) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// household
	cout << left << setw(12) << "| Household" << '|' << right << setw(8) << standard->household << " |" << setw(8) << user->household << " |" << setw(11);
	((standard->household == user->household) ? (cout << "equal") : ((standard->household > user->household) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// transportation
	cout << left << setw(12) << "| Transport" << '|' << right << setw(8) << standard->transportation << " |" << setw(8) << user->transportation << " |" << setw(11);
	((standard->transportation == user->transportation) ? (cout << "equal") : ((standard->transportation > user->transportation) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// food
	cout << left << setw(12) << "| Food" << '|' << right << setw(8) << standard->food << " |" << setw(8) << user->food << " |" << setw(11);
	((standard->food == user->food) ? (cout << "equal") : ((standard->food > user->food) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// medical
	cout << left << setw(12) << "| Medical" << '|' << right << setw(8) << standard->medical << " |" << setw(8) << user->medical << " |" << setw(11);
	((standard->medical == user->medical) ? (cout << "equal") : ((standard->medical > user->medical) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// insurance
	cout << left << setw(12) << "| Insurance" << '|' << right << setw(8) << standard->insurance << " |" << setw(8) << user->insurance << " |" << setw(11);
	((standard->insurance == user->insurance) ? (cout << "equal") : ((standard->insurance > user->insurance) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// entertainment
	cout << left << setw(12) << "| Entertain" << '|' << right << setw(8) << standard->entertainment << " |" << setw(8) << user->entertainment << " |" << setw(11);
	((standard->entertainment == user->entertainment) ? (cout << "equal") : ((standard->entertainment > user->entertainment) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// clothing
	cout << left << setw(12) << "| Clothing" << '|' << right << setw(8) << standard->clothing << " |" << setw(8) << user->clothing << " |" << setw(11);
	((standard->clothing == user->clothing) ? (cout << "equal") : ((standard->clothing > user->clothing) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	// misc
	cout << left << setw(12) << "| Misc" << '|' << right << setw(8) << standard->misc << " |" << setw(8) << user->misc << " |" << setw(11);
	((standard->misc == user->misc) ? (cout << "equal") : ((standard->misc > user->misc) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;
	
	cout << "|--------------------------------------------|" << endl;

	// Total
	float totalStandard = 0.0;
	float totalUser = 0.0;

	totalStandard += standard->housing;       
	totalStandard += standard->utilities;
	totalStandard += standard->household;
	totalStandard += standard->transportation;
	totalStandard += standard->food;
	totalStandard += standard->medical;
	totalStandard += standard->insurance;
	totalStandard += standard->entertainment;
	totalStandard += standard->clothing;
	totalStandard += standard->misc;

	totalUser += user->housing;       
	totalUser += user->utilities;
	totalUser += user->household;
	totalUser += user->transportation;
	totalUser += user->food;
	totalUser += user->medical;
	totalUser += user->insurance;
	totalUser += user->entertainment;
	totalUser += user->clothing;
	totalUser += user->misc;

	// total
	cout << left << setw(12) << "| Total" << '|' << right << setw(8) << totalStandard<< " |" << setw(8) << totalUser << " |" << setw(11);
	((totalStandard == totalUser) ? (cout << "equal") : ((totalStandard > totalUser) ? (cout << "under") : (cout << "over")));
	cout << " |" << endl;

	cout << "______________________________________________" << endl;
	
}
