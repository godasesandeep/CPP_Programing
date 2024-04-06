#include<iostream>

using namespace std;

const int a=10; //constant global variable
int b=20;

class demo
{
    public:
        int x,y;
        demo()
        {
            x=9;
            y=11;
        }
        void fun(int i, const int j) //constant input argument
        {
            int no1=11;
            const int no2 =21; //constant local variable
            i++;//A
            j++;//NA
            no1++;//A
            no2++; //NA
        }

};


int main()
{
    demo dobj1;
    demo dobj2;
    const demo obj2; //constant object
    obj1.fun(10,101);
    obj1.x++;//Allowed
    obj1.y++;//A
    obj2.x++;//NA
    obj2.y++;//NA

    return 0;
}