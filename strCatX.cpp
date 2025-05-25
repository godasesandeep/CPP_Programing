#include<iostream>

using namespace std;

void strCatX(char *dest,char *src)
{
    while(*dest!='\0')
    {
        dest++;
    }
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
    char Brr[30]="Hello ";

    cout<<"Enter your name :"<<endl;
    cin.getline(Arr,30);
    strCatX(Brr,Arr);

    cout<<"Copied String is :"<<Brr<<endl;
}