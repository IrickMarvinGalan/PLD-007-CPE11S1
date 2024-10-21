#include <iostream>
using namespace std;

int main() {
	
	int responses[40] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
	int Values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int frequency_Values[10] = {};
	
    int counter_frequencyvalue = 0;

	for (int number = 1; number <= 10; number++) 
    {
        int counter = 0;
        for (int comparenumber = 0; comparenumber < 40; comparenumber++) 
        {
            if (number == responses[comparenumber]) 
            {
                counter++;
            }
        }
        frequency_Values[counter_frequencyvalue] = counter;
        counter_frequencyvalue++;
    }

    cout << "Response\t" << "Number of Students\n";
	
    for (int i = 0; i < 10; i++)
    {
        cout << Values[i] << "\t\t\t" << frequency_Values[i] << "\n";
    }
    
}
