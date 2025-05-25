#include<iostream>

using namespace std;

void DisplayDigit(int No)
{
    int iDigit=0;
    if(No!=0)
    {
    iDigit=No%10;
    cout<<iDigit<<endl;
    No=No/10;
    DisplayDigit(No);
    }
}

int main()
{
    cout<<"Enter the number :"<<endl;
    int iValue;
    cin>>iValue;
    DisplayDigit(iValue);
    return 0;
}