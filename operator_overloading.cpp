#include<iostream>

using namespace std;

class demo
{
    public:
        int a,b;
        demo(int i, int j)
        {
            a=i;
            b=j;
        }

};

demo operator + (demo op1 ,demo op2)
{
    cout<<"Inside the operator overloading function \n";
    return demo(op1.a+op2.a,op1.b+op2.b);
}

int main()
{
    demo obj1(9,10);
    demo obj2(11,21);
    demo ans(0,0);

    ans=obj1 + obj2;

    cout<<ans.a<<"\t"<<ans.b<<endl;
}