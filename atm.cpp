#include <iostream>
using namespace std;



class abs{
    virtual verifypassword() = 0;
    virtual deposit() = 0;
    virtual withdraw() = 0;
    virtual displaybalance() = 0;

};

    

class ATM :public abs{
private:
    double balance;
    string password;

public:

    ATM(string pwd, double initial_balance = 0.0) {
        password = pwd;
        balance = initial_balance;
    }

    bool verifyPassword(string input) {
        return input == password;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }

    void displayBalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

// Main function
int main() {
    string pwd;
    ATM atm("2005", 10000.0); 

    cout << "Enter password: ";
    cin >> pwd;

    if (!atm.verifyPassword(pwd)) {
        cout << "Incorrect password. Exiting..." << endl;
        return 0;
    }

    int choice;
    double amount;

    do {
        cout << "\n--- ATM Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            atm.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            atm.withdraw(amount);
            break;
        case 3:
            atm.displayBalance();
            break;
        case 4:
            cout << "Thank you for using the ATM. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid option. Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
