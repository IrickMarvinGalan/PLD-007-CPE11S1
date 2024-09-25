#include <iostream>

using namespace std;

int main () {
	
	int iterations;
	double x, y;
	double result = 0;
	char opt;
	bool invalid = false;
	
	//Get the number of desired loop iterations from the user
	cout << "# of integers to perform: ";
	cin >> iterations;
	cout << "Enter the first integer: ";
	cin >> x;
	
	//Loop to get the second integer and perform operations continuously
	for (int i = 1; i < iterations; i++) {
		
		cout << "Enter next integer: ";
		cin >> y;
		cout << "Choose an Operator (+, -, *, /): ";
		cin >> opt;
	
		//loop now enters switch
		switch (opt) {
			case '+':
				result = x + y;
				x = result;
				break;
			
			case '-':
				result = x - y;
				x = result;
				break;
				
			case '*':
				result = x * y;
				x = result;
				break;
				
			case '/':
				if (y != 0) {
					result = x / y;
					x = result;
					break;
					
				//If divisor is 0, assigns true value to the bool invalid
				} else {
					cout << "Division by 0 is undefined! Process Exiting..." << endl;
					invalid = true;
					break;
				}
			
			default:
				cout << "Unrecognized input or Invalid Operator!" << endl;
				break;
		}
		
	//terminates the loop if division by 0 is found in switch
	if (invalid == 1) {
		break;
	}
		//Loop the print to help user keep track of current number
		cout << "Result: " << result << endl;
		
	}

	return 0;
}
