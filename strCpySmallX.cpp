#include<iostream>

using namespace std;

void strCpySmallX(char *dest,char *src)
{
    while(*src!='\0')
    {
        if(*src>='a'&& *src<='z')
        {
        *dest = * src;
        dest++;
        }
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
    strCpySmallX(Brr,Arr);

    cout<<"Copied String is :"<<Brr<<endl;
}