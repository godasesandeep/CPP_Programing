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

int main()
{
    Derived dobj;
    cout<<"Size of object :"<<sizeof(dobj)<<endl;
    cout<<dobj.a<<endl;
    cout<<dobj.b<<endl;
    cout<<dobj.x<<endl;
    cout<<dobj.y<<endl;
    dobj.fun();
    dobj.gun();
    return 0;
}

//fore types of inheritances
//1)Single level
//2)Multi level
//3)Multiple
//4)Hierarchal