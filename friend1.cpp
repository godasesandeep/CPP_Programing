#include<iostream>

using namespace std;

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
        friend void fun();
};

void fun()
{
    demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    cout<<obj.k<<endl;
}

int main()
{
    fun();
    return 0;
}