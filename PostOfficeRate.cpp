#include <iostream>

using namespace std;

int main () {

	const int rate_after300 = 2;
	float excessWeight = 0;
	int multiplier = 0, finalRate;
	float weight;
	int Exceed = 1000;
	
	cout << "Welcome to Post Office!\n" << endl;
	cout << "Enter the Weight of the Parcel you wish to send: ";
	cin >> weight;
	
	if (weight > 0 && weight <= Exceed) {
		if (weight > 0 && weight <= 300) {
			cout << "The cost of shipping for the first 300g: Php 5.00";
		} else if (weight > 300 && weight <= 1000) {
			excessWeight = weight - 300;
			multiplier = excessWeight / 100;
			finalRate = (multiplier * rate_after300) + 5;
			cout << "Additional Rate of Charge: " << finalRate;
		} else {
			cout << "No such thing as negative weight!" << endl;
		}	
	} else {
		cout << "Unable to process your parcel due to exceeding weight requirements!";
	}
	return 0;
}
