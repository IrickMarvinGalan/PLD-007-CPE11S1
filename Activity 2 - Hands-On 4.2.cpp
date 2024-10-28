#include <iostream>

using namespace std;

int main () 
{
	int num_ofResponse;
	int responses[40] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
	
	/*cout << "# of student responses: ";
	cin >> num_ofResponse;
	
	int responses[num_ofResponse];
	
	for (int i = 0; i < num_ofResponse; i++) 
	{
		int data;
		cout << "Enter Response " << i+1 << ": ";
		cin >> data;
		responses[i] = data;
	}
	cout << "\n\n";*/
	
	cout << "Student\t" << "Response\n";
	
	for (int i = 0; i < 40; i++) {
		cout << i+1 << "\t" << responses[i] << "\n";
	}
	
}

//Try to return a whole array

/*int main() {
	
	int responses[40] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
	int unique_Values[10];
	int frequency_Values[10];
	
	for (int number = 1; number <= 10; number++) 
	{
		int counter = 0;
		int unique_valuecounter = 0;
		int final_frequency = counter;
		
		for (int j = 0; j < 40; j++) 
		{
			if (number == responses[j]) 
			{
				counter++;
			} else 
			{
				unique_Values[unique_valuecounter] = number;
				unique_valuecounter++;
			}
		}
		frequency_Values[unique_valuecounter] = final_frequency;	
	}
	
	cout << "Response\t" << "Number of Students\t\n";
	
	for (int i = 0; i < 10; i++) {
		cout << unique_Values[i] << "\t" << frequency_Values[i] << "\n";
	}
	
}*/
