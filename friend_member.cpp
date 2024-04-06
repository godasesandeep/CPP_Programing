#include<iostream>

using namespace std;

class hello
{
    public:
        void fun();
        
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
        friend void hello::fun();
};
   
void hello::fun()
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
    return 0;
}