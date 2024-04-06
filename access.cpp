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

};


int main()
{

    demo obj;
    cout<<obj.i;
    cout<<obj.j;
    cout<<obj.k;
    return 0;
}