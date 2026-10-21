#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try
    {
        if (num < 0)
        {
            throw num;
        }

        cout << "Number is positive: " << num;
    }
    catch (int x)
    {
        cout << "Exception caught: Negative number is not allowed.\n";
    }

    return 0;
}