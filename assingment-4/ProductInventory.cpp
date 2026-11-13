#include <iostream>

using namespace std;

class ProductInvetory
{
private:
    int productId;
    string productName;
    float productPrice;
    int quantity;

public:
    double inventryValueofEachProduct;
    //double totalvalue;
    //double higest;
    void acceptvalues();
    void dispalyTotalvalues();
    // double higestproduct();
    double invertryValueOfEachProduct();
    // double totaValueOFinvenventry();
};

void ProductInvetory::acceptvalues()
{
    cout << "Enter the product id : ";
    cin >> productId;
    cout << "Enter the product Name : ";
    cin >> productName;
    cout << "Enter the product Price : ";
    cin >> productPrice;
    cout << "Enter the product quantity : ";
    cin >> quantity;
}

void ProductInvetory::dispalyTotalvalues()
{
    cout << "The product ID is : " << productId << endl;
    cout << "The Product Name is : " << productName << endl;
    cout << "The product price is : " << productPrice << endl;
    cout << "The product quantity is : " << quantity << endl;
}

// double ProductInvetory :: higestproduct(){
//     if(productPrice*quantity>higest){
//         higest=productPrice*quantity;
//     }
// }

double ProductInvetory::invertryValueOfEachProduct()
{
    inventryValueofEachProduct = productPrice * quantity;
    return inventryValueofEachProduct;
}

// double ProductInvetory ::totaValueOFinvenventry(){
//     totalvalue=productPrice*quantity;
//     return totalvalue;
// }

int main()
{
    ProductInvetory product[5];
    double total = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the details of product NUmber " << i+1 << endl;
        product[i].acceptvalues();
    }

    for (int i = 0; i < 5; i++)
    {
        cout << " The details of product NUmber " << i+1 << endl;
        product[i].dispalyTotalvalues();
    }
    for (int i = 0; i < 5; i++)
    {
        double eachvalue = 0;
        eachvalue += product[i].invertryValueOfEachProduct();
        cout << "The inventory vlue of Each product is : " << eachvalue << endl;
    }

    for (int i = 0; i < 5; i++)
    {

        total += product[i].invertryValueOfEachProduct();
    }
    int highestIndex = 0; 

    for (int i = 1; i < 5; i++)
    {
        if (product[i].invertryValueOfEachProduct() > product[highestIndex].invertryValueOfEachProduct())
        {
            highestIndex = i;
        }
    }

    cout << "\n--- Product with Highest Inventory Value ---" << endl;
    product[highestIndex].dispalyTotalvalues();
    cout << "Highest Inventory Value: " << product[highestIndex].invertryValueOfEachProduct() << endl;

    cout << "The  Toatal inventory value  product is : " << total << endl;

    return 0;
}