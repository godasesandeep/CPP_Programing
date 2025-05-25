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
    void bubleSort();
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

    template<class T>
    void ArrayX<T>::bubleSort()
    {
        T temp;
        int i=0, j=0;

        for(i=0;i<iSize-1;i++)
        {
            for(j=0;j<iSize-1-i;j++)
            {
                if(Arr[j]>Arr[j+1])
                {
                    temp=Arr[j];
                    Arr[j]=Arr[j+1];
                    Arr[j+1]=temp;
                }
            }
        }
    }


int main()
{
    ArrayX<int> *obj =new ArrayX<int>(5);

    obj->accept();
    //bRet = obj->lSearch(70);
    obj->bubleSort();
    obj->display();
    
    return 0;
}