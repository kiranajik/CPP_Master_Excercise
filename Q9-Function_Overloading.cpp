#include<iostream>
#include<conio.h>
using namespace std;
const float pi=3.14;
float area(float n,float b,float h)
{
    float ar;
    ar=n*h*b;
    return ar;
}
float area(float r)
{
    float ar;
    ar=pi*r*r;
    return ar;
}
float area(float l,float b)
{
    float ar;
    ar=l*b;
    return ar;
}
int area(int s)
{
    int ar;
    ar=s*s;
    return ar;
}

int main()
{
    float b,h,r,l;
    int s;
    float result;
    system("cls");
    cout<<"\nEnter the base and height of the Triangle: \n";
    cin>>b>>h;
    result=area(0.5,b,h);
    cout<<"Area of Triangle: "<<result;   
    cout<<"\nEnter the radius of the circle:\n";
    cin>>r;
    result=area(r);
    cout<<"Area of Circle: "<<result;    
    cout<<"\nEnter the length and breadth of the Rectangle: \n";
    cin>>l>>b;
    result=area(l,b);
    cout<<"Area of Rectangle: "<<result;
    cout<<"\nEnter the length of the side of the Square: \n";
    cin>>s;
    result=area(s);
    cout<<"Area of Square: "<<result;
    return 0;
}



