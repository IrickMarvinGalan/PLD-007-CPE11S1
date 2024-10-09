#include <iostream>

using namespace std;

int main () {
	
	int account_number;
	float balance, total_charges, credit, credit_limit;
	
	while (true) {
		cout << "Enter your account number (-1 to end): ";
		cin >> account_number;
		if (account_number == -1) {
			cout << "Thank you come again!";
			break;
		} else {
			cout << "Enter beginning balance: ";
			cin >> balance;
			cout << "Enter Total Charges: ";
			cin >> total_charges;
			cout << "Enter Total Credits: ";
			cin >> credit;
			
			balance = balance + total_charges - credit;
			
			cout << "Enter credit limit: ";
			cin >> credit_limit;
			cout << endl;
			
			if (balance > credit_limit) {
				cout << "Account: " << account_number << endl;
				cout << "Credit Limit: " << credit_limit << endl;
				cout << "Balance: " << balance << endl << endl;
				cout << "-------------------" << endl;
				cout << "Credit Limit Exceeded!\n" << endl;
				cout << "-------------------" << endl;
			}
		}	
	}
	
	
	return 0;	
}
