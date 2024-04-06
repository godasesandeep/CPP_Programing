#include<iostream>

using namespace std;

class hello
{
    public:
        void fun();
        void gun();
        
};

class demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;

    public:
        demo()
        {
            i=9;
            j=10;
            k=11;
        }
        friend class hello;
};
   
void hello::fun()
    {
        demo obj;
        cout<<obj.i<<endl;
        cout<<obj.j<<endl;
        cout<<obj.k<<endl;
    }

void hello::gun()
    {
        demo obj;
        cout<<obj.i<<endl;
        cout<<obj.j<<endl;
        cout<<obj.k<<endl;
    }

int main()
{
    hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}