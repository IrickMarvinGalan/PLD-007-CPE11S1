#include <iostream>

using namespace std;

int main () {

bool exit_function = false; 
string bank_name;

//Default PINs, Use it Per Run
int PIN_BDO = 91101, PIN_CryptoSolutions = 80645, PIN_CentralBank = 41689;

//Default Balances
int Bal_BDO = 100000;
int Bal_CryptoSolutions = 50000;
int Bal_CentralBank = 150000;

char proceed_confirmation;
bool exit_local = false;
bool exit_NewPIN = false;
bool exit_FundTransfer = false;

//For Tracking Activity Status
string recipient = "None";
int Total_Withdrawal = 0;
int withdrawal = 0;
int Transfer_Amount = 0;
bool Transfer_BDO = false;
bool Transfer_CryptoSolutions = false;
bool Transfer_CentralBank = false;

int accountnumber = 0;
    while (true)
    {
        Total_Withdrawal = Total_Withdrawal + withdrawal;
        if (exit_function) {
            break;
        } else {
            char entry_point;
            cout << "This is an integrated banking system. Do you wish to proceed (Y/N)? ";
            cin >> entry_point;
            cin.ignore();
            cout << endl << endl;

            char converted_entrypoint = toupper(entry_point);

            switch (converted_entrypoint) 
            {
            case 'Y': {
                while (true)
                {
                    
                    if (exit_function) {
                        break;
                    } else if (exit_FundTransfer) {
                        break;
                    } else {

                        string bank_partners[] = {"BDO", "CryptoSolutions", "Central Bank"};

                        cout << "Here are our supported Banks:" << endl;
                        cout << "BDO" << endl << "CryptoSolutions" << endl << "Central Bank" << endl << endl;
                        cout << "Choose the Bank linked to your account: ";
                        getline(cin, bank_name);
                        
                        while (true)
                        {
                            if (exit_function) {
                                break;
                            } else if (exit_FundTransfer) {
                                break;
                            } else {
                                cout << "Do you wish to proceed with " << bank_name << "? (Y/N): ";
                                cin >> proceed_confirmation;
                                cin.ignore();
                                cout << endl;

                                char verify_confirmation = toupper(proceed_confirmation);

                                switch (verify_confirmation)
                                {
                                    case 'Y': {
                                        if (bank_name == bank_partners[0]) {
                                            while (true)
                                            {
                                                if (exit_function) {
                                                    break;
                                                } else if (exit_FundTransfer) {
                                                    break;
                                                } else {
                                                    
                                                    while (true)
                                                    {
                                                        if (exit_function) {
                                                            break;
                                                        } else if (exit_FundTransfer) {
                                                            break;
                                                        } else {
                                                            string name;
                                                            int PIN_input;
                                                            exit_NewPIN = false;

                                                            cout << "Welcome to BDO!" << endl;
                                                            cout << "Account Name: ";
                                                            getline(cin, name);
                                                            cout << "PIN: ";
                                                            cin >> PIN_input;
                                                            cin.ignore();
                                                            cout << endl << endl;
                                                
                                                            if (PIN_input == PIN_BDO)
                                                            {
                                                                while (true)
                                                                {

                                                                    if (exit_function) {
                                                                        break;
                                                                    } else if (exit_NewPIN) {
                                                                        break;
                                                                    } else if (exit_FundTransfer) {
                                                                        break;
                                                                    } else {
                                                                        string banking_transaction;
                                                                        withdrawal = 0;

                                                                        cout << "Please Choose a Transaction Option" << endl;
                                                                        cout << "Withdraw" << endl << "Balance Inquiry" << endl << "PIN Change" << endl << "Fund Transfer" << endl << "Exit" << endl << endl;
                                                                        cout << "Banking Transaction: ";
                                                                        getline(cin, banking_transaction);

                                                                        if (banking_transaction == "Balance Inquiry") {
                                                                            cout << "Current Balance: " << Bal_BDO << endl;
                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                            cin >> proceed_confirmation;
                                                                            cin.ignore();
                                                                            cout << endl;
                                                                            
                                                                            verify_confirmation = toupper(proceed_confirmation);

                                                                            if (verify_confirmation == 'Y') {
                                                                                cout << "/Taking you back to transaction options.../" << endl;
                                                                            } else if (verify_confirmation == 'N') {
                                                                                exit_function = true;
                                                                                cout << "Thank you for your transaction!" << endl;
                                                                            } else {
                                                                                cout << "Unrecognized Input!" << endl;
                                                                            }

                                                                        } else if (banking_transaction == "Withdraw") {
                                                                            exit_local = false;

                                                                            while (true) {
                                                                                if (exit_local) {
                                                                                    break;
                                                                                } else if (exit_function) {
                                                                                    break;
                                                                                } else {
                                                                                    cout << "Enter Desired Amount: ";
                                                                                    cin >> withdrawal;
                                                                                    cin.ignore();
                                                                                    if (withdrawal <= Bal_BDO) {
                                                                                        Bal_BDO = Bal_BDO - withdrawal;
                                                                                        cout << "Thank you for transacting with us! Wait for your Receipt..." << endl;
                                                                                        cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                        cin >> proceed_confirmation;
                                                                                        cin.ignore();
                                                                                        cout << endl;
                                                                                        
                                                                                        verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {
                                                                                            cout << "/Taking you back to transaction options.../" << endl;
                                                                                            exit_local = true;
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            exit_function = true;
                                                                                            cout << "Thank you for your transaction!" << endl;
                                                                                        } else {
                                                                                            cout << "Unrecognized Input!" << endl;
                                                                                        }
                
                                                                                    } else {
                                                                                        cout << "Insufficient Balance" << endl;
                                                                                        cout << "Do you still wish to withdraw? (Y/N): ";
                                                                                        cin >> proceed_confirmation;
                                                                                        cin.ignore();
                                                                                        cout << endl;

                                                                                        verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {
                                                                                            
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            exit_local = true;
                                                                                        } else {
                                                                                            cout << "Unrecognized Input!" << endl;
                                                                                        }

                                                                                    }

                                                                                } 

                                                                            }
                                                                            
                                                                            
                                                                        } else if (banking_transaction == "PIN Change") {
                                                                            cout << "Enter Current PIN: ";
                                                                            cin >> PIN_input;
                                                                            cin.ignore();
                                                                        
                                                                            while (true)
                                                                            {
                                                                                if (exit_function) {
                                                                                    break;
                                                                                } else if (exit_local) { 
                                                                                    break;
                                                                                } else {
                                                                                    if (PIN_input == PIN_BDO) {  
                                                                                    cout << "Do you really wish to change your PIN? (Y/N): ";
                                                                                    cin >> proceed_confirmation;
                                                                                    verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {

                                                                                            int New_PIN;
                                                                                            int reconfirm_NewPIN;

                                                                                            cout << "Enter New PIN: ";
                                                                                            cin >> New_PIN;
                                                                                            cout << "Reconfirm New PIN: ";
                                                                                            cin >> reconfirm_NewPIN;
                                                                                            cin.ignore();

                                                                                            if (reconfirm_NewPIN == New_PIN)
                                                                                            {
                                                                                                PIN_BDO = New_PIN;
                                                                                                cout << "PIN Changed!!" << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();
                                                                                                cout << endl;
                                                                                                
                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                if (verify_confirmation == 'Y') {
                                                                                                    cout << "Relog-in First with your new PIN" << endl;
                                                                                                    exit_local = true;
                                                                                                    exit_NewPIN = true;
                                                                                                } else if (verify_confirmation == 'N') {
                                                                                                    exit_function = true;
                                                                                                    cout << "Thank you for your transaction!" << endl;
                                                                                                } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                }

                                                                                            } else {
                                                                                                cout << "Reconfirmation PIN does not match" << endl;
                                                                                            }
                                                                                            
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                            cin >> proceed_confirmation;
                                                                                            cin.ignore();
                                                                                            cout << endl;
                                                                                            
                                                                                            verify_confirmation = toupper(proceed_confirmation);

                                                                                            if (verify_confirmation == 'Y') {
                                                                                                exit_local = true;
                                                                                                cout << "/Taking you back to transaction options.../" << endl;
                                                                                            } else if (verify_confirmation == 'N') {
                                                                                                exit_function = true;
                                                                                                cout << "Thank you for your transaction!" << endl;
                                                                                            } else {
                                                                                                cout << "Unrecognized Input!" << endl;
                                                                                            }
                                                                                        } else {
                                                                                            cout << "Unrecognized Input" << endl;
                                                                                        }
                
                                                                                    } else {
                                                                                        cout << "Wrong PIN" << endl;
                                                                                    }
                                                                            }

                                                                            }
                                                                            
                                                                            
                                                                        } else if (banking_transaction == "Fund Transfer") {
                                                                                exit_FundTransfer = false;
                                                                                bool exit_BankingMenu = false;

                                                                                while (true) {
                                                                                    if (exit_FundTransfer) {
                                                                                        break;
                                                                                    } else if (exit_BankingMenu) {
                                                                                        break;
                                                                                    } else {
                                                                                        cout << "Choose a Recipient Bank Account" << endl;
                                                                                        cout << "Choose from the Following Supported Bank Partners" << endl;
                                                                                        cout << "CryptoSolutions" << endl << "Central Bank" << endl << endl;
                                                                                        cout << "To Cancel Fund Transfer type Exit on \"Recipient Bank:\"" << endl;
                                                                                        cout << "Recipient Bank: ";
                                                                                        getline(cin, bank_name);

                                                                                        if (bank_name == bank_partners[1])
                                                                                        {
                                                                                            Transfer_CryptoSolutions = true;

                                                                                            cout << "Enter Recipient's Account Name: ";
                                                                                            cin >> recipient;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Recipient's Account Number: ";
                                                                                            cin >> accountnumber;
                                                                                            cin.ignore();

                                                                                            cout << "Enter Desired Amount: ";
                                                                                            cin >> Transfer_Amount;
                                                                                            cin.ignore();

                                                                                            if (Transfer_Amount <= Bal_BDO)
                                                                                            {
                                                                                                Bal_CryptoSolutions = Bal_CryptoSolutions + Transfer_Amount;
                                                                                                Bal_BDO = Bal_BDO - Transfer_Amount;

                                                                                                cout << "Transfer Successful! Wait for your Receipt..." << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }

                                                                                            } else {
                                                                                                cout << endl << "Insufficient Balance!" << endl << endl;
                                                                                            }
                                                                                            
                                                                                        } else if (bank_name == bank_partners[2]) {

                                                                                            Transfer_CentralBank = true;

                                                                                            cout << "Enter Recipient's Account Name: ";
                                                                                            cin >> recipient;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Recipient's Account Number: ";
                                                                                            cin >> accountnumber;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Desired Amount: ";
                                                                                            cin >> Transfer_Amount;
                                                                                            cin.ignore();

                                                                                            if (Transfer_Amount <= Bal_BDO)
                                                                                            {
                                                                                                Bal_CentralBank = Bal_CentralBank + Transfer_Amount;
                                                                                                Bal_BDO = Bal_BDO - Transfer_Amount;

                                                                                                cout << "Transfer Successful! Wait for your Receipt..." << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }

                                                                                            } else {
                                                                                                cout << endl << "Insufficient Balance!" << endl << endl;
                                                                                            }

                                                                                        } else if (bank_name == "Exit") {
                                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                            cin >> proceed_confirmation;
                                                                                            cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }
                                                                                        } else {
                                                                                            cout << "Unrecognizable Input! or Bank not Supported by the System" << endl;
                                                                                        }

                                                                                    }

                                                                                }
                                                                                    
                                                                            } else if (banking_transaction == "Exit") {
                                                                                cout << "Thank you for paying us a Visit!" << endl << endl;
                                                                                exit_function = true;
                                                                            } else {
                                                                                cout << "Unrecognized Input" << endl << endl;
                                                                            }
                                                                        }
                                                                }

                                                            } else {
                                                                cout << "Wrong PIN" << endl;
                                                                break;
                                                            }
                                                            

                                                            } 
                                                               
                                                        }
                                                
                                                    } 
                                                }
                                                
                                                
                                        } else if (bank_name == bank_partners[1]) {
                                            while (true)
                                            {
                                                if (exit_function) {
                                                    break;
                                                } else if (exit_FundTransfer) {
                                                    break;
                                                } else {
                                                    
                                                    while (true)
                                                    {
                                                        if (exit_function) {
                                                            break;
                                                        } else if (exit_FundTransfer) {
                                                            break;
                                                        } else {
                                                            string name;
                                                            int PIN_input;
                                                            exit_NewPIN = false;

                                                            cout << "Welcome to CryptoSolutions!" << endl;
                                                            cout << "Account Name: ";
                                                            getline(cin, name);
                                                            cout << "PIN: ";
                                                            cin >> PIN_input;
                                                            cin.ignore();
                                                            cout << endl << endl;
                                                
                                                            if (PIN_input == PIN_CryptoSolutions)
                                                            {
                                                                while (true)
                                                                {

                                                                    if (exit_function) {
                                                                        break;
                                                                    } else if (exit_NewPIN) {
                                                                        break;
                                                                    } else if (exit_FundTransfer) {
                                                                        break;
                                                                    } else {
                                                                        string banking_transaction;
                                                                        withdrawal = 0;

                                                                        cout << "Please Choose a Transaction Option" << endl;
                                                                        cout << "Withdraw" << endl << "Balance Inquiry" << endl << "PIN Change" << endl << "Fund Transfer" << endl << "Exit" << endl << endl;
                                                                        cout << "Banking Transaction: ";
                                                                        getline(cin, banking_transaction);

                                                                        if (banking_transaction == "Balance Inquiry") {
                                                                            cout << "Current Balance: " << Bal_CryptoSolutions << endl;
                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                            cin >> proceed_confirmation;
                                                                            cin.ignore();
                                                                            cout << endl;
                                                                            
                                                                            verify_confirmation = toupper(proceed_confirmation);

                                                                            if (verify_confirmation == 'Y') {
                                                                                cout << "/Taking you back to transaction options.../" << endl;
                                                                            } else if (verify_confirmation == 'N') {
                                                                                exit_function = true;
                                                                                cout << "Thank you for your transaction!" << endl;
                                                                            } else {
                                                                                cout << "Unrecognized Input!" << endl;
                                                                            }

                                                                        } else if (banking_transaction == "Withdraw") {
                                                                            exit_local = false;

                                                                            while (true) {
                                                                                if (exit_local) {
                                                                                    break;
                                                                                } else if (exit_function) {
                                                                                    break;
                                                                                } else {
                                                                                    cout << "Enter Desired Amount: ";
                                                                                    cin >> withdrawal;
                                                                                    cin.ignore();
                                                                                    if (withdrawal <= Bal_CryptoSolutions) {
                                                                                        Bal_CryptoSolutions = Bal_CryptoSolutions - withdrawal;
                                                                                        cout << "Thank you for transacting with us! Wait for your Receipt..." << endl;
                                                                                        cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                        cin >> proceed_confirmation;
                                                                                        cin.ignore();
                                                                                        cout << endl;
                                                                                        
                                                                                        verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {
                                                                                            cout << "/Taking you back to transaction options.../" << endl;
                                                                                            exit_local = true;
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            exit_function = true;
                                                                                            cout << "Thank you for your transaction!" << endl;
                                                                                        } else {
                                                                                            cout << "Unrecognized Input!" << endl;
                                                                                        }
                
                                                                                    } else {
                                                                                        cout << "Insufficient Balance" << endl;
                                                                                        cout << "Do you still wish to withdraw? (Y/N): ";
                                                                                        cin >> proceed_confirmation;
                                                                                        cin.ignore();
                                                                                        cout << endl;

                                                                                        verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {
                                                                                            
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            exit_local = true;
                                                                                        } else {
                                                                                            cout << "Unrecognized Input!" << endl;
                                                                                        }

                                                                                    }

                                                                                } 

                                                                            }
                                                                            
                                                                            
                                                                        } else if (banking_transaction == "PIN Change") {
                                                                            cout << "Enter Current PIN: ";
                                                                            cin >> PIN_input;
                                                                            cin.ignore();
                                                                        
                                                                            while (true)
                                                                            {
                                                                                if (exit_function) {
                                                                                    break;
                                                                                } else if (exit_local) { 
                                                                                    break;
                                                                                } else {
                                                                                    if (PIN_input == PIN_CryptoSolutions) {  
                                                                                    cout << "Do you really wish to change your PIN? (Y/N): ";
                                                                                    cin >> proceed_confirmation;
                                                                                    verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {

                                                                                            int New_PIN;
                                                                                            int reconfirm_NewPIN;

                                                                                            cout << "Enter New PIN: ";
                                                                                            cin >> New_PIN;
                                                                                            cout << "Reconfirm New PIN: ";
                                                                                            cin >> reconfirm_NewPIN;
                                                                                            cin.ignore();

                                                                                            if (reconfirm_NewPIN == New_PIN)
                                                                                            {
                                                                                                PIN_CryptoSolutions = New_PIN;
                                                                                                cout << "PIN Changed!!" << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();
                                                                                                cout << endl;
                                                                                                
                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                if (verify_confirmation == 'Y') {
                                                                                                    cout << "Relog-in First with your new PIN" << endl;
                                                                                                    exit_local = true;
                                                                                                    exit_NewPIN = true;
                                                                                                } else if (verify_confirmation == 'N') {
                                                                                                    exit_function = true;
                                                                                                    cout << "Thank you for your transaction!" << endl;
                                                                                                } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                }

                                                                                            } else {
                                                                                                cout << "Reconfirmation PIN does not match" << endl;
                                                                                            }
                                                                                            
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                            cin >> proceed_confirmation;
                                                                                            cin.ignore();
                                                                                            cout << endl;
                                                                                            
                                                                                            verify_confirmation = toupper(proceed_confirmation);

                                                                                            if (verify_confirmation == 'Y') {
                                                                                                exit_local = true;
                                                                                                cout << "/Taking you back to transaction options.../" << endl;
                                                                                            } else if (verify_confirmation == 'N') {
                                                                                                exit_function = true;
                                                                                                cout << "Thank you for your transaction!" << endl;
                                                                                            } else {
                                                                                                cout << "Unrecognized Input!" << endl;
                                                                                            }
                                                                                        } else {
                                                                                            cout << "Unrecognized Input" << endl;
                                                                                        }
                
                                                                                    } else {
                                                                                        cout << "Wrong PIN" << endl;
                                                                                    }
                                                                            }

                                                                            }
                                                                            
                                                                            
                                                                        } else if (banking_transaction == "Fund Transfer") {
                                                                                exit_FundTransfer = false;
                                                                                bool exit_BankingMenu = false;

                                                                                while (true) {
                                                                                    if (exit_FundTransfer) {
                                                                                        break;
                                                                                    } else if (exit_BankingMenu) {
                                                                                        break;
                                                                                    } else {
                                                                                        cout << "Choose a Recipient Bank Account" << endl;
                                                                                        cout << "Choose from the Following Supported Bank Partners" << endl;
                                                                                        cout << "BDO" << endl << "Central Bank" << endl << endl;
                                                                                        cout << "To Cancel Fund Transfer type Exit on \"Recipient Bank:\"" << endl;
                                                                                        cout << "Recipient Bank: ";
                                                                                        getline(cin, bank_name);

                                                                                        if (bank_name == bank_partners[0])
                                                                                        {
                                                                                            Transfer_BDO = true;

                                                                                            cout << "Enter Recipient's Account Name: ";
                                                                                            cin >> recipient;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Recipient's Account Number: ";
                                                                                            cin >> accountnumber;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Desired Amount: ";
                                                                                            cin >> Transfer_Amount;
                                                                                            cin.ignore();

                                                                                            if (Transfer_Amount <= Bal_CryptoSolutions)
                                                                                            {
                                                                                                Bal_BDO = Bal_BDO + Transfer_Amount;
                                                                                                Bal_CryptoSolutions = Bal_CryptoSolutions - Transfer_Amount;

                                                                                                cout << "Transfer Successful! Wait for your Receipt..." << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }

                                                                                            } else {
                                                                                                cout << endl << "Insufficient Balance!" << endl << endl;
                                                                                            }
                                                                                            
                                                                                        } else if (bank_name == bank_partners[2]) {

                                                                                            Transfer_CentralBank = true;

                                                                                            cout << "Enter Recipient's Account Name: ";
                                                                                            cin >> recipient;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Recipient's Account Number: ";
                                                                                            cin >> accountnumber;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Desired Amount: ";
                                                                                            cin >> Transfer_Amount;
                                                                                            cin.ignore();

                                                                                            if (Transfer_Amount <= Bal_CryptoSolutions)
                                                                                            {
                                                                                                Bal_CentralBank = Bal_CentralBank + Transfer_Amount;
                                                                                                Bal_CryptoSolutions = Bal_CryptoSolutions - Transfer_Amount;

                                                                                                cout << "Transfer Successful! Wait for your Receipt..." << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }

                                                                                            } else {
                                                                                                cout << endl << "Insufficient Balance!" << endl << endl;
                                                                                            }

                                                                                        } else if (bank_name == "Exit") {
                                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                            cin >> proceed_confirmation;
                                                                                            cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }
                                                                                        } else {
                                                                                            cout << "Unrecognizable Input! or Bank not Supported by the System" << endl;
                                                                                        }

                                                                                    }

                                                                                }
                                                                                    
                                                                            } else if (banking_transaction == "Exit") {
                                                                                cout << "Thank you for paying us a Visit!" << endl << endl;
                                                                                exit_function = true;
                                                                            } else {
                                                                                cout << "Unrecognized Input" << endl << endl;
                                                                            }
                                                                        }
                                                                }

                                                            } else {
                                                                cout << "Wrong PIN" << endl;
                                                                break;
                                                            }
                                                            

                                                            } 
                                                               
                                                        }
                                                
                                                    } 
                                                }

                                        } else if (bank_name == bank_partners[2]) {
                                            while (true)
                                            {
                                                if (exit_function) {
                                                    break;
                                                } else if (exit_FundTransfer) {
                                                    break;
                                                } else {
                                                    
                                                    while (true)
                                                    {
                                                        if (exit_function) {
                                                            break;
                                                        } else if (exit_FundTransfer) {
                                                            break;
                                                        } else {
                                                            string name;
                                                            int PIN_input;
                                                            exit_NewPIN = false;

                                                            cout << "Welcome to Central Bank!" << endl;
                                                            cout << "Account Name: ";
                                                            getline(cin, name);
                                                            cout << "PIN: ";
                                                            cin >> PIN_input;
                                                            cin.ignore();
                                                            cout << endl << endl;
                                                
                                                            if (PIN_input == PIN_CentralBank)
                                                            {
                                                                while (true)
                                                                {

                                                                    if (exit_function) {
                                                                        break;
                                                                    } else if (exit_NewPIN) {
                                                                        break;
                                                                    } else if (exit_FundTransfer) {
                                                                        break;
                                                                    } else {
                                                                        string banking_transaction;
                                                                        withdrawal = 0;

                                                                        cout << "Please Choose a Transaction Option" << endl;
                                                                        cout << "Withdraw" << endl << "Balance Inquiry" << endl << "PIN Change" << endl << "Fund Transfer" << endl << "Exit" << endl << endl;
                                                                        cout << "Banking Transaction: ";
                                                                        getline(cin, banking_transaction);

                                                                        if (banking_transaction == "Balance Inquiry") {
                                                                            cout << "Current Balance: " << Bal_CentralBank << endl;
                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                            cin >> proceed_confirmation;
                                                                            cin.ignore();
                                                                            cout << endl;
                                                                            
                                                                            verify_confirmation = toupper(proceed_confirmation);

                                                                            if (verify_confirmation == 'Y') {
                                                                                cout << "/Taking you back to transaction options.../" << endl;
                                                                            } else if (verify_confirmation == 'N') {
                                                                                exit_function = true;
                                                                                cout << "Thank you for your transaction!" << endl;
                                                                            } else {
                                                                                cout << "Unrecognized Input!" << endl;
                                                                            }

                                                                        } else if (banking_transaction == "Withdraw") {
                                                                            exit_local = false;

                                                                            while (true) {
                                                                                if (exit_local) {
                                                                                    break;
                                                                                } else if (exit_function) {
                                                                                    break;
                                                                                } else {
                                                                                    cout << "Enter Desired Amount: ";
                                                                                    cin >> withdrawal;
                                                                                    cin.ignore();
                                                                                    if (withdrawal <= Bal_BDO) {
                                                                                        Bal_CentralBank = Bal_CentralBank - withdrawal;
                                                                                        cout << "Thank you for transacting with us! Wait for your Receipt..." << endl;
                                                                                        cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                        cin >> proceed_confirmation;
                                                                                        cin.ignore();
                                                                                        cout << endl;
                                                                                        
                                                                                        verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {
                                                                                            cout << "/Taking you back to transaction options.../" << endl;
                                                                                            exit_local = true;
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            exit_function = true;
                                                                                            cout << "Thank you for your transaction!" << endl;
                                                                                        } else {
                                                                                            cout << "Unrecognized Input!" << endl;
                                                                                        }
                
                                                                                    } else {
                                                                                        cout << "Insufficient Balance" << endl;
                                                                                        cout << "Do you still wish to withdraw? (Y/N): ";
                                                                                        cin >> proceed_confirmation;
                                                                                        cin.ignore();
                                                                                        cout << endl;

                                                                                        verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {
                                                                                            
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            exit_local = true;
                                                                                        } else {
                                                                                            cout << "Unrecognized Input!" << endl;
                                                                                        }

                                                                                    }

                                                                                } 

                                                                            }
                                                                            
                                                                            
                                                                        } else if (banking_transaction == "PIN Change") {
                                                                            cout << "Enter Current PIN: ";
                                                                            cin >> PIN_input;
                                                                            cin.ignore();
                                                                        
                                                                            while (true)
                                                                            {
                                                                                if (exit_function) {
                                                                                    break;
                                                                                } else if (exit_local) { 
                                                                                    break;
                                                                                } else {
                                                                                    if (PIN_input == PIN_CentralBank) {  
                                                                                    cout << "Do you really wish to change your PIN? (Y/N): ";
                                                                                    cin >> proceed_confirmation;
                                                                                    verify_confirmation = toupper(proceed_confirmation);

                                                                                        if (verify_confirmation == 'Y') {

                                                                                            int New_PIN;
                                                                                            int reconfirm_NewPIN;

                                                                                            cout << "Enter New PIN: ";
                                                                                            cin >> New_PIN;
                                                                                            cout << "Reconfirm New PIN: ";
                                                                                            cin >> reconfirm_NewPIN;
                                                                                            cin.ignore();

                                                                                            if (reconfirm_NewPIN == New_PIN)
                                                                                            {
                                                                                                PIN_CentralBank = New_PIN;
                                                                                                cout << "PIN Changed!!" << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();
                                                                                                cout << endl;
                                                                                                
                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                if (verify_confirmation == 'Y') {
                                                                                                    cout << "Relog-in First with your new PIN" << endl;
                                                                                                    exit_local = true;
                                                                                                    exit_NewPIN = true;
                                                                                                } else if (verify_confirmation == 'N') {
                                                                                                    exit_function = true;
                                                                                                    cout << "Thank you for your transaction!" << endl;
                                                                                                } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                }

                                                                                            } else {
                                                                                                cout << "Reconfirmation PIN does not match" << endl;
                                                                                            }
                                                                                            
                                                                                        } else if (verify_confirmation == 'N') {
                                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                            cin >> proceed_confirmation;
                                                                                            cin.ignore();
                                                                                            cout << endl;
                                                                                            
                                                                                            verify_confirmation = toupper(proceed_confirmation);

                                                                                            if (verify_confirmation == 'Y') {
                                                                                                exit_local = true;
                                                                                                cout << "/Taking you back to transaction options.../" << endl;
                                                                                            } else if (verify_confirmation == 'N') {
                                                                                                exit_function = true;
                                                                                                cout << "Thank you for your transaction!" << endl;
                                                                                            } else {
                                                                                                cout << "Unrecognized Input!" << endl;
                                                                                            }
                                                                                        } else {
                                                                                            cout << "Unrecognized Input" << endl;
                                                                                        }
                
                                                                                    } else {
                                                                                        cout << "Wrong PIN" << endl;
                                                                                    }
                                                                            }

                                                                            }
                                                                            
                                                                            
                                                                        } else if (banking_transaction == "Fund Transfer") {
                                                                                exit_FundTransfer = false;
                                                                                bool exit_BankingMenu = false;

                                                                                while (true) {
                                                                                    if (exit_FundTransfer) {
                                                                                        break;
                                                                                    } else if (exit_BankingMenu) {
                                                                                        break;
                                                                                    } else {
                                                                                        cout << "Choose a Recipient Bank Account" << endl;
                                                                                        cout << "Choose from the Following Supported Bank Partners" << endl;
                                                                                        cout << "BDO" << endl << "CryptoSolutions" << endl << endl;
                                                                                        cout << "To Cancel Fund Transfer type Exit on \"Recipient Bank:\"" << endl;
                                                                                        cout << "Recipient Bank: ";
                                                                                        getline(cin, bank_name);

                                                                                        if (bank_name == bank_partners[0])
                                                                                        {

                                                                                            Transfer_BDO = true;

                                                                                            cout << "Enter Recipient's Account Name: ";
                                                                                            cin >> recipient;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Recipient's Account Number: ";
                                                                                            cin >> accountnumber;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Desired Amount: ";
                                                                                            cin >> Transfer_Amount;
                                                                                            cin.ignore();

                                                                                            if (Transfer_Amount <= Bal_CentralBank)
                                                                                            {
                                                                                                Bal_BDO = Bal_BDO + Transfer_Amount;
                                                                                                Bal_CentralBank = Bal_CentralBank - Transfer_Amount;

                                                                                                cout << "Transfer Successful! Wait for your Receipt..." << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }

                                                                                            } else {
                                                                                                cout << endl << "Insufficient Balance!" << endl << endl;
                                                                                            }
                                                                                            
                                                                                        } else if (bank_name == bank_partners[1]) {

                                                                                            Transfer_CryptoSolutions = true;

                                                                                            cout << "Enter Recipient's Account Name: ";
                                                                                            cin >> recipient;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Recipient's Account Number: ";
                                                                                            cin >> accountnumber;
                                                                                            cin.ignore();
                                                                                            cout << "Enter Desired Amount: ";
                                                                                            cin >> Transfer_Amount;
                                                                                            cin.ignore();

                                                                                            if (Transfer_Amount <= Bal_CentralBank)
                                                                                            {
                                                                                                Bal_CryptoSolutions = Bal_CryptoSolutions + Transfer_Amount;
                                                                                                Bal_CentralBank = Bal_CentralBank - Transfer_Amount;

                                                                                                cout << "Transfer Successful! Wait for your Receipt..." << endl;
                                                                                                cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                                cin >> proceed_confirmation;
                                                                                                cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }

                                                                                            } else {
                                                                                                cout << endl << "Insufficient Balance!" << endl << endl;
                                                                                            }

                                                                                        } else if (bank_name == "Exit") {
                                                                                            cout << "Do you wish to proceed with other transactions? (Y/N): ";
                                                                                            cin >> proceed_confirmation;
                                                                                            cin.ignore();

                                                                                                verify_confirmation = toupper(proceed_confirmation);

                                                                                                    if (verify_confirmation == 'Y') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    cout << "/Taking you back to transaction options.../" << endl;
                                                                                                    } else if (verify_confirmation == 'N') {
                                                                                                    exit_BankingMenu = true;
                                                                                                    exit_function = true;
                                                                                                    } else {
                                                                                                    cout << "Unrecognized Input!" << endl;
                                                                                                    }
                                                                                        } else {
                                                                                            cout << "Unrecognizable Input! or Bank not Supported by the System" << endl;
                                                                                        }

                                                                                    }

                                                                                }
                                                                                    
                                                                            } else if (banking_transaction == "Exit") {
                                                                                cout << "Thank you for paying us a Visit!" << endl << endl;
                                                                                exit_function = true;
                                                                            } else {
                                                                                cout << "Unrecognized Input" << endl << endl;
                                                                            }
                                                                        }
                                                                }

                                                            } else {
                                                                cout << "Wrong PIN" << endl;
                                                                break;
                                                            }
                                                            

                                                            } 
                                                               
                                                        }
                                                
                                                    } 
                                                }
                                        } else {
                                            cout << "Nigga that's not a bank!!" << endl;
                                            exit_function = true;
                                        }
                                        break;
                                    }

                                    case 'N':
                                        cout << "/Taking you to Bank Options Menu.../" << endl;
                                        exit_function = true;
                                        break;

                                    default:
                                        cout << "Please Choose a Valid Option" << endl;
                                        break;
                                    }
                                }
                            }
                            
                        }

                    }

                }

                case 'N':
                    exit_function = true;
                    cout << "Thank You for Paying us a Visit!" << endl;
                    break;

                default:
                break;

            } 
            
            
            }

        }
        cout << endl << "Account Status and Activity" << endl;
        cout << "Withdrawn Amount: " << withdrawal << endl;
        cout << "Fund Transfer Recipient: " << recipient << endl << "Recipient Account Number: " << accountnumber << endl;
        cout << "Recipient's Bank: ";
        if (Transfer_BDO) {
            cout << "BDO" << endl;
        } else if (Transfer_CryptoSolutions) {
            cout << "CryptoSolutions" << endl;
        } else if (Transfer_CentralBank) {
            cout << "Central Bank" << endl;
        }
        cout << "Amount Transferred: " << Transfer_Amount << endl;
        cout << "Keep these information confidential!" << endl << endl;
        
        return 0;
}