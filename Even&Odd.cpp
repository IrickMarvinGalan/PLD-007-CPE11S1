#include <iostream>

using namespace std;

/*int main () 
{
	int user_input = 0;
	
	cout << "Enter a Number: ";
	cin >> user_input;
	int EvenOrOdd = user_input % 2;
	
	if (EvenOrOdd == 0) {
		cout << "The number is even";
	} else if (EvenOrOdd != 0) {
		cout << "The number is odd";
	}
	
	return 0;
}*/

/*int main () {
	float discountSenior = 0.90, discountStudent = 0.92;
	int age;
	float discountedfare;
	int fare = 9;
	char repeat;
	
	cout << "Jeepney Payment System\n";
	
	cout << "Enter your Age: ";
	cin >> age;
	
	if (age >= 0 && age <= 21) {
		discountedfare = fare * discountStudent;
		cout << "Student Discounted Fare: " << discountedfare;
	} else if (age >= 60) {
		discountedfare = fare * discountSenior;
		cout << "Senior Discounted Fare: " << discountedfare;
	} else {
		cout << "Fare not applicable for discount\n" << "Fare: " << fare << endl;
	}
}*/

int main () {
	float grade_input = 0;
	float total_grade = 0;
	int counter = 1;
	
	while (counter <= 8) {
		cout << "Enter Grade " << counter << ": ";
		cin >> grade_input;
		total_grade += grade_input;
		counter++;
	}
	
	float average = total_grade / (counter - 1);
	
	cout << "Average: " << average;
	
	return 0;
}
