#include<iostream>

using namespace std;

void RecursiveDisplay(int No)
{

    if(No>0)
    {
    cout<<No<<endl;
    No--;
    RecursiveDisplay(No);
    }
}

int main()
{
    cout<<"Enter the number :"<<endl;
    int iValue;
    cin>>iValue;
    RecursiveDisplay(iValue);
    return 0;
}