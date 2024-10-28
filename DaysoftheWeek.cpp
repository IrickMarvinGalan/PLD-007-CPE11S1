#include <iostream>

using namespace std;

int main () 
{
	int user_input;
	char loop_again;
	bool exit_program = false;
	string arr_days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int arr_numberofDays[7] = {0, 1, 2, 3, 4, 5, 6};
	
	while (true) 
	{
	
	if (exit_program)
	{
		break;
	}
	
	cout << "Enter the number of day: ";
	cin >> user_input;
	
	if (user_input >= 0 && user_input <= 6) 
	{
		for (int i = 0; i < 7; i++) 
		{
			if (user_input == arr_numberofDays[i]) 
			{
			cout << "It is " << arr_days[i] << "\n";
			}
		}
	}
	else 
	{
		cout << "Invalid Input. No corresponding Day!\n";	
	}
		
		cout << "Check other Days? (Y/N): ";
		cin >> loop_again;
		
		switch(loop_again) 
		{
			case 'Y':
				cout << "Going Back...\n\n";
				break;
			case 'N':
				cout << "Exiting...\n";
				exit_program = true;
				break;
				
			default:
				cout << "Unrecognized Input Returning to Beginning\n\n";
		}
		
	}
	return 0;
}
