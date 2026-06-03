#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int balance;

public:

    // Constructor
    BankAccount() {
        name = "Unknown";
        balance = 0;

        cout << "Constructor Called\n";
    }

    // Display Function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Destructor Called\n";
    }
};

int main() {

    BankAccount b1;

    b1.display();

    return 0;
}
