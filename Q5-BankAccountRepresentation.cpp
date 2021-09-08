#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class bank
{
    public:
        char name[25],acno[15],actype,f;
        float balance,dp,wd;
        bank()
        {
            f='n';
            balance=0.0;
        }
        void initialize()
        {
            f='y';
            cout<<"\n    UNION BANK OF INDIA";
            cout<<"\n******************************";
            getchar();
            cout<<"\n Name: ";
            gets(name);
            cout<<" Account No: ";
            cin>>acno;
            cout<<" Account Type: ";
            cin>>actype;
            cout<<"******************************";
            cout<<"\n ACCOUNT CREATION SUCCESFULL";
            cout<<"\n******************************";
        }
        void deposit()
        {
            cout<<" Account Holder Name: ";
            puts(name);
            cout<<" Account Type (S/B): "<<actype;
            cout<<"\n Account Balance: "<<balance;
            cout<<"\n Enter the amount to deposit: ";
            cin>>dp;
            balance=balance+dp;
            cout<<" Current Account Balance: "<<balance;
            cout<<"\n******************************";
            cout<<"\n AMOUNT DEPOSITED SUCCESFULLY";
            cout<<"\n******************************";
        }
        void withdraw()
        {
            cout<<" Account Holder Name: ";
            puts(name);
            cout<<" Account Type (S/B): "<<actype;
            cout<<"\n Account Balance: "<<balance;
            cout<<"\n Enter the amount to withdraw: ";
            cin>>wd;
            if(balance-wd>1000)
            {
                balance=balance-wd;
                cout<<" Current Account Balance: "<<balance;
                cout<<"\n******************************";
                cout<<"\n AMOUNT WITHDRAWED SUCCESFULLY";
                cout<<"\n******************************";
            }
            else
            {
                cout<<"\n******************************";
                cout<<"\n     INSUFFICIENT BALANCE";
                cout<<"\n******************************";
            }
        }
        void display()
        {
            cout<<"\n******************************";
            cout<<"\n Name: ";
            puts(name);
            cout<<" Account Number: "<<acno;
            cout<<"\n Account Type (S/B): "<<actype;
            cout<<"\n Account Balance: "<<balance;
            cout<<"\n******************************";
        }
};

int main()
{
    int i,opt;
    bank b[10];
    char ch;
    char an[15];
    do
    {
        system("cls");
        cout<<"\n     UNION BANK OF INDIA";
        cout<<"\n******************************";
        cout<<"\n 1. New Account";
        cout<<"\n 2. Deposit";
        cout<<"\n 3. Withdraw";
        cout<<"\n 4. Display";
        cout<<"\n******************************";
        cout<<"\n Enter an option: ";
        cin>>opt;
        switch(opt)
        {
            case 1:
                system("cls");
                for ( i = 0; i < 10; i++)
                {
                    if(b[i].f='n')
                        break;
                }
                if(i<10)
                    b[i].initialize();
                break;
            case 2:
                system("cls");
                cout<<"\n     UNION BANK OF INDIA";
                cout<<"\n******************************";
                cout<<"\n Enter your Account No: ";
                cin>>an;
                for ( i = 0; i < 10; i++)
                {
                    if(strcmp(b[i].acno,an)==0)
                        break;
                }
                if(i<10)
                    b[i].deposit();
                else if(i==10)
                {
                    cout<<"\n******************************";
                    cout<<"\n No customer with the entered details";
                    cout<<"\n******************************";
                }
                break;
            case 3:
                system("cls");
                cout<<"\n     UNION BANK OF INDIA";
                cout<<"\n******************************";
                cout<<"\n Enter your Account No: ";
                cin>>an;
                for (i = 0; i < 10; i++)
                {
                    if(strcmp(b[i].acno,an)==0)
                        break;
                }
                if(i<10)
                    b[i].withdraw();
                else if(i==10)
                {
                    cout<<"\n******************************";
                    cout<<"\n No customer with the given details";
                    cout<<"\n******************************";
                }
                break;
            case 4:
                system("cls");
                cout<<"\n     UNION BANK OF INDIA";
                for (i = 0; i < 10; i++)
                {
                    if(b[i].f=='y')
                        b[i].display();
                }
                
                break;
        }
        cout<<"\n Do you want to continue (y/n): ";
        cin>>ch;
    } while (ch=='y');
    return 0;
}



