#include<iostream>
using namespace std;
class Calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
    float add(float a,float b)
    {
        return a+b;
    }
};
int main()
{
    Calculator c;
    cout<<"Addition of 2 integers: "<<c.add(10,20)<<endl;
    cout<<"Addition of 3 integers: "<<c.add(10,20,30)<<endl;
    cout<<"Addition of 2 floats: "<<c.add(10.5f,20.5f)<<endl;
    return 0;
}