#include<iostream>
#include<string>

using namespace std;

class Student
{
    private:
    string name;
    int rollno;
    float marks;

    public:
    void in()
    {
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Roll name:"<<endl;
        cin>>rollno;
        cout<<"Enter Marks:";
        cin>>marks;
    }
    void out()
    {
        cout<<"Student details:";
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};

int main()
{
    Student s;
    s.in();
    s.out();

    return 0;
}
 