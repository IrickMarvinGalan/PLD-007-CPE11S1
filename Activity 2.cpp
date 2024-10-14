#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	float amount = 0;
	float principal = 1000.00;
	float rate = 1.05;
	
	for (int year = 1; year <= 10; year++) {
		
		amount = principal * pow(rate, year);
		cout << "Amount in Year " << year << ":\t " << amount << "\n";
		
	}
	return 0;
}
