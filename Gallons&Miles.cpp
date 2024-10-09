#include <iostream>

using namespace std;

int main () {
	bool terminate_all = false;
	double gallons, miles, gallon, miles_pergall;
	double total_mileperGall = 0, average_MiperGall = 0;
	int iteration = 0;
	
	while (true) {
		if (!terminate_all) {
			cout << "Enter the gallons used (-1 to end process): ";
			cin >> gallons;
			
			if (gallons >= 0) {
				while (true) {
				cout << "Enter the miles driven: ";
				cin >> miles;
			
				miles_pergall = miles / gallons;
				total_mileperGall = total_mileperGall + miles_pergall;
				iteration++;
				cout << "The miles / gallon for this tank was " << miles_pergall << endl << endl;
				break;	
				}
				
			} else {
				terminate_all = true;
				average_MiperGall = total_mileperGall / iteration;
				cout << "The overall average miles/gallon was " << average_MiperGall << endl;
				break;
			}
		} else {
			terminate_all = true;
		}
		
	}

	
	return 0;
}
