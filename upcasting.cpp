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
    base bobj; //size 8
    derived dobj; //size 16

    base * bptr=NULL;
    derived *dptr=NULL;

    bptr = &bobj; //NoCasting
    dptr = &dobj;//NoCasting

    bptr = &dobj; //UpCasting
    dptr = &bobj; //DownCasting //Not Allowed

    return 0;
}