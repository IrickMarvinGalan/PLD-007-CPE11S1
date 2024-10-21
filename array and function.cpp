#include <iostream>
#include <string>

using namespace std;


int linearSearch(int arr[], int size, int target) 
{
	for (int i = 0; i < size; i++) 
	{	
		if (arr[i] == target) 
		{
			return i;
		}
	}
	
	return -1;	
}

int main () 
{
	
	int arr[] = {5, 3, 8, 4, 2};
	int size = sizeof(arr) / sizeof(arr[0]);
	int target;
	
	cout << "Enter a Number to Search: ";
	cin >> target;
	
	int result = linearSearch(arr, size, target);
	
	if (result != -1) 
	{
		cout << "Index that the Value is Found: " << result;
	} else 
	{
		cout << "Value not Found!"; 
	}

	return 0;
}

