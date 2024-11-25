#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;

int main () {
	//Exercise 10
	string str = "Hello, World!";
	cout << "Length of string: " << str.length() << '\n';
	cout << "Substring: " << str.substr(7,5) << '\n';
	cout << "Letter o: " << str.find('o');
	
	return 0;
}
