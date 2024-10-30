#include <iostream>
#include <string>

using namespace std;

int main () {
	string number1, number2, number3, number4;

		cout << "Enter number 1 as string: ";
		cin >> number1;
		cout << "Enter number 2 as string: ";
		cin >> number2;
		cout << "Enter number 3 as string: ";
		cin >> number3;
		cout << "Enter number 4 as string: ";
		cin >> number4;

	int sumof_numbers = stoi(number1) + stoi(number2) + stoi(number3) + stoi(number4);
	cout << "The sum of the numbers is: " << sumof_numbers;
	
}
