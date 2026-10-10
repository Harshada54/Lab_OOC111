#include <iostream>
using namespace std;

int main()
{
    string name;
    int units;
    float bill;

    cout << "Enter consumer name: ";
    cin >> name;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units < 0)
    {
        cout << "Invalid units!";
    }
    else if (units <= 100)
    {
        bill = units * 5;
        cout << "Consumer Name: " << name << endl;
        cout << "Total Bill: Rs. " << bill;
    }
    else if (units <= 200)
    {
        bill = units * 7;
        cout << "Consumer Name: " << name << endl;
        cout << "Total Bill: Rs. " << bill;
    }
    else if (units <= 300)
    {
        bill = units * 10;
        cout << "Consumer Name: " << name << endl;
        cout << "Total Bill: Rs. " << bill;
    }
    else
    {
        bill = units * 12;
        cout << "Consumer Name: " << name << endl;
        cout << "Total Bill: Rs. " << bill;
    }

    return 0;
}