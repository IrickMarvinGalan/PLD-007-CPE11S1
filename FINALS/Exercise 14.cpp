#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;

int main () {
	//Exercise 14
	srand(time(0)); //Seed the random number generator
	int randomValue = rand(); //Generate a  random number
	cout << "Random value: " << randomValue << '\n';
	
	return 0;
}
