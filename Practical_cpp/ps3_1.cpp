#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void accept()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    void add(Fraction f1, Fraction f2)
    {
        numerator = f1.numerator * f2.denominator
                  + f2.numerator * f1.denominator;

        denominator = f1.denominator * f2.denominator;
    }

    void subtract(Fraction f1, Fraction f2)
    {
        numerator = f1.numerator * f2.denominator
                  - f2.numerator * f1.denominator;

        denominator = f1.denominator * f2.denominator;
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1, f2, result;

    cout << "Enter first fraction:\n";
    f1.accept();

    cout << "Enter second fraction:\n";
    f2.accept();

    result.add(f1, f2);
    cout << "Addition = ";
    result.display();

    result.subtract(f1, f2);
    cout << "Subtraction = ";
    result.display();

    return 0;
}