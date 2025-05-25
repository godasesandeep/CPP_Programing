#include<iostream>

using namespace std;

int NumDigit(int No)
{
    static int count=0;
    if(No!=0)
    {
    count++;
    No=No/10;
    NumDigit(No);
    }
    return count;
}

int main()
{
    cout<<"Enter the number :"<<endl;
    int iValue;
    cin>>iValue;
    int iRet=NumDigit(iValue);
    cout<<"Number of digits are :"<<iRet<<endl;
    return 0;
}