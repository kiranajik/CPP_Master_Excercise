//Class Template & Function template

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

template <class T>
class Calculator
{
 private:
         T num1, num2; 
 public:
        Calculator(T n1,T n2)
        {
         num1=n1;
         num2=n2;   
        }
        void Display()
        {
         cout<<"\n The Numbers are : "<<num1<<" & "<<num2;
         cout<<"\n Sum : "<<num1+num2;
         cout<<"\n Difference : "<<num1-num2;
         cout<<"\n Product : "<<num1*num2;
         cout<<"\n Division : "<<num1/num2<<"\n";
        }
};

template <class D>
D findLarge(D fnum1,D fnum2)
{
  cout<<"\n The Numbers are : "<<fnum1<<" & "<<fnum2;
  cout<<"\n Sum : "<<fnum1+fnum2;
  cout<<"\n Difference : "<<fnum1-fnum2;
  cout<<"\n Product : "<<fnum1*fnum2;
  cout<<"\n Division : "<<fnum1/fnum2<<"\n";
}

int main()
{
  int nm1,nm2,fn1,fn2;
  float m1,m2,fnm1,fnm2;

  system("cls");
  
  cout<<"\nCLASS TEMPLATE\n";
  cout<<"\nEnter two integer values : ";
  cin>>nm1>>nm2;
  Calculator<int> intCal(nm1,nm2);
  cout<<"Int Results:";
  intCal.Display();

  cout<<"\nEnter two float values : ";
  cin>>m1>>m2;
  Calculator<float> fltCal(m1,m2);
  cout<<"Float Result:";
  fltCal.Display();

  cout<<"\nFUNCTION TEMPLATE\n";
  cout<<"\nEnter two integer values : ";
  cin>>fn1>>fn2;
  cout<<"Int Results:";
  findLarge(fn1,fn2);
  
  cout<<"\nEnter two float values : ";
  cin>>fnm1>>fnm2;
  cout<<"Float Result:";
  findLarge(fnm1,fnm2);

  return 0;
}



