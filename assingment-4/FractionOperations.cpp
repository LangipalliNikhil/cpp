#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void getFraction()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        if (denominator == 0)
        {
            cout << "Denominator cannot be zero!";
            denominator = 1;
        }
    }

    void display()
    {
        int a, b, temp;

        a = numerator;
        b = denominator;

        if (a < 0)
            a = -a;

        if (b < 0)
            b = -b;

        while (b != 0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }

        if (a != 0)
        {
            numerator = numerator / a;
            denominator = denominator / a;
        }

        if (denominator < 0)
        {
            numerator = -numerator;
            denominator = -denominator;
        }

        cout << numerator << "/" << denominator << endl;
    }

    Fraction add(Fraction f)
    {
        Fraction result;

        result.numerator = numerator * f.denominator +
                           f.numerator * denominator;

        result.denominator = denominator * f.denominator;

        return result;
    }

    Fraction multiply(Fraction f)
    {
        Fraction result;

        result.numerator = numerator * f.numerator;
        result.denominator = denominator * f.denominator;

        return result;
    }
};

int main()
{
    Fraction f1, f2, sum, product;

    cout << "Enter first fraction:\n";
    f1.getFraction();

    cout << "\nEnter second fraction:\n";
    f2.getFraction();

    sum = f1.add(f2);
    product = f1.multiply(f2);

    cout << "\nAddition Result: ";
    sum.display();

    cout << "\nMultiplication Result: ";
    product.display();

    return 0;
}