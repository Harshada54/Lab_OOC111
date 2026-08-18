#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number:\n";
    cin>>n;
    cout<<"Multiplication table of "<<n<<" is:\n";
    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}