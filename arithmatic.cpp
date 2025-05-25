#include<iostream>

using namespace std;

class Arithmatic
{
    int num1;
    int num2;
    public:
    Arithmatic(int iNo1=0,int iNo2=0)
    {
        num1=iNo1;
        num2=iNo2;
    }

    int addition()
    {
        return num1+num2;
    }
};

int main()
{
    int no1=0,no2=0;
    cout<<"Enter First Number : "<<endl;
    cin>>no1;
    cout<<"Enter Second Number : "<<endl;
    cin>>no2;

    Arithmatic obj(no1,no2);
    cout<<"Addition of number is : "<<obj.addition()<<endl;

    return 0;
}