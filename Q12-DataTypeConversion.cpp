//Class to basic
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class Time
{
    int hrs,min;
    public:
        Time(int h,int m)
        {
            hrs=h;
            min=m;
        }
        Time()
        {
            cout<<"\nTime's object created";
        }
        int getMinutes()
        {
            int tot_min=(hrs*60)+min;
            return tot_min;
        }
        void display()
        {
            cout<<"\nHours: "<<hrs;
            cout<<"\nMinutes: "<<min;
        }
};
class Minute
{
    int min;
    public:
        Minute()
        {
            min=0;
        }
        void operator =(Time T)
        {
            min=T.getMinutes();
        }
        void display()
        {
            cout<<"\nTotal Minutes: "<<min;
        }
};

int main()
{
    system("cls");
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;
    t1.display();
    m1.display();
    return 0;
}


