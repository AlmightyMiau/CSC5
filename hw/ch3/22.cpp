//Miau Miau               CSC5            Chapter 3, P. 148, #22
//
/***************************************************************
 * PLAY WORD GAME
 * _____________________________________________________________
 * This program plays a word game with the user. The program 
 * asks for name, age, city, college, profession, animal, and 
 * pet name. It then outputs an ad lib with the inputs.
 * _____________________________________________________________
 *
 * INPUT
 *  name        :  user's name
 *  age         :  user's age
 *  city        :  name of city
 *  college     :  name of college
 *  profession  :  a profession
 *  petType     :  type of animal
 *  petName     :  pet's name
 *
 **************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main ()
{ 
	// Inputs
	string name;                                 // User's name
	int age;                                      // User's age
	string city;                                // Name of city
	string college;                          // Name of college
	string profession;                          // A profession
	string petType;                           // Type of animal
	string petName;                               // Pet's name
	
	// Retrieve input data
	cout << "Name: ";
	getline(cin, name);
	cout << "Age: ";
	cin >> age;
	cin.ignore();
	cout << "The name of a city: ";
	getline(cin, city);
	cout << "The name of a college: ";
	getline(cin, college);
	cout << "A profession: ";
	getline(cin, profession);
	cout << "A type of animal: ";
	getline(cin, petType);
	cout << "A pet's name: ";
	getline(cin, petName);
	
	// Display completed ad lib
	cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a(n) " << petType << " named " << petName << ". They both lived happily ever after!\n";
	
	return 0;
}
