#include<iostream>
using namespace std;

class ID
{
    int a,b;
    public:
            void accept()
            {
                cout<<"Enter Two Numbers: ";
                cin>>a>>b;
            }
            void operator --()
            {
                a--;
                b--;
            }
            void operator ++()
            {
                a++;
                b++;
            }
            void display()
            {
                cout<<"\n A: "<<a<<"\n B: "<<b;
            }
};

int main()
{
    ID id;
    system("cls");
    id.accept();

    --id;
    cout<<"\nAfter Decrementing";
    id.display();

    ++id;
    ++id;
    cout<<"\n\nAfter Incrementing";
    id.display();

    return 0;
}


