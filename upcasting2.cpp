#include<iostream>

using namespace std;

class base
{
    public:
        int a,b;

        void fun()
        { cout<<"Inside the base fun \n";}

        void gun()
        { cout<<"Inside the base gun \n";}

        void sun()
        { cout<<"Inside the base sun \n";}
};


class derived :public base
{
    public:
        int x,y;

        void gun()
        { cout<<"Inside the derived gun \n";}

        void sun()
        { cout<<"Inside the derived sun \n";}

        void run()
        { cout<<"Inside the derived run \n";}
};

int main()
{
    
    derived dobj; //size 16
    base *bptr =&dobj; //upCasting

    bptr->fun(); //According to the pointer it goes to the Base class & call functions -->This is problem
    bptr->gun();
    bptr->sun();
    //bptr->run(); //error 

    return 0;
}