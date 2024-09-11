#include <iostream>
#include <string>

using namespace std;

int main () {
	double grade;
	int year, semester;
	string program;
	
	
	//input grade
	cout << "Enter your Program: ";
	cin >> program;
	cout << "Enter Year: ";
	cin >> year;
	cout << "Enter the Current Semester: ";
	cin >> semester;
	cout << "Enter your Semestral Grade: ";
	cin >> grade;
	
	//conditional parameters and their output
	if (grade <= 100 && grade >= 94) {
		cout << "Equivalent Grade: 1:00" << endl << "Excellent";	
	} else if (grade <= 93.99 && grade >= 88.50) {
		cout << "Equivalent Grade: 1.20" << endl << "Superior";
	} else if (grade <= 88.49 && grade >= 83.00) {
		cout << "Equivalent Grade: 1.50" << endl << "Meritorious";
	} else if (grade <= 82.99 && grade >= 77.50) {
		cout << "Equivalent Grade: 1.75" << endl << "Very Good";
	} else if (grade <= 77.49 && grade >= 72.00) {
		cout << "Equivalent Grade: 2.00" << endl << "Good";
	} else if (grade <= 71.99 && grade >= 65.50) {
		cout << "Equivalent Grade: 2.25" << endl << "Very Satisfactory";
	} else if (grade <= 65.49 && grade >= 61.00) {
		cout << "Equivalent Grade: 2.50" << endl << "Satisfactory";
	} else if (grade <= 60.99 && grade >= 55.50) {
		cout << "Equivalent Grade: 2.75" << endl << "Fair";
	} else if (grade <= 55.49 && grade >= 50.00) {
		cout << "Equivalent Grade: 3.00" << endl << "Passing";
	} else if (grade <= 49.99 && grade >= 0) {
		cout << "Equivalent Grade: 5.00" << endl << "Failed";
	} else if (grade > 100 || grade < 0) {
		cout << "Invalid Grade Input! (Please enter a grade between 0-100)" << endl;
	}
	
	return 0;	
}
