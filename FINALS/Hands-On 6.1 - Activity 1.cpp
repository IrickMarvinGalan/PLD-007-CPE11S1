#include <iostream>

using namespace std;
void addition (int num1, int num2) {
	cout << "Sum: " << (num1 + num2) << "\n\n";
	return;
}

void subtraction (int num1, int num2) {
	cout << "Difference: " << (num1 - num2) << "\n\n";
	return;
}

void multiplication (int num1, int num2) {
	cout << "Product: " << (num1 * num2) << "\n\n";
	return;
}

void division (int num1, int num2) {
	cout << "Quotient: " << (num1 + num2) << "\n\n";
	return;
}

int main () {
	double num1 = 0, num2 = 0;
	char opt;
	
	cout << "Enter First Number: ";
	cin >> num1;
	cout << "Enter Second Number: ";
	cin >> num2;
	
	while (true) {
		cout << "Choose an Operation(+, -, *, /): ";
		cin >> opt;
		
		if (opt == '0') {
			cout << "Thank you for Using Me ;)\n";
			break;
		}
		
		switch (opt) {
			case '+':
				addition(num1, num2);
				break;
			case '-':
				subtraction(num1, num2);
				break;
			case '*':
				multiplication(num1, num2);
				break;
			case '/':
				division(num1, num2);
				break;
			default:
				cout << "Invalid Arithmetic Operator! Re-enter";
		}
	}
	
	
}
