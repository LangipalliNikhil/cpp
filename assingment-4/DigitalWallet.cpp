#include <iostream>
using namespace std;

class DigitalWallet
{
    int walletID;
    string holderName;
    float balance;

public:
    void getDetails()
    {
        cout << "Enter Wallet ID: ";
        cin >> walletID;

        cout << "Enter Holder Name: ";
        cin >> holderName;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void addMoney(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Money added successfully!\n";
        }
        else
        {
            cout << "Invalid amount!\n";
        }
    }

    void makePayment(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Payment successful!\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    void displayDetails()
    {
        cout << "\n----- WALLET DETAILS -----\n";
        cout << "Wallet ID: " << walletID << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main()
{
    DigitalWallet w;
    int choice;
    float amount;

    w.getDetails();

    do
    {
        cout << "\n1. Add Money";
        cout << "\n2. Make Payment";
        cout << "\n3. Display Details";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to add: ";
            cin >> amount;
            w.addMoney(amount);
            break;

        case 2:
            cout << "Enter payment amount: ";
            cin >> amount;
            w.makePayment(amount);
            break;

        case 3:
            w.displayDetails();
            break;

        case 4:
            cout << "Thank you!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}