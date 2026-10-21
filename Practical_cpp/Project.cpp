#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// 1. Base class
class Student {
private:
    int id;
    string name;

    // 5. Friend function
    friend void showPrivateDetails(const Student& s);

public:
    // 2. Constructor
    Student(int i, string n) : id(i), name(n) {
        if (id <= 0)
            throw invalid_argument("ID must be positive!");
    }

    int getId() const {
        return id;
    }

    void display() const {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

// Friend function definition
void showPrivateDetails(const Student& s) {
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
}

// 3. Derived class (Inheritance)
class Result : public Student {
private:
    float marks;

public:
    // Constructor
    Result(int i, string n, float m)
        : Student(i, n), marks(m) {
        if (marks < 0 || marks > 100)
            throw out_of_range("Marks must be between 0 and 100!");
    }

    // 4. Function overriding
    void display() const {
        Student::display();
        cout << "Marks: " << marks << "/100" << endl;
    }

    // 4. Function overloading
    void display(int level) const {
        display();

        if (level == 2) {
            cout << "Result: "
                 << (marks >= 40 ? "PASS" : "FAIL")
                 << endl;
        }
    }
};

int main() {
    
    const int MAX = 50;
    Result* students[MAX];
    int count = 0;
    int choice = 0;

    do {
        cout << "\n=== STUDENT MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Show Private Details\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            choice = 0;
            continue;
        }

        try {
            if (choice == 1) {
                if (count == MAX)
                    throw runtime_error("Student limit reached!");

                int id;
                string name;
                float marks;

                cout << "Enter ID: ";
                if (!(cin >> id))
                    throw invalid_argument("ID must be a number!");

                for (int i = 0; i < count; i++) {
                    if (students[i]->getId() == id)
                        throw invalid_argument("ID already exists!");
                }

                cin.ignore(10000, '\n');

                cout << "Enter name: ";
                getline(cin, name);

                if (name.empty())
                    throw invalid_argument("Name cannot be empty!");

                cout << "Enter marks (0-100): ";
                if (!(cin >> marks)) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    throw invalid_argument("Marks must be numeric!");
                }

                students[count] = new Result(id, name, marks);
                count++;

                cout << "Student added successfully!\n";
            }
            else if (choice == 2) {
                if (count == 0) {
                    cout << "No records available.\n";
                } else {
                    for (int i = 0; i < count; i++) {
                        cout << "\n-----------------\n";
                        students[i]->display(2);
                    }
                }
            }
            else if (choice == 3 || choice == 4) {
                int id;
                cout << "Enter student ID: ";

                if (!(cin >> id))
                    throw invalid_argument("ID must be a number!");

                bool found = false;

                for (int i = 0; i < count; i++) {
                    if (students[i]->getId() == id) {
                        if (choice == 3)
                            students[i]->display(2);
                        else
                            showPrivateDetails(*students[i]);

                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Student not found!\n";
            }
            else if (choice == 5) {
                cout << "Thank you for using the system!\n";
            }
            else {
                cout << "Invalid choice!\n";
            }
        }
        catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }

    } while (choice != 5);

    // Release dynamically allocated memory
    for (int i = 0; i < count; i++) {
        delete students[i];
    }

    return 0;
}