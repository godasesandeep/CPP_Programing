#include<iostream>

using namespace std;

int Add(int arr[],int size)
{
    int sum=0;
    int i=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int iLen =0;
    int *ptr=NULL;

    cout<<"enter number of element : "<<endl;
    cin>>iLen;

    ptr= new int[iLen];

    cout<<"enter the element :"<<endl;

    for(int i=0;i<iLen;i++)
    {
        cin>>ptr[i];

    }

    int iRet =Add(ptr,iLen);
    cout<<"Addition is "<<iRet<<endl;
    delete []ptr;

    return 0;
}