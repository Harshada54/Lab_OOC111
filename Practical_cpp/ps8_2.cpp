
#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    friend istream& operator>>(istream& in, Student& s)
    {
        in >> s.rollNo >> s.name;
        return in;
    }

    friend ostream& operator<<(ostream& out, Student& s)
    {
        out << "Roll Number: " << s.rollNo << endl;
        out << "Name: " << s.name << endl;
        return out;
    }
};

int main()
{
    Student s;

    cout << "Enter Roll Number and Name: ";
    cin >> s;

    cout << s;

    return 0;
}