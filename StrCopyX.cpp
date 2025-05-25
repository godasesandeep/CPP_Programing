#include<iostream>

using namespace std;

void strCpyX(char *dest,char *src)
{
    while(*src!='\0')
    {
        *dest = * src;
        dest++;
        src++;
    }
    *dest='\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter your name :"<<endl;
    cin.getline(Arr,30);
    strCpyX(Brr,Arr);

    cout<<"Copied String is :"<<Brr<<endl;
}