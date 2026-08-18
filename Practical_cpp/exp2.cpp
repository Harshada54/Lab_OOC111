#include<iostream>
#include<string>

using namespace std;
 void in();
class Student
{
    private:
    string name;
    int rollno;
    float marks;

    //public:
    void in()
    {
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Roll name:"<<endl;
        cin>>rollno;
        cout<<"Enter Marks:";
        cin>>marks;
    }
    public:
    void out()
    {
        in();
        cout<<"Student details:";
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};

int main()
{
    Student s;
    //s.in();
    in();
    s.out();

    return 0;
}
void in()
{
    cout<<"calling a method outside the class\n";
}
 