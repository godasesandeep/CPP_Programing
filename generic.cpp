#include<iostream>

using namespace std;

int addition(int no1, int no2)
{
    int ans;
    ans =no1+no2;
    return ans;
}

int max(int no1 ,int no2)
{
    if(no1>no2) 
    {return no1;}
    else
    {return no2;}

}

int main()
{
    int a=11,b=21,ans=0;
    ans = addition(a,b);
    cout<<"Addition is : "<<ans<<endl;
    ans=max(a,b);
    cout<<"Largest number is "<<ans<<endl;
    return 0;
}