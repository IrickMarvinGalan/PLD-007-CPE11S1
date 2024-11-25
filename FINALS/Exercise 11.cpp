#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;

int main () {
	//Exercise 11
	int* ptr = (int*) malloc(sizeof(int));
	if (ptr != NULL) {
		*ptr = 10;
		cout << "Value: " << *ptr << '\n';
		free(ptr);
		
		return 0;
	}
}
