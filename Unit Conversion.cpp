#include <iostream>

using namespace std;

int main () {
	
	float result = 0;
	bool terminate_process = false;
	float user_input;
	int userconvert_to;
	
	cout << "Unit Conversion Calculator" << endl << endl;
	
	while (true) {
		if (terminate_process == 0) {
			
			cout << "Use the following # to Select Desired Conversion" << endl;
			cout << "(1) cm - inches" << endl << "(2) inches - cm" << endl << "(3) feet - meter" << endl << "(4) meter - feet" << endl << "(0) Exit" << endl;
			
			cout << "Choose desired conversion: "; 
			cin >> userconvert_to;
			
			switch (userconvert_to) {
				case 0:
					cout << "Exiting Calculator..." << endl;
					terminate_process = true;
					break;
				
				case 1:
					cout << "Enter the Measurement: "; 
					cin >> user_input;
					result = user_input / 2.54;
					cout << "Converted cm: " << result << " inches\n\n";
					break;
					
				case 2:
					cout << "Enter the Measurement: "; 
					cin >> user_input;
					result = user_input * 2.54;
					cout << "Converted in: " << result << " cm\n\n";
					break;
					
				case 3:
					cout << "Enter the Measurement: "; 
					cin >> user_input;
					result = user_input / 0.3048;
					cout << "Converted feet: " << result << " m\n\n";
					break;
					
				case 4:
					cout << "Enter the Measurement: "; 
					cin >> user_input;
					result = user_input * 3.2808;
					cout << "Converted meter: " << result <<  " ft\n\n";
					break;
					
				default:
					cout << "Unrecognized Operator!\n";
					break; 	
			} 
			
			} else if (terminate_process == 1) {
				break;
			
		}	
		
	}
	
	
	return 0;
}
