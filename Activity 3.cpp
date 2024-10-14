#include <iostream>

using namespace std;

int main () {
	
	for (int i = 1; i <= 7; i++) {
		cout << i;
		
		if (i != 7) {
			cout << ", ";
		}
	}
	
	return 0;
}
