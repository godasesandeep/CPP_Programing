#include<iostream>

using namespace std;

int Add(int No)
{
    static int sum;  //or static int sum = 0;
    if(No>0)
    {
    sum=sum+No;
    No--;
    Add(No);
    }
    return sum;
}

int main()
{
    cout<<"Enter the number :"<<endl;
    int iValue;
    cin>>iValue;
    int iRet=Add(iValue);
    cout<<"Addition of the numbers upto "<<iValue<<"  is  "<<iRet<<endl;
    return 0;
}