#include <iostream>
#include <string>

using namespace std;

int main () {
	
	float phys, chem, bio, math, comp;
	int average = 0;

	cout << "Enter Physics Grade: ";
	cin >> phys;
	cout << "Enter Chemistry Grade: ";
	cin >> chem;
	cout << "Enter Biology Grade: ";
	cin >> bio;
	cout << "Enter Mathematics Grade: ";
	cin >> math;
	cout << "Enter Computer Grade: ";
	cin >> comp;
	
	cout << "\n\n";
	
	average = (phys + chem + bio + math + comp) / 5;
	
	cout << "Physics Grade: " << phys << "\n";
	cout << "Chemistry Grade: " << chem << "\n";
	cout << "Biology Grade: " << bio << "\n";
	cout << "Mathematics Grade: " << math << "\n";
	cout << "Computer Grade: " << comp << "\n";
	cout << "--------------------\n";
	cout << "Grade Average: " << average << "\n";
	
	switch (average) {
		case 90 ... 100:
		cout << "Grade Level: A\n";
		break;
		
		case 80 ... 89:
		cout << "Grade Level: B\n";
		break;
		
		case 70 ... 79:
		cout << "Grade Level: C\n";
		break;
		
		case 60 ... 69:
		cout << "Grade Level: D\n";
		break;
		
		case 40 ... 59:
		cout << "Grade Level: E\n";
		break;
		
		case 0 ... 39:
		cout << "Grade Level: F\n";
		break;
		
		default:
		cout << "Invalid Grade Average!\n";
	}
	
	return 0;
}

/*int main () {
	
	float phys, chem, bio, math, comp;
	float average = 0;

	cout << "Enter Physics Grade: ";
	cin >> phys;
	cout << "Enter Chemistry Grade: ";
	cin >> chem;
	cout << "Enter Biology Grade: ";
	cin >> bio;
	cout << "Enter Mathematics Grade: ";
	cin >> math;
	cout << "Enter Computer Grade: ";
	cin >> comp;
	
	cout << "\n\n";
	
	average = (phys + chem + bio + math + comp) / 5;
	
	cout << "Physics Grade: " << phys << "\n";
	cout << "Chemistry Grade: " << chem << "\n";
	cout << "Biology Grade: " << bio << "\n";
	cout << "Mathematics Grade: " << math << "\n";
	cout << "Computer Grade: " << comp << "\n";
	cout << "--------------------\n";
	cout << "Grade Average: " << average << "\n";
	
	if (average >= 90 && average <= 100) {	
		cout << "Grade Level: A\n";
	} else if (average >= 80 && average <= 89.99) {
		cout << "Grade Level: B\n";
	} else if (average >= 70 && average <= 79.99) {
		cout << "Grade Level: C\n";
	} else if (average >= 60 && average <= 69.99) {
		cout << "Grade Level: D\n";
	} else if (average >= 40 && average <= 59.99) {
		cout << "Grade Level: E\n";
	} else if (average >= 0 && average <= 39.99) {
		cout << "Grade Level: F\n";
	} else {
		cout << "Invalid Grade Average! Should be within 0-100 Range\n";
	}
	
	return 0;
}*/
