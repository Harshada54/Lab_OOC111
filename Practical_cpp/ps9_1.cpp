#include <iostream> 
using namespace std;
class Vehicle {
 public:
    virtual void start() const = 0;
    virtual void stop() const = 0;
};
class Car : public Vehicle {
 public:
    void start() const override {
        cout << "Car: Key inserted, engine started." <<endl;
    }

    void stop() const override {
        cout << "Car: Brakes applied, engine stopped." <<endl;
    }
};

class Bike : public Vehicle {
 public:
    void start() const override {
        cout << "Bike: Kick started, engine revving." <<endl;
    }
    void stop() const override {
        cout << "Bike: Hand brake pulled, engine stopped." <<endl;
    }
};

int main() {
    Car myCar;
    Bike myBike;
    Vehicle* v1 = &myCar;
    Vehicle* v2 = &myBike;
    cout << "=== Vehicle 1 (Car) ===" <<endl;
    v1->start();
    v1->stop();

    cout << "\n=== Vehicle 2 (Bike) ===" <<endl;
    v2->start();
    v2->stop();

    return 0; 
}