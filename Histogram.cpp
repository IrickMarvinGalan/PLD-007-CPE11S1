#include <iostream>

using namespace std;

int main () 
{
	int array_histogram[10] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	
	cout << "Element\t" << "Value\t" << "Histogram\t\n";
	
	
	for (int i = 0; i < sizeof(array_histogram)/sizeof(array_histogram[0]); i++) 
	{
		
		cout << i << "\t" << array_histogram[i] << "\t";
		
		int histogram = array_histogram[i];
		
		for (int i = 1; i <= histogram; i++) 
		{
			cout << "*";
		}
		
		cout << "\n";
		
	}
	
	return 0;
}
