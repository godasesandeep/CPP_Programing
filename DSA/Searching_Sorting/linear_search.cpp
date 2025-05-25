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
    bool lSearch(T ele);
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

    template<class T>
    bool ArrayX<T>::lSearch(T ele)
    {
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]==ele)
            {
                return true;
            }
        }
        return false;
    }


int main()
{
    bool bRet=false;
    ArrayX<int> *obj =new ArrayX<int>(5);

    obj->accept();
    obj->display();

    bRet = obj->lSearch(70);
    cout<<bRet<<endl;
    if(bRet==true)
    {
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"No element present"<<endl;
    }

    return 0;
}