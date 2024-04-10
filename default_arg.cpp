#include<iostream>

using namespace std;

float area(float radious, float PI=3.14)
{
    float ans=0.0f;
    ans =PI*radious*radious;
    return ans;
}


int main()
{

float ret =0.0f;

ret =area(5.8,7.20);
cout<<"Area is : "<<ret<<endl;

ret =area(5.8);
cout<<"Area is : "<<ret<<endl;

return 0;
}