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
    bool binarySearch(T ele);
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

    template<class T>
    bool ArrayX<T>:: binarySearch(T ele)
    {
        int iStart=0,iEnd=0,iMid=0;
        bool flag=false;

        iStart=0;
        iEnd=iSize-1;

        while(iStart<=iEnd)
        {
            iMid=iStart+((iEnd-iStart)/2);
            if(Arr[iMid]==ele)
            {
                flag =true;
                break;
            }
            else if(ele>Arr[iMid])
            {
               iStart=iMid +1;
            }

            else
            {
                iEnd=iMid-1;
            }
        }    
        return flag;
    }


int main()
{
    bool bRet=false;
    ArrayX<int> *obj =new ArrayX<int>(5);

    obj->accept();
    obj->display();

    //bRet = obj->lSearch(70);
    bRet=obj->binarySearch(70);
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