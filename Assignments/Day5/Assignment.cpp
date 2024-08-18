#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

// Enum to represent the account type
enum AccountType {
    SAVINGS,
    CURRENT
};

// Function to convert AccountType enum to string
string accountTypeToString(AccountType type) {
    switch (type) {
        case SAVINGS: return "Savings";
        case CURRENT: return "Current";
        default: return "Unknown";
    }
}

// Class to represent a Bank Account
class BankAccount {
private:
    static int accountCounter; // Static counter to generate unique account numbers
    int accountNumber;
    string accountHolderName;
    AccountType accountType;
    double balance;

public:
    // Constructor
    BankAccount(string name, AccountType type, double initialDeposit)
        : accountHolderName(name), accountType(type), balance(initialDeposit) {
        accountNumber = ++accountCounter;
    }

    // Function to display account details
    void displayAccountDetails() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Type: " << accountTypeToString(accountType) << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New Balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New Balance: $" << balance << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    // Function to get account number
    int getAccountNumber() const {
        return accountNumber;
    }

    // Function to save account data to a file
    void saveToFile(ofstream &outfile) const {
        outfile << accountNumber << ',' << accountHolderName << ','
                << accountTypeToString(accountType) << ',' << balance << '\n';
    }
};

// Initialize static member
int BankAccount::accountCounter = 0;

// Class to manage multiple bank accounts
class BankManager {
private:
    vector<BankAccount> accounts;

public:
    // Function to add a new account
    void addAccount(const BankAccount &account) {
        accounts.push_back(account);
    }

    // Function to find an account by account number
    BankAccount* findAccount(int accountNumber) {
        for (auto &account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                return &account;
            }
        }
        return nullptr;
    }

    // Function to display all accounts
    void displayAllAccounts() const {
        for (const auto &account : accounts) {
            account.displayAccountDetails();
            cout << "-------------------" << endl;
        }
    }

    // Function to save all accounts to a file
    void saveAllAccountsToFile(const string &filename) const {
        ofstream outfile(filename);
        if (outfile.is_open()) {
            for (const auto &account : accounts) {
                account.saveToFile(outfile);
            }
            outfile.close();
            cout << "All accounts saved to " << filename << endl;
        } else {
            cout << "Unable to open file: " << filename << endl;
        }
    }
};

int main() {
    BankManager manager;

    // Create new accounts
    BankAccount account1("John Doe", SAVINGS, 1000.0);
    BankAccount account2("Jane Smith", CURRENT, 500.0);

    // Add accounts to the manager
    manager.addAccount(account1);
    manager.addAccount(account2);

    // Display all accounts
    manager.displayAllAccounts();

    // Perform transactions
    BankAccount* account = manager.findAccount(1);
    if (account) {
        account->deposit(200.0);
        account->withdraw(150.0);
    }

    // Save all accounts to a file
    manager.saveAllAccountsToFile("accounts.csv");

    return 0;
}
