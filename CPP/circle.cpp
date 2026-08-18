#include<iostream>
using namespace std;

int main()
{
    int r,area,circumference;
    cout<<"Enter the radius of circle:\n";
    cin>>r;
    area=3.14*r*r;
    circumference=2*3.14*r;
    cout<<"Area of circle:"<<area<<endl;
    cout<<"Circumference of circle:"<<circumference<<endl;
    return 0;
}