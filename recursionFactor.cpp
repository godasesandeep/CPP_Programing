#include<iostream>

using namespace std;

void Factor(int No)
{
    static int i=1;
    if((No/2)>=i)
    {
    if(No%i==0)
    {
        cout<<i<<endl;
    }
    i++;
    Factor(No);
    }
    
}

int main()
{
    cout<<"Enter the number :"<<endl;
    int iValue;
    cin>>iValue;
    Factor(iValue);
    //cout<<"Number of digits are :"<<iRet<<endl;
    return 0;
}