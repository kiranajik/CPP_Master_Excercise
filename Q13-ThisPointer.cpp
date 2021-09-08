#include<iostream>
using namespace std;

class Test
{
    int x;
    public:
        void set_x(int x)
        {
            this->x=x;
        }
        void print()
        {
            cout<<"x = "<<x;
        }
};

int main()
{
    Test obj;
    int x=20;
    system("cls");
    cout<<"Using this pointer\n\n";
    obj.set_x(x);
    obj.print();
    return 0;
}



