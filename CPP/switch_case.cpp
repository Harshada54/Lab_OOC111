#include<iostream>
using namespace std;

int main()
{
    int ch,a,b;;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout<<"Enter your choice:";
    cin>>ch;

    switch(ch)
    {
        case 1:
            cout<<"Addition:"<<(a+b)<<endl;
            break;
        case 2:
            cout<<"Subtraction:"<<(a-b)<<endl;
            break;
        case 3:
            cout<<"Multiplication:"<<(a*b)<<endl;
            break;
        case 4:
            cout<<"Division:"<<(a/b)<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
    return 0;
}