#include <iostream>
using namespace std;

class ATM {
public:
    float checkBalance() {
        cout << "Your current balance is: " << balance << endl;
        return balance;
    }

    void depositMoney(float amount) {
        balance += amount;
        cout << "You successfully deposit: " << amount << endl;
        cout << "Your current balance now is: " << balance << endl;
    }

    void withdrawMoney(int amount) {
        if (amount > 0 && amount <= 10000 && amount % 100 == 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "You withdrawn " << amount << " amount successfully." << endl;
            } else {
                cout << "Your current balance is less than what you withdrew. Please try again." << endl;
            }
        } else {
            cout << "Invalid withdrawal amount. We only accept 100s amount up to 10,000 amount"<< endl;
        }
    }
private:
    float balance = 0;
};

int main() {
    ATM atm;
    int choice;
    float amount;

    while (true) {
        cout << "Welcome to the BDO BANK!" << endl;
        cout << "Please choose one the following: " << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                atm.depositMoney(amount);
                break;
            case 3:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                atm.withdrawMoney(amount);
                break;
            case 4:
                cout << "Thank you for using BDO BANK! Have a great day!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
