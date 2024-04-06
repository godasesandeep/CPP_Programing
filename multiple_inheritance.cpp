#include<iostream>

using namespace std;

class Demo
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

class Hello
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

class Display :public Demo,public Hello
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

int main()
{

    Display dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    cout<<dobj.a<<endl;
    cout<<dobj.b<<endl;
    cout<<dobj.c<<endl;


    return 0;
}