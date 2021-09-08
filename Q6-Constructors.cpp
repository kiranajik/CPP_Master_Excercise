#include <iostream>
using namespace std;

class Point 
{
private:
    int x, y;
public:

    //Default Constructor
    Point()
    {
        cout<<"\n Default Constructor called";
        x=10;
        y=20;
    }

    // Parameterized Constructor
    Point(int x1,int y1)
    {
        cout<<"\n\n Parameterized Constructor called";
        x=x1;
        y=y1;
    }

    // Copy Constructor
    Point(Point &p)
    {
        cout<<"\n\n Copy Constructor called";
        x=p.x;
        y=p.y;
    }

    void Display()
    {
        cout<<"\nValue of x : "<<x;
        cout<<"\nValue of y : "<<y;
    }
};

int main()
{
    system("cls");
    Point p1;
    p1.Display();
    
    Point p2(15,25);
    p2.Display();

    Point p3(50,100);
    Point p4(p3);
    p3.Display();
    return 0;

}