
#include <iostream>
using namespace std;

class MobileRecharge
{
    string mobileNumber;
    float balance;

public:
    void input()
    {
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void recharge()
    {
        float amount;

        cout << "Enter Recharge Amount: ";
        cin >> amount;

        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Recharge Successful!" << endl;
        }
        else
        {
            cout << "Invalid recharge amount." << endl;
        }
    }

    void deductBalance()
    {
        float amount;

        cout << "Enter Amount to Deduct: ";
        cin >> amount;

        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Balance Deducted Successfully!" << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount."
                 << endl;
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Available Balance: Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.input();
    m.recharge();
    m.deductBalance();
    m.display();

    return 0;
}