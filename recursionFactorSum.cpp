#include<iostream>

using namespace std;

int Factor(int No)
{
    static int i=1;
    static int sum = 0;
    if((No/2)>=i)
    {
    if(No%i==0)
    {
        sum=sum+i;
    }
    i++;
    Factor(No);
    }

    return sum;
    
}

int main()
{
    cout<<"Enter the number :"<<endl;
    int iValue;
    cin>>iValue;
    int iRet=Factor(iValue);
    cout<<"Number of digits are :"<<iRet<<endl;
    return 0;
}