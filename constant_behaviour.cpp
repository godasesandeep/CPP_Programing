#include<iostream>

using namespace std;

class demo
{
    public:
        int x,y;
        demo()
        {
            x=10;
            y=20;
        }
        void fun()
        {
            cout<<"inside fun \n";
            x++;
            y++;
        }
        void gun() const //constant function
        {
            cout<<"Inside gun \n";
           // x++; //not allowed
           // y++; //not allowed
        }
        
        
};

int main()
{
    demo obj1;
    const demo obj2;

    obj1.fun(); //normal object normal function
    obj1.gun();// normal object constant function

    //obj2.fun();//constant object normal function -->//not allowed
    obj2.gun();//constant object constant function

    return 0;
}