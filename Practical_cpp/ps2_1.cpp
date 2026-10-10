#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string empName, department;
    float basicSalary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void display()
    {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nDepartment: " << department;
        cout << "\nBasic Salary: Rs. " << basicSalary;
        cout << "\nAnnual Salary: Rs. " << calculateAnnualSalary();
    }

    float calculateAnnualSalary()
    {
        return basicSalary * 12;
    }
};

int main()
{
    Employee e;

    e.accept();
    e.display();

    return 0;
}