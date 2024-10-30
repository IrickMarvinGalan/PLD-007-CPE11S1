#include <iostream>
#include <string>

using namespace std;

int main () {
	char character_arr[12] = {'p', 'P', '5', '!', 'D', 'd', '8', '&', 'u', '7', '$', 'L'};
	char former_characterarr[12] = {'p', 'P', '5', '!', 'D', 'd', '8', '&', 'u', '7', '$', 'L'};
	
	cout << "\nAccording to islower:\n";
	for (int i = 0; i < 4; i++) {
		
		if (islower(character_arr[i])) {
			cout << character_arr[i] << " is a lowercase letter\n";
		} else {
			cout << character_arr[i] << " is not a lowercase letter\n";
		}
	
	}
	
	cout << "\nAccording to isupper: \n";
	for (int i = 4; i < 8; i++) {
		
		if (isupper(character_arr[i])) {
			cout << former_characterarr[i] << " is an uppercase letter\n";
		} else {
			cout << former_characterarr[i] << " is not an uppercase letter\n";
		}
	
	}
	
	cout << "\n";
	for (int i = 8; i < 12; i++) {
		if (i != 11) {
			character_arr[i] = toupper(former_characterarr[i]);
			cout << former_characterarr[i] << " converted to uppercase is " << character_arr[i] << "\n";
		} else {
			character_arr[i] = tolower(former_characterarr[i]);
			cout << former_characterarr[i] << " converted to lowercase is " << character_arr[i] << "\n";
		}
	
	}
	
	
}
