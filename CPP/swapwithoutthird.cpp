#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the Two number:\n";
    cin>>a>>b;
    cout<<"Before swapping:\n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping:\n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
    return 0;
}