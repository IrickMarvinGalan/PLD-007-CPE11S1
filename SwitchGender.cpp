#include <iostream>
#include <string>

using namespace std;

int main () 
{
	char gender;
	
	cout << "What's your gender? (F/M): ";
	cin >> gender;
	
	switch (gender) {
		case 'f':
		case 'F':
			cout << "You are a woman";
			break;
			
		case 'm':
		case 'M':
			cout << "You are a man";
			break;
			
		default:
			cout << "What are you?";
			break;
	}
	return 0;
}
