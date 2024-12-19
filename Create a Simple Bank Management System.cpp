#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialDeposit) {
        accountHolder = name;
        balance = initialDeposit;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        }
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 500.0);
    account.display();
    account.deposit(200.0);
    account.withdraw(150.0);
    account.display();
    return 0;
}
