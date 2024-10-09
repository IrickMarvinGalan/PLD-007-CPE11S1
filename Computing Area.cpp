#include <iostream>

using namespace std;

int main () {
	
	float result = 0;
	
	bool terminate_process = false;
	int choose;
	cout << "Area Calculator" << endl << endl;
	
	while (true) {
		if (terminate_process == 0) {
			cout << "Use the following # to Select Desired Conversion" << endl;
			cout << "(1) Area of Circle" << endl << "(2) Area of Rectangle" << endl << "(3) Area of Triangle" << endl << "(4) Area of Square" << endl << "(0) Exit" << endl;
			
			cout << "Choose: "; 
			cin >> choose;
			
			switch (choose) {
				case 0:
					cout << "Exiting Calculator..." << endl;
					terminate_process = true;
					break;
				
				case 1: {
				
					float radius = 0;
					cout << "Enter Radius: "; 
					cin >> radius;
					result = 2 * 3.14 * radius;
					cout << "Area of Circle: " << result << endl;
					break;
					
				}
					
				case 2: {

					float length, width;
					cout << "Enter length: ";
					cin >> length;
					cout << "Enter width: ";
					cin >> width;
					result = length * width;
					cout << "Area of Rectangle: " << result << endl << endl;
					break;
				}
					
				case 3: {

					float base, height;
					cout << "Enter height: ";
					cin >> height; 
					cout << "Enter base: ";
					cin >> base;
					result = (base * height) / 2;
					cout << "Area of Triangle: " << result << endl << endl;
					break;
				}	
					
				case 4: {
					float side;
					cout << "Enter side: "; 
					cin >> side;
					result = side * side;
					cout << "Area of Square:  " << result << endl << endl;
					break;
				}
					
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
