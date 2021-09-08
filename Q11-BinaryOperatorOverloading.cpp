#include<iostream>
using namespace std;

class num
{
    private:
        int a,b,c,d;
    public:
        void input();
        num operator +(num);
        void show();;
};
void num::input()
{
    cout<<"Enter the values for a,b,c,d: ";
    cin>>a>>b>>c>>d;
}
void num::show()
{
    cout<<"A="<<a<<"\tB="<<b<<"\tC="<<c;
}
num num::operator +(num t)
{
    num tmp;
    tmp.a=a+t.a;
    tmp.b=b+t.b;
    tmp.c=c+t.c;
    tmp.d=d+t.d;
    return tmp;
}

int main()
{
    system("cls");
    num x,y,z;
    cout<<"Object X\n";
    x.input();
    cout<<"Object Y\n";
    y.input();
    z=x+y;
    cout<<"X:  ";
    x.show();
    cout<<"\nY:  ";
    y.show();
    cout<<"\nX:  ";
    z.show();
    return 0;
}


