#include <iostream>
#include <string>

using namespace std;

int main () 
{
	//Create a c++ program to determine if an alphabet is a vowel or consonant
	
	char letter;
	
	cout << "Choose a letter from the alphabet: ";
	cin >> letter;
	
	switch (letter) {
		
		case 'a':
		case 'A':
			cout << "Your letter is a vowel";
			break;
		
		case 'e':
		case 'E':
			cout << "Your letter is a vowel";
			break;
		
		case 'I':	
		case 'i':
			cout << "Your letter is a vowel";
			break;
		
		case 'O':	
		case 'o':
			cout << "Your letter is a vowel";
			break;
		
		case 'U':
		case 'u':
			cout << "Your letter is a vowel";
			break;
			
		default:
			cout << "Your letter is a consonant";
			break;
	}

	return 0;	
}
