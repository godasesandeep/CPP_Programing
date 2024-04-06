#include<iostream>

using namespace std;

class base
{
    public:
        int a,b;
        base()
        {
            cout<<"inside base constructor \n";
        }
        int addition(int i,int j)
        {
            return i+j;
        }
        virtual int substraction(int i, int j)
        {
            return i-j;
        }

        virtual int multiplication(int i, int j)=0;
};

class derived :public base
{
    public:
    int x,y;
    derived()
    {
        cout<<"Inside derived constructor \n";
    }
    int substraction(int i, int j)
    {
        return i-j;
    }

    int multiplication(int i,int j)
    {
        return i*j;
    }

    virtual int division(int i, int j)
    {
        return i/j;
    }

};

int main()
{
    derived dobj;
    base *bptr =&dobj;
    //base bobj; //not allowed
    cout<<bptr->addition(9,10)<<endl; //base
    cout<<bptr->substraction(9,10)<<endl; //derived
    cout<<bptr->multiplication(9,10)<<endl; //derived
    //cout<<bptr->division(100,10)<<endl; //error
    return 0;
}