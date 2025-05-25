#include<iostream>

using namespace std;

int SumDigit(int No)
{
    static int sum=0;
    if(No!=0)
    {
    sum=sum+No%10;
    SumDigit(No/10);
    }
    return sum;
}

int main()
{
    cout<<"Enter the number :"<<endl;
    int iValue;
    cin>>iValue;
    int iRet=SumDigit(iValue);
    cout<<"Number of digits are :"<<iRet<<endl;
    return 0;
}