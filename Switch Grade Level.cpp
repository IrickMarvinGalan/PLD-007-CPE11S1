#include <iostream>

using namespace std;

int main () {
	
	int grade_lvl;
	int grade_dtr;
	
	cout << "Enter your Grade Level: ";
	cin >> grade_lvl;
	
	if (grade_lvl >= 0 && grade_lvl <=6) {
		grade_dtr = 1;
	} else if (grade_lvl > 6 && grade_lvl <= 12){
		grade_dtr = 2;
	} else {
		grade_dtr = 3;
	}
	
	switch (grade_dtr) {
		case 1:
			cout << "You are an elementary schooler";
			break;
		case 2:
			cout << "You are a high schooler";
			break;
		case 3:
			cout << "You are a tertiary or higher schooler";
			break;
	}	
	
	return 0;
}
