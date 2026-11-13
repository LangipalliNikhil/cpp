#include <iostream>
using namespace std;

class ShoppingCart
{
    string productName;
    float unitPrice;
    int quantity;

public:
    void getDetails()
    {
        cout << "Enter product name: ";
        cin >> productName;

        cout << "Enter unit price: ";
        cin >> unitPrice;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    void calculateBill()
    {
        float amount, discount = 0, gst, finalAmount;

        amount = unitPrice * quantity;

        if (amount > 5000)
        {
            discount = amount * 0.10;
        }

        float discountedAmount = amount - discount;

        gst = discountedAmount * 0.05;

        finalAmount = discountedAmount + gst;

        cout << "\n----- FINAL BILL -----\n";
        cout << "Product Name: " << productName << endl;
        cout << "Unit Price: Rs. " << unitPrice << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Amount: Rs. " << amount << endl;
        cout << "Discount: Rs. " << discount << endl;
        cout << "GST (5%): Rs. " << gst << endl;
        cout << "Final Amount: Rs. " << finalAmount << endl;
    }
};

int main()
{
    ShoppingCart s;

    s.getDetails();
    s.calculateBill();

    return 0;
}