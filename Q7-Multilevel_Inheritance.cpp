#include<iostream>
using namespace std;

class base
{
    public:
        int x;
        void getchar()
        {
            cout<<"\nEnter the value of x: ";
            cin>>x;
        }
};

class derived1 : public base
{
    public:
        int y;
        void readdata()
        {
            cout<<"Enter the value of y: ";
            cin>>y;
        }
};

class derived2 : public derived1
{
    private:
        int z;
    public:
        void indata()
        {
            cout<<"Enter the value of z: ";
            cin>>z;
        }
        void product()
        {
            cout<<"\nProduct= "<<x*y*z;
        }
};

int main()
{
    system("cls");
    derived2 a;
    a.getchar();
    a.readdata();
    a.indata();
    a.product();
    return 0;
}



