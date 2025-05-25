#include<iostream>

using namespace std;

int StrLen(char arr[])
{
    static int i =0;
    if(*arr != '\0')
    {
        if(*arr>='A'&& *arr<='Z')
        {
        i++;
        }
        arr++;
        StrLen(arr);
    }
    return i;
}

int main()
{
    cout<<"Enter the String :"<<endl;
    char  cValue[30];
    cin.getline(cValue,30);
    int iRet= StrLen(cValue);
    cout<<"Number of Characters are :"<<iRet<<endl;
    return 0;
}