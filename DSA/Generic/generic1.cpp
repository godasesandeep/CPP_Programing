#include<iostream>

using namespace std;

void swap(char &a ,char &b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
}

int main()
{
    char val1='A',val2='S';
    cout<<"value 1 is "<<val1<<endl;
    cout<<"value 2 is "<<val2<<endl;

    swap(val1,val2);

    cout<<"After swap "<<endl;
    cout<<"value 1 is "<<val1<<endl;
    cout<<"value 2 is "<<val2<<endl;
}