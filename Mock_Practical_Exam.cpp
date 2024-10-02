#include <iostream>

using namespace std;

int main () {
	
	int number = 0;
	int iteration = 1, sum = 0;
	
	while (iteration <= 5) {
		cout << "Enter a number: ";
		cin >> number;
		
		if (iteration == 1 || iteration == 5) {
			sum = sum + number;
		}
	
		iteration++;
	};
	
	cout << "The sum of the 1st and last number is: " << sum;
	return 0;
}
