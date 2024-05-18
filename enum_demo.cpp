#include<iostream>

using namespace std;

enum eyeType{brown=1,grey,black};

int main()
{
    int num;
    cout<<"Enter number";
    cin>>num;
    eyeType e=(eyeType)num;
    cout<<e<<endl; //output: enter number i.e num

    switch(e)
    {
        case brown : cout<<"I am brown"; break;
        case grey : cout<<"I am greay"; break;
        case black :cout<< "I am black"; break;

    }

    return 0;
}