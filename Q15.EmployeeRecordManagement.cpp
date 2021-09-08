#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;

void write_emp();
void read_emp(int);
void display_all();

class employee
{
    public:
        int empno;
        float bsal;
        char emp_name[50];

        void create();
        void show();
        int return_empno();
};

void employee :: create()
{
    cout<<"\n       Enter Employee Details";
    cout<<"\n************************************";
    cout<<"\nEmployee No: ";
    cin>>empno;
    cout<<"Employee name: ";
    cin.ignore();
    cin.getline(emp_name,50);
    cout<<"Basic salary: ";
    cin>>bsal;
    cout<<"************************************";
}
void employee :: show()
{
    cout<<"\n************************************";
    cout<<"\nEmployee No    : "<<empno;
    cout<<"\nEmployee Name  : "<<emp_name;
    cout<<"\nBasic Salary   : "<<bsal;
    cout<<"\n************************************";
}
int employee :: return_empno()
{
    return empno;
}

void write_emp()
{
    employee E;
    ofstream outfile;
    outfile.open("employee.dat",ios::binary|ios::app);
    E.create();
    outfile.write((char*)&E, sizeof(E));
    outfile.close();
    cout<<"\n     Record Added Succesfully";
}
void read_emp(int n)
{
    employee E;
    bool flag=false;
    ifstream infile;
    infile.open("employee.dat",ios::binary);
    if(!infile)
    {
        cout<<"\nFile could not be open !! Press any key...";   
        return;
    }
    while(infile.read((char*)&E, sizeof(E)))
    {
        if(E.return_empno()==n)
        {
            E.show();
            flag=true;
        }
    }
    infile.close();
    if(flag==false)
        cout<<"\nEmployee doesn't exist !!";
}
void display_all()
{
    system("cls");
    employee E;
    ifstream infile;
    infile.open("employee.dat",ios::binary);
    if(!infile)
    {
        cout<<"\nFile could not be open !! Press any key...";   
        return;
    }
    cout<<"\n************************************";
    cout<<"\n\t  ALL EMPLOYEE LIST";
    while(infile.read((char *)&E, sizeof(E)))
    {
        E.show();
    }
    infile.close();
}

int main()
{
    char ch;
    int num,opt;

    do
    {
        system("cls");
        cout<<"\n************************************";
        cout<<"\n     EMPLOYEE MANAGEMENT SYSTEM";
        cout<<"\n************************************";
        cout<<"\n 1. New Employee";
        cout<<"\n 2. Display Employee";
        cout<<"\n 3. List all Employees";
        cout<<"\n 4. EXIT";
        cout<<"\n************************************";
        cout<<"\nEnter an option: ";
        cin>>opt;

        switch (opt)
        {
        case 1:
            system("cls");
            cout<<"\n************************************";
            cout<<"\n\t   NEW EMPLOYEE";
            cout<<"\n************************************";
            write_emp();
            break;
        case 2:
            system("cls");
            cout<<"\n************************************";
            cout<<"\n\t  DISPLAY EMPLOYEE";
            cout<<"\n************************************";
            cout<<"\n Enter Employee No: ";
            cin>>num;
            read_emp(num);
            break;
        case 3:
            system("cls");
            display_all();
            break;
        case 4:
            exit(0);
        default:
            cout<<"\n!!! INVALID OPTION !!!";
            break;
        }
        cout<<"\nDo you want to continue: ";
        cin>>ch;
    } while (ch=='y');
    
    return 0;
}


