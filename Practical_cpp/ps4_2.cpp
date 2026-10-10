
#include <iostream>
using namespace std;

class Patient
{
    int patientId;
    string patientName;
    int age;
    float consultationFee;

public:
    void registerPatient()
    {
        cout << "Enter Patient ID: ";
        cin >> patientId;

        cout << "Enter Patient Name: ";
        cin >> patientName;

        cout << "Enter Age: ";
        cin >> age;
    }

    void calculateCharges()
    {
        consultationFee = 500;

        cout << "Consultation Charges: Rs. "
             << consultationFee << endl;
    }

    void display()
    {
        cout << "\n--- Patient Information ---" << endl;
        cout << "Patient ID: " << patientId << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Age: " << age << endl;
        cout << "Consultation Fee: Rs. "
             << consultationFee << endl;
    }
};

int main()
{
    Patient p;

    p.registerPatient();
    p.calculateCharges();
    p.display();

    return 0;
}