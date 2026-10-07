#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    double salary;

public:
    Employee(double s) {
        salary = s;
    }

    // Virtual function
    virtual double calculateBonus() {
        return 0;
    }
};

// Derived class Manager
class Manager : public Employee {
public:
    Manager(double s) : Employee(s) {}

    double calculateBonus() override {
        return salary * 0.20;   // 20% bonus
    }
};

// Derived class Developer
class Developer : public Employee {
public:
    Developer(double s) : Employee(s) {}

    double calculateBonus() override {
        return salary * 0.10;   // 10% bonus
    }
};

int main() {

    Manager manager(50000);
    Developer developer(50000);

    // Base class pointer
    Employee* emp;

    // Runtime polymorphism
    emp = &manager;
    cout << "Manager Bonus: " << emp->calculateBonus() << endl;

    emp = &developer;
    cout << "Developer Bonus: " << emp->calculateBonus() << endl;

    return 0;
}