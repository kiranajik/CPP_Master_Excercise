#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num,choice,i;
    int f=0,s=1,t;
    int temp,arm,d;
    int pal;
    char r;
    system("cls");
    do{
    cout<<"\nMain Operations: ";
    cout<<"\n 1.Generate Febonacci Series";
    cout<<"\n 2.Check Armstrong or Not";
    cout<<"\n 3.Check Palindrome or Not";
    cout<<"\n 4.Enter an Option: ";
    cin>>choice;

    switch(choice)
    {
        case 1: 
                //Febonaci Series
                cout<<"Enter the total number of terms : ";
                cin>>num;
                cout<<"SERIES: \t"<<f<<"\t"<<s;
                for(i=2;i<num;i++)
                {
                    t=f+s;
                    cout<<"\t"<<t;
                    f=s;
                    s=t;
                }
                break;
        case 2:
                //Armstrong Number
                cout<<"Enter a number : ";
                cin >>num;
                temp = num;
                for(arm=0;temp!=0;temp/=10)
                {
                    d = temp%10;
                    arm+=d*d*d;
                }
                if(num==arm)
                    cout<<num<<" is an armstrong number";
                else
                    cout<<num<<" is not an armstrong number";
                break;
        case 3:
                //Palindrome
                cout<<"Enter a number : ";
                cin >>num;
                temp = num;
                for(pal=0;temp!=0;temp/=10)
                {
                    d = temp%10;
                    pal = pal*10+d;
                }
                if(num==pal)
                    cout<<num<<" is a PALINDROME";
                else
                    cout<<num<<" is not an PALINDROME";
                break;
                
        default:
                cout<<"\n INVALID OPTION!";
    }
    cout<<"\n\nDo you want to Continue (y/n) : ";
    cin>>r;
}
while(r=='y' || r=='Y');
return 0;
}

