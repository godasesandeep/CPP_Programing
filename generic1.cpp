#include<iostream>

using namespace std;

template<class T>
T addition(T no1, T no2)
{
    T ans;
    ans =no1+no2;
    return ans;
}

template<class T>
T Max(T no1 ,T no2)
{
    if(no1>no2) 
    {return no1;}
    else
    {return no2;}

}

int main()
{
    int a=11,b=21,ans2=0,ans3=0;
    ans2 = addition(a,b);
    cout<<"Addition is : "<<ans2<<endl;
    
    ans3 = Max(a,b);
    cout<<"Largest number is "<<ans2<<endl;

    

    float x=90.78f ,y=60.99f,ans1=0.0f;
    ans1 = addition(x,y);
    cout<<"Addition is : "<<ans1<<endl;
    ans1=Max(x,y);
    cout<<"Largest number is "<<ans1<<endl;
    
    return 0;
}