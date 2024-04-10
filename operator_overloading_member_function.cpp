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
        //demo operator+(demo * const this,demo op2)
        demo operator + (demo op2)
        {
            cout<<"Inside the operator overloading function \n";
            //return demo(a+op2.a,b+op2.b);
            return demo(this->a+op2.a,this->b+op2.b);
        }

};

int main()
{
    demo obj1(9,10);
    demo obj2(11,21);
    demo ans(0,0);

    ans=obj1 + obj2; //obj1.+(obj2); -->+(&obj1,obj2) as a member 

    //ans =obj1+obj2 ; // +(obj1+obj2);

    cout<<ans.a<<"\t"<<ans.b<<endl;
}