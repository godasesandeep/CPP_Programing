#include<iostream>

using namespace std;

class demo
{
    public:
    int a,b;

    demo(int i=10, int j=20)
    {
        a=i;
        b=j;
    }
};

int main()
{
    demo obj1;
    demo obj2(11);
    demo obj3(11,21);
    return 0;
}