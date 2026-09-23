#include<iostream>
#include<stdio.h>
using namespace std;
class Student
{
    int rollno;
    char name[20];
    public:
    void getdata()
    {
        cout<<"Enter roll number:"<<endl;
        cin>>rollno;    
        cout<<"Enter name:"<<endl;
        cin>>name;
    }
    void putdata()
    {
        cout<<"--------------------"<<endl;
        cout<<"\n****Student Marklist****"<<endl;
        cout<<"Roll number:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
class StudentExam : public Student //Class StudentExam derived from Class Student
{
public:
int sub1, sub2, sub3, sub4, sub5, sub6;
float per;
public:
void accept_data()
{
getdata();
cout<<"\n Enter Marks for Subject 1 : ";
cin>>sub1;
cout<<"\n Enter Marks for Subject 2 : ";
cin>>sub2;
cout<<"\n Enter Marks for Subject 3 : ";
cin>>sub3;
cout<<"\n Enter Marks for Subject 4 : ";
cin>>sub4;
cout<<"\n Enter Marks for Subject 5 : ";
cin>>sub5;
cout<<"\n Enter Marks for Subject 6 : ";
cin>>sub6;
}
void display_data()
{
putdata();
cout<<"\n Marks of Subject 1 : "<<sub1;
cout<<"\n Marks of Subject 2 : "<<sub2;
cout<<"\n Marks of Subject 3 : "<<sub3;
cout<<"\n Marks of Subject 4 : "<<sub4;
cout<<"\n Marks of Subject 5 : "<<sub5;
cout<<"\n Marks of Subject 6 : "<<sub6;
}
};
class StudentResult : public StudentExam //Class StudentResult derived from Class
{
public:
void calculate ()
{
per = (sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
cout<<"\n\n Total Percentage : "<<per;
cout<<"\n ----------------------------------------- \n";
}
};
int main()
{
StudentResult str; //Object 'str' is created of derived Class StudentResult
int cnt, i;
cout<<"\n Enter No. of Students You Want? : ";
cin>>cnt;
for(i=0; i<cnt; i++)
{
str.accept_data();
str.display_data();
str.calculate();
}
return 0;
}