#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name, department;

public:
    void getEmployee()
    {
        cout << "Enter ID, Name, Department: ";
        cin >> id >> name >> department;
    }

    void displayEmployee()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

class TeachingStaff : public Employee
{
public:
    string subject, qualification;

    void input()
    {
        getEmployee();
        cout << "Enter Subject and Qualification: ";
        cin >> subject >> qualification;
    }

    void display()
    {
        displayEmployee();
        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};

class NonTeachingStaff : public Employee
{
public:
    string designation;
    int hours;

    void input()
    {
        getEmployee();
        cout << "Enter Designation and Working Hours: ";
        cin >> designation >> hours;
    }

    void display()
    {
        displayEmployee();
        cout << "Designation: " << designation << endl;
        cout << "Working Hours: " << hours << endl;
    }
};

int main()
{
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "Teaching Staff Details:\n";
    t.input();

    cout << "\nNon-Teaching Staff Details:\n";
    n.input();

    cout << "\nTeaching Staff:\n";
    t.display();

    cout << "\nNon-Teaching Staff:\n";
    n.display();

    return 0;
}