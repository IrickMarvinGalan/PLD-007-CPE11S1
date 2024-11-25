#include <iostream>

using namespace std;

void toCelsius (double celsius) {
	cout << "in Celsius: " << static_cast<double>((celsius * 9/5) + 32) << "\n\n";
	return;
}

void toFahrenheit (double fahrenheit) {
	cout << "in Fahrenheit: " << static_cast<double>((fahrenheit - 32) * 5/9) << "\n\n";
	return;
}

int main () {
	char conversion;
	double temp;
	
	cout << "(1) Celsius -> Fahrenheit\n";
	cout << "(2) Fahrenheit -> Celsius\n\n";
	
	while (true) {
	
	cout << "Choose an Option => ";
	cin >> conversion;
	
	if (conversion == '~') {
		cout << "------Program Exited------";
		break;
	}
	
	switch (conversion) {
		case '1': {
			double celsius = 0;
			cout << "Enter Temperature in Celsius: ";
			cin >> celsius;
			toFahrenheit(celsius);
			break;
		}
		
		case '2': {
			double fahrenheit;
			cout << "Enter Temperature in Fahrenheit: ";
			cin >> fahrenheit;
			toCelsius(fahrenheit);
			break;
		}
			
	}
	
	}
	
}
