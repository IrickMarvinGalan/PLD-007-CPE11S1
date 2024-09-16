#include <iostream>

using namespace std;

int main () {
	int i = 9;
	cout << "List of Integers < 10 but !< 3" << endl;
	
	do {
		cout << "Integer: " << i << endl;
		i--;
	} 
	while (i >= 3 && i < 10);
	return 0;
}
