#include<iostream>
using namespace std;

class Time
{
    int hour,minute,second;
    public:
    Time(int h=0, int m=0, int s=0):hour(h),minute(m),second(s){}
    
        Time add(const Time &t)
        {
            int s=second+t.second;
            int m=minute+t.minute;
            int h=hour+t.hour;
            return Time(h,m,s);
        }
        Time subtract(const Time &t)
        {
            int s=second-t.second;
            int m=minute-t.minute;
            int h=hour-t.hour;
            return Time(h,m,s);
        }
    
    void display()
    {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }    
};

int main()
{
    Time t1(10,12,12),t2(13,34,34);
    Time sum=t1.add(t2);
    cout<<"Addition: ";
    sum.display();
    Time diff=t1.subtract(t2);
    cout<<"Subtraction: ";
    diff.display();
    return 0;
}