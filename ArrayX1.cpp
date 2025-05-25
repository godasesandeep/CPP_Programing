#include<iostream>

using namespace std;

class ArrayX
{
    private:

    float *Arr;
    int size;

    public:
    ArrayX(int no)
    {
        cout<<"Inside constructor "<<endl;
        size=no;
        Arr = new float[size];
    }

    ~ArrayX()
    {
        cout<<"Inside distructor "<<endl;
        delete []Arr;
    }

    void accept()
    {
        cout<<"enter the elements"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>Arr[i];
        }
    }

    void display()
    {
        cout<<"elements are"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }

    int averageX()
    {
        float sum=0;
        for(int i=0;i<size;i++)
        {
            sum=sum+Arr[i];
        }
        return ((float)sum/(float)size);
    }
};

int main()
{
    int len =0;
    cout<<"Enter the number of element :"<<endl;
    cin>>len;

    ArrayX *aobj = new ArrayX(len);
    aobj->accept();
    aobj->display();
    cout<<"Average of Array is :"<<aobj->averageX()<<endl;
}