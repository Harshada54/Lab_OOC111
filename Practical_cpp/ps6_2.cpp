#include<iostream>
using namespace std;
class Employee
{
    public:
    void calculateSalary(float basic)
    {
        cout<<"salary:"<<basic<<endl;   
    }
    void calculateSalary(float basic,float hra)
    {
        cout<<"salary:"<<basic+hra<<endl;   
    }
    void calculateSalary(float basic,float hra,float da)
    {
        cout<<"salary:"<<basic+hra+da<<endl;   
    }
};
int main()
{
    Employee e;
    e.calculateSalary(10000);
    e.calculateSalary(10000,2000);
    e.calculateSalary(10000,2000,3000);
    return 0;
}
