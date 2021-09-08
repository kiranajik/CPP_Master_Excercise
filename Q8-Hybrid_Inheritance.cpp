#include<iostream>
using namespace std;

class student
{
    public:
        int rollno;
        void get_rollno(int r)
        {
            rollno=r;
        }
        void show_rollno()
        {
            cout<<"\n    Student Result";
            cout<<"\n**********************";
            cout<<"\n Roll No: "<<rollno;
        }
};

class Test : public virtual student
{
    protected:
        float mark1,mark2;
    public:
        void get_marks(float m1,float m2)
        {
            mark1=m1;
            mark2=m2;
        }
        void show_marks()
        {
            cout<<"\n  MARKS OBTAINED\n";
            cout<<" Mark 1 : "<<mark1<<"\n Mark 2 : "<<mark2;
        }
};

class Sports : public virtual student
{
    protected:
        float score;
    public:
        void get_score(float s)
        {
            score=s;
        }
        void show_score()
        {
            cout<<"\n Sports Score : "<<score;
        }
};

class Result : public Test,public Sports
{
    float total;
    public:
        void show()
        {
            total=mark1+mark2+score;
            show_rollno();
            show_marks();
            show_score();
            cout<<"\n**********************";
            cout<<"\n Total Score : "<<total;         
        }
};

int main()
{
    system("cls");
    Result re;
    re.get_rollno(101);
    re.get_marks(60,65);
    re.get_score(6.0);
    re.show();
    return 0;
}



