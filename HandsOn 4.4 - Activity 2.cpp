#include <iostream>
#include <string>

using namespace std;

int main () {
    
    char character = ' ';
    char confirmation;
    
    while(true) {
    cout << "Enter a Character: ";
    cin >> character;
    
    //Checker Library
    if (islower(character)) {
        cout << character << " is lowercase\n";
    }
    
    if (isupper(character)) {
        cout << character << " is uppercase\n";
    }
    
    if (isblank(character)) {
        cout << character << " is a whitespace\n";
    }
    
    if(isdigit(character)) {
        cout << character << " is a digit\n";
    }
    
    if(isalpha(character)) {
        cout << character << " is a letter\n";
    }
    
    if(isalnum(character)) {
        cout << character << " is a digit or letter\n";
    }
    
    if(isxdigit(character)) {
        cout << character << " is a hexadecimal number\n";
    }
    
    if(isspace(character)) {
        cout << character << " is just a space\n";
    }
    
    if(isgraph(character)) {
        cout << character << " is a printing character other than space\n";
    }
    
    if(iscntrl(character)) {
        cout << character << " is a control character\n";
    }
    
    if(isprint(character)) {
        cout << character << " is a printing character including a space or not\n";
    }
    
    if(ispunct(character)) {
        cout << character << " is a punctuation character\n";
    }
    
    char lowercase_variable = tolower(character);
    char uppercase_variable = toupper(character);
    
    cout << character << " converted to an uppercase is " << uppercase_variable << "\n";
    cout << character << " converted to a lowercase is " << lowercase_variable << "\n";
    
        cout << "\nEnter New Character? (Y/N): ";
        cin >> confirmation;
        
        if (toupper(confirmation) == 'Y'); 
        if (toupper(confirmation) == 'N') break;
    }
}
