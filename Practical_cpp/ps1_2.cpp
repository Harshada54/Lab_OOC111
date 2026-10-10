#include <iostream>
using namespace std;

int main()
{
    int choice, a, b;

    do
    {
        cout << "\n--- Calculator Menu ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice)
        {
            case 1:
                cout << "Addition = " << a + b;
                break;

            case 2:
                cout << "Subtraction = " << a - b;
                break;

            case 3:
                cout << "Multiplication = " << a * b;
                break;

            case 4:
                if (b != 0)
                    cout << "Division = " << (float)a / b;
                else
                    cout << "Division by zero is not allowed!";
                break;

            case 5:
                if (b != 0)
                    cout << "Modulus = " << a % b;
                else
                    cout << "Modulus by zero is not allowed!";
                break;

            case 6:
                cout << "Exiting calculator...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (choice != 6);

    return 0;
}