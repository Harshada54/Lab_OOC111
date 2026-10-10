#include <iostream>
using namespace std;

class LibraryBook
{
    int id;
    string name;
    bool issued;

public:
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> id;

        cout << "Enter Book Name: ";
        cin >> name;

        issued = false;
    }

    void issue()
    {
        issued = true;
        cout << "Book Issued Successfully!" << endl;
    }

    void returnBook()
    {
        issued = false;
        cout << "Book Returned Successfully!" << endl;
    }

    void display()
    {
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << name << endl;

        if (issued)
            cout << "Status: Issued";
        else
            cout << "Status: Available";
    }
};

int main()
{
    LibraryBook b;

    b.input();
    b.issue();
    b.display();
    cout << endl;

    b.returnBook();
    b.display();

    return 0;
}