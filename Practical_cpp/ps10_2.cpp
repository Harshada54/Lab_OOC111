#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("data.txt", ios::app);

    string name;
    int roll;

    cout << "Enter roll number and name: ";
    cin >> roll >> name;

    f << roll << " " << name << endl;
    f.close();

    ifstream r("data.txt");
    string line;

    cout << "\nAll Records:\n";

    while (getline(r, line))
        cout << line << endl;

    r.close();

    return 0;
}