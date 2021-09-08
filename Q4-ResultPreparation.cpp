#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class student
{
    char rno[10];
    char name[10];
    float m1,m2,m3;
    float avg;
    char grade;
    public:
    void read_data()
    {
        system("cls");
        cout<<"\n\n  Enter the Student Roll Number :";
        cin>>rno;
        cout<<"  Enter the Student Name:";
        cin>>name;
        cout<<"\n  Enter mark 1: ";
        cin>>m1;
        cout<<"  Enter mark 2: ";
        cin>>m2;
        cout<<"  Enter mark 3: ";
        cin>>m3;
    }
    void compute()
    {
        avg=(m1+m2+m3)/3;
        if(avg<50)
        grade='F';
        else if(avg>=50 && avg<60)
        grade='D';
        else if(avg>=60 && avg<70)
        grade='C';
        else if(avg>=70 && avg<90)
        grade='B';
        else if(avg>=90 && avg<100)
        grade='A';
    }
    void display()
    {
        cout<<"\n*************************************************";
        cout<<"\n  "<<name<<" Details";
        cout<<"\n*************************************************";
        cout<<"\n  Rollno is "<<rno;
        cout<<"\n  Name is "<<name;
        cout<<"\n  Mark1 is "<<m1;
        cout<<"\n  Mark2 is "<<m2;
        cout<<"\n  Mark3 is "<<m3;
        cout<<"\n  Percentage marks is "<<avg;
        cout<<"\n  Grade is : "<<grade;
        cout<<"\n*************************************************\n";
    }
};

int main()
{
    student s[50];
    int n,i,opt;
    char ch;
    do
    {
    
        system("cls");
        cout<<"\n\t\tStudent's Result";
        cout<<"\n*************************************************";
        cout<<"\n  1)Result Preparation";
        cout<<"\n  2)Result Display";
        cout<<"\n  3)Exit";
        cout<<"\n*************************************************";
        cout<<"\nEnter an option: ";
        cin>>opt;
        switch(opt)
        {
        case 1:
            cout<<"\n  Enter the number of Students:";
            cin>>n;
            for(i=0;i<n;i++)
                s[i].read_data();
            for(i=0;i<n;i++)
                s[i].compute();
            break;
        case 2:
            system("cls");    
            for(i=0;i<n;i++)
            s[i].display();
            break;
        case 3:
            exit(0);
        default:
            cout<<"\nINVALID OPTION";
            break;
        }
        cout<<"Do you want to continue: ";
        cin>>ch;
    }while(ch=='y');

    return 0;
}




