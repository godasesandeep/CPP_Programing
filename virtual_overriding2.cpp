#include<iostream>

using namespace std;

class base
{
    public:
        int a,b;

        void fun() //1000
        { cout<<"Inside the base fun \n";}

        virtual void gun() //2000
        { cout<<"Inside the base gun \n";}

        void sun() //3000
        { cout<<"Inside the base sun \n";}

        virtual void mun() //4000
        {cout<<"Base class mun \n";}
};


class derived :public base
{
    public:
        int x,y;

        virtual void gun() //5000
        { cout<<"Inside the derived gun \n";}

        virtual void sun() //6000
        { cout<<"Inside the derived sun \n";}

        virtual void run() //7000
        { cout<<"Inside the derived run \n";}
};

int main()
{
    
    derived dobj; //size 16
    base *bptr =&dobj; //upCasting

    cout<<"Size of base class object is :"<<sizeof(base)<<endl;
    cout<<"Size of derived class object is :"<<sizeof(derived)<<endl;
    
    bptr->fun(); //fun of base
    bptr->gun(); //Derived gun
    bptr->sun(); //sun of base
    bptr->mun(); //Mun of base
    //bptr->run(); //Error -->go to the base class ask for run function but not available so error
   

    return 0;
}