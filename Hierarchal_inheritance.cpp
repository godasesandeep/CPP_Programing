#include<iostream>

using namespace std;

class Display 
{
    public:
        int c;
    Display()
    {
        cout<<"Inside Display constructor"<<endl;
        c=11;
    }
    ~Display()
    {
        cout<<"Inside Display distructor"<<endl;
        
    }
    void sun()
    {
        cout<<"Inside sun of Display"<<endl;
    }
};

class Demo :public Display
{
    public:
        int a;
    Demo()
    {
        cout<<"inside the Demo constructor"<<endl;
        a=9;
    }
    ~Demo()
    {
        cout<<"inside the Demo Distructor"<<endl;
        
    }
    void fun()
    {
        cout<<"Inside fun of Demo"<<endl;
    }
};

class Hello :public Display
{
    public:
        int b;

    Hello()
    {
        cout<<"Inside the Hello Constructor"<<endl;
        b=10;
    }
    ~Hello()
    {
        cout<<"Inside the Hello distructor"<<endl;
        
    }
    void gun()
    {
        cout<<"Inside gun of Hello"<<endl;
    }
};



int main()
{

    Demo dobj; //Constructor of Display -->Demo
    Hello hobj; //Constructor of Display --> Helllo

    dobj.fun(); //Inside Fun
    dobj.sun(); //Inside sun

    hobj.gun(); //Inside gun
    hobj.sun(); //Inside sun

    cout<<dobj.a<<endl; //9
    cout<<dobj.c<<endl; //11

    cout<<hobj.b<<endl; //10
    cout<<hobj.c<<endl; //11
//distructor of hello -->Display
//distructor of Demo -->Display

    return 0;
}