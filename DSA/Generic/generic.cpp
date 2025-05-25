#include<iostream>

using namespace std;

void swap(int &a ,int &b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
}

int main()
{
    int val1=10,val2=20;
    cout<<"value 1 is "<<val1<<endl;
    cout<<"value 2 is "<<val2<<endl;

    swap(val1,val2);

    cout<<"After swap "<<endl;
    cout<<"value 1 is "<<val1<<endl;
    cout<<"value 2 is "<<val2<<endl;
}