#include<iostream>
using namespace std;
class Box
{
    int length,breadth,height;
    public:
    Box()
    {
        length=1;
        breadth=1;
        height=1;
        cout<<"Default constructor called"<<endl;
    }
    Box(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
        cout<<"Parameterized constructor called"<<endl;
    }
    Box(Box &b)
    {
        length=b.length;
        breadth=b.breadth;
        height=b.height;
        cout<<"Copy constructor called"<<endl;
    }
    void display()
    {
        cout<<"Length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
        cout<<"Height:"<<height<<endl;
        cout<<"Volume:"<<length*breadth*height<<endl;
    }
    ~Box()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Box b1;
    b1.display();
    Box b2(10,20,30);
    b2.display();
    Box b3=b2;
    b3.display();
    return 0;
}