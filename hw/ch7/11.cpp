#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main ()
{
	/*****************************************************************
	* AVERAGE STUDENT GRADES	   	                                 *
	*----------------------------------------------------------------*
	* This program takes as input [5] students' names, and their [4] *
	* test scores each. It averages the scores of each student and   *
	* decides a letter grade based on the scores. It then displays   *
	* the name, letter grade, and average score for each student.    *
	*----------------------------------------------------------------*
	* CONSTANTS
	*  STUDENTS    : Number of students
	*  TESTS       : Number of tests
	* Inputs
	*  name[]      : Array of student names
	*  score[][]   : 2D array of student test scores
	* Outputs
	*  average[]   : Array of student average scores
	*  grade       : Array of student letter grade 
	*****************************************************************/
	
	// constants
	const int STUDENTS = 5;         // Number of students
	const int TESTS = 4;            // Number of test scores
	
	// Inputs
	string name[STUDENTS];          // Name of each student
	double score[STUDENTS][TESTS];  // Scores for each student, test
	
	// Outputs
	double average[STUDENTS];       // Average score for each student
	char grade[STUDENTS];           // Letter grade for each student
	
	// Retrieve Data
	// For each student
	for (int i = 0; i < STUDENTS; i++) {
	
		// Retrieve student name
		cout << "Student " << i + 1 << ": ";
		cin >> name[i];
		cout << name[i] << endl;
		
		// For each test
		for (int j = 0; j < TESTS; j++) {
		
			// Retrieve the score
			cout << "Score " << j + 1 << ": ";
			cin >> score[i][j];
			cout << score[i][j] << endl;
			
			// Verify input
			while (score[i][j] < 0 || score[i][j] > 100) {
				// Invalid input notification
				cout << "Invalid score, try again" << endl;
				// Retrieve the score
				cout << "Score " << j << ": ";
				cin >> score[i][j];
				cout << score[i][j] << endl;
			}
		}
	}
	
	// Display header
	cout << left << setw(10) << "Student" << setw(6) << "Grade" <<
	        setw(8) << "Average" << endl;
	cout << fixed << setprecision(2) << right;
	
	// Process and display scores
	for (int i = 0; i < STUDENTS; i++) {
	
		// Total test scores
		for (int j = 0; j < TESTS; j++) {
			
			// Add score to accumulator
			average[i] += score[i][j];
		}
		
		// Average scores
		average[i] /= TESTS;
		
		// Assign letter grade
		if (average[i] >= 90) {
			grade[i] = 'A';
		} else if (average[i] >= 80) {
			grade[i] = 'B';
		} else if (average[i] >= 70) {
			grade[i] = 'C';
		} else if (average[i] >= 60) {
			grade[i] = 'D';
		} else {
			grade[i] = 'F';
		}
		
		// Display student's grade and score
		cout << setw(10) << (name + ':') << setw(6) << grade[i] << 
		        setw(8) << average[i] << endl;
	}
	
	return 0;
}
