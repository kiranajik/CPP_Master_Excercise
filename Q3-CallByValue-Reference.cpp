#include<iostream>
#include<stdio.h>
using namespace std;

//Call by Value
void swapcv(int n1,int n2)
{
 int tmp;
 tmp=n1;
 n1=n2;
 n2=tmp;
 cout<<"\nValues after Swapping";
 cout<<"\n First Number: "<<n1<<"\n Second Number: "<<n2;
}

//Call by Reference
void swapcr(int &nm1,int &nm2)
{
    int temp;
    temp=nm1;
    nm1=nm2;
    nm2=temp;
    cout<<"\nValues after Swapping";
    cout<<"\n First Number: "<<nm1<<"\n Second Number: "<<nm2;
}

int main()
{
    int num1,num2,opt;
    char ch;
    system("cls");
    do
    {
        cout<<"\nEnter two numbers: ";
        cin>>num1>>num2;
        cout<<"Swap using:";
        cout<<"\n  1.Call by Vale";
        cout<<"\n  2.Call by Reference";
        cout<<"\nEnter  an option: ";
        cin>>opt;
        if(opt==1)
        {
            cout<<"\nValues before Swapping";
            cout<<"\n First Number: "<<num1<<"\n Second Number: "<<num2;
            swapcv(num1,num2);
        }
        else if(opt==2)
        {
            cout<<"\nValues before Swapping";
            cout<<"\n First Number: "<<num1<<"\n Second Number: "<<num2;
            swapcr(num1,num2);
        }
        else
        {
            cout<<"\nInvalid Option";
        }
        cout<<"\nDo You want to continue(y/n): ";
        cin>>ch;
 } while (ch=='y');
 return 0;
}



