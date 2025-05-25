#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
    int iSize;
    T *Arr;

    ArrayX(int value);
    void accept();
    void display();
    ~ArrayX();
};
    template<class T>
    ArrayX<T>::ArrayX(int value)
    {
        this->iSize=value;
        this->Arr=new T[iSize];
    }
    template<class T>
    void ArrayX<T>::accept()
    {
        cout<<"enter the elements "<<endl;
        for(int i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }
    template<class T>
    void ArrayX<T>:: display()
    {
        cout<<"entered elements are :"<<endl;
        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }
    template<class T>
    ArrayX<T>::~ArrayX()
    {
        delete []Arr;
    }


int main()
{
    ArrayX<double> *obj =new ArrayX<double>(5);

    obj->accept();
    obj->display();

    return 0;
}