#include<iostream>
using namespace std;

int main()
{
    int y;
    cout<<"Enter the year:\n";
    cin>>y;
    if(y%4==0)
    {
        cout<<"The year is Leap year"<<endl;
    }
    else
    {
        cout<<"The year is not Leap year"<<endl;
    }
    return 0;
}