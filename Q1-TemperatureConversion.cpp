#include<iostream> 
#include<conio.h>
using namespace std;
int main() 
{ 
     int choice;
     float temp,ctemp;
     char c; 
     system("cls");
     do
     {
         cout<<"\nTemperature Conversion\nl.Farenheit to celsius.";
         cout<<"\n2.Celsius to Farenheit.\n Enter Your Choice : ";
         cin>>choice;
         if(choice==1)
         {
             cout<<"Enter the temperature in Farenheit : ";
             cin>>temp;
             ctemp=(temp-32)/1.8;
             cout<<"The temperature in Celsius is "<<ctemp;
        } 
         else
        {
             cout<<"Enter the temperature in Celsius : ";
             cin>>temp;
             ctemp=1.8*temp+32;
             cout<<"The temperature in Farenheit is "<<ctemp;
        }
         cout<<"\nDo you want to continue (y/n) : ";
         cin>>c;
    }while(c=='y');
 return 0;
} 
