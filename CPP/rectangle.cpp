#include<iostream>
using namespace std;

int main()
{
    int l,b,area,perimeter;
    cout<<"Enter the length and breadth of rectangle:\n";
    cin>>l>>b;
    area=l*b;
    perimeter=2*(l+b);
    cout<<"Area of rectangle:"<<area<<endl;
    cout<<"Perimeter of rectangle:"<<perimeter<<endl;
    return 0;
}