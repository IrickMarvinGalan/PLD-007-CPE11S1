#include <iostream>

using namespace std;

void CelsiusSpacer (string celsius) {
    int numofSpaces_befCelsius =  8 - celsius.length();
    
    for (int i = 1; i <= numofSpaces_befCelsius; i++) {
        cout << " ";
    }
    
    cout << "|";
    
}

double toCelsius (double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double toFahrenheit (double celsius) {
    return (celsius * 9/5 ) + 32;
}

void ConversionTable () {
    double fahrenheit = 0;
    
    cout << "Temperature Table Conversion\n"
    << "----------------------\n"
    << "Celsius | Fahrenheit |\n"
    << "----------------------\n";
    
    for (int temp = 0; temp <= 100; temp++) {
        cout << temp;
        CelsiusSpacer(to_string(temp));
        fahrenheit = toFahrenheit(temp);
        cout << ' ' << fahrenheit << '\n';
        
        cout << "----------------------\n\n";
    }
}

int main () {
	char conversion;
	double temp;
	
	while (true) {
	
	cout << "(1) Celsius -> Fahrenheit\n";
	cout << "(2) Fahrenheit -> Celsius\n";
	cout << "(3) Conversion Table\n\n";
	
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
			double fahrenheit = toFahrenheit(celsius);
			cout << "In Fahrenheit: " << fahrenheit << "\n\n";
			break;
		}
		
		case '2': {
			double fahrenheit;
			cout << "Enter Temperature in Fahrenheit: ";
			cin >> fahrenheit;
			double celsius = toCelsius(fahrenheit);
			cout << "In Celsius: " << celsius << "\n\n";
			break;
		}
		
		case '3':
		    ConversionTable();
		    break;
		    
		default:
		    cout << "Invalid Input!\n\n";
		    break;
	}
	
	}
	
}
