#include<iostream>

using namespace std;

class Base
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;
    public:
        void Base()
        {
            A=10;B=11;C=7;
        }
        void fun()
        {
            cout<<A<<endl; //A
            cout<<B<<endl; //A
            cout<<C<<endl; //A
        }
};

class Derived :public Base
{
    public:
    void gun()
    {
        cout<<A<<endl; //A
        cout<<B<<endl; //NA
        cout<<C<<endl; //NA
    }
};

int main()
{
Base bobj;
cout<<bobj.A<<endl; //A
cout<<bobj.B<<endl; //NA
cout<<bobj.C<<endl; //NA
    return 0;
}
