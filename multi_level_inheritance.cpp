#include<iostream>

using namespace std;

class Base
{
    public:
        int a,b;

        Base()
        {
            cout<<"Inside the base constructor \n";
            a=9;
            b=10;
        }

        ~Base()
        {
            cout<<"Inside base distructor";
        }
        void fun()
        {
            cout<<"Inside base fun \n";
        }

};

class Derived :public Base
{
    public:
        int x,y;
        Derived()
        {
            cout<<"Inside Derived constructor \n";
            x=51;
            y=101;
            a=21; //overwrite the parent characteristics
        }
        ~Derived()
        {
            cout<<"Inside Derived Distructor \n";
        }

        void gun()
        {
            cout<<"Inside Derived gun \n";
        }
};

class DerivedX :public Derived
{
    public:
        int p;

        DerivedX()
        {
            cout<<"Inside DerivedX"<<endl;
            p=111;
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Distructoe"<<endl;
        }

        void sun()
        {
            cout<<"Inside DerivedX sun"<<endl;
        }

};

int main()
{
    DerivedX dobj; //Constructor of Base -->Derived -->DerivedX called
    cout<<"Size of object :"<<sizeof(dobj)<<endl; //20
    cout<<dobj.a<<endl; //21
    cout<<dobj.b<<endl; //10
    cout<<dobj.x<<endl; //51
    cout<<dobj.y<<endl; //101
    cout<<dobj.p<<endl; //111
    dobj.fun(); //Base fun
    dobj.gun(); //Derived gun
    dobj.sun(); //DerivedX sun
    return 0;
}

//fore types of inheritances
//1)Single level
//2)Multi level
//3)Multiple
//4)Hierarchal