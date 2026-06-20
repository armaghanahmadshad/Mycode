#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNum, double initialDeposit) {
        accountHolder = name;
        accountNumber = accNum;

        if (initialDeposit >= 0)
            balance = initialDeposit;
        else {
            balance = 0;
            cout << "Invalid initial deposit. Balance set to $0.\n";
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << fixed << setprecision(2) << amount << endl;
        } else {
            cout << "Deposit must be positive!\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal must be positive!\n";
        }
        else if (amount > balance) {
            cout << "Insufficient funds! Balance: $"
                 << fixed << setprecision(2) << balance << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawn: $" << fixed << setprecision(2) << amount << endl;
        }
    }

    void displayBalance() const {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << accountHolder << endl;
        cout << "Account #: " << accountNumber << endl;
        cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
        cout << "-----------------------\n";
    }
};

int main() {
    string name;
    int accNum;
    double initialAmount;
    int choice;
    double amount;

    cout << "--- OOP Bank System ---\n";

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accNum;

    cout << "Enter Initial Deposit: ";
    cin >> initialAmount;

    BankAccount acc(name, accNum, initialAmount);

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Amount: ";
            cin >> amount;
            acc.deposit(amount);
            break;

        case 2:
            cout << "Amount: ";
            cin >> amount;
            acc.withdraw(amount);
            break;

        case 3:
            acc.displayBalance();
            break;

        case 4:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}