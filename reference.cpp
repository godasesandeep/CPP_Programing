#include<iostream>

using namespace std;

int main()
{

    int no=11;

    int &x=no;

    cout<<no<<endl;
    cout<<x<<endl;

    cout<<&no<<endl;
    cout<<&x<<endl;

    return 0;
}