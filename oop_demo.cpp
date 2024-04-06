#include<iostream>

using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;

    Arithematic()
    {
        no1=0;
        no2=0;
    }

    Arithematic(int a,int b)
    {
        no1=a;
        no2=b;
    }

    int addition()
    {
        int ans=0;
        ans=no1+no2;
        return ans;
    }

    int substraction()
    {
        int ans=0;
        ans=no1-no2;
        return ans;
    }


};

int main()
{

    int ret,ret1,a,b;

    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    Arithematic obj1(a,b);
    ret=obj1.addition();
    ret1=obj1.substraction();
    cout<<"Value of addition : "<<ret<<endl;
    cout<<"Value of substraction :"<<ret1<<endl;
    return 0;
}