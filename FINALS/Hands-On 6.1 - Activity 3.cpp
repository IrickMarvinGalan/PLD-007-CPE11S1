#include <iostream>

using namespace std;

void toDollar (float peso) {
	cout << "In Dollars: $" << static_cast<float>(peso/58.95) << "\n\n";
	return;
}

void toPeso (float dollar) {
	cout << "In Pesos: Php " << static_cast<float>(dollar*58.95) << "\n\n";
	return;
}

int main () {
	char money_type;
	
	while (true) {
	
		cout << "FOREX Conversion\n"
		 	 << "(P) Peso => Dollar\n"
			 << "($) Dollar => Peso\n"
			 << "(0) Exit\n\n";
			 
		cout << "Choose Option Symbol (P, $ or 0): ";
		cin >> money_type;
			 
		if (money_type == '0') {
			cout << "-----Exiting Program-----\n";
			break;
		}
			 
		switch (money_type) {
			case 'P': {
				float peso;
				cout << "Enter your money in Peso: ";
				cin >> peso;
				toDollar(peso);
				break;
			}
			case '$': {
				float dollar;
				cout << "Enter your money in Dollar: ";
				cin >> dollar;
				toPeso(dollar);
				break;
			}
			
			default: 
				cout << "That's not dollar or peso?\n\n";
				break;
		}
	}
	
}
