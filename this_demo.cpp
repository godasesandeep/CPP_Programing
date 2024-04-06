#include<iostream>

using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;

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
};
int main()
{
    int ret;
    Arithematic obj1(9,10);
    ret=obj1.addition();
    cout<<"Value of addition : "<<ret<<endl;
    return 0;
}