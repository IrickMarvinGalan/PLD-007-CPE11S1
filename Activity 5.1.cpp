#include <iostream>
#include <string>
using namespace std;

/* void reverseBits (unsigned int number, string &reversed_Bit, string &original_Bit) {
    int quotient = 1;
	int remainder;
	
	while (quotient != 0) {
	    quotient = number / 2;
	    remainder = number % 2;
	    reversed_Bit += to_string(remainder);
	    number = quotient;
	}
	
	for (int i = reversed_Bit.length()-1; i >= 0; i--) {
	    original_Bit += reversed_Bit[i];
	}
} 

int main () 
{

	string reversed_Bit;
    string original_Bit;
	
	unsigned int number;
	
	cout << "Enter an Integer: ";
	cin >> number;
	
	reverseBits(number, reversed_Bit, original_Bit);
	
	cout << "Original Bits: " << original_Bit << '\n'
	     << "Reversed Bits: " << reversed_Bit << '\n';
	
} */

void multiple (int number, int number_multiple, bool &is_aMultiple) 
{
	if ((number % number_multiple) == 0) {
		is_aMultiple = true;
	} else {
		is_aMultiple = false;
	}
}

int main () 
{
	
	int number;
	int number_multiple;
	bool is_aMultiple = false;
	
	while (true) 
	{
		char loop_Sentinel = 'Y';
		is_aMultiple = false;
		
		cout << "Enter a number: ";
		cin >> number;
		cout << "Check if multiple of: ";
		cin >> number_multiple;
		
		multiple(number, number_multiple, is_aMultiple);
		
		if (is_aMultiple) 
		{
			cout << number_multiple << " is a multiple of " << number << '\n';
		} else {
			cout << number_multiple << " is not a multiple of " << number << '\n';
		}
		
		cout << "\nEnter another number? (Y/N): ";
		cin >> loop_Sentinel;
		
		if(toupper(loop_Sentinel == 'N')) 
		{
			cout << "Thank you!\n";
			break;	
		} else if (toupper(loop_Sentinel) == 'Y') {
			cout << '\n' ;
		}
		
	}
}
