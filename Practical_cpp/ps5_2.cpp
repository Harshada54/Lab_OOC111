#include<iostream>
using namespace std;
class Employee
{
    int id;
    string name;
    float basic,hra,da,gross;
    public:
    Employee(int i,string n,float b,float h,float d)
    {
       id=i;
       name=n;
       basic=b;
       hra=h;
       da=d;
    }
    void calculateSalary()
    {
        gross=basic+hra+da;
    }
    void display()
    {
        cout<<"ID:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Basic Salary:"<<basic<<endl;
        cout<<"HRA:"<<hra<<endl;
        cout<<"DA:"<<da<<endl;
        cout<<"Gross Salary:"<<gross<<endl;
    }
    ~Employee()
    {
        cout<<"Employee object destroyed"<<endl;
    }
   
};
int main()
{
    Employee e1(1,"John",10000,2000,3000);
    e1.calculateSalary();
    e1.display();
    return 0;
}