#include<iostream>

using namespace std;

bool strcmpX(char*dest,char*src)
{

    while(*dest!='\0'&&*src!='\0')
    {
        if(*dest==*src)
        {
            dest++;
            src++;
        }
        else
        {
            return false;
        }
    }
    if(*dest=='\0'&& *src=='\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    char Arr[30];
    char Brr[30];

    cout<<"Enter the first string :"<<endl;
    cin.getline(Arr,30);

    cout<<"Enter the Second string :"<<endl;
    cin.getline(Brr,30);

    bool bRet=strcmpX(Arr,Brr);
    if(bRet)
    {
        cout<<"Strings are Same"<<endl;
    }
    else
    {
        cout<<"Strings are different "<<endl;
    }

    return 0;
}