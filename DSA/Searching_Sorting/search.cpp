#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int iSize;
    int *Arr;

    ArrayX(int value)
    {
        this->iSize=value;
        this->Arr=new int[iSize];
    }

    void accept()
    {
        cout<<"enter the elements "<<endl;
        for(int i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }

    void display()
    {
        cout<<"entered elements are :"<<endl;
        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }

    ~ArrayX()
    {
        delete []Arr;
    }
};

int main()
{
    ArrayX *obj =new ArrayX(5);

    obj->accept();
    obj->display();

    return 0;
}