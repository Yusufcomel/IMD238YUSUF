 #include <iostream>
#include <string>

using namespace std;

// Maximum number of bank accounts
const int MAX_BOOKSTOREACCOUNTS = 100;

// Arrays to store account information
string UserBookstoreAccountNames[MAX_BOOKSTOREACCOUNTS];
string UserBookstoreAccountNumbers[MAX_BOOKSTOREACCOUNTS];
string UserBookstoreBankNames[MAX_BOOKSTOREACCOUNTS];
string UserBookstorePhoneNumbers[MAX_BOOKSTOREACCOUNTS];

// Total number of accounts
int BookstoreNumAccounts = 0;

// Function to add a bank account
void addBookstoreAccount() {
    if (BookstoreNumAccounts >= MAX_BOOKSTOREACCOUNTS) {
        cout << "Maximum number of User Bookstore accounts reached." << endl;
        return;
    }

    cout << "Enter full name: ";
    getline(cin.ignore(),UserBookstoreAccountNames[BookstoreNumAccounts]);

    cout << "Enter account number: ";
    getline(cin, UserBookstoreAccountNumbers[BookstoreNumAccounts]);

    cout << "Enter bank name: ";
    getline(cin, UserBookstoreBankNames[BookstoreNumAccounts]);

    cout << "Enter phone number: ";
    getline(cin, UserBookstorePhoneNumbers[BookstoreNumAccounts]);

    BookstoreNumAccounts++;
}

// Function to retrieve account data
void retrieveData() {
    if (BookstoreNumAccounts == 0) {
        cout << "No Bookstore User Accounts Found." << endl;
        return;
    }

    cout << "Bookstore Account Details:" << endl;
    for (int i = 0; i < BookstoreNumAccounts; i++) {
        cout << "User Account " << i + 1 << ":" << endl;
        cout << "User Full Name: " << UserBookstoreAccountNames[i] << endl;
        cout << "User Account Number: " << UserBookstoreAccountNumbers[i] << endl;
        cout << "User Bank Name: " << UserBookstoreBankNames[i] << endl;
        cout << "User Phone Number: " << UserBookstorePhoneNumbers[i] << endl;
        cout << endl;
    }
}

// Function to update account data
void UpdateUserData() {
    if (BookstoreNumAccounts == 0) {
        cout << "No accounts found." << endl;
        return;
    }

    int BookstoreAccountIndex;
    cout << "Enter Bookstore Account Index to update (1 - " << BookstoreNumAccounts << "): ";
    cin >> BookstoreAccountIndex;
    cin.ignore();

    if (BookstoreAccountIndex < 1 || BookstoreAccountIndex > BookstoreNumAccounts) {
        cout << "Invalid account index." << endl;
        return;
    }

    cout << "Enter full name: ";
    getline(cin, UserBookstoreAccountNames[ BookstoreAccountIndex - 1]);

    cout << "Enter account number: ";
    getline(cin, UserBookstoreAccountNumbers[BookstoreAccountIndex - 1]);

    cout << "Enter bank name: ";
    getline(cin, UserBookstoreBankNames[BookstoreAccountIndex - 1]);

    cout << "Enter phone number: ";
    getline(cin, UserBookstorePhoneNumbers[BookstoreAccountIndex - 1]);

    cout << "Bookstore User Account Updated Successfully." << endl;
}

// Function to delete an account
void DeleteUserAccount() {
    if (BookstoreNumAccounts == 0) {
        cout << "No User Bookstore Accounts Found." << endl;
        return;
    }

    int BookstoreAccountIndex;
    cout << "Enter User Bookstore Account Index to Delete (1 - " << BookstoreNumAccounts << "): ";
    cin >> BookstoreAccountIndex;
    cin.ignore();

    if (BookstoreAccountIndex < 1 || BookstoreAccountIndex > BookstoreNumAccounts) {
        cout << "Invalid User Bookstore Account Index." << endl;
        return;
    }

    // Shift account data to remove the selected account
    for (int i = BookstoreAccountIndex - 1; i < BookstoreNumAccounts - 1; i++) {
        UserBookstoreAccountNames[i] = UserBookstoreAccountNames[i + 1];
        UserBookstoreAccountNumbers[i] = UserBookstoreAccountNumbers[i + 1];
        UserBookstoreBankNames[i] = UserBookstoreBankNames[i + 1];
        UserBookstorePhoneNumbers[i] = UserBookstorePhoneNumbers[i + 1];
    }

    BookstoreNumAccounts--;
    cout << "Bookstore User Account Deleted Successfully." << endl;
}

int main() {
    int choice;
    bool proceed=true;
    
    cout << "Bank Bookstore Account Management System" << endl;
    cout << "1. Add Bookstore Account" << endl;
    cout << "2. Retrieve Bookstore Data" << endl;
    cout << "3. Update Bookstore Data" << endl;
    cout << "4. Delete Bookstore Account" << endl;
    cout << "5. Exit Bookstore Account" << endl;

    cout << "Enter User Bookstore choice (1 - 5): ";
    cin >> choice;
    cin.ignore();
    while (proceed) 
    {
        switch (choice) 
        {
            case 1:
                addBookstoreAccount();
                break;
            case 2:
                retrieveData();
                break;
            case 3:
                UpdateUserData();
                break;
            case 4:
                DeleteUserAccount();
                break;
            case 5:
                cout << "Exiting..." << endl;
                proceed=false;
                cout << "thank you for using this systrem." << endl;
                return 0;
                break;
                
            default:
                cout << "Invalid choice. Please Input the valid choice"<< endl;
        
        }//switch
        cout<<endl;
        cout << "Bank Bookstore Account Management System" << endl;
        cout << "1. Add Bookstore Account" << endl;
        cout << "2. Retrieve Bookstore Data" << endl;
        cout << "3. Update Bookstore Data" << endl;
        cout << "4. Delete Bookstore Account" << endl;
        cout << "5. Exit Bookstore Account" << endl;

        cout << "Enter User Bookstore choice (1 - 5): ";
        cin >> choice;
        cin.ignore();
        
    } //while()
    return 0;
}




