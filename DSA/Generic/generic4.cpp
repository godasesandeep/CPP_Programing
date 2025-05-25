#include<iostream>

using namespace std;

template <class T>
T Addition(T no1,T no2)
{
    T ans;
    ans =no1+no2;
    return ans;
}

int main()
{
    int iVal1=10, iVal2=11;
    int iRet=0;

    iRet=Addition(iVal1,iVal2);
    cout<<"Addition of intiger is : "<<iRet<<endl;
}