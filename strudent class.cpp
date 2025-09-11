#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Parameterized constructor
    BankAccount(string aN, double b) {
        accountNumber = aN;
        balance = b;
    }

    // Default constructor
    BankAccount() {
        accountNumber = "";
        balance = 0.0;
    }

    void setBalance(double b) {
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() {
        return balance;
    }

    string getAccountNumber() const {
        return accountNumber;
    }
     bool withdraw(double amount) {
        if (amount > balance) {
            return false;
        }
        balance -= amount;
        return true;
    }
};

// Transfer function
void transfer(BankAccount& from, BankAccount& to, double amount) {
    if (from.getBalance() < amount) {
        cout << "Not enough balance in account " << from.getAccountNumber() << endl;
    } else {
        from.withdraw(amount);
        to.deposit(amount);
        cout << "Transferred $" << amount << " from " << from.getAccountNumber()
             << " to " << to.getAccountNumber() << endl;
    }
}

// Main function
int main() {
    BankAccount A("A1005", 500);
    BankAccount B("A2005", 100);

    double amount;
    cout << "Enter amount to transfer from A to B: ";
    cin >> amount;

    transfer(A, B, amount);

    cout << "\nFinal Balances:\n";
    cout << "Account " << A.getAccountNumber() << ": $" << A.getBalance() << endl;
    cout << "Account " << B.getAccountNumber() << ": $" << B.getBalance() << endl;

    return 0;
}
