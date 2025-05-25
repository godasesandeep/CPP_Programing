#include<iostream>

using namespace std;

int StrLen(char* arr)
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
    string cValue;
    getline(cin,cValue);
    char *p= &cValue[0];
    int iRet = StrLen(p);
    cout<<"Number of Characters are :"<<iRet<<endl;

    //String Slicing
    for(int i=0;i<4;i++)
    {
        cout<<cValue[i]<<endl;
    }
    return 0;
}