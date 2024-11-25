#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;

int main () {
	//Exercise 15
	time_t now = time(0); //get current system time
	cout << "Current time: " << ctime(&now) << '\n';
	
	return 0;
}
