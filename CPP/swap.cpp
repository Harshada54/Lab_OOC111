#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter the two number:\n";
    cin>>a>>b;
    cout<<"Before swapping:\n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping:\n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
    return 0;
}