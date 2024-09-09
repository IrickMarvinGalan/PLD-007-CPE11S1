#include <iostream>

using namespace std;

int main () {
	float average, result, num_1, num_2, num_3;
	char opt;

	average = (num_1 + num_2 + num_3)/3;
	
	cout << "Enter First Number: ";
	cin >> num_1;
	cout << "Enter Second Number: ";
	cin >> num_2;
	cout << "Enter Third Number: ";
	cin >> num_3;
	cout << "Choose an Operator (+, -, *, /): ";
	cin >> opt;
	
	cout << "Average: " << average << endl;
	
	
	switch (opt) {
		
		case '+':
			result = num_1 + num_2 + num_3;
			cout << "The sum of three numbers: " << result << endl;
			break;
		
		case '-':
			result = num_1 - num_2 - num_3;
			cout << "The difference of three numbers: " << result << endl;
			break;
		
		case '*':
			result = num_1 * num_2 * num_3;
			cout << "The product of the three numbers: " << result << endl;
			break;
		
		case '/':
			if (num_2 != 0 && num_3 != 0) {
				result = (num_1 / num_2)/num_3;
				cout << "The quotient of three numbers: " << result << endl;
			} else {
				cout << "Undefined or Math ERROR!" << endl;
			}
	 		break;
		
		default:
			cout << "Unrecognized Operator" << endl;
			break;
				
	}
	
	return 0;
}
