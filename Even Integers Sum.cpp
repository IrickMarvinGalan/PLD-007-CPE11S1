#include <iostream>

using namespace std;

int main () {
	
	int limit = 100;
	int sum = 0;
	
	for (int i = 2; i <= limit; i++) {
		int checkif_OddEven = i % 2;\
		
		if (checkif_OddEven == 0) {
			
			sum += i;	
			
		}
		
	}
	
	cout << "The sum of even integers to 100: " << sum;
	return 0;
}

