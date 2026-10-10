#include <iostream>
using namespace std;

class Product
{
    int productID, quantity;
    string productName;
    float unitPrice;

public:
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    float calculateCost()
    {
        return quantity * unitPrice;
    }

    void display()
    {
        cout << "\nProduct ID: " << productID;
        cout << "\nProduct Name: " << productName;
        cout << "\nQuantity: " << quantity;
        cout << "\nUnit Price: Rs. " << unitPrice;
        cout << "\nTotal Cost: Rs. " << calculateCost()<< endl;
    }
};

int main()
{
    Product p;

    p.accept();
    p.display();

    return 0;
}